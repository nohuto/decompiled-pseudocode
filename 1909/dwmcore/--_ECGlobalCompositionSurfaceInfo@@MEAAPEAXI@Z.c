/*
 * XREFs of ??_ECGlobalCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x1800C2740
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1CGlobalCompositionSurfaceInfo@@MEAA@XZ @ 0x1800C2780 (--1CGlobalCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
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
