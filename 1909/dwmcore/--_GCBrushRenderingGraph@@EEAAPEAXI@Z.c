/*
 * XREFs of ??_GCBrushRenderingGraph@@EEAAPEAXI@Z @ 0x180046F10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CBrushRenderingGraph@@EEAA@XZ @ 0x180046E8C (--1CBrushRenderingGraph@@EEAA@XZ.c)
 */

CBrushRenderingGraph *__fastcall CBrushRenderingGraph::`scalar deleting destructor'(
        CBrushRenderingGraph *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  CBrushRenderingGraph::~CBrushRenderingGraph(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
