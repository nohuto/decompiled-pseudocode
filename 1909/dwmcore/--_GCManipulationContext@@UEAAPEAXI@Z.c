/*
 * XREFs of ??_GCManipulationContext@@UEAAPEAXI@Z @ 0x18023A4F8
 * Callers:
 *     ??_ECManipulationContext@@W7EAAPEAXI@Z @ 0x1800F13E0 (--_ECManipulationContext@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CManipulationContext@@UEAA@XZ @ 0x18023A34C (--1CManipulationContext@@UEAA@XZ.c)
 */

CManipulationContext *__fastcall CManipulationContext::`scalar deleting destructor'(
        CManipulationContext *this,
        char a2)
{
  CManipulationContext::~CManipulationContext(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
