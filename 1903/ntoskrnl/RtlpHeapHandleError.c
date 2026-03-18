/*
 * XREFs of RtlpHeapHandleError @ 0x14031A4F8
 * Callers:
 *     RtlpCreateUCREntry @ 0x14030FE30 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14030FF70 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1403107CC (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x140311230 (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x14031A540 (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x14031A930 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x14031AD94 (RtlpPopulateListIndex.c)
 *     RtlCreateHeap @ 0x1406E6750 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x14071E490 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  if ( dword_14042AA28 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, qword_14042AA30, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_14042AA28, qword_14042AA30, qword_14042AA38, 0LL);
}
