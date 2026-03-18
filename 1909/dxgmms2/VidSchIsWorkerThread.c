/*
 * XREFs of VidSchIsWorkerThread @ 0x1C0011830
 * Callers:
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C007DAF4 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     VidSchFlushAdapter @ 0x1C00CAE30 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C00CC510 (VidSchTerminateAdapter.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsWorkerThread(__int64 a1)
{
  return KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 152);
}
