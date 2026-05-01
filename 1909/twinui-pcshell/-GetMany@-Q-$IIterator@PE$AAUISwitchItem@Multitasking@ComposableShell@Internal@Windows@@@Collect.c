/*
 * XREFs of ?GetMany@?Q?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@2Platform@@UE$AAAIP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@7@@Z @ 0x1802E8B10
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_GetMany@?Q?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@2Platform@@UE$AAAJIPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@PEAI@Z @ 0x1802F31C0 (-__abi_Windows_Foundation_Collections_-$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell.c)
 * Callees:
 *     ??$VectorGetMany@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@YAIAEBV?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@IP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@@Z @ 0x1802DF7C4 (--$VectorGetMany@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Colle.c)
 *     ?ValidateCounter@Details@Collections@Platform@@YAXAEBV?$shared_ptr@I@std@@I@Z @ 0x1802EF6B8 (-ValidateCounter@Details@Collections@Platform@@YAXAEBV-$shared_ptr@I@std@@I@Z.c)
 */

__int64 __fastcall _GetMany__Q__IIterator_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____IteratorForVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Details_2Platform__UE_AAAIP_01E_AAV__WriteOnlyArray_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00_7__Z(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  Platform::Collections::Details::ValidateCounter(a1 + 48, *(unsigned int *)(a1 + 80));
  result = Platform::Collections::Details::VectorGetMany<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>(
             *(_QWORD **)(a1 + 64),
             *(_DWORD *)(a1 + 84),
             a2);
  *(_DWORD *)(a1 + 84) += result;
  return result;
}
