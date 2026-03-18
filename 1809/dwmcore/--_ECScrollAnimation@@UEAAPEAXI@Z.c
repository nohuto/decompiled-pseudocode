/*
 * XREFs of ??_ECScrollAnimation@@UEAAPEAXI@Z @ 0x1801D5B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x1801D5B00 (--1CScrollAnimation@@UEAA@XZ.c)
 */

CScrollAnimation *__fastcall CScrollAnimation::`vector deleting destructor'(CScrollAnimation *this, char a2)
{
  CScrollAnimation::~CScrollAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
