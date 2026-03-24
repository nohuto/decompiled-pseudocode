/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x14007DF6C
 * Callers:
 *     CcGetDirtyPagesHelper @ 0x140020430 (CcGetDirtyPagesHelper.c)
 *     CcUnmapAndPurge @ 0x14007CA94 (CcUnmapAndPurge.c)
 *     CcWriteBehindInternal @ 0x14007D2F0 (CcWriteBehindInternal.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E78F8 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x14012D9B0 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x1401873C4 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1401874C0 (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140187B58 (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x140269DD0 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x1405F284C (CcUnmapVacb.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x14007DF98 (CcSlowReferenceSharedCacheMapFileObject.c)
 */

ULONG_PTR __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  ULONG_PTR result; // rax

  result = ObFastReferenceObject((signed __int64 *)(a1 + 96));
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}
