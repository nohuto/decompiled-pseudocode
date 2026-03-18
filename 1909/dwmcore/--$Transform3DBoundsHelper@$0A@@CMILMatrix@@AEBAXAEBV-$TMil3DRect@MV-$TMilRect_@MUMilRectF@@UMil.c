/*
 * XREFs of ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180028F60
 * Callers:
 *     ?GetDestinationRect@COcclusionContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800156D0 (-GetDestinationRect@COcclusionContext@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x1800157AC (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DCD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083B20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalculateRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800ECB94 (-CalculateRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?Transform3DBounds@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV2@@Z @ 0x18021BAA4 (-Transform3DBounds@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180010644 (-Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPo.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x18001429C (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x180021F50 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleFor2DInput@$00@CMILMatrix@@AEBA_NXZ @ 0x180029A2C (--$IsTranslateAndScaleFor2DInput@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x180029B04 (--$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x18002A5E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18008B5C0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x1800A301C (-IsCloseRealZero@@YA_NMM@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

char __fastcall CMILMatrix::Transform3DBoundsHelper<0>(__int64 a1, float *a2, __m128 *a3)
{
  float *v3; // rdi
  __int64 v5; // r11
  char v6; // dl
  char v7; // r8
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm9_4
  char result; // al
  float v12; // xmm10_4
  bool v13; // dl
  __m128 v14; // xmm3
  float v15; // xmm5_4
  __m128 v16; // xmm4
  float v17; // xmm1_4
  float *v18; // r11
  float v19; // xmm7_4
  __int32 v20; // xmm0_4
  __m128 v21; // xmm3
  __m128 v22; // xmm3
  __m128 v23; // xmm3
  float *v24; // r11
  float *v25; // r11
  float v26; // xmm6_4
  float v27; // xmm4_4
  float v28; // xmm2_4
  float v29; // xmm5_4
  float v30; // xmm3_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm5_4
  float v34; // xmm4_4
  float v35; // xmm3_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  float v39; // xmm6_4
  float v40; // xmm0_4
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
  float v53; // xmm6_4
  float v54; // xmm6_4
  float v55; // xmm6_4
  float v56; // xmm6_4
  float v57; // xmm6_4
  float v58; // xmm6_4
  float v59; // xmm6_4
  float v60; // xmm4_4
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

  v3 = a2;
  LOBYTE(a2) = 1;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(a1, a2)
    && IsCloseRealZero(v3[5], 0.000081380211)
    && IsCloseRealZero(v3[4], 0.000081380211) )
  {
    v7 = *(_BYTE *)(v5 + 64);
    v8 = *v3;
    v9 = v3[2];
    v10 = v3[1];
    result = (char)(4 * v7) >> 6;
    v12 = v3[3];
    v61.m128_f32[0] = *v3;
    *(unsigned __int64 *)((char *)v61.m128_u64 + 4) = __PAIR64__(LODWORD(v9), LODWORD(v10));
    v61.m128_f32[3] = v12;
    if ( result )
    {
      v13 = result == v6;
    }
    else
    {
      v13 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)v5 - 1.0)) & _xmm) < 0.000081380211
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v5 + 4) - 0.0)) & _xmm) < 0.000081380211
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v5 + 12) - 0.0)) & _xmm) < 0.000081380211
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v5 + 16) - 0.0)) & _xmm) < 0.000081380211
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v5 + 20) - 1.0)) & _xmm) < 0.000081380211
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v5 + 28) - 0.0)) & _xmm) < 0.000081380211
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v5 + 60) - 1.0)) & _xmm) < 0.000081380211;
      result = 32 * v13;
      *(_BYTE *)(v5 + 64) = v7 ^ (v7 ^ (-16 - 32 * v13)) & 0x30;
      if ( !v13 )
        goto LABEL_19;
      *(_BYTE *)(v5 + 65) &= ~2u;
      *(_BYTE *)(v5 + 65) |= 0x3Du;
    }
    if ( v13 )
    {
      v14 = (__m128)*(unsigned int *)(v5 + 48);
      v14.m128_f32[0] = v14.m128_f32[0] + v8;
      v15 = *(float *)(v5 + 52) + v10;
      v16.m128_f32[0] = *(float *)(v5 + 48) + v9;
      v17 = *(float *)(v5 + 52) + v12;
LABEL_27:
      v21 = _mm_shuffle_ps(v14, v14, 225);
      v21.m128_f32[0] = v15;
      v22 = _mm_shuffle_ps(v21, v21, 198);
      v22.m128_f32[0] = v16.m128_f32[0];
      v23 = _mm_shuffle_ps(v22, v22, 39);
      v23.m128_f32[0] = v17;
      *a3 = _mm_shuffle_ps(v23, v23, 57);
      a3[1].m128_u64[0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      return result;
    }
LABEL_19:
    result = CMILMatrix::IsTranslateAndScaleFor2DInput<1>(v5);
    if ( result )
    {
      v14 = (__m128)*(unsigned int *)v18;
      v16 = v14;
      v14.m128_f32[0] = v14.m128_f32[0] * v8;
      v19 = v18[5];
      v14.m128_f32[0] = v14.m128_f32[0] + v18[12];
      v16.m128_f32[0] = (float)(v16.m128_f32[0] * v9) + v18[12];
      v15 = (float)(v19 * v10) + v18[13];
      v17 = (float)(v19 * v12) + v18[13];
      if ( *v18 <= 0.0 || v19 <= 0.0 )
      {
        v20 = v14.m128_i32[0];
        if ( v14.m128_f32[0] > v16.m128_f32[0] )
        {
          v14 = v16;
          v16.m128_i32[0] = v20;
        }
        if ( v15 > v17 )
        {
          v15 = (float)(v18[5] * v12) + v18[13];
          v17 = (float)(v19 * v10) + v18[13];
        }
      }
    }
    else
    {
      CMILMatrix::Transform2DRectToPerspective(
        (CMILMatrix *)v18,
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
    goto LABEL_27;
  }
  result = CMILMatrix::IsTranslate<1>(v5);
  if ( result )
  {
    a3->m128_f32[0] = *v3 + v24[12];
    a3->m128_f32[1] = v3[1] + v24[13];
    a3[1].m128_f32[0] = v3[4] + v24[14];
    a3->m128_f32[2] = v3[2] + v24[12];
    a3->m128_f32[3] = v3[3] + v24[13];
    a3[1].m128_f32[1] = v3[5] + v24[14];
    return result;
  }
  result = CMILMatrix::IsTranslateAndScale<1>((__int64)v24);
  if ( result )
  {
    v26 = (float)(*v3 * *v25) + v25[12];
    a3->m128_f32[0] = v26;
    v27 = (float)(v3[1] * v25[5]) + v25[13];
    a3->m128_f32[1] = v27;
    v28 = (float)(v3[4] * v25[10]) + v25[14];
    a3[1].m128_f32[0] = v28;
    v29 = (float)(v3[2] * *v25) + v25[12];
    a3->m128_f32[2] = v29;
    v30 = (float)(v3[3] * v25[5]) + v25[13];
    a3->m128_f32[3] = v30;
    v31 = (float)(v3[5] * v25[10]) + v25[14];
    a3[1].m128_f32[1] = v31;
    if ( *v25 <= 0.0 || v25[5] <= 0.0 || v25[10] <= 0.0 )
    {
      if ( v26 > v29 )
      {
        a3->m128_f32[0] = v29;
        a3->m128_f32[2] = v26;
      }
      if ( v27 > v30 )
      {
        a3->m128_f32[1] = v30;
        a3->m128_f32[3] = v27;
      }
      if ( v28 > v31 )
      {
        a3[1].m128_f32[0] = v31;
LABEL_135:
        a3[1].m128_f32[1] = v28;
      }
    }
  }
  else
  {
    result = CMILMatrix::Transform3DRectToPerspective(v25, v3, &v63);
    v62.m128_u64[0] = 0x7F7FFFFF7F7FFFFFLL;
    v62.m128_u64[1] = 0xFF7FFFFFFF7FFFFFuLL;
    *a3 = v62;
    v32 = v63;
    a3[1].m128_u64[0] = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_3_4028235e38), (__m128)LODWORD(FLOAT_N3_4028235e38)).m128_u64[0];
    v33 = a3->m128_f32[0];
    if ( a3->m128_f32[0] > v32 )
    {
      a3->m128_f32[0] = v32;
      v33 = v32;
    }
    v34 = a3->m128_f32[2];
    if ( v32 > v34 )
    {
      a3->m128_f32[2] = v32;
      v34 = v32;
    }
    v35 = a3->m128_f32[1];
    v36 = v64;
    if ( v35 > v64 )
    {
      a3->m128_f32[1] = v64;
      v35 = v36;
    }
    v37 = a3->m128_f32[3];
    if ( v36 > v37 )
    {
      a3->m128_f32[3] = v36;
      v37 = v36;
    }
    v38 = a3[1].m128_f32[0];
    v39 = v65;
    if ( v38 > v65 )
    {
      a3[1].m128_f32[0] = v65;
      v38 = v39;
    }
    v40 = a3[1].m128_f32[1];
    if ( v39 > v40 )
    {
      a3[1].m128_f32[1] = v39;
      v40 = v39;
    }
    v41 = v66;
    if ( v33 > v66 )
    {
      a3->m128_f32[0] = v66;
      v33 = v41;
    }
    if ( v41 > v34 )
    {
      a3->m128_f32[2] = v41;
      v34 = v41;
    }
    v42 = v67;
    if ( v35 > v67 )
    {
      a3->m128_f32[1] = v67;
      v35 = v42;
    }
    if ( v42 > v37 )
    {
      a3->m128_f32[3] = v42;
      v37 = v42;
    }
    v43 = v68;
    if ( v38 > v68 )
    {
      a3[1].m128_f32[0] = v68;
      v38 = v43;
    }
    if ( v43 > v40 )
    {
      a3[1].m128_f32[1] = v43;
      v40 = v43;
    }
    v44 = v69;
    if ( v33 > v69 )
    {
      a3->m128_f32[0] = v69;
      v33 = v44;
    }
    if ( v44 > v34 )
    {
      a3->m128_f32[2] = v44;
      v34 = v44;
    }
    v45 = v70;
    if ( v35 > v70 )
    {
      a3->m128_f32[1] = v70;
      v35 = v45;
    }
    if ( v45 > v37 )
    {
      a3->m128_f32[3] = v45;
      v37 = v45;
    }
    v46 = v71;
    if ( v38 > v71 )
    {
      a3[1].m128_f32[0] = v71;
      v38 = v46;
    }
    if ( v46 > v40 )
    {
      a3[1].m128_f32[1] = v46;
      v40 = v46;
    }
    v47 = v72;
    if ( v33 > v72 )
    {
      a3->m128_f32[0] = v72;
      v33 = v47;
    }
    if ( v47 > v34 )
    {
      a3->m128_f32[2] = v47;
      v34 = v47;
    }
    v48 = v73;
    if ( v35 > v73 )
    {
      a3->m128_f32[1] = v73;
      v35 = v48;
    }
    if ( v48 > v37 )
    {
      a3->m128_f32[3] = v48;
      v37 = v48;
    }
    v49 = v74;
    if ( v38 > v74 )
    {
      a3[1].m128_f32[0] = v74;
      v38 = v49;
    }
    if ( v49 > v40 )
    {
      a3[1].m128_f32[1] = v49;
      v40 = v49;
    }
    v50 = v75;
    if ( v33 > v75 )
    {
      a3->m128_f32[0] = v75;
      v33 = v50;
    }
    if ( v50 > v34 )
    {
      a3->m128_f32[2] = v50;
      v34 = v50;
    }
    v51 = v76;
    if ( v35 > v76 )
    {
      a3->m128_f32[1] = v76;
      v35 = v51;
    }
    if ( v51 > v37 )
    {
      a3->m128_f32[3] = v51;
      v37 = v51;
    }
    v52 = v77;
    if ( v38 > v77 )
    {
      a3[1].m128_f32[0] = v77;
      v38 = v52;
    }
    if ( v52 > v40 )
    {
      a3[1].m128_f32[1] = v52;
      v40 = v52;
    }
    v53 = v78;
    if ( v33 > v78 )
    {
      a3->m128_f32[0] = v78;
      v33 = v53;
    }
    if ( v53 > v34 )
    {
      a3->m128_f32[2] = v53;
      v34 = v53;
    }
    v54 = v79;
    if ( v35 > v79 )
    {
      a3->m128_f32[1] = v79;
      v35 = v54;
    }
    if ( v54 > v37 )
    {
      a3->m128_f32[3] = v54;
      v37 = v54;
    }
    v55 = v80;
    if ( v38 > v80 )
    {
      a3[1].m128_f32[0] = v80;
      v38 = v55;
    }
    if ( v55 > v40 )
    {
      a3[1].m128_f32[1] = v55;
      v40 = v55;
    }
    v56 = v81;
    if ( v33 > v81 )
    {
      a3->m128_f32[0] = v81;
      v33 = v56;
    }
    if ( v56 > v34 )
    {
      a3->m128_f32[2] = v56;
      v34 = v56;
    }
    v57 = v82;
    if ( v35 > v82 )
    {
      a3->m128_f32[1] = v82;
      v35 = v57;
    }
    if ( v57 > v37 )
    {
      a3->m128_f32[3] = v57;
      v37 = v57;
    }
    v58 = v83;
    if ( v38 > v83 )
    {
      a3[1].m128_f32[0] = v83;
      v38 = v58;
    }
    if ( v58 > v40 )
    {
      a3[1].m128_f32[1] = v58;
      v40 = v58;
    }
    v59 = v84;
    if ( v33 > v84 )
      a3->m128_f32[0] = v84;
    if ( v59 > v34 )
      a3->m128_f32[2] = v59;
    v60 = v85;
    if ( v35 > v85 )
      a3->m128_f32[1] = v85;
    if ( v60 > v37 )
      a3->m128_f32[3] = v60;
    v28 = v86;
    if ( v38 > v86 )
      a3[1].m128_f32[0] = v86;
    if ( v28 > v40 )
      goto LABEL_135;
  }
  return result;
}
