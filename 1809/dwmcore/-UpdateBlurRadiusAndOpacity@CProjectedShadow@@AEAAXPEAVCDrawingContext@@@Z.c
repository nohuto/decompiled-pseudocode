/*
 * XREFs of ?UpdateBlurRadiusAndOpacity@CProjectedShadow@@AEAAXPEAVCDrawingContext@@@Z @ 0x1801CC680
 * Callers:
 *     ?DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801C8900 (-DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x1801AD950 (-GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalculateOpacity@CProjectedShadowScene@@QEAAMM@Z @ 0x1801AFAB8 (-CalculateOpacity@CProjectedShadowScene@@QEAAMM@Z.c)
 */

void __fastcall CProjectedShadow::UpdateBlurRadiusAndOpacity(CProjectedShadow *this, const struct CVisualTree **a2)
{
  float v4; // xmm7_4
  float v5; // xmm6_4
  float EffectiveAlpha; // xmm0_4
  float *v7; // rbx
  float v8; // xmm0_4
  float v9; // xmm0_4

  v4 = *((float *)this + 41);
  v5 = CProjectedShadowScene::CalculateOpacity(*((CProjectedShadowScene **)this + 11), v4);
  EffectiveAlpha = CProjectedShadowCaster::GetEffectiveAlpha(*((CProjectedShadowCaster **)this + 9), a2[757], 0LL);
  v7 = (float *)*((_QWORD *)this + 11);
  *((float *)this + 25) = EffectiveAlpha * v5;
  v8 = fmaxf(v7[26], v4 * v7[20]);
  v9 = fminf(v7[24], v8);
  if ( v9 != *((float *)this + 24) )
  {
    *((float *)this + 24) = v9;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 48);
  }
}
