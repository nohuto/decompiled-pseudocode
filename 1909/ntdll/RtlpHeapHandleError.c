/*
 * XREFs of RtlpHeapHandleError @ 0x1801014E0
 * Callers:
 *     RtlpExtendHeap @ 0x18003F020 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18003F9C0 (RtlpFindAndCommitPages.c)
 *     RtlpDeCommitFreeBlock @ 0x180045188 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18004580C (RtlpInsertFreeBlock.c)
 *     RtlpPopulateListIndex @ 0x180048AD4 (RtlpPopulateListIndex.c)
 *     RtlpCreateUCREntry @ 0x180048E88 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x180049104 (RtlpFindUCREntry.c)
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18004AA00 (RtlDestroyHeap.c)
 *     RtlpHpHeapHandleError @ 0x180101780 (RtlpHpHeapHandleError.c)
 * Callees:
 *     RtlpReportHeapFailure @ 0x180104288 (RtlpReportHeapFailure.c)
 */

__int64 RtlpHeapHandleError()
{
  __int64 result; // rax

  if ( !byte_180165408 )
    return RtlpReportHeapFailure();
  return result;
}
