/*
 * XREFs of HvipApertureDirectHypercall @ 0x1402FC80C
 * Callers:
 *     HviCopyMemory @ 0x1402FC604 (HviCopyMemory.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x1401C6FD0 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x1401C6FE0 (HvipApertureAmdVmcall.c)
 */

void HvipApertureDirectHypercall()
{
  if ( byte_1404E14CC )
    HvipApertureIntelVmcall();
  else
    HvipApertureAmdVmcall();
}
