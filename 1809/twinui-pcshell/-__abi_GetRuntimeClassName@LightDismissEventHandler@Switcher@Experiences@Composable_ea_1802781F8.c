/*
 * XREFs of ?__abi_GetRuntimeClassName@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x1802781F8
 * Callers:
 *     ?__abi_GetRuntimeClassName@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800A50D0 (-__abi_GetRuntimeClassName@LightDismissEventHandler@Switcher@Experiences@ComposableShell@Windows.c)
 *     ?__abi_GetRuntimeClassName@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800A50E0 (-__abi_GetRuntimeClassName@LightDismissEventHandler@Switcher@Experiences@Composable_ea_1800A50E0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.LightDismissEventHandler",
           0x4Du,
           a2);
}
