/*
 * XREFs of ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x1801CAA7C
 * Callers:
 *     _lambda_3debc4ca9d8e656fb3713c45e37949b6_::operator() @ 0x1801C7BDC (_lambda_3debc4ca9d8e656fb3713c45e37949b6_--operator().c)
 *     _lambda_ebd42d67d4ed24c24d65003e6952ebf6_::operator() @ 0x1801C7DAC (_lambda_ebd42d67d4ed24c24d65003e6952ebf6_--operator().c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800F9A44 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x180108EF8 (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18010FD58 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x1801CC8B4 (-s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::LaunchPeoplePaneForContactWithArgs(
        PeoplePaneViewManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  HRESULT v8; // eax
  __int64 v9; // rdx
  HWND WindowW; // rax
  const char *v11; // r9
  LPVOID v12; // rbx
  __int64 v13; // rdi
  const unsigned __int16 *AppId; // rdx
  _QWORD v16[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  PeoplePaneViewManager *v18; // [rsp+70h] [rbp+20h] BYREF
  LPVOID ppv; // [rsp+88h] [rbp+38h] BYREF

  v18 = this;
  memset(v16, 0, sizeof(v16));
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
         v16,
         (char *)L"Windows.Internal.ShellExperience.PeoplePane",
         0x2BuLL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
           v16,
           (char *)L" ",
           1uLL);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 246LL;
      goto LABEL_12;
    }
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
           (__int64)v16,
           (__int64)a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 247LL;
      goto LABEL_12;
    }
    if ( a3 )
    {
      v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
             v16,
             (char *)L" ",
             1uLL);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 251LL;
        goto LABEL_12;
      }
      v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
             (__int64)v16,
             (__int64)a3);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 252LL;
        goto LABEL_12;
      }
    }
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    v8 = CoCreateInstance(&CLSID_ApplicationActivationClient, 0LL, 1u, &GUID_2e941141_7f97_4756_ba1d_9decde894a3d, &ppv);
    v6 = v8;
    if ( v8 >= 0 )
    {
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      if ( !SetForegroundWindow(WindowW) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x106,
          (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          v11);
      v12 = ppv;
      v13 = *(_QWORD *)ppv;
      AppId = PeoplePaneViewManager::s_GetAppId();
      v8 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, _QWORD, _QWORD, PeoplePaneViewManager **))(v13 + 24))(
             v12,
             AppId,
             v16[0],
             0LL,
             &v18);
      v6 = v8;
      if ( v8 >= 0 )
      {
        v6 = 0;
        goto LABEL_21;
      }
      v9 = 269LL;
    }
    else
    {
      v9 = 260LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_21:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    goto LABEL_22;
  }
  v7 = 245LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_22:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v16);
  return v6;
}
