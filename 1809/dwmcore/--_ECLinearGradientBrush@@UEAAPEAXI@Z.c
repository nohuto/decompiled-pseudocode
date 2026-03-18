/*
 * XREFs of ??_ECLinearGradientBrush@@UEAAPEAXI@Z @ 0x18001EED0
 * Callers:
 *     ??_ECLinearGradientBrush@@WEI@EAAPEAXI@Z @ 0x1800F0AC0 (--_ECLinearGradientBrush@@WEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CGradientBrush@@MEAA@XZ @ 0x18001EF10 (--1CGradientBrush@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CLinearGradientBrush *__fastcall CLinearGradientBrush::`vector deleting destructor'(
        CLinearGradientBrush *this,
        char a2)
{
  CGradientBrush::~CGradientBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
