/*
 * XREFs of HvipApertureIntelVmcall @ 0x1401CD5C0
 * Callers:
 *     HvipApertureDirectHypercall @ 0x14031B4BC (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
