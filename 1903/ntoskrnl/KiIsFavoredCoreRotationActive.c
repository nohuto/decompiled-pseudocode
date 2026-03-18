/*
 * XREFs of KiIsFavoredCoreRotationActive @ 0x1401BE7C0
 * Callers:
 *     KiHeteroChooseTargetProcessor @ 0x1402AF588 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     <none>
 */

bool KiIsFavoredCoreRotationActive()
{
  return (KiVelocityFlags & 0x1000) != 0 && (KiDynamicHeteroCpuPolicyMask & 0x10) != 0;
}
