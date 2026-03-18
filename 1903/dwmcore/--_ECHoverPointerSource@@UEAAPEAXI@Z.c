/*
 * XREFs of ??_ECHoverPointerSource@@UEAAPEAXI@Z @ 0x1800229FC
 * Callers:
 *     ??_ECHoverPointerSource@@W7EAAPEAXI@Z @ 0x1800ED570 (--_ECHoverPointerSource@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18008AB10 (--1CResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CHoverPointerSource *__fastcall CHoverPointerSource::`vector deleting destructor'(CHoverPointerSource *this, char a2)
{
  CResource::~CResource((CHoverPointerSource *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
