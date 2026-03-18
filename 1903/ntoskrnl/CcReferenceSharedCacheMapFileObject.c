/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x14007F7C8
 * Callers:
 *     CcGetDirtyPagesHelper @ 0x1400787A0 (CcGetDirtyPagesHelper.c)
 *     CcWriteBehindInternal @ 0x14007E1E0 (CcWriteBehindInternal.c)
 *     CcUnmapAndPurge @ 0x14007FE7C (CcUnmapAndPurge.c)
 *     CcPurgeAndClearCacheSection @ 0x140125D84 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x14012E024 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x1401584FC (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1401585FC (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140158D34 (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x14027D810 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x140607830 (CcUnmapVacb.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14003AF90 (ObFastReferenceObject.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x14007F7F4 (CcSlowReferenceSharedCacheMapFileObject.c)
 */

ULONG_PTR __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  ULONG_PTR result; // rax

  result = ObFastReferenceObject((signed __int64 *)(a1 + 96));
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}
