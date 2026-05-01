/*
 * XREFs of ?GetMany@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAIIP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@6@@Z @ 0x1802C9670
 * Callers:
 *     ?GetMany@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@W7E$AAAIIP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@6@@Z @ 0x1800BB3E0 (-GetMany@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collectio.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_GetMany@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJIIPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@PEAI@Z @ 0x1802D415C (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItem@Multitasking@Comp_ea_1802D415C.c)
 * Callees:
 *     ?ValidateBounds@Details@Collections@Platform@@YAX_N@Z @ 0x1802D0144 (-ValidateBounds@Details@Collections@Platform@@YAX_N@Z.c)
 */

__int64 __fastcall _GetMany__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAIIP_01E_AAV__WriteOnlyArray_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00_6__Z(
        Platform::Collections::Details *a1,
        unsigned int a2,
        __int64 a3)
{
  Platform::Collections::Details *v3; // rbx

  v3 = a1;
  LOBYTE(a1) = a2 <= (unsigned __int64)((__int64)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 8LL) - **((_QWORD **)a1 + 12)) >> 5);
  Platform::Collections::Details::ValidateBounds(a1, a2);
  return Platform::Collections::Details::VectorGetMany<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>(
           *((_QWORD **)v3 + 12),
           a2,
           a3);
}
