/*
 * XREFs of RtlpHeapHandleError @ 0x140319F48
 * Callers:
 *     RtlpCreateUCREntry @ 0x14030F880 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14030F9C0 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14031021C (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x140310C80 (RtlpInsertFreeBlock.c)
 *     RtlpHpHeapHandleError @ 0x140319F90 (RtlpHpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x14031A380 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x14031A7E4 (RtlpPopulateListIndex.c)
 *     RtlCreateHeap @ 0x1406E7930 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x140720320 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  if ( dword_14042AA38 == 22 )
    KeBugCheckEx(0xC2u, 0x46uLL, qword_14042AA40, 0LL, 0LL);
  KeBugCheckEx(0x13Au, dword_14042AA38, qword_14042AA40, qword_14042AA48, 0LL);
}
