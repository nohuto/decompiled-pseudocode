/*
 * XREFs of ?DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801C8900
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B30B0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetFinalColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x1801CA7E0 (-GetFinalColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAAJPEBVCDrawingContext@@PEA_N@Z @ 0x1801CB5B4 (-IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAAJPEBVCDrawingContext@@PEA_N@Z.c)
 *     ?IsValid@CProjectedShadow@@AEAA_NPEBVCVisualTree@@@Z @ 0x1801CBC7C (-IsValid@CProjectedShadow@@AEAA_NPEBVCVisualTree@@@Z.c)
 *     ?UpdateBlurRadiusAndOpacity@CProjectedShadow@@AEAAXPEAVCDrawingContext@@@Z @ 0x1801CC680 (-UpdateBlurRadiusAndOpacity@CProjectedShadow@@AEAAXPEAVCDrawingContext@@@Z.c)
 *     ?UpdateTransforms@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801CC728 (-UpdateTransforms@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::DrawAsDrawList(
        CProjectedShadow *this,
        const struct CVisualTree **a2,
        float *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v10; // ebx
  __int64 v11; // rbp
  __int64 v12; // r15
  int updated; // eax
  __int64 v14; // rcx
  int IsCasterInBetweenLightAndReceiver; // eax
  __int64 v16; // rcx
  float v17; // xmm1_4
  int v18; // eax
  __int64 v19; // rcx
  struct _D3DCOLORVALUE v21; // [rsp+30h] [rbp-38h] BYREF
  bool v22; // [rsp+70h] [rbp+8h] BYREF

  v10 = 0;
  v11 = *(_QWORD *)(*((_QWORD *)this + 9) + 56LL);
  v12 = *(_QWORD *)(*((_QWORD *)this + 10) + 56LL);
  if ( CProjectedShadow::IsValid(this, a2[757])
    && v12 != v11
    && *(float *)(v11 + 132) >= 0.5
    && *(float *)(v11 + 136) >= 0.5
    && *a3 >= 0.5
    && a3[1] >= 0.5 )
  {
    updated = CProjectedShadow::UpdateTransforms(this, (struct CDrawingContext *)a2);
    v10 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, updated, 0xBDu);
    }
    else
    {
      IsCasterInBetweenLightAndReceiver = CProjectedShadow::IsCasterInBetweenLightAndReceiver(
                                            this,
                                            (const struct CDrawingContext *)a2,
                                            &v22);
      v10 = IsCasterInBetweenLightAndReceiver;
      if ( IsCasterInBetweenLightAndReceiver < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, IsCasterInBetweenLightAndReceiver, 0xC4u);
      }
      else if ( v22 )
      {
        CProjectedShadow::UpdateBlurRadiusAndOpacity(this, (struct CDrawingContext *)a2);
        v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(CProjectedShadow::GetFinalColor(
                                                    this,
                                                    &v21,
                                                    (struct CDrawingContext *)a2)->a) & _xmm);
        if ( v17 >= 0.0000011920929 )
        {
          v18 = CSpriteVisualContent::DrawAsDrawList((__int64)this, (__int64)a2, a3, a4, a5, a6);
          v10 = v18;
          if ( v18 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xD7u);
        }
      }
    }
  }
  return v10;
}
