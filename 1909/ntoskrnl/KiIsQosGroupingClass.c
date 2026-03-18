/*
 * XREFs of KiIsQosGroupingClass @ 0x1401BF2F8
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x140011C08 (KiCheckPreferredHeteroProcessor.c)
 *     KeClockInterruptNotify @ 0x1400348F0 (KeClockInterruptNotify.c)
 *     KiChooseTargetProcessor @ 0x1400691D0 (KiChooseTargetProcessor.c)
 *     KiSelectProcessorToPreempt @ 0x14013E860 (KiSelectProcessorToPreempt.c)
 *     KiHeteroChooseTargetProcessor @ 0x1402AF2E8 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsQosGroupingClass(int a1)
{
  return (unsigned int)(a1 - 1) <= 1;
}
