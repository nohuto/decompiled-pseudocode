/*
 * XREFs of ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18006FCB0
 * Callers:
 *     ?GetDestinationRect@COcclusionContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180016D24 (-GetDestinationRect@COcclusionContext@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x180016E00 (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064C20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalculateRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EA99C (-CalculateRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?Transform3DBounds@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV2@@Z @ 0x18021D194 (-Transform3DBounds@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x18000D240 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180013300 (-Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPo.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x180015820 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800638F0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsTranslateAndScaleFor2DInput@$00@CMILMatrix@@AEBA_NXZ @ 0x18007086C (--$IsTranslateAndScaleFor2DInput@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x180070944 (--$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x1800709E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall CMILMatrix::Transform3DBoundsHelper<0>(__int64 a1, float *a2, __m128 *a3)
{
  bool v5; // dl
  __int64 v6; // r11
  float v7; // xmm1_4
  char v8; // r8
  float v9; // xmm7_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  unsigned __int8 result; // al
  float v13; // xmm10_4
  __m128 v14; // xmm3
  float v15; // xmm5_4
  __m128 v16; // xmm4
  float v17; // xmm1_4
  __m128 v18; // xmm3
  __m128 v19; // xmm3
  __m128 v20; // xmm3
  float *v21; // r11
  float *v22; // r11
  float v23; // xmm7_4
  float *v24; // r11
  float v25; // xmm0_4
  float v26; // xmm5_4
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm0_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm6_4
  float v33; // xmm0_4
  float v34; // xmm6_4
  float v35; // xmm6_4
  float v36; // xmm6_4
  float v37; // xmm6_4
  float v38; // xmm6_4
  float v39; // xmm6_4
  float v40; // xmm6_4
  float v41; // xmm6_4
  float v42; // xmm6_4
  float v43; // xmm6_4
  float v44; // xmm6_4
  float v45; // xmm6_4
  float v46; // xmm6_4
  float v47; // xmm6_4
  float v48; // xmm6_4
  float v49; // xmm6_4
  float v50; // xmm6_4
  float v51; // xmm6_4
  float v52; // xmm6_4
  float v53; // xmm4_4
  float v54; // xmm2_4
  __int32 v55; // xmm0_4
  float v56; // xmm6_4
  float v57; // xmm4_4
  float v58; // xmm5_4
  float v59; // xmm3_4
  float v60; // xmm1_4
  __m128 v61; // [rsp+28h] [rbp-E0h] BYREF
  __m128 v62; // [rsp+38h] [rbp-D0h] BYREF
  float v63; // [rsp+58h] [rbp-B0h] BYREF
  float v64; // [rsp+5Ch] [rbp-ACh]
  float v65; // [rsp+60h] [rbp-A8h]
  float v66; // [rsp+64h] [rbp-A4h]
  float v67; // [rsp+68h] [rbp-A0h]
  float v68; // [rsp+6Ch] [rbp-9Ch]
  float v69; // [rsp+70h] [rbp-98h]
  float v70; // [rsp+74h] [rbp-94h]
  float v71; // [rsp+78h] [rbp-90h]
  float v72; // [rsp+7Ch] [rbp-8Ch]
  float v73; // [rsp+80h] [rbp-88h]
  float v74; // [rsp+84h] [rbp-84h]
  float v75; // [rsp+88h] [rbp-80h]
  float v76; // [rsp+8Ch] [rbp-7Ch]
  float v77; // [rsp+90h] [rbp-78h]
  float v78; // [rsp+94h] [rbp-74h]
  float v79; // [rsp+98h] [rbp-70h]
  float v80; // [rsp+9Ch] [rbp-6Ch]
  float v81; // [rsp+A0h] [rbp-68h]
  float v82; // [rsp+A4h] [rbp-64h]
  float v83; // [rsp+A8h] [rbp-60h]
  float v84; // [rsp+ACh] [rbp-5Ch]
  float v85; // [rsp+B0h] [rbp-58h]
  float v86; // [rsp+B4h] [rbp-54h]
  _BYTE v87[32]; // [rsp+B8h] [rbp-50h] BYREF

  if ( CMILMatrix::Is2DAffine<1>(a1, 1) )
  {
    v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2[5]) & _xmm);
    if ( v7 < 0.000081380211 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2[4]) & _xmm) < 0.000081380211 )
    {
      v8 = *(_BYTE *)(v6 + 64);
      v9 = *a2;
      v10 = a2[2];
      v11 = a2[1];
      result = (char)(4 * v8) >> 6;
      v13 = a2[3];
      v61.m128_f32[0] = *a2;
      *(unsigned __int64 *)((char *)v61.m128_u64 + 4) = __PAIR64__(LODWORD(v10), LODWORD(v11));
      v61.m128_f32[3] = v13;
      if ( result )
      {
        v5 = result == 1;
      }
      else
      {
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)v6 - 1.0)) & _xmm) >= 0.000081380211
          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v6 + 4) - 0.0)) & _xmm) >= 0.000081380211
          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v6 + 12) - 0.0)) & _xmm) >= 0.000081380211
          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v6 + 16) - 0.0)) & _xmm) >= 0.000081380211
          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v6 + 20) - 1.0)) & _xmm) >= 0.000081380211
          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v6 + 28) - 0.0)) & _xmm) >= 0.000081380211
          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v6 + 60) - 1.0)) & _xmm) >= 0.000081380211 )
        {
          v5 = 0;
        }
        result = 32 * v5;
        *(_BYTE *)(v6 + 64) = v8 ^ (v8 ^ (-16 - 32 * v5)) & 0x30;
        if ( !v5 )
          goto LABEL_21;
        *(_BYTE *)(v6 + 65) &= ~2u;
        *(_BYTE *)(v6 + 65) |= 0x3Du;
      }
      if ( v5 )
      {
        v14 = (__m128)*(unsigned int *)(v6 + 48);
        v14.m128_f32[0] = v14.m128_f32[0] + v9;
        v15 = *(float *)(v6 + 52) + v11;
        v16.m128_f32[0] = *(float *)(v6 + 48) + v10;
        v17 = *(float *)(v6 + 52) + v13;
LABEL_17:
        v18 = _mm_shuffle_ps(v14, v14, 225);
        v18.m128_f32[0] = v15;
        v19 = _mm_shuffle_ps(v18, v18, 198);
        v19.m128_f32[0] = v16.m128_f32[0];
        v20 = _mm_shuffle_ps(v19, v19, 39);
        v20.m128_f32[0] = v17;
        *a3 = _mm_shuffle_ps(v20, v20, 57);
        a3[1].m128_u64[0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        return result;
      }
LABEL_21:
      result = CMILMatrix::IsTranslateAndScaleFor2DInput<1>(v6);
      if ( result )
      {
        v14 = (__m128)*(unsigned int *)v22;
        v16 = v14;
        v14.m128_f32[0] = v14.m128_f32[0] * v9;
        v23 = v22[5];
        v14.m128_f32[0] = v14.m128_f32[0] + v22[12];
        v16.m128_f32[0] = (float)(v16.m128_f32[0] * v10) + v22[12];
        v15 = (float)(v23 * v11) + v22[13];
        v17 = (float)(v23 * v13) + v22[13];
        if ( *v22 <= 0.0 || v23 <= 0.0 )
        {
          v55 = v14.m128_i32[0];
          if ( v14.m128_f32[0] > v16.m128_f32[0] )
          {
            v14 = v16;
            v16.m128_i32[0] = v55;
          }
          if ( v15 > v17 )
          {
            v15 = (float)(v22[5] * v13) + v22[13];
            v17 = (float)(v23 * v11) + v22[13];
          }
        }
      }
      else
      {
        CMILMatrix::Transform2DRectToPerspective(
          (CMILMatrix *)v22,
          (const struct MilRectF *)&v61,
          (struct MilPoint2F *const)v87);
        v61.m128_u64[0] = 4LL;
        v61.m128_u64[1] = (unsigned __int64)v87;
        v62 = v61;
        result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<MilPoint2F>(
                   &v61,
                   &v62);
        v17 = v61.m128_f32[3];
        v16.m128_i32[0] = v61.m128_i32[2];
        v15 = v61.m128_f32[1];
        v14 = (__m128)v61.m128_u32[0];
      }
      goto LABEL_17;
    }
  }
  result = CMILMatrix::IsTranslate<1>(v6);
  if ( result )
  {
    a3->m128_f32[0] = v21[12] + *a2;
    a3->m128_f32[1] = a2[1] + v21[13];
    a3[1].m128_f32[0] = a2[4] + v21[14];
    a3->m128_f32[2] = a2[2] + v21[12];
    a3->m128_f32[3] = a2[3] + v21[13];
    a3[1].m128_f32[1] = a2[5] + v21[14];
    return result;
  }
  result = CMILMatrix::IsTranslateAndScale<1>((__int64)v21);
  if ( result )
  {
    v56 = (float)(*v24 * *a2) + v24[12];
    a3->m128_f32[0] = v56;
    v57 = (float)(a2[1] * v24[5]) + v24[13];
    a3->m128_f32[1] = v57;
    v54 = (float)(a2[4] * v24[10]) + v24[14];
    a3[1].m128_f32[0] = v54;
    v58 = (float)(a2[2] * *v24) + v24[12];
    a3->m128_f32[2] = v58;
    v59 = (float)(a2[3] * v24[5]) + v24[13];
    a3->m128_f32[3] = v59;
    v60 = (float)(a2[5] * v24[10]) + v24[14];
    a3[1].m128_f32[1] = v60;
    if ( *v24 <= 0.0 || v24[5] <= 0.0 || v24[10] <= 0.0 )
    {
      if ( v56 > v58 )
      {
        a3->m128_f32[0] = v58;
        a3->m128_f32[2] = v56;
      }
      if ( v57 > v59 )
      {
        a3->m128_f32[1] = v59;
        a3->m128_f32[3] = v57;
      }
      if ( v54 > v60 )
      {
        a3[1].m128_f32[0] = v60;
LABEL_123:
        a3[1].m128_f32[1] = v54;
      }
    }
  }
  else
  {
    result = (unsigned __int8)CMILMatrix::Transform3DRectToPerspective(v24, a2, &v63);
    v62.m128_u64[0] = 0x7F7FFFFF7F7FFFFFLL;
    v62.m128_u64[1] = 0xFF7FFFFFFF7FFFFFuLL;
    *a3 = v62;
    v25 = v63;
    a3[1].m128_u64[0] = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_3_4028235e38), (__m128)LODWORD(FLOAT_N3_4028235e38)).m128_u64[0];
    v26 = a3->m128_f32[0];
    if ( a3->m128_f32[0] > v25 )
    {
      a3->m128_f32[0] = v25;
      v26 = v25;
    }
    v27 = a3->m128_f32[2];
    if ( v25 > v27 )
    {
      a3->m128_f32[2] = v25;
      v27 = v25;
    }
    v28 = a3->m128_f32[1];
    v29 = v64;
    if ( v28 > v64 )
    {
      a3->m128_f32[1] = v64;
      v28 = v29;
    }
    v30 = a3->m128_f32[3];
    if ( v29 > v30 )
    {
      a3->m128_f32[3] = v29;
      v30 = v29;
    }
    v31 = a3[1].m128_f32[0];
    v32 = v65;
    if ( v31 > v65 )
    {
      a3[1].m128_f32[0] = v65;
      v31 = v32;
    }
    v33 = a3[1].m128_f32[1];
    if ( v32 > v33 )
    {
      a3[1].m128_f32[1] = v32;
      v33 = v32;
    }
    v34 = v66;
    if ( v26 > v66 )
    {
      a3->m128_f32[0] = v66;
      v26 = v34;
    }
    if ( v34 > v27 )
    {
      a3->m128_f32[2] = v34;
      v27 = v34;
    }
    v35 = v67;
    if ( v28 > v67 )
    {
      a3->m128_f32[1] = v67;
      v28 = v35;
    }
    if ( v35 > v30 )
    {
      a3->m128_f32[3] = v35;
      v30 = v35;
    }
    v36 = v68;
    if ( v31 > v68 )
    {
      a3[1].m128_f32[0] = v68;
      v31 = v36;
    }
    if ( v36 > v33 )
    {
      a3[1].m128_f32[1] = v36;
      v33 = v36;
    }
    v37 = v69;
    if ( v26 > v69 )
    {
      a3->m128_f32[0] = v69;
      v26 = v37;
    }
    if ( v37 > v27 )
    {
      a3->m128_f32[2] = v37;
      v27 = v37;
    }
    v38 = v70;
    if ( v28 > v70 )
    {
      a3->m128_f32[1] = v70;
      v28 = v38;
    }
    if ( v38 > v30 )
    {
      a3->m128_f32[3] = v38;
      v30 = v38;
    }
    v39 = v71;
    if ( v31 > v71 )
    {
      a3[1].m128_f32[0] = v71;
      v31 = v39;
    }
    if ( v39 > v33 )
    {
      a3[1].m128_f32[1] = v39;
      v33 = v39;
    }
    v40 = v72;
    if ( v26 > v72 )
    {
      a3->m128_f32[0] = v72;
      v26 = v40;
    }
    if ( v40 > v27 )
    {
      a3->m128_f32[2] = v40;
      v27 = v40;
    }
    v41 = v73;
    if ( v28 > v73 )
    {
      a3->m128_f32[1] = v73;
      v28 = v41;
    }
    if ( v41 > v30 )
    {
      a3->m128_f32[3] = v41;
      v30 = v41;
    }
    v42 = v74;
    if ( v31 > v74 )
    {
      a3[1].m128_f32[0] = v74;
      v31 = v42;
    }
    if ( v42 > v33 )
    {
      a3[1].m128_f32[1] = v42;
      v33 = v42;
    }
    v43 = v75;
    if ( v26 > v75 )
    {
      a3->m128_f32[0] = v75;
      v26 = v43;
    }
    if ( v43 > v27 )
    {
      a3->m128_f32[2] = v43;
      v27 = v43;
    }
    v44 = v76;
    if ( v28 > v76 )
    {
      a3->m128_f32[1] = v76;
      v28 = v44;
    }
    if ( v44 > v30 )
    {
      a3->m128_f32[3] = v44;
      v30 = v44;
    }
    v45 = v77;
    if ( v31 > v77 )
    {
      a3[1].m128_f32[0] = v77;
      v31 = v45;
    }
    if ( v45 > v33 )
    {
      a3[1].m128_f32[1] = v45;
      v33 = v45;
    }
    v46 = v78;
    if ( v26 > v78 )
    {
      a3->m128_f32[0] = v78;
      v26 = v46;
    }
    if ( v46 > v27 )
    {
      a3->m128_f32[2] = v46;
      v27 = v46;
    }
    v47 = v79;
    if ( v28 > v79 )
    {
      a3->m128_f32[1] = v79;
      v28 = v47;
    }
    if ( v47 > v30 )
    {
      a3->m128_f32[3] = v47;
      v30 = v47;
    }
    v48 = v80;
    if ( v31 > v80 )
    {
      a3[1].m128_f32[0] = v80;
      v31 = v48;
    }
    if ( v48 > v33 )
    {
      a3[1].m128_f32[1] = v48;
      v33 = v48;
    }
    v49 = v81;
    if ( v26 > v81 )
    {
      a3->m128_f32[0] = v81;
      v26 = v49;
    }
    if ( v49 > v27 )
    {
      a3->m128_f32[2] = v49;
      v27 = v49;
    }
    v50 = v82;
    if ( v28 > v82 )
    {
      a3->m128_f32[1] = v82;
      v28 = v50;
    }
    if ( v50 > v30 )
    {
      a3->m128_f32[3] = v50;
      v30 = v50;
    }
    v51 = v83;
    if ( v31 > v83 )
    {
      a3[1].m128_f32[0] = v83;
      v31 = v51;
    }
    if ( v51 > v33 )
    {
      a3[1].m128_f32[1] = v51;
      v33 = v51;
    }
    v52 = v84;
    if ( v26 > v84 )
      a3->m128_f32[0] = v84;
    if ( v52 > v27 )
      a3->m128_f32[2] = v52;
    v53 = v85;
    if ( v28 > v85 )
      a3->m128_f32[1] = v85;
    if ( v53 > v30 )
      a3->m128_f32[3] = v53;
    v54 = v86;
    if ( v31 > v86 )
      a3[1].m128_f32[0] = v86;
    if ( v54 > v33 )
      goto LABEL_123;
  }
  return result;
}
