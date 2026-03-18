/*
 * XREFs of KiIsQosGroupingActive @ 0x1401BE7E4
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x1400119D8 (KiCheckPreferredHeteroProcessor.c)
 *     KeClockInterruptNotify @ 0x140034500 (KeClockInterruptNotify.c)
 *     KiChooseTargetProcessor @ 0x140068F60 (KiChooseTargetProcessor.c)
 *     KiSelectProcessorToPreempt @ 0x14013E1D0 (KiSelectProcessorToPreempt.c)
 *     KeUpdateQosGroupingSets @ 0x1401BE624 (KeUpdateQosGroupingSets.c)
 *     KiHeteroChooseTargetProcessor @ 0x1402AF588 (KiHeteroChooseTargetProcessor.c)
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
