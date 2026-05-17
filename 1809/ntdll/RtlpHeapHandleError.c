/*
 * XREFs of RtlpHeapHandleError @ 0x180103D1C
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x18001BD18 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18001C380 (RtlpInsertFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x18001CED8 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x18001D2C4 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x18001D4F8 (RtlpFindUCREntry.c)
 *     RtlDestroyHeap @ 0x18005F2F0 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     RtlpPopulateListIndex @ 0x18006161C (RtlpPopulateListIndex.c)
 *     RtlpHpHeapHandleError @ 0x180103FC0 (RtlpHpHeapHandleError.c)
 * Callees:
 *     RtlpReportHeapFailure @ 0x180106BB0 (RtlpReportHeapFailure.c)
 */

__int64 RtlpHeapHandleError()
{
  __int64 result; // rax

  if ( !byte_180165408 )
    return RtlpReportHeapFailure();
  return result;
}
