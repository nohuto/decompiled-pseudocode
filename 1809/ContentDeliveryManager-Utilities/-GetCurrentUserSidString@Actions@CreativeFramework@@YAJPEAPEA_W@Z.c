/*
 * XREFs of ?GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z @ 0x180093380
 * Callers:
 *     ??0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z @ 0x180093568 (--0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001B88 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180023AB0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180023C20 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::Actions::GetCurrentUserSidString(CreativeFramework::Actions *this, wchar_t **a2)
{
  unsigned int ValueW; // eax
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  char *v12; // rax
  DWORD pcbData; // [rsp+40h] [rbp-1D8h] BYREF
  HKEY hkey[2]; // [rsp+48h] [rbp-1D0h] BYREF
  WCHAR SubKey[12]; // [rsp+58h] [rbp-1C0h] BYREF
  unsigned __int16 pvData[192]; // [rsp+70h] [rbp-1A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+0h]

  hkey[1] = HKEY_DYN_DATA|0x7FFFFFF8LL;
  *(_QWORD *)this = 0LL;
  hkey[0] = 0LL;
  ValueW = RegOpenKeyExW(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\SessionData",
             0,
             9u,
             hkey);
  if ( ValueW )
  {
    v4 = 40LL;
LABEL_7:
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)v4,
           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
           (const char *)ValueW);
    goto LABEL_18;
  }
  v5 = StringCchPrintfW(SubKey, 8LL, L"%d", NtCurrentPeb()->SessionId);
  v6 = v5;
  if ( v5 >= 0 )
  {
    pcbData = 185;
    ValueW = RegGetValueW(hkey[0], SubKey, L"LoggedOnUserSID", 2u, 0LL, pvData, &pcbData);
    if ( ValueW )
    {
      v4 = 46LL;
      goto LABEL_7;
    }
    v9 = -1LL;
    v10 = -1LL;
    do
      ++v10;
    while ( pvData[v10] );
    *(_QWORD *)this = 0LL;
    if ( v10 + 1 >= v10 )
      v9 = v10 + 1;
    v6 = v10 + 1 < v10 ? 0x80070216 : 0;
    if ( v10 + 1 >= v10 )
    {
      *(_QWORD *)this = 0LL;
      if ( is_mul_ok(v9, 2uLL) )
      {
        v12 = (char *)CoTaskMemAlloc(2 * v9);
        *(_QWORD *)this = v12;
        if ( !v12 )
        {
          v6 = -2147024882;
LABEL_16:
          v7 = v6;
          v8 = 47LL;
          goto LABEL_17;
        }
        v6 = 0;
        StringCchCopyNExW(v12, v9, (char *)pvData, v10);
      }
      else
      {
        v6 = -2147024362;
      }
    }
    if ( (v6 & 0x80000000) == 0 )
      goto LABEL_18;
    goto LABEL_16;
  }
  v7 = (unsigned int)v5;
  v8 = 42LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
    (const char *)v7);
LABEL_18:
  if ( hkey[0] )
    RegCloseKey(hkey[0]);
  return v6;
}
