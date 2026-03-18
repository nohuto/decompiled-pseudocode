/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x140966648
 * Callers:
 *     VfPendingShouldForce @ 0x140972FD4 (VfPendingShouldForce.c)
 *     VfTargetDriversGetVerifierData @ 0x140973FBC (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x14097467C (ViTargetIncrementCounter.c)
 *     VfCheckUserHandle @ 0x140977664 (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  return ViDriverKernelBase && a1 >= ViDriverKernelBase && a1 < ViDriverKernelEnd;
}
