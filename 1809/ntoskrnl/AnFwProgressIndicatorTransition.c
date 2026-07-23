/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x140954F94
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14095095C (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x140089FE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_1404C75A0 )
  {
    KeInitializeTimerEx(&stru_1404DCE10, NotificationTimer);
    KeInitializeDpc(&stru_1404DCD90, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_1404DCE10, 0LL, 0x1Eu, 0, &stru_1404DCD90);
  }
  return result;
}
