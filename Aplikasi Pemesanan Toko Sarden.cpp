#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

void gotoxy(),login(),header(),menu(),hargajenis(),informasi(),selesai1(),selesai2(),salah();
int welcome(),opsi,pemesanan();

using namespace std;

void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

main()
{
    MessageBox(NULL,"SELAMAT DATANG DI PROGRAM KAMI","Aldebaran,s",MB_ICONINFORMATION | MB_OK);

    system("color b");
    welcome();
    login();
    while(4)
    {
        menu();
        switch(opsi)
        {
            case 1:
                hargajenis();
                break;

            case 2:
                informasi();
                break;

            case 3:
                pemesanan();
                break;

            case 4:
                selesai1();
                exit (0);
                break;

            default:
                salah();
                break;
        }
    }
}

void login()
{
    system("cls");
    header();
    string user, pass ;
    cout<<"Jika belum memiliki username dan password \nsilahkan isi username dan password dengan `admin`"<<endl<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
	cout<<"\t\t|                  SILAHKAN LOGIN                 |"<<endl;
	cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\tUsername       : ";cin>>user;
    cout<<"\t\tPassword       : ";cin>>pass;
    cout<<endl<<endl;
    if(user=="admin" && pass=="admin")
    {
        cout<<"---------------------------LOGIN BERHASIL, SELAMAT DATANG--------------------------";Sleep(2000);
        system("cls");
    }
    else
    {
        cout<<"-----------LOGIN GAGAL, SILAHKAN MASUKKAN USERNAME DAN PASS YANG SESUAI------------";
        getch();
        system("cls");
        login();
    }
}

int welcome()
{
    int n,j;
    for(n=0;n<67;n++)
    {
        cout<<"PLEASE WAIT...";
		gotoxy(50,12);cout<<"LOADING "<< n+33<<" %";
        gotoxy(25,13);cout<<"------------------------------------------------------------------";
        gotoxy(25,14);cout<<"";
        for(j=0;j<n;j++)
        {
            cout<<"=";
        }
        gotoxy(25,15);cout<<"------------------------------------------------------------------";
        system("cls");
    }
    gotoxy(30,10);cout<<"\t\t WELCOME TO ALDEBARAN'S PROGRAM";Sleep(555);
	gotoxy(30,13);cout<<"ALDEBARAN'S MEMBER :";Sleep(555);
	gotoxy(30,14);cout<<"-----------------------------------------------------";Sleep(555);
	gotoxy(30,15);cout<<"    MUHAMMAD LUTHFI ZULFA          1810631170086     ";Sleep(555);
	gotoxy(30,16);cout<<"    DANENDRA BIMA ADHI PRAMANA     1810631170247     ";Sleep(555);
	gotoxy(30,17);cout<<"-----------------------------------------------------";Sleep(555);
	gotoxy(30,18);cout<<"Tekan Enter Untuk Lanjut..";
	cin.get();
	return 0;
}

void header()
{
    gotoxy(0,0);cout<<"-----------------------------------------------------------------------------------";
    gotoxy(0,2);cout<<"                        SELAMAT DATANG DI PROGRAM PEMESANAN                        ";
    gotoxy(0,3);cout<<"                               TOKO SARDEN ALDEBARAN'S                             ";
    gotoxy(0,5);cout<<"-----------------------------------------------------------------------------------"<<endl<<endl;
}

void menu()
{
    system("cls");
    header();
    cout<<endl<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
	cout<<"\t\t|                    MENU UTAMA                   |"<<endl;
	cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|                                                 |"<<endl;
	cout<<"\t\t| 1. HARGA DAN JENIS PRODUK                       |"<<endl;
	cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|                                                 |"<<endl;
	cout<<"\t\t| 2. INFORMASI PRODUK                             |"<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|                                                 |"<<endl;
	cout<<"\t\t| 3. PEMESANAN                                    |"<<endl;
	cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|                                                 |"<<endl;
	cout<<"\t\t| 4. KELUAR                                       |"<<endl;
	cout<<"\t\t|-------------------------------------------------|"<<endl;
	cout<<"\t\tMasukan Pilihan Anda [1/2/3/4] : ";cin>>opsi;
	fflush(stdin);
}

