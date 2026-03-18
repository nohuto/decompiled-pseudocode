/*
 * XREFs of ??_ECMeshGeometry2D@@MEAAPEAXI@Z @ 0x1802162D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CMeshGeometry2D@@MEAA@XZ @ 0x1802162A0 (--1CMeshGeometry2D@@MEAA@XZ.c)
 */

CMeshGeometry2D *__fastcall CMeshGeometry2D::`vector deleting destructor'(CMeshGeometry2D *this, char a2)
{
  CMeshGeometry2D::~CMeshGeometry2D(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
