/*
 * XREFs of ?BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z @ 0x1C007FD5C
 * Callers:
 *     VidMmBeginDmaBufferCPUAccess @ 0x1C00137E0 (VidMmBeginDmaBufferCPUAccess.c)
 *     ?WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z @ 0x1C00B63BC (-WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00C9544 (VidSchiDiscardQueuePacket.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00CA094 (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DMA_POOL::BeginCPUAccess(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER *a2, void **a3)
{
  void *v3; // rcx

  if ( *((_DWORD *)this + 9) )
    v3 = *(void **)(*((_QWORD *)a2 + 7) + 368LL);
  else
    v3 = (void *)*((_QWORD *)a2 + 9);
  *a3 = v3;
}
