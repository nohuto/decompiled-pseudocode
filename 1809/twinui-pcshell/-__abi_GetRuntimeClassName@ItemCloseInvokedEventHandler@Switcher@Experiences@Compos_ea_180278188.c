/*
 * XREFs of ?__abi_GetRuntimeClassName@ItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x180278188
 * Callers:
 *     ?__abi_GetRuntimeClassName@ItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800A5050 (-__abi_GetRuntimeClassName@ItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@Win.c)
 *     ?__abi_GetRuntimeClassName@ItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800A5060 (-__abi_GetRuntimeClassName@ItemCloseInvokedEventHandler@Switcher@Experiences@Compos_ea_1800A5060.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemCloseInvokedEventHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.ItemCloseInvokedEventHandler",
           0x51u,
           a2);
}
