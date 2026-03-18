/*
 * XREFs of ?AccessTimeOut@@YAXXZ @ 0x1C015DEB0
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C0185990 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C019E318 (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOut(void)
{
  if ( gtmridAccessTimeOut )
  {
    if ( (dword_1C02145E4 & 1) != 0 )
      gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(
                              gtmridAccessTimeOut,
                              dword_1C02145E8,
                              xxxAccessTimeOutTimer);
  }
}
