/*
 * XREFs of ??$find_index@$$CBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@USurfaceDescription@CRenderingTechniqueFragment@@@ranges@@YA_JAEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBUSurfaceDescription@CRenderingTechniqueFragment@@@Z @ 0x1800DFB9C
 * Callers:
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x1800E0190 (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@IAEBV-$ve.c)
 * Callees:
 *     ??8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z @ 0x1800E1BE4 (--8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z.c)
 */

__int64 __fastcall ranges::find_index<detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>> const,CRenderingTechniqueFragment::SurfaceDescription>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // r10
  _QWORD *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // r9

  v2 = *a1;
  v3 = a1;
  v4 = v2;
  v5 = v2;
  v6 = v2;
  v7 = v2;
  while ( v5 != v3[1] )
  {
    if ( (unsigned __int8)CRenderingTechniqueFragment::SurfaceDescription::operator==(v4, a2, v3, v6) )
      return (v9 - v2) / 28;
    v4 = v8 + 28;
    v5 = v4;
    v6 = v4;
    v7 = v4;
  }
  v9 = v7;
  return (v9 - v2) / 28;
}
