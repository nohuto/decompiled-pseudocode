/*
 * XREFs of ??_ECHolographicViewer@@MEAAPEAXI@Z @ 0x180247DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CHolographicViewer@@MEAA@XZ @ 0x180247D80 (--1CHolographicViewer@@MEAA@XZ.c)
 */

CHolographicViewer *__fastcall CHolographicViewer::`vector deleting destructor'(CHolographicViewer *this, char a2)
{
  CHolographicViewer::~CHolographicViewer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
