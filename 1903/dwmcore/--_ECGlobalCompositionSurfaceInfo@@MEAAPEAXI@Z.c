/*
 * XREFs of ??_ECGlobalCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x18003A6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CGlobalCompositionSurfaceInfo@@MEAA@XZ @ 0x18003A720 (--1CGlobalCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CGlobalCompositionSurfaceInfo *__fastcall CGlobalCompositionSurfaceInfo::`vector deleting destructor'(
        CGlobalCompositionSurfaceInfo *this,
        char a2)
{
  CGlobalCompositionSurfaceInfo::~CGlobalCompositionSurfaceInfo(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
