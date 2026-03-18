/*
 * XREFs of ??_ECVisualReferenceController@@MEAAPEAXI@Z @ 0x180028D80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualReferenceController@@MEAA@XZ @ 0x180028DC0 (--1CVisualReferenceController@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CVisualReferenceController *__fastcall CVisualReferenceController::`vector deleting destructor'(
        CVisualReferenceController *this,
        char a2)
{
  CVisualReferenceController::~CVisualReferenceController(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
