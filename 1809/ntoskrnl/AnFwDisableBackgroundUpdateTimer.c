/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x140950424
 * Callers:
 *     ResFwFreeContext @ 0x14094E218 (ResFwFreeContext.c)
 *     AnFwDisplayFade @ 0x14094EBA8 (AnFwDisplayFade.c)
 *     BgpFwLibraryDisable @ 0x140950F24 (BgpFwLibraryDisable.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409516AC (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140953FF0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_1404DC871 )
  {
    result = KeCancelTimer(&stru_1404E0B40);
    byte_1404DC871 = 0;
  }
  return result;
}
