/*
 * XREFs of HUBPSM20_IssuingHubResetFromDisconnected @ 0x1C000F090
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C000E068 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 */

__int64 __fastcall HUBPSM20_IssuingHubResetFromDisconnected(__int64 a1)
{
  HUBMUX_CheckAndQueueIfResetHubIsEnabled(**(_QWORD **)(a1 + 960));
  return 1000LL;
}
