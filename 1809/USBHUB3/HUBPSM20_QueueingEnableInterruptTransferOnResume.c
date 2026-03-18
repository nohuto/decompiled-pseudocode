/*
 * XREFs of HUBPSM20_QueueingEnableInterruptTransferOnResume @ 0x1C000F8D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReEnableInterruptTransfer @ 0x1C000DDFC (HUBMUX_ReEnableInterruptTransfer.c)
 */

__int64 __fastcall HUBPSM20_QueueingEnableInterruptTransferOnResume(__int64 a1)
{
  HUBMUX_ReEnableInterruptTransfer(*(volatile signed __int32 **)(a1 + 960));
  return 1000LL;
}
