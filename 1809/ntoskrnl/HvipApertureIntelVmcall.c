/*
 * XREFs of HvipApertureIntelVmcall @ 0x1401C7150
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1402FCAFC (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
