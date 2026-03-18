/*
 * XREFs of HvipApertureAmdVmcall @ 0x1401CE150
 * Callers:
 *     HvipApertureDirectHypercall @ 0x14031AF0C (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
