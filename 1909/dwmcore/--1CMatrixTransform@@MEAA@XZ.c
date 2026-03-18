/*
 * XREFs of ??1CMatrixTransform@@MEAA@XZ @ 0x1800CE530
 * Callers:
 *     ??_ECMatrixTransform@@MEAAPEAXI@Z @ 0x1800CE4F0 (--_ECMatrixTransform@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

void __fastcall CMatrixTransform::~CMatrixTransform(CMatrixTransform *this)
{
  *(_QWORD *)this = &CMatrixTransform::`vftable';
  CSwRenderTargetGetBounds::PrepareForReuse(this);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
