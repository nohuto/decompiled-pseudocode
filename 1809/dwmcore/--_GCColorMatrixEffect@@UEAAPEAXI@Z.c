/*
 * XREFs of ??_GCColorMatrixEffect@@UEAAPEAXI@Z @ 0x180174440
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CFilterEffect@@MEAA@XZ @ 0x180173664 (--1CFilterEffect@@MEAA@XZ.c)
 */

CColorMatrixEffect *__fastcall CColorMatrixEffect::`scalar deleting destructor'(CColorMatrixEffect *this, char a2)
{
  CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
