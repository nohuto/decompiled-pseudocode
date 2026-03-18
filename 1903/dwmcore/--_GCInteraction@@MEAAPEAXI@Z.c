/*
 * XREFs of ??_GCInteraction@@MEAAPEAXI@Z @ 0x180029210
 * Callers:
 *     ??_ECInteraction@@O7EAAPEAXI@Z @ 0x1800ED580 (--_ECInteraction@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CInteraction@@MEAA@XZ @ 0x180029250 (--1CInteraction@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CInteraction *__fastcall CInteraction::`scalar deleting destructor'(CInteraction *this, char a2)
{
  CInteraction::~CInteraction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
