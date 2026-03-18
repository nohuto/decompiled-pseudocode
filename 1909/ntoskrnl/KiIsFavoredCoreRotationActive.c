/*
 * XREFs of KiIsFavoredCoreRotationActive @ 0x1401BF2B0
 * Callers:
 *     KiHeteroChooseTargetProcessor @ 0x1402AF2E8 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     <none>
 */

bool KiIsFavoredCoreRotationActive()
{
  return (KiVelocityFlags & 0x1000) != 0 && (KiDynamicHeteroCpuPolicyMask & 0x10) != 0;
}
