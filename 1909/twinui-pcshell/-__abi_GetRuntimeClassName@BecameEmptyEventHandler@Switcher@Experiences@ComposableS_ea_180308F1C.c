/*
 * XREFs of ?__abi_GetRuntimeClassName@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x180308F1C
 * Callers:
 *     ?__abi_GetRuntimeClassName@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800E0420 (-__abi_GetRuntimeClassName@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsI.c)
 *     ?__abi_GetRuntimeClassName@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800E0430 (-__abi_GetRuntimeClassName@BecameEmptyEventHandler@Switcher@Experiences@ComposableS_ea_1800E0430.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.BecameEmptyEventHandler",
           0x4Cu,
           a2);
}
