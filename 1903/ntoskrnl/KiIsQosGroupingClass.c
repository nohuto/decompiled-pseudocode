/*
 * XREFs of KiIsQosGroupingClass @ 0x1401BE808
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x1400119D8 (KiCheckPreferredHeteroProcessor.c)
 *     KeClockInterruptNotify @ 0x140034500 (KeClockInterruptNotify.c)
 *     KiChooseTargetProcessor @ 0x140068F60 (KiChooseTargetProcessor.c)
 *     KiSelectProcessorToPreempt @ 0x14013E1D0 (KiSelectProcessorToPreempt.c)
 *     KiHeteroChooseTargetProcessor @ 0x1402AF588 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsQosGroupingClass(int a1)
{
  return (unsigned int)(a1 - 1) <= 1;
}
