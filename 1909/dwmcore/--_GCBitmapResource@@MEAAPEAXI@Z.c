/*
 * XREFs of ??_GCBitmapResource@@MEAAPEAXI@Z @ 0x18004AC64
 * Callers:
 *     ??_ECBitmapResource@@OBA@EAAPEAXI@Z @ 0x1800F12B0 (--_ECBitmapResource@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapResource@@MEAA@XZ @ 0x18004AD8C (--1CBitmapResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
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
