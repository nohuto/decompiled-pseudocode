/*
 * XREFs of HvipApertureAmdVmcall @ 0x1401C7160
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1402FCAFC (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
