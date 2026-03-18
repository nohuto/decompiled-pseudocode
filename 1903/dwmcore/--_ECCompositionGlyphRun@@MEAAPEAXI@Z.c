/*
 * XREFs of ??_ECCompositionGlyphRun@@MEAAPEAXI@Z @ 0x1801D0CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CCompositionGlyphRun@@MEAA@XZ @ 0x1801D0C6C (--1CCompositionGlyphRun@@MEAA@XZ.c)
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
