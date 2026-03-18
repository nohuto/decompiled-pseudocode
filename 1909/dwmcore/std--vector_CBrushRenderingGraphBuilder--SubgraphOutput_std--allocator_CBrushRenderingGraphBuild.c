/*
 * XREFs of std::vector_CBrushRenderingGraphBuilder::SubgraphOutput_std::allocator_CBrushRenderingGraphBuilder::SubgraphOutput___::_Resize__lambda_dff6e1f67755268cd94743775101cf3d___ @ 0x180046844
 * Callers:
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180046334 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x1800423F0 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?_Change_array@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAXQEAUSubgraphOutput@CBrushRenderingGraphBuilder@@_K1@Z @ 0x180046C58 (-_Change_array@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutpu.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __fastcall std::vector_CBrushRenderingGraphBuilder::SubgraphOutput_std::allocator_CBrushRenderingGraphBuilder::SubgraphOutput___::_Resize__lambda_dff6e1f67755268cd94743775101cf3d___(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  SIZE_T v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r10
  unsigned __int64 v13; // rcx
  unsigned __int64 j; // rdi
  __int64 v15; // r8
  _DWORD *v16; // rdx
  __int64 k; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 i; // rdi
  CRenderingTechniqueFragment *v22; // rcx

  v2 = a1[1];
  v5 = v2 - *a1;
  v6 = (a1[2] - *a1) >> 4;
  v7 = v5 >> 4;
  if ( a2 <= v6 )
  {
    if ( a2 != v7 )
    {
      if ( a2 > v7 )
      {
        v19 = a2 - v7;
        if ( a2 != v7 )
        {
          do
          {
            *(_DWORD *)v2 = -1;
            *(_QWORD *)(v2 + 8) = 0LL;
            v2 += 16LL;
            --v19;
          }
          while ( v19 );
        }
        a1[1] = v2;
      }
      else
      {
        v20 = *a1 + 16 * a2;
        for ( i = v20; i != v2; i += 16LL )
        {
          v22 = *(CRenderingTechniqueFragment **)(i + 8);
          if ( v22 )
            CRenderingTechniqueFragment::`scalar deleting destructor'(v22, a2);
        }
        a1[1] = v20;
      }
    }
  }
  else
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error((const char *)v6);
    v8 = v6 >> 1;
    if ( v6 > 0xFFFFFFFFFFFFFFFLL - (v6 >> 1) )
    {
      v9 = a2;
    }
    else
    {
      v9 = v8 + v6;
      if ( v8 + v6 < a2 )
        v9 = a2;
    }
    v10 = 16 * v9;
    if ( v9 > 0xFFFFFFFFFFFFFFFLL )
      v10 = -1LL;
    v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
    v12 = v11;
    v13 = a2 - v7;
    for ( j = v11 + 16 * v7; v13; --v13 )
    {
      *(_DWORD *)j = -1;
      *(_QWORD *)(j + 8) = 0LL;
      j += 16LL;
    }
    v15 = a1[1];
    v16 = (_DWORD *)v11;
    for ( k = *a1; k != v15; k += 16LL )
    {
      *v16 = *(_DWORD *)k;
      v16 += 4;
      v18 = *(_QWORD *)(k + 8);
      *(_QWORD *)(k + 8) = 0LL;
      *((_QWORD *)v16 - 1) = v18;
    }
    std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Change_array(a1, v12, a2, v9);
  }
}
