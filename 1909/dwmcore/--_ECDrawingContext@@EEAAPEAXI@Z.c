/*
 * XREFs of ??_ECDrawingContext@@EEAAPEAXI@Z @ 0x180024C28
 * Callers:
 *     ??_ECDrawingContext@@GBA@EAAPEAXI@Z @ 0x1800F0AF0 (--_ECDrawingContext@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CDrawingContext@@EEAA@XZ @ 0x180024C68 (--1CDrawingContext@@EEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CDrawingContext *__fastcall CDrawingContext::`vector deleting destructor'(CDrawingContext *this, char a2)
{
  CDrawingContext::~CDrawingContext(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
