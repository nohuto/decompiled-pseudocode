/*
 * XREFs of ?__abi_GetRuntimeClassName@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x1802D1AD0
 * Callers:
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800BBC50 (-__abi_GetRuntimeClassName@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItem@Multitas.c)
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800BBC60 (-__abi_GetRuntimeClassName@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitch_ea_1800BBC60.c)
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@WBI@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800BBC70 (-__abi_GetRuntimeClassName@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitch_ea_1800BBC70.c)
 *     ?__abi_GetRuntimeClassName@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@2@WCI@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800BBC80 (-__abi_GetRuntimeClassName@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitch_ea_1800BBC80.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ___abi_GetRuntimeClassName__QObject_Platform____IteratorForVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Details_Collections_2_UE_AAAJPEAPEAUHSTRING_____Z(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"Windows.Foundation.Collections.IIterator`1<Windows.Internal.ComposableShell.Multitasking.ISwitchItem>",
           0x65u,
           a2);
}
