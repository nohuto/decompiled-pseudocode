/*
 * XREFs of ??_GCBrushRenderingGraph@@EEAAPEAXI@Z @ 0x1800DF870
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CBrushRenderingGraph@@EEAA@XZ @ 0x1800DF9B4 (--1CBrushRenderingGraph@@EEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CBrushRenderingGraph *__fastcall CBrushRenderingGraph::`scalar deleting destructor'(
        CBrushRenderingGraph *this,
        char a2)
{
  CBrushRenderingGraph::~CBrushRenderingGraph(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
