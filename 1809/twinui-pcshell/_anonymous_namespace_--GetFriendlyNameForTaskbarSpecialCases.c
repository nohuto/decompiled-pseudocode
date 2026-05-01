/*
 * XREFs of _anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases @ 0x1802DD294
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1802DD868 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180077240 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x1800F2908 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 */

// Hidden C++ exception states: #wind=2
HSTRING *__fastcall anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases(HSTRING *this, UINT uID)
{
  HMODULE Library; // rbx
  const char *v5; // r9
  const char *v6; // r9
  unsigned __int64 v7; // rax
  UINT32 v8; // r8d
  unsigned __int64 v9; // r9
  wchar_t Buffer[264]; // [rsp+40h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  Library = LoadLibraryExW(L"taskbarcpl.dll", 0LL, 0x820u);
  if ( !Library )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x4A,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      v5);
    __debugbreak();
  }
  memset_0(Buffer, 0, 0x208uLL);
  if ( LoadStringW(Library, uID, Buffer, 260) <= 0 )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x4D,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      v6);
    __debugbreak();
  }
  *this = 0LL;
  v7 = -1LL;
  do
    ++v7;
  while ( Buffer[v7] );
  v8 = -1;
  if ( v7 <= 0xFFFFFFFF )
    v8 = v7;
  v9 = v7 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v7 <= 0xFFFFFFFF )
    v9 = (unsigned int)Microsoft::WRL::Wrappers::HString::Set(this, Buffer, v8);
  if ( (v9 & 0x80000000) != 0LL )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      80LL,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)v9);
  FreeLibrary(Library);
  return this;
}
