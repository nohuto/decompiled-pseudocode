/*
 * XREFs of ??$find_index@$$CBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@USurfaceDescription@CRenderingTechniqueFragment@@@ranges@@YA_JAEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBUSurfaceDescription@CRenderingTechniqueFragment@@@Z @ 0x180034B6C
 * Callers:
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@W42@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x180037CF8 (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@W42@IAEBV.c)
 * Callees:
 *     ??8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z @ 0x180034B40 (--8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z.c)
 */

__int64 __fastcall ranges::find_index<detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>> const,CRenderingTechniqueFragment::SurfaceDescription>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r10
  __int64 *v3; // r8
  __int64 v4; // rcx
  __int64 i; // r9

  v2 = *a1;
  v3 = a1;
  v4 = v2;
  for ( i = v2; i != v3[1] && !CRenderingTechniqueFragment::SurfaceDescription::operator==(v4, a2); i += 12LL )
    v4 = i + 12;
  return (i - v2) / 12;
}
