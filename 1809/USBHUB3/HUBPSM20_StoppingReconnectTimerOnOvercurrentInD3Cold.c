/*
 * XREFs of HUBPSM20_StoppingReconnectTimerOnOvercurrentInD3Cold @ 0x1C000F650
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_StopPortTimer @ 0x1C002BD18 (HUBMISC_StopPortTimer.c)
 */

__int64 __fastcall HUBPSM20_StoppingReconnectTimerOnOvercurrentInD3Cold(__int64 a1)
{
  return HUBMISC_StopPortTimer(*(_QWORD *)(a1 + 960));
}
