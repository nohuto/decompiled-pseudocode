/*
 * XREFs of ?__abi_GetRuntimeClassName@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x1802F1080
 * Callers:
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800DE7E0 (-__abi_GetRuntimeClassName@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShel.c)
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800DE7F0 (-__abi_GetRuntimeClassName@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@C_ea_1800DE7F0.c)
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WBI@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800DE800 (-__abi_GetRuntimeClassName@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@C_ea_1800DE800.c)
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WCI@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800DE810 (-__abi_GetRuntimeClassName@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@C_ea_1800DE810.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ___abi_GetRuntimeClassName__QObject_Platform__SwitchItemDataViewImpl_Multitasking_ComposableShell_Internal_Windows__UE_AAAJPEAPEAUHSTRING_____Z(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"Windows.Internal.ComposableShell.Multitasking.SwitchItemDataViewImpl",
           0x44u,
           a2);
}
