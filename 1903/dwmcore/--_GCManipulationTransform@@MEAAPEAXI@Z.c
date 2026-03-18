/*
 * XREFs of ??_GCManipulationTransform@@MEAAPEAXI@Z @ 0x1800CCF90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??1CManipulationTransform@@MEAA@XZ @ 0x1800CCFD0 (--1CManipulationTransform@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CManipulationTransform *__fastcall CManipulationTransform::`scalar deleting destructor'(
        CManipulationTransform *this,
        char a2)
{
  CManipulationTransform::~CManipulationTransform(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
