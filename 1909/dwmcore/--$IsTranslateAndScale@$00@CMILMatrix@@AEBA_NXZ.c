/*
 * XREFs of ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x18001429C
 * Callers:
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x180004448 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180028F60 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029BA0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800816B4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x1801845A0 (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsTranslateAndScale<1>(__int64 a1)
{
  char v1; // r9
  bool v3; // r8
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  char v15; // cl

  v1 = *(_BYTE *)(a1 + 64);
  v3 = 0;
  if ( v1 >> 6 )
    return v1 >> 6 == 1;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 4) - 0.0)) & _xmm);
  if ( v5 < 0.000081380211 )
  {
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 8) - 0.0)) & _xmm);
    if ( v6 < 0.000081380211 )
    {
      v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 12) - 0.0)) & _xmm);
      if ( v7 < 0.000081380211 )
      {
        v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 16) - 0.0)) & _xmm);
        if ( v8 < 0.000081380211 )
        {
          v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 24) - 0.0)) & _xmm);
          if ( v9 < 0.000081380211 )
          {
            v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 28) - 0.0)) & _xmm);
            if ( v10 < 0.000081380211 )
            {
              v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 32) - 0.0)) & _xmm);
              if ( v11 < 0.000081380211 )
              {
                v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 36) - 0.0)) & _xmm);
                if ( v12 < 0.000081380211 )
                {
                  v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 44) - 0.0)) & _xmm);
                  if ( v13 < 0.000081380211 )
                  {
                    v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 60) - 1.0)) & _xmm);
                    v3 = v14 < 0.000081380211;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(_BYTE *)(a1 + 65) &= 0xFCu;
  v15 = 2 * v3 - 1;
  *(_BYTE *)(a1 + 65) |= v15 & 3;
  *(_BYTE *)(a1 + 64) = v1 & 0x3F | (v15 << 6);
  return v3;
}
