/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x1409940B4
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x1400820A0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400E29F0 (KeSetCoalescableTimer.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_1404F2820 )
  {
    KeInitializeTimerEx(&stru_1405090E0, NotificationTimer);
    KeInitializeDpc(&stru_140509060, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_1405090E0, 0LL, 0x1Eu, 0, &stru_140509060);
  }
  return result;
}
