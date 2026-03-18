/*
 * XREFs of HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected @ 0x1C000F670
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C000E068 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 *     HUBMISC_StopPortTimer @ 0x1C002BD18 (HUBMISC_StopPortTimer.c)
 */

__int64 __fastcall HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected(__int64 a1)
{
  __int64 *v1; // rbx

  v1 = *(__int64 **)(a1 + 960);
  HUBMUX_CheckAndQueueIfResetHubIsEnabled(*v1);
  return HUBMISC_StopPortTimer(v1);
}
