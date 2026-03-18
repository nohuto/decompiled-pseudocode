/*
 * XREFs of ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C00B4A90
 * Callers:
 *     HmgNextOwned @ 0x1C006C600 (HmgNextOwned.c)
 *     HmgSafeNextObjtByIndex @ 0x1C0075F4C (HmgSafeNextObjtByIndex.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C0099D5C (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C00A6730 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     MultiUserNtGreCleanup @ 0x1C00B2F08 (MultiUserNtGreCleanup.c)
 *     MultiUserCleanupDCs @ 0x1C00B49D8 (MultiUserCleanupDCs.c)
 *     HmgNextGarbageCollectible @ 0x1C00BB290 (HmgNextGarbageCollectible.c)
 *     NtGdiGetStats @ 0x1C0123400 (NtGdiGetStats.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C012375C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001FE60 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall GdiHandleManager::GetNextEntryIndex(GdiHandleManager *this, unsigned int a2, struct _ENTRY **a3)
{
  GdiHandleManager *v3; // rdi
  struct _ENTRY *Entry; // rax

  v3 = gpHandleManager;
  *a3 = 0LL;
  while ( ++a2 < *(_DWORD *)v3 )
  {
    Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v3 + 2), a2, 0);
    *a3 = Entry;
    if ( Entry )
      return a2;
  }
  return 0LL;
}
