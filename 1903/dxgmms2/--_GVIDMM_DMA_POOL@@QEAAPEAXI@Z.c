/*
 * XREFs of ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C0016BDC
 * Callers:
 *     VidMmDestoryDmaPool @ 0x1C0016BC0 (VidMmDestoryDmaPool.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0090538 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00AA1C4 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1C0083000 (--1VIDMM_DMA_POOL@@QEAA@XZ.c)
 */

VIDMM_DMA_POOL *__fastcall VIDMM_DMA_POOL::`scalar deleting destructor'(VIDMM_DMA_POOL *P)
{
  VIDMM_DMA_POOL::~VIDMM_DMA_POOL(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
