/*
 * XREFs of ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x18005EC1C
 * Callers:
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x18005EC1C (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x1800CB2C0 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x18005EC1C (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z.c)
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x18005ED30 (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // r15
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rcx
  bool v15; // al
  unsigned int v17; // [rsp+58h] [rbp+10h]

  v3 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * a2);
  v17 = *(_DWORD *)(v9 + 92);
  if ( v17 )
  {
    v10 = (unsigned int *)(v9 + 100);
    do
    {
      v11 = *v10;
      if ( *((_BYTE *)v10 + 4) )
      {
        if ( CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(*(_QWORD *)(*((_QWORD *)this + 18)
                                                                                             + 8 * v11)
                                                                                 + 16LL)) )
          v7 |= CBrushRenderingGraph::DoesBackdropInputContributeToSubgraph(this, v11, a3);
      }
      else
      {
        v12 = 3 * v11;
        v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v12);
        if ( v13 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 48LL))(v13, 8LL)
          || (v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v12)) != 0
          && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 48LL))(v14, 163LL) )
        {
          v6 = 1;
          goto LABEL_10;
        }
      }
      ++v8;
      v10 += 15;
    }
    while ( v8 < v17 );
    v15 = 1;
    if ( v7 )
      goto LABEL_11;
  }
LABEL_10:
  v15 = 0;
LABEL_11:
  *a3 = v15;
  if ( v6 || v7 )
    return 1;
  return v3;
}
