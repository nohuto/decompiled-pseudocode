/*
 * XREFs of HvipApertureDirectHypercall @ 0x1402FC90C
 * Callers:
 *     HviCopyMemory @ 0x1402FC704 (HviCopyMemory.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x1401C6FF0 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x1401C7000 (HvipApertureAmdVmcall.c)
 */

void HvipApertureDirectHypercall()
{
  if ( byte_1404E148C )
    HvipApertureIntelVmcall();
  else
    HvipApertureAmdVmcall();
}
