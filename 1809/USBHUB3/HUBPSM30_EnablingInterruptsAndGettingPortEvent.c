/*
 * XREFs of HUBPSM30_EnablingInterruptsAndGettingPortEvent @ 0x1C00106E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_Get30PortChangeEvent @ 0x1C0004C20 (HUBHTX_Get30PortChangeEvent.c)
 *     HUBMUX_ReEnableInterruptTransfer @ 0x1C000DDFC (HUBMUX_ReEnableInterruptTransfer.c)
 */

__int64 __fastcall HUBPSM30_EnablingInterruptsAndGettingPortEvent(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 v2; // rdx

  v1 = *(volatile signed __int32 **)(a1 + 960);
  HUBMUX_ReEnableInterruptTransfer(v1);
  return HUBHTX_Get30PortChangeEvent(v1, v2);
}
