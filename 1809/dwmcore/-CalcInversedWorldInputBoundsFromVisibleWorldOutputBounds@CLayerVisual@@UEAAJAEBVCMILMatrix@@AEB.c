/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18000F5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000F7AC (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000FAFC (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x18001028C (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180010364 (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180029760 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800570A0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DBCB0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x18019451C (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801A45F8 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A4868 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 */

__int64 __fastcall CLayerVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        CMILMatrix *a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        _OWORD *a6)
{
  int BoundsWithLayerEffect; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm5_4
  float v17; // xmm2_4
  float v18; // xmm6_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  __m128 v21; // xmm1
  __m128 v22; // xmm2
  int v23; // eax
  unsigned int v24; // ecx
  int ShadowBounds; // eax
  unsigned int v27; // ecx
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm0_4
  float v33; // xmm4_4
  float v34; // xmm0_4
  float v35; // xmm2_4
  __m128 v36; // xmm6
  int v37; // eax
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  float v41; // xmm0_4
  float v42; // xmm2_4
  float v43; // xmm4_4
  float v44; // xmm1_4
  float v45; // xmm1_4
  float v46; // xmm0_4
  float v47; // xmm1_4
  float v48; // xmm2_4
  float v49; // xmm1_4
  float v50; // xmm4_4
  float v51; // xmm3_4
  int v52; // eax
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  float v56; // xmm1_4
  int v57; // eax
  unsigned int v58; // ecx
  int v59; // eax
  unsigned int v60; // ecx
  __int128 v61; // xmm1
  __int64 v62[2]; // [rsp+38h] [rbp-B9h] BYREF
  __int128 v63; // [rsp+48h] [rbp-A9h]
  __int128 v64; // [rsp+58h] [rbp-99h]
  __int128 v65; // [rsp+68h] [rbp-89h]
  int v66; // [rsp+78h] [rbp-79h]
  float v67; // [rsp+88h] [rbp-69h] BYREF
  float v68; // [rsp+8Ch] [rbp-65h]
  float v69; // [rsp+90h] [rbp-61h]
  float v70; // [rsp+94h] [rbp-5Dh]
  float v71; // [rsp+98h] [rbp-59h] BYREF
  float v72; // [rsp+9Ch] [rbp-55h]
  float v73; // [rsp+A0h] [rbp-51h]
  float v74; // [rsp+A4h] [rbp-4Dh]
  __int64 v75[2]; // [rsp+A8h] [rbp-49h] BYREF
  unsigned __int64 v76; // [rsp+B8h] [rbp-39h]
  __int128 v77; // [rsp+C0h] [rbp-31h] BYREF
  unsigned __int64 v78; // [rsp+D0h] [rbp-21h]

  if ( !*(_QWORD *)(a1 + 560) )
  {
    BoundsWithLayerEffect = CLayerVisual::GetBoundsWithLayerEffect(a1, &v67);
    v11 = BoundsWithLayerEffect;
    if ( BoundsWithLayerEffect < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, BoundsWithLayerEffect, 0xE8u);
    }
    else
    {
      CMILMatrix::Transform2DBoundsHelper<1>(a2, &v67, &v67);
      v12 = *(float *)a3;
      v13 = v67;
      if ( *(float *)a3 > v67 )
      {
        v67 = *(float *)a3;
        v13 = v12;
      }
      v14 = v68;
      v15 = *(float *)(a3 + 4);
      v16 = v68;
      if ( v15 > v68 )
      {
        v68 = *(float *)(a3 + 4);
        v14 = v15;
        v16 = v15;
      }
      v17 = v69;
      v18 = v69;
      if ( v69 > *(float *)(a3 + 8) )
      {
        v69 = *(float *)(a3 + 8);
        v17 = v69;
        v18 = v69;
      }
      v19 = v70;
      v20 = v70;
      if ( v70 > *(float *)(a3 + 12) )
      {
        v70 = *(float *)(a3 + 12);
        v19 = v70;
        v20 = v70;
      }
      if ( v18 <= v13 || v20 <= v16 )
      {
        v13 = 0.0;
        v19 = 0.0;
        v17 = 0.0;
        v70 = 0.0;
        v14 = 0.0;
        v69 = 0.0;
        v68 = 0.0;
        v67 = 0.0;
      }
      *((float *)v75 + 1) = v14;
      v21 = (__m128)*(unsigned int *)(a3 + 16);
      v75[1] = __PAIR64__(LODWORD(v19), LODWORD(v17));
      v22 = (__m128)*(unsigned int *)(a3 + 20);
      *(float *)v75 = v13;
      v77 = *(_OWORD *)v75;
      v78 = _mm_unpacklo_ps(v21, v22).m128_u64[0];
      v23 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
              (CLayerVisual *)a1,
              a2,
              (__int64)a5,
              (__int64)a6);
      v11 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xF8u);
    }
    return v11;
  }
  ShadowBounds = CLayerVisual::GetShadowBounds(a1, &v67);
  v11 = ShadowBounds;
  if ( ShadowBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, ShadowBounds, 0x102u);
    return v11;
  }
  if ( CLayerVisual::GetFlatteningToLocalSpace((CLayerVisual *)a1) )
  {
    v37 = *((_DWORD *)a2 + 16);
    v38 = *((_OWORD *)a2 + 1);
    *(_OWORD *)v62 = *(_OWORD *)a2;
    v39 = *((_OWORD *)a2 + 2);
    v66 = v37;
    v63 = v38;
    v40 = *((_OWORD *)a2 + 3);
    v64 = v39;
    v65 = v40;
    v36 = 0LL;
    if ( (unsigned __int8)CMILMatrix::Get2DBoundsUsing2DInverse(v62, a3, &v77) )
    {
      v41 = v67;
      if ( *(float *)&v77 > v67 )
      {
        v67 = *(float *)&v77;
        v41 = *(float *)&v77;
      }
      v42 = v68;
      if ( *((float *)&v77 + 1) > v68 )
      {
        v68 = *((float *)&v77 + 1);
        v42 = *((float *)&v77 + 1);
      }
      v43 = v69;
      if ( v69 > *((float *)&v77 + 2) )
      {
        v69 = *((float *)&v77 + 2);
        v43 = *((float *)&v77 + 2);
      }
      v44 = v70;
      if ( v70 > *((float *)&v77 + 3) )
      {
        v70 = *((float *)&v77 + 3);
        v44 = *((float *)&v77 + 3);
      }
      if ( v43 <= v41 || v44 <= v42 )
      {
        v70 = 0.0;
        v69 = 0.0;
        v68 = 0.0;
        v67 = 0.0;
      }
    }
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v67, &v67);
    v28 = *(float *)a3;
    v29 = v67;
    if ( *(float *)a3 > v67 )
    {
      v67 = *(float *)a3;
      v29 = v28;
    }
    v30 = *(float *)(a3 + 4);
    v31 = v68;
    if ( v30 > v68 )
    {
      v68 = *(float *)(a3 + 4);
      v31 = v30;
    }
    v32 = *(float *)(a3 + 8);
    v33 = v69;
    if ( v69 > v32 )
    {
      v69 = *(float *)(a3 + 8);
      v33 = v32;
    }
    v34 = *(float *)(a3 + 12);
    v35 = v70;
    if ( v70 > v34 )
    {
      v70 = *(float *)(a3 + 12);
      v35 = v34;
    }
    v36 = 0LL;
    if ( v33 <= v29 || v35 <= v31 )
    {
      v70 = 0.0;
      v69 = 0.0;
      v68 = 0.0;
      v67 = 0.0;
    }
  }
  CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(a1, (__int64)v75);
  CLayerVisual::GetMaskBounds((CVisual *)a1);
  if ( !CLayerVisual::GetFlatteningToLocalSpace((CLayerVisual *)a1) )
  {
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v71, &v71);
    v45 = *(float *)a3;
    v46 = v71;
    if ( *(float *)a3 > v71 )
    {
      v71 = *(float *)a3;
      v46 = v45;
    }
    v47 = *(float *)(a3 + 4);
    v48 = v72;
    if ( v47 > v72 )
    {
      v72 = *(float *)(a3 + 4);
      v48 = v47;
    }
    v49 = *(float *)(a3 + 8);
    v50 = v73;
    if ( v73 > v49 )
    {
      v73 = *(float *)(a3 + 8);
      v50 = v49;
    }
    v51 = *(float *)(a3 + 12);
