/*
 * XREFs of HmgShareUnlockRemoveObject @ 0x1C00919C0
 * Callers:
 *     <none>
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00145B0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001CFF0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001D470 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0020070 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0021C70 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 */

__int64 __fastcall HmgShareUnlockRemoveObject(unsigned int a1, int a2, int a3, int a4, char a5)
{
  __int16 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  char v13; // si
  GdiHandleManager *v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rbx
  int v22; // eax
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+38h] [rbp-30h]

  v7 = a2;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  v24 = 0LL;
  v25 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v24, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v25 )
  {
    v12 = v24;
    v13 = *(_BYTE *)(v24 + 14);
    if ( v13 == a5 && *(_WORD *)(v24 + 12) == HIWORD(a1) )
    {
      v14 = gpHandleManager;
      v15 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v24 & 0xFFFFFF);
      v16 = *((_QWORD *)v14 + 2);
      v17 = v15;
      v18 = *(_DWORD *)(v16 + 2056);
      if ( v15 >= v18 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
        goto LABEL_23;
      if ( v15 >= v18 )
        v19 = ((v15 - v18) >> 16) + 1;
      else
        v19 = 0LL;
      v20 = *(_QWORD *)(v16 + 8 * v19 + 8);
      if ( (_DWORD)v19 )
        v17 = ((1 - (_DWORD)v19) << 16) - v18 + v15;
      if ( (unsigned int)v17 >= *(_DWORD *)(v20 + 20) )
LABEL_23:
        v21 = 0LL;
      else
        v21 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
      TrackHmgrReferenceDecrement(v13, (struct OBJECT *)v21);
      v22 = *(_DWORD *)(v21 + 8) - 1;
      *(_DWORD *)(v21 + 8) = v22;
      if ( v22 == a3 && *(_WORD *)(v21 + 12) == v7 && (a4 || (*(_BYTE *)(v12 + 15) & 1) == 0) )
      {
        HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v24);
        goto LABEL_15;
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v24);
  }
  v21 = 0LL;
LABEL_15:
  if ( v25 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v24);
  GreReleaseHmgrSemaphore(v10, v9, v11);
  return v21;
}
