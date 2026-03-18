/*
 * XREFs of ??_GCGeometry2D@@MEAAPEAXI@Z @ 0x18019F050
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CGeometry2D@@MEAA@XZ @ 0x18019E10C (--1CGeometry2D@@MEAA@XZ.c)
 */

CGeometry2D *__fastcall CGeometry2D::`scalar deleting destructor'(CGeometry2D *this, char a2)
{
  CGeometry2D::~CGeometry2D(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
