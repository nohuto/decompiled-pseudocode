/*
 * XREFs of ??1CMatrixTransform@@MEAA@XZ @ 0x1800CE540
 * Callers:
 *     ??_ECMatrixTransform@@MEAAPEAXI@Z @ 0x1800CE500 (--_ECMatrixTransform@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

void __fastcall CMatrixTransform::~CMatrixTransform(CMatrixTransform *this)
{
  *(_QWORD *)this = &CMatrixTransform::`vftable';
  CSwRenderTargetGetBounds::PrepareForReuse(this);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
