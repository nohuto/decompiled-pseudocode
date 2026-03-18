/*
 * XREFs of ??_GCHolographicExclusiveView@@EEAAPEAXI@Z @ 0x180244B10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CHolographicExclusiveView@@EEAA@XZ @ 0x180244ACC (--1CHolographicExclusiveView@@EEAA@XZ.c)
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
      operator delete(this);
  }
  return this;
}
