/*
 * XREFs of ??_ECHolographicViewer@@MEAAPEAXI@Z @ 0x1802466C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CHolographicViewer@@MEAA@XZ @ 0x180246670 (--1CHolographicViewer@@MEAA@XZ.c)
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
