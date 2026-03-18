/*
 * XREFs of ??_GCInteractionContextWrapper@@UEAAPEAXI@Z @ 0x1800C1B6C
 * Callers:
 *     ??_ECInteractionContextWrapper@@W7EAAPEAXI@Z @ 0x1800ED700 (--_ECInteractionContextWrapper@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??1CInteractionContextWrapper@@UEAA@XZ @ 0x1800C1BAC (--1CInteractionContextWrapper@@UEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CInteractionContextWrapper *__fastcall CInteractionContextWrapper::`scalar deleting destructor'(
        CInteractionContextWrapper *this,
        char a2)
{
  CInteractionContextWrapper::~CInteractionContextWrapper(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
