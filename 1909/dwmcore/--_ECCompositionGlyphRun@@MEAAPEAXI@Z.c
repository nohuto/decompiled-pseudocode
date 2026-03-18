/*
 * XREFs of ??_ECCompositionGlyphRun@@MEAAPEAXI@Z @ 0x1801CF500
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CCompositionGlyphRun@@MEAA@XZ @ 0x1801CF4CC (--1CCompositionGlyphRun@@MEAA@XZ.c)
 */

CCompositionGlyphRun *__fastcall CCompositionGlyphRun::`vector deleting destructor'(
        CCompositionGlyphRun *this,
        char a2)
{
  CCompositionGlyphRun::~CCompositionGlyphRun(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
