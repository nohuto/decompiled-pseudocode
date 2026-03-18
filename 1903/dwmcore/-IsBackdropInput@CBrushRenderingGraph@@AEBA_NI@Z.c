/*
 * XREFs of ?IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x180076824
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180076874 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x1800C60F4 (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CBrushRenderingGraph::IsBackdropInput(CBrushRenderingGraph *this, unsigned int a2)
{
  char v2; // bl
  __int64 v4; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  if ( *((_BYTE *)this + 200) )
    ModuleFailFastForHRESULT(2291662981LL, retaddr, this);
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL * a2);
  if ( v4 )
    return (*(unsigned __int8 (__fastcall **)(__int64, __int64, CBrushRenderingGraph *))(*(_QWORD *)v4 + 48LL))(
             v4,
             8LL,
             this) != 0;
  return v2;
}
