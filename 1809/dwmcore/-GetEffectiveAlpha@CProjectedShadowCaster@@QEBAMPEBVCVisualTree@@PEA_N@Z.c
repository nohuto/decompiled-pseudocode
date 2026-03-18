/*
 * XREFs of ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x1801AD950
 * Callers:
 *     ?TryGetCutoutRect@CProjectedShadowCaster@@QEBA_NPEBVCVisualTree@@HPEAUD2D_RECT_F@@PEA_N@Z @ 0x1801AE228 (-TryGetCutoutRect@CProjectedShadowCaster@@QEBA_NPEBVCVisualTree@@HPEAUD2D_RECT_F@@PEA_N@Z.c)
 *     ?UpdateBlurRadiusAndOpacity@CProjectedShadow@@AEAAXPEAVCDrawingContext@@@Z @ 0x1801CC680 (-UpdateBlurRadiusAndOpacity@CProjectedShadow@@AEAAXPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x1801AE650 (-at@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@PEBVCVisualTree@@.c)
 */

float __fastcall CProjectedShadowCaster::GetEffectiveAlpha(
        CProjectedShadowCaster *this,
        const struct CVisualTree *a2,
        bool *a3)
{
  _BYTE *v4; // rax
  const struct CVisualTree *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v4 = (_BYTE *)std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at((char *)this + 96, &v6);
  if ( a3 )
    *a3 = v4[16];
  return *(float *)v4;
}
