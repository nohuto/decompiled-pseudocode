/*
 * XREFs of ??0CBrushRenderingGraph@@AEAA@XZ @ 0x1800E16A0
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x1800E0244 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCSpriteVisualContent@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1801DF56C (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCSpriteVisualContent@@0PEAPEAVCBrushRender.c)
 * Callees:
 *     <none>
 */

CBrushRenderingGraph *__fastcall CBrushRenderingGraph::CBrushRenderingGraph(CBrushRenderingGraph *this)
{
  CBrushRenderingGraph *result; // rax

  *(_QWORD *)this = &CBrushRenderingGraph::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = (char *)this + 48;
  *((_QWORD *)this + 3) = (char *)this + 48;
  *((_DWORD *)this + 8) = 4;
  *(_QWORD *)((char *)this + 36) = 4LL;
  *((_QWORD *)this + 18) = (char *)this + 176;
  *((_QWORD *)this + 19) = (char *)this + 176;
  *((_DWORD *)this + 40) = 1;
  *(_QWORD *)((char *)this + 164) = 1LL;
  result = this;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_BYTE *)this + 196) = 0;
  return result;
}
