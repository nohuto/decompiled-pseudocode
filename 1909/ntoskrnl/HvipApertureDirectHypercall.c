/*
 * XREFs of HvipApertureDirectHypercall @ 0x14031AF0C
 * Callers:
 *     HviEnterKernelAperture @ 0x14031AD50 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x14031ADAC (HviLeaveKernelAperture.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x1401CE140 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x1401CE150 (HvipApertureAmdVmcall.c)
 */

void HvipApertureDirectHypercall()
{
  if ( byte_14050E9AC )
    HvipApertureIntelVmcall();
  else
    HvipApertureAmdVmcall();
}
