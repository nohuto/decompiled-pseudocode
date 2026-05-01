/*
 * XREFs of ?__abi_GetRuntimeClassName@TaskViewContainerNavigationEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x1802D1C90
 * Callers:
 *     ?__abi_GetRuntimeClassName@TaskViewContainerNavigationEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800BBF50 (-__abi_GetRuntimeClassName@TaskViewContainerNavigationEventHandler@Switcher@Experiences@Composab.c)
 *     ?__abi_GetRuntimeClassName@TaskViewContainerNavigationEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800BBF60 (-__abi_GetRuntimeClassName@TaskViewContainerNavigationEventHandler@Switcher@Experie_ea_1800BBF60.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewContainerNavigationEventHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.TaskViewContainerNavigationEventHandler",
           0x5Cu,
           a2);
}
