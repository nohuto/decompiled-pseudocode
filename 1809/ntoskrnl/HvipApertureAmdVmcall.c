/*
 * XREFs of HvipApertureAmdVmcall @ 0x1401C7000
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1402FC90C (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
