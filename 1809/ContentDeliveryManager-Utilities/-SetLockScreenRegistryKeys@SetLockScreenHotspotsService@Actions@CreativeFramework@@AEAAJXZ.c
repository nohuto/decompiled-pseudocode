/*
 * XREFs of ?SetLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x180093958
 * Callers:
 *     ?Invoke@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800937C0 (-Invoke@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Stage@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800938A0 (-Stage@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001B88 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180023C20 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

__int64 __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenRegistryKeys(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this)
{
  unsigned __int64 v2; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  HKEY phkResult; // [rsp+58h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-A8h] BYREF
  __int64 Data; // [rsp+68h] [rbp-A0h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+70h] [rbp-98h] BYREF
  WCHAR SubKey[264]; // [rsp+78h] [rbp-90h] BYREF
  WCHAR Buffer[264]; // [rsp+288h] [rbp+180h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4B0h] [rbp+3A8h]

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v2 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  v3 = StringCchPrintfW(
         SubKey,
         260LL,
         L"%s\\%s",
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
         *((_QWORD *)this + 2));
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  hKey = 0LL;
  v5 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL);
  if ( v5 )
  {
    v4 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x6B,
           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
           (const char *)v5);
    goto LABEL_32;
  }
  v6 = StringCchPrintfW(Buffer, 260LL, L"%llu", v2);
  v4 = v6;
  if ( v6 >= 0 )
  {
    phkResult = 0LL;
    v7 = RegCreateKeyExW(hKey, Buffer, 0, 0LL, 0, 0xF003Fu, 0LL, &phkResult, 0LL);
    if ( v7 )
    {
      v8 = 112LL;
    }
    else
    {
      v9 = (_QWORD *)((char *)this + 24);
      if ( *((_QWORD *)this + 6) >= 8uLL )
        v9 = (_QWORD *)*v9;
      v7 = RegSetKeyValueW(phkResult, 0LL, L"contentId", 1u, v9, 2 * *((_QWORD *)this + 5));
      if ( v7 )
      {
        v8 = 114LL;
      }
      else
      {
        v10 = *((_QWORD *)this + 9);
        if ( !v10 )
          goto LABEL_18;
        v11 = (_QWORD *)((char *)this + 56);
        if ( *((_QWORD *)this + 10) >= 8uLL )
          v11 = (_QWORD *)*v11;
        v7 = RegSetKeyValueW(phkResult, 0LL, L"landscapeImage", 1u, v11, 2 * v10);
        if ( v7 )
        {
          v8 = 117LL;
        }
        else
        {
LABEL_18:
          v12 = *((_QWORD *)this + 13);
          if ( !v12 )
            goto LABEL_37;
          v13 = (_QWORD *)((char *)this + 88);
          if ( *((_QWORD *)this + 14) >= 8uLL )
            v13 = (_QWORD *)*v13;
          v7 = RegSetKeyValueW(phkResult, 0LL, L"portraitImage", 1u, v13, 2 * v12);
          if ( v7 )
          {
            v8 = 121LL;
          }
          else
          {
LABEL_37:
            if ( *((_DWORD *)this + 30)
              && (v7 = RegSetKeyValueW(phkResult, 0LL, L"showImageOnSecureLock", 4u, (char *)this + 120, 4u)) != 0 )
            {
              v8 = 126LL;
            }
            else
            {
              LODWORD(Data) = 1;
              v7 = RegSetKeyValueW(hKey, 0LL, L"LockImageFlags", 4u, &Data, 4u);
              if ( !v7 )
              {
                *((_BYTE *)this + 124) = 1;
                v4 = 0;
LABEL_30:
                if ( phkResult )
                  RegCloseKey(phkResult);
                goto LABEL_32;
              }
              v8 = 131LL;
            }
          }
        }
      }
    }
    v4 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)v8,
           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
           (const char *)v7);
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6D,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
    (const char *)(unsigned int)v6);
LABEL_32:
  if ( hKey )
    RegCloseKey(hKey);
  return v4;
}
