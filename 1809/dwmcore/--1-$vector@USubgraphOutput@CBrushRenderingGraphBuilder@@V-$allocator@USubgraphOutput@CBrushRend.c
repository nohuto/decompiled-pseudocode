/*
 * XREFs of ??1?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@QEAA@XZ @ 0x1801DF658
 * Callers:
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800E0CA4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x1800E1608 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 */

void __fastcall std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::~vector<CBrushRenderingGraphBuilder::SubgraphOutput>(
        __int64 a1,
        unsigned int a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rsi
  CRenderingTechniqueFragment *v5; // rcx

  v2 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_QWORD **)(a1 + 8);
    if ( v2 != v4 )
    {
      do
      {
        v5 = (CRenderingTechniqueFragment *)v2[1];
        if ( v5 )
          CRenderingTechniqueFragment::`scalar deleting destructor'(v5, a2);
        v2 += 2;
      }
      while ( v2 != v4 );
      v2 = *(_QWORD **)a1;
    }
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
