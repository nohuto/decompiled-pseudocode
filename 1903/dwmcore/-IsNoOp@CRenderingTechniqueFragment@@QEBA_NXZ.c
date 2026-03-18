/*
 * XREFs of ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x1800C61D4
 * Callers:
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x18003BA68 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180076874 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x1800C60F4 (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z.c)
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x1800C61D4 (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 * Callees:
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x1800C61D4 (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderingTechniqueFragment::IsNoOp(CRenderingTechniqueFragment *this)
{
  char v2; // bl
  __int64 v3; // rcx
  CRenderingTechniqueFragment *v5; // rcx

  v2 = 0;
  v3 = *(_QWORD *)this;
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, *((unsigned int *)this + 4)) )
    {
      v5 = *(CRenderingTechniqueFragment **)(*((_QWORD *)this + 4) + 8LL);
      if ( !v5 || CRenderingTechniqueFragment::IsNoOp(v5) )
        return 1;
    }
  }
  return v2;
}
