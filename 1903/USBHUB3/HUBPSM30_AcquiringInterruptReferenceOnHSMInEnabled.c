/*
 * XREFs of HUBPSM30_AcquiringInterruptReferenceOnHSMInEnabled @ 0x1C000FBC0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_AcquireInterruptReference @ 0x1C000F0B8 (HUBMUX_AcquireInterruptReference.c)
 */

__int64 __fastcall HUBPSM30_AcquiringInterruptReferenceOnHSMInEnabled(__int64 a1)
{
  return HUBMUX_AcquireInterruptReference(*(volatile signed __int32 **)(a1 + 960));
}
