/*
 * XREFs of ?GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z @ 0x18019DF64
 * Callers:
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x18019AC90 (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x1803A1720 (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PenWorkspace::Discover::GetApplicationUserModelIdFromLinkFile(
        CallerIdentity *string,
        HSTRING *a2,
        HSTRING *a3)
{
  signed int IsShellExperience; // ebx
  __int64 v6; // rdx
  const WCHAR *StringRawBuffer; // rax
  HRESULT v8; // eax
  HRESULT v9; // eax
  LPVOID v10; // rbx
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  HRESULT v15; // eax
  LPVOID v17; // [rsp+38h] [rbp-D0h] BYREF
  void *ppv; // [rsp+40h] [rbp-C8h] BYREF
  PCNZWCH sourceString; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h]
  __int64 v21; // [rsp+58h] [rbp-B0h]
  __int64 v22; // [rsp+60h] [rbp-A8h]
  WCHAR Dst[264]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A0h] [rbp+198h]

  v22 = -2LL;
  *a2 = 0LL;
  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience(string);
  if ( IsShellExperience < 0 )
  {
    v6 = 16LL;
    goto LABEL_3;
  }
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)string, 0LL);
  if ( ExpandEnvironmentStringsW(StringRawBuffer, Dst, 0x104u) )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    v8 = SHCreateItemFromParsingName(Dst, 0LL, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv);
    IsShellExperience = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\utilities.cpp",
        (const char *)(unsigned int)v8);
LABEL_22:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      return (unsigned int)IsShellExperience;
    }
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    v9 = CoCreateInstance(
           &GUID_660b90c8_73a9_4b58_8cae_355b7f55341b,
           0LL,
           3u,
           &GUID_21cbc515_2dde_4d66_8292_ba34bd25094a,
           &v17);
    IsShellExperience = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\utilities.cpp",
        (const char *)(unsigned int)v9);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      goto LABEL_22;
    }
    sourceString = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v10 = v17;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
    v11 = -1LL;
    v20 = -1LL;
    v21 = -1LL;
    v12 = (*(__int64 (__fastcall **)(LPVOID, void *, PCNZWCH *))(*(_QWORD *)v10 + 120LL))(v10, ppv, &sourceString);
    IsShellExperience = v12;
    if ( v12 >= 0 )
    {
      if ( sourceString && *sourceString )
      {
        do
          ++v11;
        while ( sourceString[v11] );
        v15 = WindowsCreateString(sourceString, v11, a2);
        IsShellExperience = v15;
        if ( v15 >= 0 )
          goto LABEL_20;
        v13 = (unsigned int)v15;
        v14 = 34LL;
      }
      else
      {
        IsShellExperience = -2147024894;
        v13 = 2147942402LL;
        v14 = 41LL;
      }
    }
    else
    {
      v13 = (unsigned int)v12;
      v14 = 29LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\utilities.cpp",
      (const char *)v13);
LABEL_20:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
    goto LABEL_21;
  }
  IsShellExperience = ResultFromKnownLastError();
  if ( IsShellExperience >= 0 )
    return (unsigned int)IsShellExperience;
  v6 = 19LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\utilities.cpp",
    (const char *)(unsigned int)IsShellExperience);
  return (unsigned int)IsShellExperience;
}
