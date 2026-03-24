/*
 * XREFs of RtlpHeapHandleError @ 0x1402FBBCC
 * Callers:
 *     RtlpCreateUCREntry @ 0x1402F12A8 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1402F13E8 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1402F1C60 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1402F26E4 (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x1402FBBFC (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x1402FBFE4 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1402FC44C (RtlpPopulateListIndex.c)
 *     RtlDestroyHeap @ 0x140702160 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x14070AF20 (RtlCreateHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  KeBugCheckEx(0x13Au, dword_140404418, qword_140404420, qword_140404428, 0LL);
}