void hargajenis()
{
    system("cls");
    header();
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|             JENIS DAN HARGA SARDEN              |"<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|     JENIS     |     UKURAN     |     HARGA      |"<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|               |     KECIL      |    Rp5000      |"<<endl;
    cout<<"\t\t| 1. QUUEN'S    |     SEDANG     |    Rp7000      |"<<endl;
    cout<<"\t\t|               |     BESAR      |    Rp10000     |"<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|               |     KECIL      |    Rp6000      |"<<endl;
    cout<<"\t\t| 2. ABG        |     SEDANG     |    Rp8000      |"<<endl;
    cout<<"\t\t|               |     BESAR      |    Rp11000     |"<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|               |     KECIL      |    Rp5500      |"<<endl;
    cout<<"\t\t| 3. VIESTA     |     SEDANG     |    Rp7500      |"<<endl;
    cout<<"\t\t|               |     BESAR      |    Rp10500     |"<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|               |     KECIL      |    Rp4500      |"<<endl;
    cout<<"\t\t| 4. BOTANI     |     SEDANG     |    Rp6500      |"<<endl;
    cout<<"\t\t|               |     BESAR      |    Rp9500      |"<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\tTekan Enter Untuk Kembali ke Menu..";
	cin.get();
}

int pemesanan()
{
    char nama[50],notlp[50],loket[50];
    char kj,ku,*uk,*jns;
    float hrg,jml,ttl,ukemb,ubyr,pjk,ttlbyr;

    {
        ulang:
        system("cls");
        header();
        cout<<"|---------------------------------------|  |---------------------------------------|"<<endl;
        cout<<"|              KODE JENIS               |  |             KODE UKURAN               |"<<endl;
        cout<<"|---------------------------------------|  |---------------------------------------|"<<endl;
        cout<<"|              A. QUEEN'S               |  |              1. KECIL                 |"<<endl;
        cout<<"|              B. ABG                   |  |              2. SEDANG                |"<<endl;
        cout<<"|              C. VIESTA                |  |              3. BESAR                 |"<<endl;
        cout<<"|              D. BOTANI                |  |---------------------------------------|"<<endl;
        cout<<"|---------------------------------------|  "<<endl;
        cout<<"Masukan Pilihan Jenis  [A/B/C/D]   : ";cin>>kj;
        cout<<"Masukan Pilihan Ukuran [1/2/3]   : ";cin>>ku;
        cout<<endl;
        switch (kj)

        {
        case'A':
        case'a':

            jns="QUEEN'S";
            if (ku=='1')
            {
                uk="KECIL";
                hrg=2100;
            }
            else if(ku=='2')
            {
                uk="SEDANG";
                hrg=4250;
            }
            else
            {
                uk="BESAR";
                hrg=10000;
            }
            break;

        case'B':
        case'b':

            jns="ABG";

            if (ku=='1')

            {
                 uk="kecil";
                 hrg=2025;
            }
            else if(ku=='2')
            {
                 uk="sedang";
                 hrg=4000;
            }
            else
            {
                 uk="besar";
                 hrg=8500;
            }
            break;

        case'C':
        case'c':

            jns="VIESTA";
            if (ku=='1')
            {
                uk="kecil";
                hrg=8300;
            }
            else if(ku=='2')
            {
                uk="sedang";
                hrg=14500;
            }
            else
            {
                uk="besar";
                hrg=17000;
            }
            break;

        case'D':
        case'd':

            jns="QUEEN'S";
            if (ku=='1')
            {
                uk="KECIL";
                hrg=2100;
            }
            else if(ku=='2')
            {
                uk="SEDANG";
                hrg=4250;
            }
            else
            {
                uk="BESAR";
                hrg=10000;
            }
            break;

        }

        system("cls");
        header();
        cout<<"Produk pesanan atas nama : ";cin>>nama;
        cout<<"No Telepon               : ";cin>>notlp;
        cout<<"Nomor Loket Pemesanan    : ";cin>>loket;
        cout<<"jenis produk             : "<<jns<<endl;
        cout<<"ukuran kemasan           : "<<uk<<endl;
        cout<<"Harga                    : Rp."<<hrg<<endl;
        cout<<"masukan Jumlah Beli      : ";cin>>jml;

        ttl=hrg*jml;

        cout<<"-----------------------------------------------------------------------------------"<<endl;
        cout<<"Total Bayar              : Rp."<<ttl<<endl;

        pjk=(ttl*10)/100;

        cout<<"Pajak 10%                : Rp."<<pjk<<endl;

        ttlbyr=ttl+pjk;

        cout<<"Total Bayar (ppn 10%)    : Rp."<<ttlbyr<<endl;
        cout<<"-----------------------------------------------------------------------------------"<<endl;
        cout<<"Uang Bayar               : Rp.";cin>>ubyr;

        ukemb=ubyr-ttlbyr;

        cout<<"uang kembali             : Rp."<<ukemb<<endl;
        cout<<"-----------------------------------TERIMA KASIH------------------------------------"<<endl;

        char lagi;
        menulagi :
        cout<<"Y = Ulangi Pemesanan \nT = Keluar Program \nX = Kembali ke Menu Utama"<<endl;
        cout<<"ingin masuk ke menu lagi (Y/T/X) ? ";cin>>lagi;
        if(lagi=='y' || lagi=='Y'){goto ulang;}
        else if(lagi=='X' || lagi=='x'){goto selesai2;}
        else if(lagi=='T' || lagi=='t'){goto selesai1;}
        else{cout<<"Silahkan inputkan Y/T/X\n";goto menulagi;}

        selesai1 :
        selesai1();
        exit (0);

        selesai2 :
        selesai2();
    }
}

