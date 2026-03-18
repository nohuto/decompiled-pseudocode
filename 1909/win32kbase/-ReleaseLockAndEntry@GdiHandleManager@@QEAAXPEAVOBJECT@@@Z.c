/*
 * XREFs of ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C0021BE8
 * Callers:
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0021CD0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001F810 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C0021C70 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 */

void __fastcall GdiHandleManager::ReleaseLockAndEntry(GdiHandleManager *this, struct OBJECT *a2)
{
  GdiHandleManager *v3; // rbx
  unsigned int v4; // ebp
  GdiHandleEntryDirectory *v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // edi

  v3 = gpHandleManager;
  v4 = GdiHandleManager::DecodeIndex(
         (GdiHandleEntryDirectory **)gpHandleManager,
         (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000u);
  v5 = (GdiHandleEntryDirectory *)*((_QWORD *)v3 + 2);
  v6 = *((_QWORD *)v3 + 3);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 4LL * (unsigned __int16)v4);
    if ( v7 )
    {
      if ( GdiHandleEntryDirectory::AcquireEntryLock(v5, v7, 1) )
        GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v3 + 2), v7, 1);
      *(_DWORD *)(*((_QWORD *)v3 + 3) + 4LL * (unsigned __int16)v4) = 0;
      --*((_DWORD *)v3 + 1);
      v5 = (GdiHandleEntryDirectory *)*((_QWORD *)v3 + 2);
    }
  }
  GdiHandleEntryDirectory::ReleaseLockAndEntry(v5, v4, 0);
  *(_QWORD *)a2 = 0LL;
  --*((_DWORD *)v3 + 1);
}
