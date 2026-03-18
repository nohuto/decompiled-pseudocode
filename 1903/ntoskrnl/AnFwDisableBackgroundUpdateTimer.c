/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x140990474
 * Callers:
 *     ResFwFreeContext @ 0x14098E218 (ResFwFreeContext.c)
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 *     BgpFwLibraryDisable @ 0x140990F84 (BgpFwLibraryDisable.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140991714 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140994110 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_140509FE9 )
  {
    result = KeCancelTimer(&stru_14050E2F0);
    byte_140509FE9 = 0;
  }
  return result;
}
