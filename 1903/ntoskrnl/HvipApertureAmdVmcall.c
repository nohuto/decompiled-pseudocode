/*
 * XREFs of HvipApertureAmdVmcall @ 0x1401CD5D0
 * Callers:
 *     HvipApertureDirectHypercall @ 0x14031B4BC (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