void informasi()
{
    system("cls");
    header();
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|             JENIS DAN HARGA SARDEN              |"<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|     JENIS     |        INFORMASI PRODUK         |"<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|               | Produk sarden QUEENS memiliki   |"<<endl;
    cout<<"\t\t| 1. QUUEN'S    | saus paling oriental diantara   |"<<endl;
    cout<<"\t\t|               | produk yan lain                 |"<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|               | Produk sarden ABG memiliki rasa |"<<endl;
    cout<<"\t\t| 2. ABG        | ikan paling lembut diantara     |"<<endl;
    cout<<"\t\t|               | produk yang lain                |"<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|               | Produk sarden VIESTA memiliki   |"<<endl;
    cout<<"\t\t| 3. VIESTA     | isi paling banyak diantara      |"<<endl;
    cout<<"\t\t|               | produk yang lain                |"<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\t|               | Produk sarden BOTANI memiliki   |"<<endl;
    cout<<"\t\t| 4. BOTANI     | design kemasan paling bagus     |"<<endl;
    cout<<"\t\t|               | diantara produk yang lain       |"<<endl;
    cout<<"\t\t|-------------------------------------------------|"<<endl;
    cout<<"\t\tTekan Enter untuk Kembali ke Menu...";
	cin.get();
}

void selesai1()
{
	header();
	char x[]={"-------------TERIMA KASIH SUDAH BERBELANJA DI TOKO SARDEN ALDEBARAN'S--------------"};
		int a,b,i,n;
		n=strlen(x);
		for(i=0;i<n;i++)
		{	for(a=0;a<=99999;a++){
				for(b=0;b<=120;b++){
				}
			}
			gotoxy(0+i,26);cout<<x[i];
		}
	Sleep(1000);
	MessageBox(NULL,"TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI","Aldebaran,s",MB_ICONINFORMATION | MB_OK);
    cout<<"\n\n------------------------------Tekan Enter Untuk Keluar-----------------------------";
getch();
}

void selesai2()
{
	header();
	char x[]={"-------------TERIMA KASIH SUDAH BERBELANJA DI TOKO SARDEN ALDEBARAN'S--------------"};
		int a,b,i,n;
		n=strlen(x);
		for(i=0;i<n;i++)
		{	for(a=0;a<=99999;a++){
				for(b=0;b<=120;b++){
				}
			}
			gotoxy(0+i,26);cout<<x[i];
		}
	Sleep(1000);
    cout<<"\n\n------------------------------Tekan Enter Untuk Keluar-----------------------------";
getch();
}

void salah()
{
    cout<<"\n---------------------------KODE YANG ANDA MASUKKAN SALAH---------------------------"<<endl<<endl;
    cout<<"-------------------------Klik Enter untuk Memasukkan Ulang-------------------------";
getch();
}
