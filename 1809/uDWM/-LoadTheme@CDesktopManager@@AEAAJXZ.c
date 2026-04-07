/*
 * XREFs of ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180045EA8
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18002CDC4 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180013998 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x18003E1C4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x18004551C (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z @ 0x180046338 (-EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18004C1BC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004C22C (_Init_thread_header.c)
 *     IsOpenThemeDataPresent @ 0x18004C598 (IsOpenThemeDataPresent.c)
 *     ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x18004D8B4 (-InitializeHighContrast@CDesktopManager@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0 @ 0x1800779B8 (McTemplateU0.c)
 */

__int64 __fastcall CDesktopManager::LoadTheme(CDesktopManager *this)
{
  HTHEME v3; // rax
  signed int LastError; // eax
  signed int v5; // ebx
  int v6; // r9d
  HTHEME v7; // rax
  signed int v8; // eax
  HTHEME v9; // rax
  signed int v10; // eax
  HTHEME v11; // rax
  signed int v12; // eax
  HTHEME v13; // rax
  signed int v14; // eax
  HRESULT CurrentThemeName; // eax
  HMODULE Library; // rax
  signed int v17; // eax
  const wchar_t *v18; // rax
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  HRESULT ThemeInt; // eax
  CContactManager *v22; // rcx
  unsigned int piVal; // [rsp+20h] [rbp-238h]
  WCHAR pszThemeFileName[264]; // [rsp+30h] [rbp-228h] BYREF

  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return 0LL;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmLoadTheme_Start);
  if ( dword_1800D7BD0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800D7BD0);
    if ( dword_1800D7BD0 == -1 )
    {
      dword_1800D5064 = -2147024864;
      Init_thread_footer(&dword_1800D7BD0);
    }
  }
  SetLastError(0);
  v3 = OpenThemeData(0LL, L"DWMWindow");
  *((_QWORD *)this + 76) = v3;
  if ( !v3 )
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    piVal = 697;
LABEL_10:
    if ( v5 >= 0 )
      v5 = -2003304445;
    goto LABEL_12;
  }
  SetLastError(0);
  v7 = OpenThemeData(0LL, L"DWMTouch");
  *((_QWORD *)this + 78) = v7;
  if ( !v7 )
  {
    v8 = GetLastError();
    v5 = v8;
    if ( v8 > 0 )
      v5 = (unsigned __int16)v8 | 0x80070000;
    piVal = 698;
    goto LABEL_10;
  }
  SetLastError(0);
  v9 = OpenThemeData(0LL, L"DWMPen");
  *((_QWORD *)this + 79) = v9;
  if ( !v9 )
  {
    v10 = GetLastError();
    v5 = v10;
    if ( v10 > 0 )
      v5 = (unsigned __int16)v10 | 0x80070000;
    piVal = 699;
    goto LABEL_10;
  }
  SetLastError(0);
  v11 = OpenThemeData(0LL, L"Animations");
  *((_QWORD *)this + 80) = v11;
  if ( !v11 )
  {
    v12 = GetLastError();
    v5 = v12;
    if ( v12 > 0 )
      v5 = (unsigned __int16)v12 | 0x80070000;
    piVal = 701;
    goto LABEL_10;
  }
  SetLastError(0);
  v13 = OpenThemeData(0LL, L"TimingFunction");
  *((_QWORD *)this + 81) = v13;
  if ( !v13 )
  {
    v14 = GetLastError();
    v5 = v14;
    if ( v14 > 0 )
      v5 = (unsigned __int16)v14 | 0x80070000;
    piVal = 702;
    goto LABEL_10;
  }
  CurrentThemeName = GetCurrentThemeName(pszThemeFileName, 260, 0LL, 0, 0LL, 0);
  v5 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    piVal = 705;
LABEL_33:
    v6 = CurrentThemeName;
    goto LABEL_13;
  }
  SetLastError(0);
  Library = LoadLibraryExW(pszThemeFileName, 0LL, 2u);
  *((_QWORD *)this + 77) = Library;
  if ( !Library )
  {
    v17 = GetLastError();
    v5 = v17;
    if ( v17 > 0 )
      v5 = (unsigned __int16)v17 | 0x80070000;
    piVal = 706;
    goto LABEL_10;
  }
  v18 = CharLowerW(pszThemeFileName);
  *((_BYTE *)this + 25) = wcsstr(v18, L"aero.msstyles") != 0LL;
  CDesktopManager::InitializeHighContrast(this);
  CurrentThemeName = CTopLevelWindow::EnsureImages(*((struct IDwmChannel **)this + 5));
  v5 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    piVal = 715;
    goto LABEL_33;
  }
  Theme = (void *)CDesktopManager::GetTheme(0);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 58,
                                 0x12u,
                                 0LL,
                                 (__int64)&CWindowIconic::s_rgpBitmapPendingImages);
  v5 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapsFromAtlasImageStrip, 0x32Au);
  if ( v5 < 0 )
  {
    piVal = 716;
LABEL_12:
    v6 = v5;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D5064, 1u, v6, piVal);
    goto LABEL_52;
  }
  ThemeInt = GetThemeInt(*((HTHEME *)this + 76), 0, 0, 2431, (int *)this + 124);
  v5 = ThemeInt;
  if ( ThemeInt >= 0 )
  {
    CurrentThemeName = GetThemeInt(*((HTHEME *)this + 76), 46, 1, 2431, (int *)this + 125);
    v5 = CurrentThemeName;
    if ( CurrentThemeName >= 0 )
    {
      CurrentThemeName = GetThemeInt(*((HTHEME *)this + 76), 46, 3, 2431, (int *)this + 126);
      v5 = CurrentThemeName;
      if ( CurrentThemeName >= 0 )
      {
        if ( GetSystemMetrics(95) > 0 )
          CContactManager::ForceAtlasInitialize(v22, 0xFFFFFFFFFFFFFFFFuLL);
        goto LABEL_52;
      }
      piVal = 721;
    }
    else
    {
      piVal = 720;
    }
    goto LABEL_33;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D5064, 1u, ThemeInt, 0x2CFu);
LABEL_52:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmLoadTheme_End);
  if ( v5 < 0 )
  {
    if ( *((_BYTE *)this + 24) )
    {
      v5 = -2003302654;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D5064, 1u, -2003302654, 0x2E0u);
    }
  }
  return (unsigned int)v5;
}
