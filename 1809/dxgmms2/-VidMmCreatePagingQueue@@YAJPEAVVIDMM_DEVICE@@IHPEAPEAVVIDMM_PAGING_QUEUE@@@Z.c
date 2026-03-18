/*
 * XREFs of ?VidMmCreatePagingQueue@@YAJPEAVVIDMM_DEVICE@@IHPEAPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0010100
 * Callers:
 *     <none>
 * Callees:
 *     ?CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C006D460 (-CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 */

__int64 __fastcall VidMmCreatePagingQueue(
        struct VIDMM_DEVICE *a1,
        unsigned int a2,
        int a3,
        struct VIDMM_PAGING_QUEUE **a4)
{
  return VIDMM_DEVICE::CreatePagingQueue(a1, a2, a3, a4);
}
