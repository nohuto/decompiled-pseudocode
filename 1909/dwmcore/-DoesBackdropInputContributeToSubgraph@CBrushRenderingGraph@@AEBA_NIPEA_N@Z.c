/*
 * XREFs of ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x1800C68F4
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18003C54C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x1800C68F4 (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z.c)
 * Callees:
 *     ?IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x18003C478 (-IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z.c)
 *     ?IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x18003C4FC (-IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x1800C68F4 (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z.c)
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x1800C69D4 (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 */

char __fastcall CBrushRenderingGraph::DoesBackdropInputContributeToSubgraph(
        CBrushRenderingGraph *this,
        unsigned int a2,
        bool *a3)
{
  char v3; // bl
  char v6; // r12
  char v7; // si
  unsigned int v8; // r14d
  __int64 v9; // rdi
  unsigned int *v10; // rdi
  __int64 v11; // rbp
  bool v12; // al
  unsigned int v14; // [rsp+58h] [rbp+10h]

  v3 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * a2);
  v14 = *(_DWORD *)(v9 + 84);
  if ( v14 )
  {
    v10 = (unsigned int *)(v9 + 92);
    do
    {
      v11 = *v10;
      if ( *((_BYTE *)v10 + 4) )
      {
        if ( CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(*(_QWORD *)(*((_QWORD *)this + 18)
                                                                                             + 8 * v11)
                                                                                 + 8LL)) )
          v7 |= CBrushRenderingGraph::DoesBackdropInputContributeToSubgraph(this, v11, a3);
      }
      else if ( CBrushRenderingGraph::IsBackdropInput(this, v11)
             || CBrushRenderingGraph::IsWindowBackdropInput(this, v11) )
      {
        v6 = 1;
        goto LABEL_8;
      }
      ++v8;
      v10 += 11;
    }
    while ( v8 < v14 );
    if ( !v7 )
      goto LABEL_8;
    v12 = 1;
  }
  else
  {
LABEL_8:
    v12 = 0;
  }
  *a3 = v12;
  if ( v6 || v7 )
    return 1;
  return v3;
}
