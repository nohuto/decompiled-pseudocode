/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x140953F94
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14094F95C (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x140089FF0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A56F0 (KeInitializeDpc.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_1404C64E0 )
  {
    KeInitializeTimerEx(&stru_1404DBD50, NotificationTimer);
    KeInitializeDpc(&stru_1404DBCD0, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_1404DBD50, 0LL, 0x1Eu, 0, &stru_1404DBCD0);
  }
  return result;
}
