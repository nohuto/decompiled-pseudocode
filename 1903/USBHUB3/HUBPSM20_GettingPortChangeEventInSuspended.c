/*
 * XREFs of HUBPSM20_GettingPortChangeEventInSuspended @ 0x1C0010C40
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_Get20PortChangeEvent @ 0x1C00045C4 (HUBHTX_Get20PortChangeEvent.c)
 */

__int64 __fastcall HUBPSM20_GettingPortChangeEventInSuspended(__int64 a1)
{
  return HUBHTX_Get20PortChangeEvent(*(struct _MCGEN_TRACE_CONTEXT **)(a1 + 960));
}
