/*
 * XREFs of ?GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z @ 0x180289540
 * Callers:
 *     ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x1802880E4 (-CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU-$IVector@PE$AAUI.c)
 *     ?CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x1802882E0 (-CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitas.c)
 * Callees:
 *     ?__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z @ 0x18007A6C0 (-__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z.c)
 *     ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x18007F5C4 (--0String@Platform@@QE$AAA@PEB_W@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     WindowsDeleteString_0 @ 0x1800855EE (WindowsDeleteString_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlAllUpViewController::GetResourceString(__int64 a1, UINT a2)
{
  HSTRING v2; // rcx
  __int64 v3; // rdx
  HSTRING *v4; // r8
  __int64 v5; // rbx
  HSTRING v7; // [rsp+20h] [rbp-238h]
  WCHAR Buffer[264]; // [rsp+30h] [rbp-228h] BYREF

  LoadStringW(&_ImageBase, a2, Buffer, 260);
  v7 = Platform::String::String(v2, Buffer);
  v5 = __abi_winrt_ptrto_string_ctor((Platform::Details *)v7, v3, v4);
  WindowsDeleteString_0(v7);
  return v5;
}
