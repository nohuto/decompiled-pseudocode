/*
 * XREFs of ?AccessTimeOutReset@@YAXXZ @ 0x1C00619E0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C00604F0 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C019AAA0 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C019C068 (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOutReset(void)
{
  if ( gtmridAccessTimeOut )
    ApiSetEditionKillAccessibilityTimer();
  if ( (dword_1C02115E4 & 1) != 0 )
    gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(0LL, dword_1C02115E8, xxxAccessTimeOutTimer);
}
