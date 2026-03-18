/*
 * XREFs of ??_GCScratchRenderTargetBitmap@@MEAAPEAXI@Z @ 0x1800DA7E0
 * Callers:
 *     ??_ECScratchRenderTargetBitmap@@OKA@EAAPEAXI@Z @ 0x1800F1280 (--_ECScratchRenderTargetBitmap@@OKA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CScratchRenderTargetBitmap@@MEAA@XZ @ 0x1800DA820 (--1CScratchRenderTargetBitmap@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CScratchRenderTargetBitmap *__fastcall CScratchRenderTargetBitmap::`scalar deleting destructor'(
        CScratchRenderTargetBitmap *this,
        char a2)
{
  CScratchRenderTargetBitmap::~CScratchRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
