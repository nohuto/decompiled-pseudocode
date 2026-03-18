/*
 * XREFs of ?AccessTimeOut@@YAXXZ @ 0x1C015BCB0
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01837A0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C019C068 (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOut(void)
{
  if ( gtmridAccessTimeOut )
  {
    if ( (dword_1C02115E4 & 1) != 0 )
      gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(
                              gtmridAccessTimeOut,
                              dword_1C02115E8,
                              xxxAccessTimeOutTimer);
  }
}
