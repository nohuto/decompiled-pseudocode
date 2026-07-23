/*
 * XREFs of RtlpHeapHandleError @ 0x1402FBDBC
 * Callers:
 *     RtlpCreateUCREntry @ 0x1402F1498 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1402F15D8 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1402F1E50 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1402F28D4 (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x1402FBDEC (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x1402FC1D4 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1402FC63C (RtlpPopulateListIndex.c)
 *     RtlDestroyHeap @ 0x140703400 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x14070C1C0 (RtlCreateHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  KeBugCheckEx(0x13Au, dword_140405418, qword_140405420, qword_140405428, 0LL);
}
