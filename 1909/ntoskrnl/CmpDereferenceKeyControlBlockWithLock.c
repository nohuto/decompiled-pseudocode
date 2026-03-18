/*
 * XREFs of CmpDereferenceKeyControlBlockWithLock @ 0x1406C53FC
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x140045AE0 (CmpDrainDelayDerefContext.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F8430 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406F9D60 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmpUnfreezeHive @ 0x14082A540 (CmpUnfreezeHive.c)
 *     CmpCleanupDiscardReplacePost @ 0x140832430 (CmpCleanupDiscardReplacePost.c)
 *     CmpCommitDiscardReplacePost @ 0x140832580 (CmpCommitDiscardReplacePost.c)
 *     CmpCommitRenameKeyUoW @ 0x14083C01C (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14083C98C (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14083D510 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpCleanUpKcbCacheWithLock @ 0x140665428 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDeleteHive @ 0x1406B97A0 (CmpDeleteHive.c)
 *     CmpFreeKeyControlBlock @ 0x1406BA6D0 (CmpFreeKeyControlBlock.c)
 *     CmpAddToDelayedClose @ 0x1406C54C0 (CmpAddToDelayedClose.c)
 */

void __fastcall CmpDereferenceKeyControlBlockWithLock(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  int v5; // r9d
  bool v6; // dl
  bool v7; // cl
  bool v8; // r8
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rax

  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 )
    {
      v9 = *(_QWORD *)(BugCheckParameter2 + 32);
      CmpCleanUpKcbCacheWithLock(BugCheckParameter2, a2);
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)(v9 + 160) |= 0x80u;
      *(_QWORD *)(v9 + 4216) = CurrentThread;
      *(_DWORD *)(v9 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 4276), 1u) & 0x7F) + 4280) = 31;
      if ( (*(_DWORD *)(v9 + 160) & 0x20) == 0
        && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 4272), 0xFFFFFFFF) == 1 )
      {
        CmpDeleteHive((_QWORD *)v9);
      }
    }
    else
    {
      v5 = *(_DWORD *)(BugCheckParameter2 + 8);
      v6 = 0;
      v7 = a3 == 0;
      v8 = 0;
      if ( (v5 & 0x20000) == 0 )
        v6 = v7;
      if ( (v5 & 0x20) == 0 )
        v8 = v6;
      if ( CmpHoldLazyFlush
        && (*(_WORD *)(BugCheckParameter2 + 186) & 0x10) == 0
        && (*(_BYTE *)(BugCheckParameter2 + 8) & 8) == 0 )
      {
        v8 = 0;
      }
      if ( v8 )
      {
        CmpAddToDelayedClose(BugCheckParameter2);
      }
      else
      {
        CmpCleanUpKcbCacheWithLock(BugCheckParameter2, a2);
        if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) != KeGetCurrentThread()
          && (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
        {
          CmpFreeKeyControlBlock(BugCheckParameter2);
        }
      }
    }
  }
}
