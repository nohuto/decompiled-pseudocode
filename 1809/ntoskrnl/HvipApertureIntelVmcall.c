/*
 * XREFs of HvipApertureIntelVmcall @ 0x1401C6FF0
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1402FC90C (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
