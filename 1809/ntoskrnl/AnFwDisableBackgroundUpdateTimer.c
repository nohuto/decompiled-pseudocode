/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x140951424
 * Callers:
 *     ResFwFreeContext @ 0x14094F218 (ResFwFreeContext.c)
 *     AnFwDisplayFade @ 0x14094FBA8 (AnFwDisplayFade.c)
 *     BgpFwLibraryDisable @ 0x140951F24 (BgpFwLibraryDisable.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409526AC (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140954FF0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_1404DD941 )
  {
    result = KeCancelTimer(&stru_1404E1C40);
    byte_1404DD941 = 0;
  }
  return result;
}
