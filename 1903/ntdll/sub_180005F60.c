/*
 * XREFs of sub_180005F60 @ 0x180005F60
 * Callers:
 *     RtlCleanUpTEBLangLists @ 0x180005DD0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x180008810 (RtlpMuiRegFreeRegistryInfo.c)
 *     sub_180008A20 @ 0x180008A20 (sub_180008A20.c)
 *     sub_18007C1B8 @ 0x18007C1B8 (sub_18007C1B8.c)
 *     sub_1800FEE2C @ 0x1800FEE2C (sub_1800FEE2C.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

LOGICAL __fastcall sub_180005F60(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( BaseAddress )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return result;
}
