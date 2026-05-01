/*
 * XREFs of _anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases @ 0x18035DBF0
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x18035E1D8 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x180136BA4 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180181AF8 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
HSTRING *__fastcall anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases(HSTRING *this, UINT uID)
{
  HMODULE Library; // rbx
  const char *v5; // r9
  const char *v6; // r9
  unsigned __int64 v7; // rax
  HRESULT v8; // eax
  wchar_t Buffer[264]; // [rsp+40h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  Library = LoadLibraryExW(L"taskbarcpl.dll", 0LL, 0x820u);
  if ( !Library )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x4F,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      v5);
    __debugbreak();
  }
  memset_0(Buffer, 0, 0x208uLL);
  if ( LoadStringW(Library, uID, Buffer, 260) <= 0 )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x52,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      v6);
    __debugbreak();
  }
  *this = 0LL;
  v7 = -1LL;
  do
    ++v7;
  while ( Buffer[v7] );
  if ( v7 > 0xFFFFFFFF )
    v8 = -2147024362;
  else
    v8 = Microsoft::WRL::Wrappers::HString::Set(this, Buffer, v7);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      85LL,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v8);
  FreeLibrary(Library);
  return this;
}
