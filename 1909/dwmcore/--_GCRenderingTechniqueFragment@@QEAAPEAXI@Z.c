/*
 * XREFs of ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x1800423F0
 * Callers:
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x18004217C (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x180042A5C (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180045EBC (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180046004 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180046334 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     std::vector_CBrushRenderingGraphBuilder::SubgraphOutput_std::allocator_CBrushRenderingGraphBuilder::SubgraphOutput___::_Resize__lambda_dff6e1f67755268cd94743775101cf3d___ @ 0x180046844 (std--vector_CBrushRenderingGraphBuilder--SubgraphOutput_std--allocator_CBrushRenderingGraphBuild.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x180046948 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 *     ?_Change_array@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAXQEAUSubgraphOutput@CBrushRenderingGraphBuilder@@_K1@Z @ 0x180046C58 (-_Change_array@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutpu.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180046F4C (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ??4?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800493B4 (--4-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18020B870 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAUIEffectIns.c)
 *     ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020DE48 (-AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180017B68 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x18004217C (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

CRenderingTechniqueFragment *__fastcall CRenderingTechniqueFragment::`scalar deleting destructor'(
        CRenderingTechniqueFragment *this,
        unsigned int a2)
{
  void *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi

  v3 = (void *)*((_QWORD *)this + 14);
  if ( v3 )
    operator delete(v3);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 5);
    if ( v4 != v5 )
    {
      do
      {
        std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(
          (CRenderingTechniqueFragment **)(v4 + 8),
          a2);
        v4 += 16LL;
      }
      while ( v4 != v5 );
      v4 = *((_QWORD *)this + 4);
    }
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 6) - v4) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this);
  operator delete(this);
  return this;
}
