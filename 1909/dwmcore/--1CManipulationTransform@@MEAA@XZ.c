/*
 * XREFs of ??1CManipulationTransform@@MEAA@XZ @ 0x1800CCF40
 * Callers:
 *     ??_GCManipulationTransform@@MEAAPEAXI@Z @ 0x1800CCF00 (--_GCManipulationTransform@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

void __fastcall CManipulationTransform::~CManipulationTransform(CManipulationTransform *this)
{
  *(_QWORD *)this = &CManipulationTransform::`vftable';
  CSwRenderTargetGetBounds::PrepareForReuse(this);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
