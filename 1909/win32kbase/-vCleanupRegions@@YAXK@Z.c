/*
 * XREFs of ?vCleanupRegions@@YAXK@Z @ 0x1C006C4E4
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007C408 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     bDeleteRegion @ 0x1C00185B0 (bDeleteRegion.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C001F210 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     HmgLockEx @ 0x1C001FCA0 (HmgLockEx.c)
 *     HmgNextOwned @ 0x1C006C600 (HmgNextOwned.c)
 */

void __fastcall vCleanupRegions(unsigned int a1)
{
  unsigned int Owned; // esi

  Owned = 0;
  do
    Owned = HmgNextOwned(Owned, a1);
  while ( Owned );
}
