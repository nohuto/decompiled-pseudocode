/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x1409940B4
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140081CA0 (KeInitializeTimerEx.c)
 *     KeSetCoalescableTimer @ 0x1400B2900 (KeSetCoalescableTimer.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_1404F2AE0 )
  {
    KeInitializeTimerEx(&stru_1405093A0, NotificationTimer);
    KeInitializeDpc(&stru_140509320, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_1405093A0, 0LL, 0x1Eu, 0, &stru_140509320);
  }
  return result;
}
