/*
 * XREFs of ??_ECHwndBitmap@@MEAAPEAXI@Z @ 0x18002DA30
 * Callers:
 *     ??_ECHwndBitmap@@OBA@EAAPEAXI@Z @ 0x1800ED610 (--_ECHwndBitmap@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x18002DA70 (--1CHwndBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CHwndBitmap *__fastcall CHwndBitmap::`vector deleting destructor'(CHwndBitmap *this, char a2)
{
  CHwndBitmap::~CHwndBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