LABEL_60:
    v56 = v74;
    if ( v74 > v51 )
    {
      v74 = v51;
      v56 = v51;
    }
    if ( v50 <= v46 || v56 <= v48 )
    {
      v74 = 0.0;
      v73 = 0.0;
      v72 = 0.0;
      v71 = 0.0;
    }
    goto LABEL_65;
  }
  v52 = *((_DWORD *)a2 + 16);
  v53 = *((_OWORD *)a2 + 1);
  *(_OWORD *)v62 = *(_OWORD *)a2;
  v54 = *((_OWORD *)a2 + 2);
  v66 = v52;
  v63 = v53;
  v55 = *((_OWORD *)a2 + 3);
  v64 = v54;
  v65 = v55;
  if ( (unsigned __int8)CMILMatrix::Get2DBoundsUsing2DInverse(v62, a3, &v67) )
  {
    v46 = v71;
    if ( v67 > v71 )
    {
      v71 = v67;
      v46 = v67;
    }
    v48 = v72;
    if ( v68 > v72 )
    {
      v72 = v68;
      v48 = v68;
    }
    v50 = v73;
    if ( v73 > v69 )
    {
      v73 = v69;
      v50 = v69;
    }
    v51 = v70;
    goto LABEL_60;
  }
LABEL_65:
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v77, &v71);
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v75, &v71);
  if ( CDropShadow::GetMaskForLayerVisualNoRef(*(CDropShadow **)(a1 + 560)) )
  {
    v61 = *(_OWORD *)v75;
    *a5 = v77;
    *a6 = v61;
  }
  else
  {
    v78 = _mm_unpacklo_ps((__m128)*(unsigned int *)(a3 + 16), (__m128)*(unsigned int *)(a3 + 20)).m128_u64[0];
    *(_OWORD *)v75 = v77;
    if ( CLayerVisual::GetFlatteningToLocalSpace((CLayerVisual *)a1) )
    {
      *(_OWORD *)v75 = *(_OWORD *)(a1 + 164);
      v76 = _mm_unpacklo_ps((__m128)0LL, v36).m128_u64[0];
      v57 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
              (CLayerVisual *)a1,
              (CMILMatrix *)&CMILMatrix::Identity,
              (__int64)a5,
              (__int64)a6);
      v11 = v57;
      if ( v57 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x164u);
    }
    else
    {
      v59 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
              (CLayerVisual *)a1,
              a2,
              (__int64)a5,
              (__int64)a6);
      v11 = v59;
      if ( v59 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x170u);
    }
  }
  return v11;
}
