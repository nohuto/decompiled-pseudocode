/*
 * XREFs of HvipApertureAmdVmcall @ 0x1401C6FE0
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1402FC80C (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
