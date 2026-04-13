/*
 * XREFs of ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x180028240
 * Callers:
 *     ?PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@00PEAE@Z @ 0x18002C900 (-PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180012FD4 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180023D50 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x180027AF0 (-CoAllocString@@YAJPEBGPEAPEAG@Z.c)
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x180027C6C (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::LockScreenCreativeConfigHelpers::PeekLockScreenRegistryKeys(
        CreativeFramework::LockScreenCreativeConfigHelpers *this,
        unsigned __int16 **a2,
        unsigned __int16 **a3,
        unsigned __int16 **a4,
        unsigned __int16 **a5)
{
  HKEY v7; // rdi
  int CurrentUserSidString; // eax
  unsigned int v9; // esi
  void *v10; // rcx
  void *v11; // rbx
  int v12; // eax
  WCHAR *v13; // r14
  unsigned int v14; // eax
  unsigned int InfoKeyW; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  DWORD v18; // esi
  unsigned __int64 v19; // rax
  int v20; // eax
  WCHAR *v21; // r14
  LSTATUS ValueW; // eax
  __int64 v23; // rdx
  int v24; // eax
  unsigned __int64 v25; // r9
  LSTATUS v26; // eax
  int v27; // eax
  unsigned __int16 **v28; // r15
  LSTATUS v29; // eax
  int v30; // eax
  LSTATUS v31; // eax
  LPVOID pv; // [rsp+68h] [rbp-A0h] BYREF
  HKEY hKey; // [rsp+70h] [rbp-98h] BYREF
  DWORD cSubKeys[2]; // [rsp+78h] [rbp-90h] BYREF
  WCHAR *v36; // [rsp+80h] [rbp-88h] BYREF
  __int64 v37; // [rsp+88h] [rbp-80h]
  __int64 v38; // [rsp+90h] [rbp-78h]
  HKEY v39; // [rsp+98h] [rbp-70h]
  unsigned __int16 **v40; // [rsp+A0h] [rbp-68h]
  __int64 v41; // [rsp+A8h] [rbp-60h]
  WCHAR Name[264]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+310h] [rbp+208h]

  v41 = -2LL;
  v40 = a4;
  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *(_BYTE *)a5 = 0;
  v7 = 0LL;
  v39 = 0LL;
  pv = 0LL;
  CurrentUserSidString = CreativeFramework::LockScreenCreativeConfigHelpers::GetCurrentUserSidString(
                           (CreativeFramework::LockScreenCreativeConfigHelpers *)&pv,
                           a2);
  v9 = CurrentUserSidString;
  if ( CurrentUserSidString < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A1,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
      (const char *)(unsigned int)CurrentUserSidString);
    v10 = pv;
    if ( !pv )
      goto LABEL_28;
    goto LABEL_11;
  }
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v11 = pv;
  v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&v36,
          L"%s\\%s",
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
          pv);
  v9 = v12;
  if ( v12 >= 0 )
  {
    hKey = 0LL;
    v13 = v36;
    v14 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, v36, 0, 0x2001Fu, &hKey);
    if ( !v14 )
    {
      v7 = hKey;
      hKey = 0LL;
      v39 = v7;
      if ( v13 )
        CoTaskMemFree(v13);
      if ( v11 )
        CoTaskMemFree(v11);
      v9 = 0;
      goto LABEL_28;
    }
    v9 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x1A7,
           (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
           (const char *)v14);
    if ( hKey )
      RegCloseKey(hKey);
    if ( v13 )
      CoTaskMemFree(v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A5,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
      (const char *)(unsigned int)v12);
    if ( v36 )
      CoTaskMemFree(v36);
  }
  if ( v11 )
  {
    v10 = v11;
LABEL_11:
    CoTaskMemFree(v10);
  }
LABEL_28:
  if ( (v9 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B5,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
      (const char *)v9);
    goto LABEL_79;
  }
  InfoKeyW = RegQueryInfoKeyW(v7, 0LL, 0LL, 0LL, cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !InfoKeyW )
  {
    v17 = 0LL;
    v18 = 0;
    if ( !cSubKeys[0] )
    {
LABEL_78:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C9,
        (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
        (const char *)0x80070002LL);
      v9 = -2147024894;
      goto LABEL_79;
    }
    do
    {
      LODWORD(pv) = 256;
      InfoKeyW = RegEnumKeyExW(v7, v18, Name, (LPDWORD)&pv, 0LL, 0LL, 0LL, 0LL);
      if ( InfoKeyW )
      {
        v16 = 447LL;
        goto LABEL_77;
      }
      v19 = _wcstoui64(Name, 0LL, 10);
      if ( v19 > v17 )
        v17 = v19;
      ++v18;
    }
    while ( v18 < cSubKeys[0] );
    if ( !v17 )
      goto LABEL_78;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    v20 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)&v36,
            L"%llu",
            v17);
    v9 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CB,
        (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
        (const char *)(unsigned int)v20);
      v21 = v36;
      goto LABEL_74;
    }
    v21 = v36;
    if ( !a2 )
      goto LABEL_84;
    LODWORD(pv) = 522;
    ValueW = RegGetValueW(v7, v36, L"contentId", 0x20000002u, 0LL, Name, (LPDWORD)&pv);
    v9 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v9 = ValueW;
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147024894 )
    {
      v23 = 465LL;
LABEL_70:
      v25 = v9;
      goto LABEL_71;
    }
    v24 = CoAllocString((char *)Name, a2);
    v9 = v24;
    if ( v24 < 0 )
    {
      v25 = (unsigned int)v24;
      v23 = 466LL;
    }
    else
    {
LABEL_84:
      if ( !a3 )
        goto LABEL_56;
      LODWORD(pv) = 522;
      v26 = RegGetValueW(v7, v21, L"landscapeImage", 0x20000002u, 0LL, Name, (LPDWORD)&pv);
      v9 = (unsigned __int16)v26 | 0x80070000;
      if ( v26 <= 0 )
        v9 = v26;
      if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147024894 )
      {
        v23 = 473LL;
        goto LABEL_70;
      }
      v27 = CoAllocString((char *)Name, a3);
      v9 = v27;
      if ( v27 < 0 )
      {
        v25 = (unsigned int)v27;
        v23 = 474LL;
      }
      else
      {
LABEL_56:
        v28 = v40;
        if ( !v40 )
          goto LABEL_64;
        LODWORD(pv) = 522;
        v29 = RegGetValueW(v7, v21, L"portraitImage", 0x20000002u, 0LL, Name, (LPDWORD)&pv);
        v9 = (unsigned __int16)v29 | 0x80070000;
        if ( v29 <= 0 )
          v9 = v29;
        if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147024894 )
        {
          v23 = 481LL;
          goto LABEL_70;
        }
        v30 = CoAllocString((char *)Name, v28);
        v9 = v30;
        if ( v30 >= 0 )
        {
LABEL_64:
          if ( a5 )
          {
            LODWORD(pv) = 0;
            LODWORD(hKey) = 4;
            v31 = RegGetValueW(v7, v21, L"showImageOnSecureLock", 0x20000010u, 0LL, &pv, (LPDWORD)&hKey);
            v9 = (unsigned __int16)v31 | 0x80070000;
            if ( v31 <= 0 )
              v9 = v31;
            if ( ((v9 + 0x80000000) & 0x80000000) == 0 && v9 != -2147024894 )
            {
              v23 = 489LL;
              goto LABEL_70;
            }
            *(_BYTE *)a5 = (_DWORD)pv != 0;
          }
          v9 = 0;
LABEL_74:
          if ( v21 )
            CoTaskMemFree(v21);
          goto LABEL_79;
        }
        v25 = (unsigned int)v30;
        v23 = 482LL;
      }
    }
LABEL_71:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
      (const char *)v25);
    goto LABEL_74;
  }
  v16 = 441LL;
LABEL_77:
  v9 = wil::details::in1diag3::Return_Win32(
         retaddr,
         (void *)v16,
         (__int64)"internal\\onecoreuapshell\\inc\\lockscreencreativeconfighelpers.h",
         (const char *)InfoKeyW);
LABEL_79:
  if ( v7 )
    RegCloseKey(v7);
  return v9;
}
