/*
 * XREFs of ?CheckWindowTextChanged@Win32BackedViewHostItem@@AEAA_NXZ @ 0x1801BD500
 * Callers:
 *     ?OnShellHookMessage@Win32BackedViewHostItem@@UEAAJ_K_J@Z @ 0x1801BF240 (-OnShellHookMessage@Win32BackedViewHostItem@@UEAAJ_K_J@Z.c)
 *     ?RuntimeClassInitialize@Win32BackedViewHostItem@@QEAAJPEAUIApplicationView@@PEAUHWND__@@PEAUIServiceProvider@@@Z @ 0x1801BFCC0 (-RuntimeClassInitialize@Win32BackedViewHostItem@@QEAAJPEAUIApplicationView@@PEAUHWND__@@PEAUISer.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18006C29C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x180198B48 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 */

char __fastcall Win32BackedViewHostItem::CheckWindowTextChanged(Win32BackedViewHostItem *this)
{
  __int64 v2; // r11
  char *v3; // rcx
  unsigned __int64 v4; // r11
  WCHAR String[256]; // [rsp+20h] [rbp-218h] BYREF

  memset_0(String, 0, sizeof(String));
  if ( GetWindowTextW(*((HWND *)this + 14), String, 256) <= 0 )
    return 0;
  v2 = -1LL;
  do
    ++v2;
  while ( String[v2] );
  v3 = (char *)this + 168;
  if ( *((_QWORD *)this + 24) >= 8uLL )
    v3 = (char *)*((_QWORD *)this + 21);
  if ( std::_Traits_equal<std::char_traits<unsigned short>>((__int64)v3, *((_QWORD *)this + 23), String, v2) )
    return 0;
  std::wstring::assign((char *)this + 168, String, v4);
  return 1;
}
