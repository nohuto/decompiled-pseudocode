/*
 * XREFs of ??_ECRenderTargetBitmap@@MEAAPEAXI@Z @ 0x180079520
 * Callers:
 *     ??_ECRenderTargetBitmap@@OFI@EAAPEAXI@Z @ 0x1800F0580 (--_ECRenderTargetBitmap@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18004E094 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CRenderTargetBitmap *__fastcall CRenderTargetBitmap::`vector deleting destructor'(CRenderTargetBitmap *this, char a2)
{
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
