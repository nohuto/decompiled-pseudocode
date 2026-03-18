/*
 * XREFs of ??_ECGeometry2DGroup@@MEAAPEAXI@Z @ 0x18019F0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CGeometry2DGroup@@MEAA@XZ @ 0x180212B28 (--1CGeometry2DGroup@@MEAA@XZ.c)
 */

CGeometry2DGroup *__fastcall CGeometry2DGroup::`vector deleting destructor'(CGeometry2DGroup *this, char a2)
{
  CGeometry2DGroup::~CGeometry2DGroup(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
