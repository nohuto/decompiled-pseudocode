/*
 * XREFs of ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x180300CC0
 * Callers:
 *     ?CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x180300EBC (-CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitas.c)
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x180301C0C (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchI.c)
 * Callees:
 *     ?CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAVString@Platform@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x180300D28 (-CreateAndAppendSwitcherContextMenuItem@XamlAllUpViewController@@AE$AAAXIPE$AAVString@Platform@@.c)
 *     ?GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z @ 0x180302120 (-GetResourceString@XamlAllUpViewController@@AE$AAAPE$AAVString@Platform@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
HRESULT __fastcall XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  HSTRING ResourceString; // rbx
  __int64 v6; // rcx

  ResourceString = (HSTRING)XamlAllUpViewController::GetResourceString(a1);
  XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem(v6, a2, ResourceString, a3, -2LL);
  return WindowsDeleteString_0(ResourceString);
}
