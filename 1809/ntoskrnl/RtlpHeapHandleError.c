/*
 * XREFs of RtlpHeapHandleError @ 0x1402FBACC
 * Callers:
 *     RtlpCreateUCREntry @ 0x1402F11A8 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1402F12E8 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1402F1B60 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1402F25E4 (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x1402FBAFC (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x1402FBEE4 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1402FC34C (RtlpPopulateListIndex.c)
 *     RtlDestroyHeap @ 0x140702180 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x14070AF40 (RtlCreateHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  KeBugCheckEx(0x13Au, dword_140404418, qword_140404420, qword_140404428, 0LL);
}
