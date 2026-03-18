/*
 * XREFs of ?VidMmUnpinAllocAsync@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z @ 0x1C0085BFC
 * Callers:
 *     ?AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0085B1C (-AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 *     ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1C0069DD8 (-VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z.c)
 */

__int64 __fastcall VidMmUnpinAllocAsync(struct _LIST_ENTRY *a1, struct _LIST_ENTRY *a2)
{
  LIST_ENTRY v5[4]; // [rsp+20h] [rbp-48h] BYREF

  memset(v5, 0, sizeof(v5));
  LODWORD(v5[2].Flink) = 3;
  v5[2].Blink = a1;
  v5[3].Flink = a2;
  return (unsigned int)VidMmQueueAsyncOperation(v5) == 0 ? 0xC0000017 : 0;
}
