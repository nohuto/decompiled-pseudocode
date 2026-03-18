/*
 * XREFs of ??A?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@QEBAAEBW4ShaderLinkingArgument@@_J@Z @ 0x1800E021C
 * Callers:
 *     LinkLightShader @ 0x1800213E8 (LinkLightShader.c)
 *     ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800DF74C (-FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V-$span@$$CBW4ShaderLinki.c)
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x1800DFE34 (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTech.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::span<enum ShaderLinkingArgument const,-1>::operator[](__int64 *a1, __int64 a2)
{
  if ( a2 < 0 || a2 >= *a1 )
  {
    gsl::details::terminate((gsl::details *)a1);
    JUMPOUT(0x1800E023CLL);
  }
  return a1[1] + 2 * a2;
}
