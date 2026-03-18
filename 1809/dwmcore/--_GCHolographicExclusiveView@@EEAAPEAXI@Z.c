/*
 * XREFs of ??_GCHolographicExclusiveView@@EEAAPEAXI@Z @ 0x18020C6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CHolographicExclusiveView@@EEAA@XZ @ 0x18020C690 (--1CHolographicExclusiveView@@EEAA@XZ.c)
 */

CHolographicExclusiveView *__fastcall CHolographicExclusiveView::`scalar deleting destructor'(
        CHolographicExclusiveView *this,
        char a2)
{
  CHolographicExclusiveView::~CHolographicExclusiveView(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
