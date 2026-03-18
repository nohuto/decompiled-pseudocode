/*
 * XREFs of ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C0020220
 * Callers:
 *     HmgSafeNextObjtByIndex @ 0x1C0020040 (HmgSafeNextObjtByIndex.c)
 *     MultiUserNtGreCleanup @ 0x1C00603B0 (MultiUserNtGreCleanup.c)
 *     MultiUserCleanupDCs @ 0x1C0082A7C (MultiUserCleanupDCs.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C0085CE8 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C009179C (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C00AAC0C (HmgNextGarbageCollectible.c)
 *     NtGdiGetStats @ 0x1C00F9660 (NtGdiGetStats.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C00F9BAC (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0023700 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
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
