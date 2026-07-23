/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x14007DF5C
 * Callers:
 *     CcGetDirtyPagesHelper @ 0x140020430 (CcGetDirtyPagesHelper.c)
 *     CcUnmapAndPurge @ 0x14007CA84 (CcUnmapAndPurge.c)
 *     CcWriteBehindInternal @ 0x14007D2E0 (CcWriteBehindInternal.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E7978 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x14012DA80 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x140187504 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x140187600 (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140187C98 (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x140269FC0 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x1405F384C (CcUnmapVacb.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x14007DF88 (CcSlowReferenceSharedCacheMapFileObject.c)
 */

ULONG_PTR __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  ULONG_PTR result; // rax

  result = ObFastReferenceObject((signed __int64 *)(a1 + 96));
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}
