/*
 * XREFs of ?__abi_GetRuntimeClassName@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x1802D1C04
 * Callers:
 *     ?__abi_GetRuntimeClassName@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800BBEB0 (-__abi_GetRuntimeClassName@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@Wi.c)
 *     ?__abi_GetRuntimeClassName@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800BBEC0 (-__abi_GetRuntimeClassName@ItemContextMenuInvokedHandler@Switcher@Experiences@Compo_ea_1800BBEC0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.ItemContextMenuInvokedHandler",
           0x52u,
           a2);
}
