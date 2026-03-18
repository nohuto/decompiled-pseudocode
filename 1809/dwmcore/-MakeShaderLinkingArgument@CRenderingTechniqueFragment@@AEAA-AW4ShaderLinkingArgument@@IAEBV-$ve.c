/*
 * XREFs of ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x1800E0190
 * Callers:
 *     ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x1800DFAC0 (-CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTechni.c)
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x1800DFE34 (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTech.c)
 * Callees:
 *     ??$find_index@$$CBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@USurfaceDescription@CRenderingTechniqueFragment@@@ranges@@YA_JAEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBUSurfaceDescription@CRenderingTechniqueFragment@@@Z @ 0x1800DFB9C (--$find_index@$$CBV-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_im.c)
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x1800E19F4 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::MakeShaderLinkingArgument(
        CRenderingTechniqueFragment *a1,
        const struct CBrushRenderingGraph *a2,
        _QWORD **a3,
        _QWORD *a4)
{
  __int64 v5; // r11
  _QWORD *i; // rax
  _QWORD *v7; // rcx
  __int16 v8; // ax
  __int64 v9; // rcx
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 16LL * (unsigned int)a2 + 8);
  if ( v5 )
  {
    for ( i = *a3; ; ++i )
    {
      v7 = i;
      if ( i == a3[1] )
        break;
      if ( *i == v5 )
        goto LABEL_5;
    }
    v7 = i;
LABEL_5:
    v8 = 1280;
    v9 = v7 - *a3;
  }
  else
  {
    CRenderingTechniqueFragment::GetSurfaceDescription(
      a1,
      a2,
      (unsigned int)a2,
      (struct CRenderingTechniqueFragment::SurfaceDescription *)v11);
    v8 = ranges::find_index<detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>> const,CRenderingTechniqueFragment::SurfaceDescription>(
           a4,
           (__int64)v11);
    LOWORD(v9) = 512;
  }
  return (unsigned __int16)(v8 | v9);
}
