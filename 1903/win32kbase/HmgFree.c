/*
 * XREFs of HmgFree @ 0x1C00B35F0
 * Callers:
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C0058678 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00145B0 (GreAcquireHmgrSemaphore.c)
 *     ?FreePaletteMemory@@YAXPEAVPALETTE@@@Z @ 0x1C001664C (-FreePaletteMemory@@YAXPEAVPALETTE@@@Z.c)
 *     FreeObject @ 0x1C0016BA0 (FreeObject.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001CFF0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001D470 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0021C70 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 */

void __fastcall HmgFree(unsigned int a1, int a2, int a3)
{
  struct _SLIST_ENTRY *v4; // rdi
  unsigned __int8 v5; // si
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD *v9; // rsi
  GdiHandleManager *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r10
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // rax
  _DWORD *v17; // [rsp+30h] [rbp-28h] BYREF
  int v18; // [rsp+38h] [rbp-20h]

  v4 = 0LL;
  v5 = 0;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  v17 = 0LL;
  v18 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v17, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v18 )
  {
    v9 = v17;
    v10 = gpHandleManager;
    v11 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v17 & 0xFFFFFF);
    v12 = *((_QWORD *)v10 + 2);
    v13 = v11;
    v14 = *(_DWORD *)(v12 + 2056);
    if ( v11 < v14 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
    {
      if ( v11 >= v14 )
        v15 = ((v11 - v14) >> 16) + 1;
      else
        v15 = 0LL;
      v16 = *(_QWORD *)(v12 + 8 * v15 + 8);
      if ( (_DWORD)v15 )
        v13 += ((1 - (_DWORD)v15) << 16) - v14;
      if ( v13 < *(_DWORD *)(v16 + 20) )
        v4 = *(struct _SLIST_ENTRY **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * ((unsigned __int64)v13 >> 8))
                                     + 16LL * (unsigned __int8)v13
                                     + 8);
    }
    v5 = *((_BYTE *)v9 + 14);
    HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v17);
    if ( v18 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v17);
  }
  GreReleaseHmgrSemaphore(v7, v6, v8);
  if ( v4 )
  {
    if ( v5 == 8 )
      FreePaletteMemory(v4);
    else
      FreeObject((__int64)v4, v5);
  }
}
