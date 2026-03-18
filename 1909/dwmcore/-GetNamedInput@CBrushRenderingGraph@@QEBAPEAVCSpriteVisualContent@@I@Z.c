/*
 * XREFs of ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCSpriteVisualContent@@I@Z @ 0x18003C4CC
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180039510 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18003C54C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x180045988 (-HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z.c)
 *     ?HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x180045C58 (-HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

struct CSpriteVisualContent *__fastcall CBrushRenderingGraph::GetNamedInput(
        CBrushRenderingGraph *this,
        unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 200) )
    ModuleFailFastForHRESULT(2291662981LL, retaddr, this);
  return *(struct CSpriteVisualContent **)(*((_QWORD *)this + 2) + 24LL * a2);
}
