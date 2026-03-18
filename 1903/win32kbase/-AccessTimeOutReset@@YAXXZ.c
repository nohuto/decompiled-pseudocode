/*
 * XREFs of ?AccessTimeOutReset@@YAXXZ @ 0x1C0075F10
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0074A20 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C019CD50 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C019E318 (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOutReset(void)
{
  if ( gtmridAccessTimeOut )
    ApiSetEditionKillAccessibilityTimer();
  if ( (dword_1C02145E4 & 1) != 0 )
    gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(0LL, dword_1C02145E8, xxxAccessTimeOutTimer);
}
