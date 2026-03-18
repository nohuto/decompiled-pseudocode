/*
 * XREFs of ??_ECImageSourceResource@@MEAAPEAXI@Z @ 0x180174710
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CImageSourceResource@@MEAA@XZ @ 0x1801736DC (--1CImageSourceResource@@MEAA@XZ.c)
 */

CImageSourceResource *__fastcall CImageSourceResource::`vector deleting destructor'(
        CImageSourceResource *this,
        char a2)
{
  CImageSourceResource::~CImageSourceResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
