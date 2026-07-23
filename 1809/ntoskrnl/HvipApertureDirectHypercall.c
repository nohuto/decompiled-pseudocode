/*
 * XREFs of HvipApertureDirectHypercall @ 0x1402FCAFC
 * Callers:
 *     HviCopyMemory @ 0x1402FC8F4 (HviCopyMemory.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x1401C7150 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x1401C7160 (HvipApertureAmdVmcall.c)
 */

void HvipApertureDirectHypercall()
{
  if ( byte_1404E258C )
    HvipApertureIntelVmcall();
  else
    HvipApertureAmdVmcall();
}
