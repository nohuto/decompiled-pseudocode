/*
 * XREFs of ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x1800E19F4
 * Callers:
 *     ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800DFFC0 (-CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x1800E0190 (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@IAEBV-$ve.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800E0B98 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 * Callees:
 *     ?IsDisplacementRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAMPEAW4Enum@ChannelSelector@@1PEAI@Z @ 0x1800E1A6C (-IsDisplacementRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAMPEAW4Enum@ChannelSelecto.c)
 *     ?IsUVClampingRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAW4Enum@ExtendMode@@0@Z @ 0x1800E1B40 (-IsUVClampingRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAW4Enum@ExtendMode@@0@Z.c)
 */

void __fastcall CRenderingTechniqueFragment::GetSurfaceDescription(
        CRenderingTechniqueFragment *this,
        const struct CBrushRenderingGraph *a2,
        unsigned int a3,
        struct CRenderingTechniqueFragment::SurfaceDescription *a4)
{
  *(_QWORD *)a4 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * a3);
  *((_BYTE *)a4 + 10) = CRenderingTechniqueFragment::IsUVClampingRequiredForInput(
                          this,
                          a3,
                          (struct CRenderingTechniqueFragment::SurfaceDescription *)((char *)a4 + 8),
                          (struct CRenderingTechniqueFragment::SurfaceDescription *)((char *)a4 + 9));
  *((_BYTE *)a4 + 24) = CRenderingTechniqueFragment::IsDisplacementRequiredForInput(
                          this,
                          a3,
                          (float *)a4 + 3,
                          (struct CRenderingTechniqueFragment::SurfaceDescription *)((char *)a4 + 16),
                          (struct CRenderingTechniqueFragment::SurfaceDescription *)((char *)a4 + 17),
                          (unsigned int *)a4 + 5);
}
