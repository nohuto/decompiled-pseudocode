/*
 * XREFs of HvipApertureDirectHypercall @ 0x14031B4BC
 * Callers:
 *     HviEnterKernelAperture @ 0x14031B300 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x14031B35C (HviLeaveKernelAperture.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x1401CD5C0 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x1401CD5D0 (HvipApertureAmdVmcall.c)
 */

void HvipApertureDirectHypercall()
{
  if ( byte_14050EC6C )
    HvipApertureIntelVmcall();
  else
    HvipApertureAmdVmcall();
}
