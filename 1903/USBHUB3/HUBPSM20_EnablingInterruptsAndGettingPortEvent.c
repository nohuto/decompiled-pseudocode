/*
 * XREFs of HUBPSM20_EnablingInterruptsAndGettingPortEvent @ 0x1C00109B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_Get20PortChangeEvent @ 0x1C00045C4 (HUBHTX_Get20PortChangeEvent.c)
 *     HUBMUX_ReEnableInterruptTransfer @ 0x1C000EED8 (HUBMUX_ReEnableInterruptTransfer.c)
 */

__int64 __fastcall HUBPSM20_EnablingInterruptsAndGettingPortEvent(__int64 a1)
{
  struct _MCGEN_TRACE_CONTEXT *v1; // rbx
  unsigned int v2; // edi

  v1 = *(struct _MCGEN_TRACE_CONTEXT **)(a1 + 960);
  v2 = HUBHTX_Get20PortChangeEvent(v1);
  HUBMUX_ReEnableInterruptTransfer((volatile signed __int32 *)v1);
  return v2;
}
