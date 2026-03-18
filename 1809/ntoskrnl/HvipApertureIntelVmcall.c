/*
 * XREFs of HvipApertureIntelVmcall @ 0x1401C6FD0
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1402FC80C (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
