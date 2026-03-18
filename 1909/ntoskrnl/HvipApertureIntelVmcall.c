/*
 * XREFs of HvipApertureIntelVmcall @ 0x1401CE140
 * Callers:
 *     HvipApertureDirectHypercall @ 0x14031AF0C (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
