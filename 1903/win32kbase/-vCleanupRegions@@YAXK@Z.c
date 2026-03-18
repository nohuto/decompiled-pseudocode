/*
 * XREFs of ?vCleanupRegions@@YAXK@Z @ 0x1C005272C
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007FEC8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     bDeleteRegion @ 0x1C0016D00 (bDeleteRegion.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C001CE80 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     HmgLockEx @ 0x1C001E960 (HmgLockEx.c)
 *     HmgNextOwned @ 0x1C0052850 (HmgNextOwned.c)
 */

void __fastcall vCleanupRegions(unsigned int a1)
{
  unsigned int Owned; // esi

  Owned = 0;
  do
    Owned = HmgNextOwned(Owned, a1);
  while ( Owned );
}
