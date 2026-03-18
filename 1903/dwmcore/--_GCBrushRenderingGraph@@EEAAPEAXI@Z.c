/*
 * XREFs of ??_GCBrushRenderingGraph@@EEAAPEAXI@Z @ 0x1800344E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBrushRenderingGraph@@EEAA@XZ @ 0x180034934 (--1CBrushRenderingGraph@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CBrushRenderingGraph *__fastcall CBrushRenderingGraph::`scalar deleting destructor'(
        CBrushRenderingGraph *this,
        char a2)
{
  CBrushRenderingGraph::~CBrushRenderingGraph(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xD0uLL);
  return this;
}
