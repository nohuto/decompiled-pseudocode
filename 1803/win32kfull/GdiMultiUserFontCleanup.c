/*
 * XREFs of GdiMultiUserFontCleanup @ 0x1C004EBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C004F5D0 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     ?MultiUserGreCleanupAllFonts@@YAXXZ @ 0x1C004F6E8 (-MultiUserGreCleanupAllFonts@@YAXXZ.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C004F844 (-CleanUpEUDC@@YAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void GdiMultiUserFontCleanup()
{
  __int64 v0; // [rsp+30h] [rbp+8h] BYREF

  CleanUpEUDC();
  MultiUserGreCleanupAllFonts();
  if ( ghsemFntCache )
  {
    v0 = ghsemFntCache;
    GreAcquireSemaphore(ghsemFntCache);
    vCleanUpFntCacheInternal();
    SEMOBJ::vUnlock((SEMOBJ *)&v0);
  }
}
