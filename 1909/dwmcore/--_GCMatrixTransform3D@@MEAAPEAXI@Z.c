/*
 * XREFs of ??_GCMatrixTransform3D@@MEAAPEAXI@Z @ 0x1800DDA10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CMatrixTransform3D@@MEAA@XZ @ 0x1800DDA50 (--1CMatrixTransform3D@@MEAA@XZ.c)
 */

CMatrixTransform3D *__fastcall CMatrixTransform3D::`scalar deleting destructor'(CMatrixTransform3D *this, char a2)
{
  CMatrixTransform3D::~CMatrixTransform3D(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
