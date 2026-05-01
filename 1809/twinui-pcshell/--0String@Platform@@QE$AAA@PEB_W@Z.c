/*
 * XREFs of ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x18007F5C4
 * Callers:
 *     ?GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z @ 0x18007A610 (-GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z.c)
 *     ?ThrowPlatformException@details@wil@@YAXAEBUFailureInfo@2@PEB_W@Z @ 0x18007F540 (-ThrowPlatformException@details@wil@@YAXAEBUFailureInfo@2@PEB_W@Z.c)
 *     ?GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z @ 0x180289540 (-GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z.c)
 * Callees:
 *     WindowsCreateString_0 @ 0x1800856C1 (WindowsCreateString_0.c)
 *     wcslen_0 @ 0x1800885C9 (wcslen_0.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

HSTRING __fastcall Platform::String::String(HSTRING a1, const wchar_t *a2)
{
  UINT32 v3; // eax
  HRESULT v4; // eax
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = a1;
  if ( !a2 )
    return 0LL;
  string = 0LL;
  v3 = wcslen_0(a2);
  v4 = WindowsCreateString_0(a2, v3, &string);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  return string;
}
