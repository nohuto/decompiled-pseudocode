/*
 * XREFs of __tailMerge_ext_ms_win_uiacore_l1_1_1_dll @ 0x18008B780
 * Callers:
 *     __imp_load_UiaRaiseAutomationEvent @ 0x18008B774 (__imp_load_UiaRaiseAutomationEvent.c)
 *     __imp_load_UiaClientsAreListening @ 0x18008BE35 (__imp_load_UiaClientsAreListening.c)
 *     __imp_load_UiaRaiseStructureChangedEvent @ 0x18008BE47 (__imp_load_UiaRaiseStructureChangedEvent.c)
 *     __imp_load_UiaRaiseAutomationPropertyChangedEvent @ 0x18008BE59 (__imp_load_UiaRaiseAutomationPropertyChangedEvent.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180085E40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_uiacore_l1_1_1_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_uiacore_l1_1_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
