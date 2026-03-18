/*
 * XREFs of GdiMultiUserFontCleanup @ 0x1C011D2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C011C934 (-CleanUpEUDC@@YAXXZ.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C011D930 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C011DAE0 (-bCleanupFontTable@@YAHPEAPEAVPFT@@@Z.c)
 */

void GdiMultiUserFontCleanup()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  CleanUpEUDC();
  if ( gpPFTPrivate )
    bCleanupFontTable(gpPFTPrivate);
  if ( gpPFTPublic )
    bCleanupFontTable((struct PFT **)&gpPFTPublic);
  if ( gpPFTDevice )
    bCleanupFontTable(&gpPFTDevice);
  v0 = gpPrintKViewList;
  if ( gpPrintKViewList )
  {
    do
    {
      v1 = v0;
      v0 = *(_QWORD *)(v0 + 32);
      Win32FreePool(v1);
    }
    while ( v0 );
    gpPrintKViewList = 0LL;
  }
  if ( ghsemFntCache )
  {
    v2 = ghsemFntCache;
    GreAcquireSemaphore(ghsemFntCache);
    vCleanUpFntCacheInternal();
    SEMOBJ::vUnlock((SEMOBJ *)&v2);
  }
}
