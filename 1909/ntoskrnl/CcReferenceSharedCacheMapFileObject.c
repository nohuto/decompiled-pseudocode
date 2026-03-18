/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x14007FBC8
 * Callers:
 *     CcGetDirtyPagesHelper @ 0x140078B60 (CcGetDirtyPagesHelper.c)
 *     CcWriteBehindInternal @ 0x14007E5E0 (CcWriteBehindInternal.c)
 *     CcUnmapAndPurge @ 0x14008027C (CcUnmapAndPurge.c)
 *     CcPurgeAndClearCacheSection @ 0x1401263F4 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x14012E974 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x140158B9C (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x140158C9C (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1401593D4 (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x14027D570 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x140609340 (CcUnmapVacb.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14003ACD0 (ObFastReferenceObject.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x14007FBF4 (CcSlowReferenceSharedCacheMapFileObject.c)
 */

ULONG_PTR __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  ULONG_PTR result; // rax

  result = ObFastReferenceObject((signed __int64 *)(a1 + 96));
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}
