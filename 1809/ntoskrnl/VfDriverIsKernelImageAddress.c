/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x140928128
 * Callers:
 *     VfPendingShouldForce @ 0x140933994 (VfPendingShouldForce.c)
 *     VfTargetDriversGetVerifierData @ 0x1409349E8 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x14093507C (ViTargetIncrementCounter.c)
 *     VfCheckUserHandle @ 0x14093901C (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  return ViDriverKernelBase && a1 >= ViDriverKernelBase && a1 < ViDriverKernelEnd;
}
