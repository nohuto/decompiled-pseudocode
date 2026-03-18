/*
 * XREFs of KiIsQosGroupingActive @ 0x1401BF2D4
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x140011C08 (KiCheckPreferredHeteroProcessor.c)
 *     KeClockInterruptNotify @ 0x1400348F0 (KeClockInterruptNotify.c)
 *     KiChooseTargetProcessor @ 0x1400691D0 (KiChooseTargetProcessor.c)
 *     KiSelectProcessorToPreempt @ 0x14013E860 (KiSelectProcessorToPreempt.c)
 *     KeUpdateQosGroupingSets @ 0x1401BF114 (KeUpdateQosGroupingSets.c)
 *     KiHeteroChooseTargetProcessor @ 0x1402AF2E8 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     <none>
 */

bool KiIsQosGroupingActive()
{
  char v0; // cl

  v0 = 0;
  if ( (KiVelocityFlags & 0x800) != 0 )
    return KeHeteroSystemQos != 0;
  return v0;
}
