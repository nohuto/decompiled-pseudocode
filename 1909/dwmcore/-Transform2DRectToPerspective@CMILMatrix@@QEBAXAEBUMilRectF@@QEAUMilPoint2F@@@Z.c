/*
 * XREFs of ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x18002A5E0
 * Callers:
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180028F60 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180029740 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029BA0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z @ 0x18024C6F8 (-FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?IsCloseRealOne@@YA_NMM@Z @ 0x180064938 (-IsCloseRealOne@@YA_NMM@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18008B5C0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

void __fastcall CMILMatrix::Transform2DRectToPerspective(
        CMILMatrix *this,
        const struct MilRectF *a2,
        struct MilPoint2F *const a3)
{
  float *v3; // rbx
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm4_4
  float v15; // xmm2_4
  __int64 v16; // r10
  float *v17; // r11
  float v18; // xmm1_4
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm7_4
  float v24; // xmm6_4
  float v25; // xmm3_4
  float v26; // xmm4_4
  float *v27; // r10
  float v28; // xmm5_4
  float v29; // xmm1_4
  __int64 v30; // r10
  float v31; // xmm5_4
  float v32; // xmm1_4
  __int64 v33; // r10
  float v34; // xmm4_4
  float v35; // xmm5_4
  float v36; // xmm2_4
  float v37; // xmm4_4
  float v38; // xmm1_4

  v3 = (float *)a2;
  v4 = *(float *)a2 * *(float *)this;
  v5 = *(float *)a2 * *((float *)this + 1);
  v6 = *((float *)a2 + 1);
  v7 = v6 * *((float *)this + 5);
  v8 = v6 * *((float *)this + 4);
  *(float *)a3 = (float)(v8 + v4) + *((float *)this + 12);
  *((float *)a3 + 1) = (float)(v7 + v5) + *((float *)this + 13);
  v9 = *((float *)a2 + 3);
  v10 = v9 * *((float *)this + 5);
  v11 = v9 * *((float *)this + 4);
  *((float *)a3 + 2) = (float)(v11 + v4) + *((float *)this + 12);
  *((float *)a3 + 3) = (float)(v10 + v5) + *((float *)this + 13);
  v12 = *((float *)a2 + 2);
  LOBYTE(a2) = 1;
  v13 = v12;
  v14 = v12 * *((float *)this + 1);
  v15 = v13 * *(float *)this;
  *((float *)a3 + 4) = (float)(v15 + v11) + *((float *)this + 12);
  *((float *)a3 + 5) = (float)(v14 + v10) + *((float *)this + 13);
  *((float *)a3 + 6) = (float)(v15 + v8) + *((float *)this + 12);
  *((float *)a3 + 7) = (float)(v14 + v7) + *((float *)this + 13);
  if ( !(unsigned __int8)CMILMatrix::Is2DAffine<1>(this, a2) )
  {
    v18 = v17[15];
    v19 = v17[7] * v3[1];
    v20 = v17[7] * v3[3];
    v21 = v17[3] * *v3;
    v22 = v17[3] * v3[2];
    v23 = (float)(v19 + v21) + v18;
    v24 = (float)(v20 + v21) + v18;
    v25 = (float)(v20 + v22) + v18;
    v26 = (float)(v19 + v22) + v18;
    if ( v23 < 0.000081380211 || v24 < 0.000081380211 || v25 < 0.000081380211 || v26 < 0.000081380211 )
    {
      if ( v23 >= -0.000081380211 || v24 >= -0.000081380211 || v25 >= -0.000081380211 || v26 >= -0.000081380211 )
      {
        *(_DWORD *)v16 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *(_DWORD *)(v16 + 4) = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
        *(_DWORD *)(v16 + 8) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *(_DWORD *)(v16 + 12) = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
        *(_DWORD *)(v16 + 16) = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
        *(_DWORD *)(v16 + 20) = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
        *(_DWORD *)(v16 + 24) = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
        v38 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      }
      else
      {
        *(_QWORD *)v16 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *(_DWORD *)(v16 + 8) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *(_DWORD *)(v16 + 12) = HIDWORD(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        *(_QWORD *)(v16 + 16) = *((_QWORD *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
        *(_DWORD *)(v16 + 24) = DWORD2(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v38 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
      }
      goto LABEL_20;
    }
    if ( !IsCloseRealOne(v23, 0.000081380211) )
    {
      v29 = v27[1] / v23;
      *v27 = *v27 / v23;
      v27[1] = v29;
    }
    if ( !IsCloseRealOne(v24, v28) )
    {
      v32 = *(float *)(v30 + 12) / v24;
      *(float *)(v30 + 8) = *(float *)(v30 + 8) / v24;
      *(float *)(v30 + 12) = v32;
    }
    if ( !IsCloseRealOne(v25, v31) )
    {
      v36 = *(float *)(v33 + 20) / v25;
      *(float *)(v33 + 16) = *(float *)(v33 + 16) / v25;
      *(float *)(v33 + 20) = v36;
    }
    if ( !IsCloseRealOne(v34, v35) )
    {
      v38 = *(float *)(v16 + 28) / v37;
      *(float *)(v16 + 24) = *(float *)(v16 + 24) / v37;
LABEL_20:
      *(float *)(v16 + 28) = v38;
    }
  }
}
