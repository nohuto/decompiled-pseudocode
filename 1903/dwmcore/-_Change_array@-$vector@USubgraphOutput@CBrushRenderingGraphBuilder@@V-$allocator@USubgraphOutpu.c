/*
 * XREFs of ?_Change_array@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAXQEAUSubgraphOutput@CBrushRenderingGraphBuilder@@_K1@Z @ 0x180038948
 * Callers:
 *     std::vector_CBrushRenderingGraphBuilder::SubgraphOutput_std::allocator_CBrushRenderingGraphBuilder::SubgraphOutput___::_Resize__lambda_dff6e1f67755268cd94743775101cf3d___ @ 0x180038844 (std--vector_CBrushRenderingGraphBuilder--SubgraphOutput_std--allocator_CBrushRenderingGraphBuild.c)
 * Callees:
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x180034A00 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Change_array(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // r15
  CRenderingTechniqueFragment *v10; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        v10 = *(CRenderingTechniqueFragment **)(v4 + 8);
        if ( v10 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v10, a2);
        v4 += 16LL;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    result = std::_Deallocate<16,0>(v4, (a1[2] - v4) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
  *a1 = a2;
  return result;
}
