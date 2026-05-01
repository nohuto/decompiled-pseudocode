/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopRegistryHelpers@@QEAAJXZ @ 0x180407708
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRegistryHelpers@@@Z @ 0x180406E28 (--$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVir.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18017CFEC (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

__int64 __fastcall VirtualDesktopRegistryHelpers::RuntimeClassInitialize(VirtualDesktopRegistryHelpers *this)
{
  HKEY *phkResult; // rdi
  HKEY v3; // rsi
  DWORD LastError; // ebx
  unsigned int Key; // eax
  int v6; // eax
  HKEY *v7; // rdi
  HKEY v8; // rsi
  DWORD v9; // ebx
  HKEY v10; // rcx
  unsigned int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  phkResult = (HKEY *)((char *)this + 24);
  v3 = (HKEY)*((_QWORD *)this + 3);
  if ( v3 )
  {
    LastError = GetLastError();
    RegCloseKey(v3);
    SetLastError(LastError);
  }
  *phkResult = 0LL;
  Key = RegCreateKeyExW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VirtualDesktops",
          0,
          0LL,
          0,
          3u,
          0LL,
          phkResult,
          0LL);
  if ( Key )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      181LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)Key);
  hKey = 0LL;
  v6 = SHCreateSessionKey(4LL, &hKey);
  if ( v6 >= 0 )
  {
    v7 = (HKEY *)((char *)this + 16);
    v8 = (HKEY)*((_QWORD *)this + 2);
    if ( v8 )
    {
      v9 = GetLastError();
      RegCloseKey(v8);
      SetLastError(v9);
    }
    v10 = hKey;
    *v7 = 0LL;
    v11 = RegCreateKeyExW(v10, L"VirtualDesktops", 0, 0LL, 1u, 3u, 0LL, v7, 0LL);
    if ( v11 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        186LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
        (const char *)v11);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB8,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)(unsigned int)v6);
  }
  if ( hKey )
    RegCloseKey(hKey);
  return 0LL;
}
