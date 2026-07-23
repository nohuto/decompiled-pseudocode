/*
 * XREFs of CmpDereferenceKeyControlBlockWithLock @ 0x1405AA42C
 * Callers:
 *     CmpRundownUnitOfWork @ 0x1405AA2B8 (CmpRundownUnitOfWork.c)
 *     CmpCleanUpKcbValueCache @ 0x1405D532C (CmpCleanUpKcbValueCache.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1405D53B8 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E6320 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x140693F94 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpUnfreezeHive @ 0x1407F1834 (CmpUnfreezeHive.c)
 *     CmpCleanupDiscardReplacePost @ 0x1407FAB30 (CmpCleanupDiscardReplacePost.c)
 *     CmpCommitDiscardReplacePost @ 0x1407FAC60 (CmpCommitDiscardReplacePost.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407FAE88 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardReplacePost @ 0x1407FB400 (CmpPrepareDiscardReplacePost.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140804C84 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x1408057F8 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpDeleteHive @ 0x1405B0DEC (CmpDeleteHive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1405D53B8 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x140693DB4 (CmpFreeKeyControlBlock.c)
 *     CmpAddToDelayedClose @ 0x1406AEE5C (CmpAddToDelayedClose.c)
 */

__int64 __fastcall CmpDereferenceKeyControlBlockWithLock(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // ett
  bool v5; // dl
  int v6; // ecx
  __int64 v7; // rdi
  struct _KTHREAD *CurrentThread; // rax

  LODWORD(result) = *(_DWORD *)BugCheckParameter2;
  do
  {
    v3 = result - 1;
    v4 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)BugCheckParameter2,
                             result - 1,
                             result);
  }
  while ( v4 != (_DWORD)result );
  if ( !v3 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 176) & 0x40000) != 0 )
    {
      v7 = *(_QWORD *)(BugCheckParameter2 + 24);
      CmpCleanUpKcbCacheWithLock(BugCheckParameter2);
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)(v7 + 160) |= 0x80u;
      *(_QWORD *)(v7 + 4216) = CurrentThread;
      *(_DWORD *)(v7 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 4292), 1u) & 0x7F) + 4296) = 31;
      result = *(unsigned int *)(v7 + 160);
      if ( (result & 0x20) == 0 )
      {
        result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 4288), 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          return CmpDeleteHive((PVOID)v7);
      }
    }
    else
    {
      v5 = 0;
      v6 = *(_DWORD *)(BugCheckParameter2 + 4);
      if ( (v6 & 0x20) == 0 )
        v5 = (v6 & 0x20000) == 0;
      if ( CmpHoldLazyFlush
        && (*(_WORD *)(BugCheckParameter2 + 178) & 0x10) == 0
        && (*(_BYTE *)(BugCheckParameter2 + 4) & 8) == 0 )
      {
        v5 = 0;
      }
      if ( v5 )
      {
        return CmpAddToDelayedClose(BugCheckParameter2);
      }
      else
      {
        CmpCleanUpKcbCacheWithLock(BugCheckParameter2);
        result = (__int64)KeGetCurrentThread();
        if ( *(_QWORD *)(BugCheckParameter2 + 48) != result && (*(_DWORD *)(BugCheckParameter2 + 4) & 0x80000) != 0 )
          return CmpFreeKeyControlBlock(BugCheckParameter2);
      }
    }
  }
  return result;
}
