/*
 * XREFs of ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800DB300
 * Callers:
 *     ?GetDestinationRect@COcclusionContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180014B40 (-GetDestinationRect@COcclusionContext@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x180015790 (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x18003A040 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180043690 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x180009AB0 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x18000A7B4 (-Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPo.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x180013D28 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18003E3F0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsTranslateAndScaleFor2DInput@$00@CMILMatrix@@AEBA_NXZ @ 0x1800DBFD0 (--$IsTranslateAndScaleFor2DInput@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x1800DC434 (--$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x1800DC524 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
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
  __int32 v24; // xmm0_4
  float *v25; // r11
  float v26; // xmm0_4
  float v27; // xmm5_4
  float v28; // xmm4_4
  float v29; // xmm3_4
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm6_4
  float v34; // xmm0_4
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
  float v53; // xmm6_4
  float v54; // xmm4_4
  float v55; // xmm2_4
  float v56; // xmm7_4
  float v57; // xmm5_4
  float v58; // xmm3_4
  float v59; // xmm6_4
  float v60; // xmm4_4
  float v61; // xmm2_4
  __m128 v62; // [rsp+28h] [rbp-E0h] BYREF
  __m128 v63; // [rsp+38h] [rbp-D0h] BYREF
  float v64; // [rsp+58h] [rbp-B0h] BYREF
  float v65; // [rsp+5Ch] [rbp-ACh]
  float v66; // [rsp+60h] [rbp-A8h]
  float v67; // [rsp+64h] [rbp-A4h]
  float v68; // [rsp+68h] [rbp-A0h]
  float v69; // [rsp+6Ch] [rbp-9Ch]
  float v70; // [rsp+70h] [rbp-98h]
  float v71; // [rsp+74h] [rbp-94h]
  float v72; // [rsp+78h] [rbp-90h]
  float v73; // [rsp+7Ch] [rbp-8Ch]
  float v74; // [rsp+80h] [rbp-88h]
  float v75; // [rsp+84h] [rbp-84h]
  float v76; // [rsp+88h] [rbp-80h]
  float v77; // [rsp+8Ch] [rbp-7Ch]
  float v78; // [rsp+90h] [rbp-78h]
  float v79; // [rsp+94h] [rbp-74h]
  float v80; // [rsp+98h] [rbp-70h]
  float v81; // [rsp+9Ch] [rbp-6Ch]
  float v82; // [rsp+A0h] [rbp-68h]
  float v83; // [rsp+A4h] [rbp-64h]
  float v84; // [rsp+A8h] [rbp-60h]
  float v85; // [rsp+ACh] [rbp-5Ch]
  float v86; // [rsp+B0h] [rbp-58h]
  float v87; // [rsp+B4h] [rbp-54h]
  _BYTE v88[32]; // [rsp+B8h] [rbp-50h] BYREF

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
      v62.m128_f32[0] = *a2;
      *(unsigned __int64 *)((char *)v62.m128_u64 + 4) = __PAIR64__(LODWORD(v10), LODWORD(v11));
      v62.m128_f32[3] = v13;
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
LABEL_16:
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
          v24 = v14.m128_i32[0];
          if ( v14.m128_f32[0] > v16.m128_f32[0] )
          {
            v14 = v16;
            v16.m128_i32[0] = v24;
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
          (const struct MilRectF *)&v62,
          (struct MilPoint2F *const)v88);
        v62.m128_u64[0] = 4LL;
        v62.m128_u64[1] = (unsigned __int64)v88;
        v63 = v62;
        result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<MilPoint2F>(
                   &v62,
                   &v63);
        v17 = v62.m128_f32[3];
        v16.m128_i32[0] = v62.m128_i32[2];
        v15 = v62.m128_f32[1];
        v14 = (__m128)v62.m128_u32[0];
      }
      goto LABEL_16;
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
  }
  else
  {
    result = CMILMatrix::IsTranslateAndScale<1>((__int64)v21);
    if ( result )
    {
      v56 = (float)(*v25 * *a2) + v25[12];
      a3->m128_f32[0] = v56;
      v57 = (float)(a2[1] * v25[5]) + v25[13];
      a3->m128_f32[1] = v57;
      v58 = (float)(a2[4] * v25[10]) + v25[14];
      a3[1].m128_f32[0] = v58;
      v59 = (float)(a2[2] * *v25) + v25[12];
      a3->m128_f32[2] = v59;
      v60 = (float)(a2[3] * v25[5]) + v25[13];
      a3->m128_f32[3] = v60;
      v61 = (float)(a2[5] * v25[10]) + v25[14];
      a3[1].m128_f32[1] = v61;
      if ( *v25 <= 0.0 || v25[5] <= 0.0 || v25[10] <= 0.0 )
      {
        if ( v56 > v59 )
        {
          a3->m128_f32[0] = v59;
          a3->m128_f32[2] = v56;
        }
        if ( v57 > v60 )
        {
          a3->m128_f32[1] = v60;
          a3->m128_f32[3] = v57;
        }
        if ( v58 > v61 )
        {
          a3[1].m128_f32[0] = v61;
          a3[1].m128_f32[1] = v58;
        }
      }
    }
    else
    {
      result = (unsigned __int8)CMILMatrix::Transform3DRectToPerspective(v25, a2, &v64);
      v63.m128_u64[0] = 0x7F7FFFFF7F7FFFFFLL;
      v63.m128_u64[1] = 0xFF7FFFFFFF7FFFFFuLL;
      *a3 = v63;
      v26 = v64;
      a3[1].m128_u64[0] = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_3_4028235e38), (__m128)LODWORD(FLOAT_N3_4028235e38)).m128_u64[0];
      v27 = a3->m128_f32[0];
      if ( a3->m128_f32[0] > v26 )
      {
        a3->m128_f32[0] = v26;
        v27 = v26;
      }
      v28 = a3->m128_f32[2];
      if ( v26 > v28 )
      {
        a3->m128_f32[2] = v26;
        v28 = v26;
      }
      v29 = a3->m128_f32[1];
      v30 = v65;
      if ( v29 > v65 )
      {
        a3->m128_f32[1] = v65;
        v29 = v30;
      }
      v31 = a3->m128_f32[3];
      if ( v30 > v31 )
      {
        a3->m128_f32[3] = v30;
        v31 = v30;
      }
      v32 = a3[1].m128_f32[0];
      v33 = v66;
      if ( v32 > v66 )
      {
        a3[1].m128_f32[0] = v66;
        v32 = v33;
      }
      v34 = a3[1].m128_f32[1];
      if ( v33 > v34 )
      {
        a3[1].m128_f32[1] = v33;
        v34 = v33;
      }
      v35 = v67;
      if ( v27 > v67 )
      {
        a3->m128_f32[0] = v67;
        v27 = v35;
      }
      if ( v35 > v28 )
      {
        a3->m128_f32[2] = v35;
        v28 = v35;
      }
      v36 = v68;
      if ( v29 > v68 )
      {
        a3->m128_f32[1] = v68;
        v29 = v36;
      }
      if ( v36 > v31 )
      {
        a3->m128_f32[3] = v36;
        v31 = v36;
      }
      v37 = v69;
      if ( v32 > v69 )
      {
        a3[1].m128_f32[0] = v69;
        v32 = v37;
      }
      if ( v37 > v34 )
      {
        a3[1].m128_f32[1] = v37;
        v34 = v37;
      }
      v38 = v70;
      if ( v27 > v70 )
      {
        a3->m128_f32[0] = v70;
        v27 = v38;
      }
      if ( v38 > v28 )
      {
        a3->m128_f32[2] = v38;
        v28 = v38;
      }
      v39 = v71;
      if ( v29 > v71 )
      {
        a3->m128_f32[1] = v71;
        v29 = v39;
      }
      if ( v39 > v31 )
      {
        a3->m128_f32[3] = v39;
        v31 = v39;
      }
      v40 = v72;
      if ( v32 > v72 )
      {
        a3[1].m128_f32[0] = v72;
        v32 = v40;
      }
      if ( v40 > v34 )
      {
        a3[1].m128_f32[1] = v40;
        v34 = v40;
      }
      v41 = v73;
      if ( v27 > v73 )
      {
        a3->m128_f32[0] = v73;
        v27 = v41;
      }
      if ( v41 > v28 )
      {
        a3->m128_f32[2] = v41;
        v28 = v41;
      }
      v42 = v74;
      if ( v29 > v74 )
      {
        a3->m128_f32[1] = v74;
        v29 = v42;
      }
      if ( v42 > v31 )
      {
        a3->m128_f32[3] = v42;
        v31 = v42;
      }
      v43 = v75;
      if ( v32 > v75 )
      {
        a3[1].m128_f32[0] = v75;
        v32 = v43;
      }
      if ( v43 > v34 )
      {
        a3[1].m128_f32[1] = v43;
        v34 = v43;
      }
      v44 = v76;
      if ( v27 > v76 )
      {
        a3->m128_f32[0] = v76;
        v27 = v44;
      }
      if ( v44 > v28 )
      {
        a3->m128_f32[2] = v44;
        v28 = v44;
      }
      v45 = v77;
      if ( v29 > v77 )
      {
        a3->m128_f32[1] = v77;
        v29 = v45;
      }
      if ( v45 > v31 )
      {
        a3->m128_f32[3] = v45;
        v31 = v45;
      }
      v46 = v78;
      if ( v32 > v78 )
      {
        a3[1].m128_f32[0] = v78;
        v32 = v46;
      }
      if ( v46 > v34 )
      {
        a3[1].m128_f32[1] = v46;
        v34 = v46;
      }
      v47 = v79;
      if ( v27 > v79 )
      {
        a3->m128_f32[0] = v79;
        v27 = v47;
      }
      if ( v47 > v28 )
      {
        a3->m128_f32[2] = v47;
        v28 = v47;
      }
      v48 = v80;
      if ( v29 > v80 )
      {
        a3->m128_f32[1] = v80;
        v29 = v48;
      }
      if ( v48 > v31 )
      {
        a3->m128_f32[3] = v48;
        v31 = v48;
      }
      v49 = v81;
      if ( v32 > v81 )
      {
        a3[1].m128_f32[0] = v81;
        v32 = v49;
      }
      if ( v49 > v34 )
      {
        a3[1].m128_f32[1] = v49;
        v34 = v49;
      }
      v50 = v82;
      if ( v27 > v82 )
      {
        a3->m128_f32[0] = v82;
        v27 = v50;
      }
      if ( v50 > v28 )
      {
        a3->m128_f32[2] = v50;
        v28 = v50;
      }
      v51 = v83;
      if ( v29 > v83 )
      {
        a3->m128_f32[1] = v83;
        v29 = v51;
      }
      if ( v51 > v31 )
      {
        a3->m128_f32[3] = v51;
        v31 = v51;
      }
      v52 = v84;
      if ( v32 > v84 )
      {
        a3[1].m128_f32[0] = v84;
        v32 = v52;
      }
      if ( v52 > v34 )
      {
        a3[1].m128_f32[1] = v52;
        v34 = v52;
      }
      v53 = v85;
      if ( v27 > v85 )
        a3->m128_f32[0] = v85;
      if ( v53 > v28 )
        a3->m128_f32[2] = v53;
      v54 = v86;
      if ( v29 > v86 )
        a3->m128_f32[1] = v86;
      if ( v54 > v31 )
        a3->m128_f32[3] = v54;
      v55 = v87;
      if ( v32 > v87 )
        a3[1].m128_f32[0] = v87;
      if ( v55 > v34 )
        a3[1].m128_f32[1] = v55;
    }
  }
  return result;
}
