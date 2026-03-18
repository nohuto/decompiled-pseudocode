/*
 * XREFs of MultiUserCleanupDCs @ 0x1C00C418C
 * Callers:
 *     DrvCleanupAndDestroyMDEV @ 0x1C00D3734 (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C002BD90 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F158 (-vCleanupDCs@@YAXK@Z.c)
 */

void MultiUserCleanupDCs()
{
  unsigned int v0; // esi
  int v1; // ebp
  GdiHandleManager *v2; // rcx
  unsigned int v3; // edi
  unsigned int NextEntryIndex; // eax
  __int64 v5; // rcx
  GdiHandleManager *v6; // rbx
  unsigned int v7; // eax
  struct _ENTRY *Entry; // rax
  int v9; // edx
  __int64 CurrentProcessWin32Process; // rax
  struct _ENTRY *v11; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v1 = 0;
  v3 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  if ( gpHandleManager )
  {
    while ( 1 )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v2, v0, &v11);
      v0 = NextEntryIndex;
      if ( !NextEntryIndex )
        break;
      v6 = gpHandleManager;
      v7 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, NextEntryIndex);
      Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v6 + 2), v7, 0);
      v11 = Entry;
      if ( *((_BYTE *)Entry + 14) == 1 )
      {
        v9 = *((_DWORD *)Entry + 2);
        v2 = (GdiHandleManager *)(v9 & 0xFFFFFFFE);
        if ( (_DWORD)v2 != v3 )
        {
          *((_DWORD *)Entry + 2) = v3 | v9 & 1;
          ++v1;
        }
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) += v1;
    vCleanupDCs(v3);
  }
}
