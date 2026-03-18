/*
 * XREFs of ??_ECScrollPositionKeyframeAnimation@@UEAAPEAXI@Z @ 0x1801D6EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x1801E0158 (--1CScrollKeyframeAnimation@@UEAA@XZ.c)
 */

CScrollPositionKeyframeAnimation *__fastcall CScrollPositionKeyframeAnimation::`vector deleting destructor'(
        CScrollPositionKeyframeAnimation *this,
        char a2)
{
  CScrollKeyframeAnimation::~CScrollKeyframeAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
