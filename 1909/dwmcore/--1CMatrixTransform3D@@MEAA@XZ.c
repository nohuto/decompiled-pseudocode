/*
 * XREFs of ??1CMatrixTransform3D@@MEAA@XZ @ 0x1800DDA50
 * Callers:
 *     ??_GCMatrixTransform3D@@MEAAPEAXI@Z @ 0x1800DDA10 (--_GCMatrixTransform3D@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

void __fastcall CMatrixTransform3D::~CMatrixTransform3D(CMatrixTransform3D *this)
{
  *(_QWORD *)this = &CMatrixTransform3D::`vftable';
  CSwRenderTargetGetBounds::PrepareForReuse(this);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
