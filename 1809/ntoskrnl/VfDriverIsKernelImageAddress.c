/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x140929128
 * Callers:
 *     VfPendingShouldForce @ 0x140934994 (VfPendingShouldForce.c)
 *     VfTargetDriversGetVerifierData @ 0x1409359E8 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x14093607C (ViTargetIncrementCounter.c)
 *     VfCheckUserHandle @ 0x14093A01C (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  return ViDriverKernelBase && a1 >= ViDriverKernelBase && a1 < ViDriverKernelEnd;
}
