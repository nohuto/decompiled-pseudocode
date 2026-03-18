/*
 * XREFs of ??_GCBitmapResource@@MEAAPEAXI@Z @ 0x18002DBA4
 * Callers:
 *     ??_ECBitmapResource@@OBA@EAAPEAXI@Z @ 0x1800ED5F0 (--_ECBitmapResource@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapResource@@MEAA@XZ @ 0x18002DCCC (--1CBitmapResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CBitmapResource *__fastcall CBitmapResource::`scalar deleting destructor'(CBitmapResource *this, char a2)
{
  CBitmapResource::~CBitmapResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
