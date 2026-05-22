/*
 * XREFs of ?PopulateTargetingData@MPCSixDofProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800F11F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002F774 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x180059D84 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SixDoF@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800F3AE0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SixDoF@@@wil@@CA-AW4wil_deta.c)
 */

void __fastcall MPCSixDofProcessor::PopulateTargetingData(
        MPCSixDofProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  float v6; // eax
  float v7; // xmm12_4
  float v8; // xmm14_4
  float v9; // xmm15_4
  float *v10; // rax
  float v11; // xmm2_4
  float v12; // xmm10_4
  float v13; // xmm7_4
  float v14; // xmm9_4
  __int64 v15; // xmm0_8
  float v16; // xmm8_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  float v20; // xmm10_4
  float v21; // xmm9_4
  float v22; // xmm7_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm3_4
  float v26; // xmm3_4
  __int64 v27; // xmm0_8
  int v28; // eax
  float v29; // xmm1_4
  __int64 v30; // xmm0_8
  int v31; // eax
  int v32; // eax
  __m128 v33; // xmm13
  __m128 v34; // xmm10
  __m128 v35; // xmm11
  __m128 v36; // xmm8
  __m128 v37; // xmm9
  float v38; // xmm5_4
  float v39; // xmm7_4
  float v40; // xmm6_4
  float v41; // xmm4_4
  float v42; // xmm0_4
  float v43; // xmm3_4
  __m128 v44; // xmm12
  __m128 v45; // xmm2
  float v46; // xmm1_4
  unsigned __int64 v47; // xmm0_8
  float v48; // xmm5_4
  float v49; // xmm1_4
  __m128 v50; // xmm3
  __m128 v51; // xmm2
  __m128 v52; // xmm1
  __m128 v53; // xmm0
  __int128 v54; // [rsp+38h] [rbp-99h] BYREF
  __int64 v55; // [rsp+48h] [rbp-89h] BYREF
  float v56; // [rsp+50h] [rbp-81h]
  float v57; // [rsp+58h] [rbp-79h] BYREF
  float v58; // [rsp+138h] [rbp+67h]
  __int16 v59; // [rsp+13Ch] [rbp+6Bh]
  float v60; // [rsp+140h] [rbp+6Fh] BYREF
  __int16 v61; // [rsp+144h] [rbp+73h]
  float v62; // [rsp+148h] [rbp+77h]
  float v63; // [rsp+150h] [rbp+7Fh]

  *((_BYTE *)a3 + 500) = 1;
  *((_DWORD *)a3 + 134) = *((_DWORD *)a3 + 289);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SixDoF>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SixDoF>::GetCachedFeatureEnabledState();
  LOBYTE(v59) = 3;
  v60 = 0.0;
  v61 = v59;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_SixDoF>::GetFeaturePropertyCache'::`2'::data,
    0xAC02ABu,
    (const struct FEATURE_LOGGED_TRAITS *)&v60,
    1,
    3);
  if ( *((_BYTE *)a3 + 1380) && *((_BYTE *)a3 + 1381) )
  {
    v55 = 0LL;
    *((_BYTE *)this + 4680) = 1;
    v6 = *((float *)a3 + 344);
    *(_QWORD *)&v54 = *((_QWORD *)a3 + 171);
    v7 = v6;
    v8 = *(float *)&v54;
    v9 = *((float *)&v54 + 1);
    v54 = *(_OWORD *)((char *)a3 + 1352);
    v58 = v6;
    v56 = FLOAT_N1_0;
    v10 = Windows::Foundation::Numerics::transform(&v57, (float *)&v55, (float *)&v54);
    v11 = *((float *)a2 + 4);
    v12 = *(float *)a2;
    v13 = v9 * *((float *)a2 + 5);
    v14 = *(float *)a2;
    v15 = *(_QWORD *)v10;
    v16 = *((float *)a2 + 8);
    v17 = *((float *)a2 + 6);
    v18 = *((float *)a2 + 2);
    v19 = *((float *)a2 + 10);
    *(float *)&v10 = v10[2];
    *(_QWORD *)&v54 = v15;
    DWORD2(v54) = (_DWORD)v10;
    v62 = *(float *)&v15;
    v63 = *((float *)&v15 + 1);
    v20 = (float)(v12 * *(float *)&v15) + (float)(v11 * *((float *)&v15 + 1));
    v21 = (float)((float)((float)(v14 * v8) + (float)(v11 * v9)) + (float)(v16 * v7)) + *((float *)a2 + 12);
    v22 = (float)((float)(v13 + (float)(v8 * *((float *)a2 + 1))) + (float)(v7 * *((float *)a2 + 9)))
        + *((float *)a2 + 13);
    v23 = (float)(*((float *)&v15 + 1) * *((float *)a2 + 5)) + (float)(*(float *)&v15 * *((float *)a2 + 1));
    v60 = *(float *)&v10;
    v24 = *(float *)&v10 * *((float *)a2 + 9);
    v25 = (float)((float)((float)(v9 * v17) + (float)(v8 * v18)) + (float)(v7 * v19)) + *((float *)a2 + 14);
    *((float *)a3 + 135) = v21;
    *((float *)a3 + 136) = v22;
    *((float *)a3 + 137) = v25;
    *((float *)a3 + 139) = v23 + v24;
    *((float *)a3 + 138) = v20 + (float)(v16 * *(float *)&v10);
    v26 = (float)((float)(*((float *)&v15 + 1) * v17) + (float)(*(float *)&v15 * v18)) + (float)(v60 * v19);
  }
  else
  {
    *((_BYTE *)this + 4680) = 0;
    *((_BYTE *)a3 + 500) = 1;
    v27 = *((_QWORD *)a2 + 16);
    v56 = *((float *)a2 + 34);
    v7 = v56;
    DWORD2(v54) = *((_DWORD *)a2 + 37);
    v28 = *((_DWORD *)a2 + 38);
    v29 = *((float *)&v54 + 2);
    v55 = v27;
    v30 = *(_QWORD *)((char *)a2 + 140);
    v9 = *((float *)&v55 + 1);
    v8 = *(float *)&v55;
    *((_DWORD *)a3 + 135) = v28;
    *((_DWORD *)a3 + 136) = *((_DWORD *)a2 + 39);
    *((_DWORD *)a3 + 137) = *((_DWORD *)a2 + 40);
    v31 = *((_DWORD *)a2 + 41);
    *(_QWORD *)&v54 = v30;
    *((_DWORD *)a3 + 138) = v31;
    v32 = *((_DWORD *)a2 + 42);
    v63 = *((float *)&v30 + 1);
    LODWORD(v30) = v54;
    *((_DWORD *)a3 + 139) = v32;
    v26 = *((float *)a2 + 43);
    v58 = v7;
    v60 = v29;
    v62 = *(float *)&v30;
  }
  *((float *)a3 + 140) = v26;
  v33 = *((__m128 *)a2 + 84);
  v34 = *((__m128 *)a2 + 85);
  v35 = *((__m128 *)a2 + 86);
  v36 = *((__m128 *)a2 + 87);
  v37 = v33;
  v38 = _mm_shuffle_ps(v33, v33, 170).m128_f32[0];
  v39 = _mm_shuffle_ps(v34, v34, 85).m128_f32[0];
  v40 = _mm_shuffle_ps(v35, v35, 85).m128_f32[0];
  v41 = _mm_shuffle_ps(v34, v34, 170).m128_f32[0];
  v42 = v35.m128_f32[0] * v7;
  v43 = _mm_shuffle_ps(v35, v35, 170).m128_f32[0];
  v44 = _mm_shuffle_ps(v33, v33, 85);
  v45 = v44;
  v37.m128_f32[0] = (float)((float)((float)(v33.m128_f32[0] * v8) + (float)(v34.m128_f32[0] * v9)) + v42)
                  + v36.m128_f32[0];
  v45.m128_f32[0] = (float)((float)((float)(v44.m128_f32[0] * v8) + (float)(v39 * v9)) + (float)(v40 * v58))
                  + _mm_shuffle_ps(v36, v36, 85).m128_f32[0];
  v46 = (float)((float)(v38 * v8) + (float)(v41 * v9)) + (float)(v43 * v58);
  v47 = _mm_unpacklo_ps(v37, v45).m128_u64[0];
  v45.m128_f32[0] = v60;
  *((_QWORD *)this + 528) = v47;
  v33.m128_f32[0] = v33.m128_f32[0] * v62;
  v44.m128_f32[0] = v44.m128_f32[0] * v62;
  v48 = v38 * v62;
  v56 = v46 + _mm_shuffle_ps(v36, v36, 170).m128_f32[0];
  v49 = v63;
  *((float *)this + 1058) = v56;
  v33.m128_f32[0] = (float)(v33.m128_f32[0] + (float)(v34.m128_f32[0] * v49))
                  + (float)(v35.m128_f32[0] * v45.m128_f32[0]);
  v44.m128_f32[0] = (float)(v44.m128_f32[0] + (float)(v39 * v49)) + (float)(v40 * v45.m128_f32[0]);
  *(_QWORD *)((char *)this + 4236) = _mm_unpacklo_ps(v33, v44).m128_u64[0];
  v56 = (float)(v48 + (float)(v41 * v49)) + (float)(v43 * v45.m128_f32[0]);
  *((float *)this + 1061) = v56;
  v50 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 4236), (__m128)*((unsigned int *)this + 1061));
  v51 = _mm_mul_ps(v50, v50);
  v52 = _mm_shuffle_ps(v51, v51, 102);
  v51.m128_f32[0] = (float)(v51.m128_f32[0] + v52.m128_f32[0]) + _mm_shuffle_ps(v52, v52, 85).m128_f32[0];
  v53 = _mm_div_ps(v50, _mm_sqrt_ps(_mm_shuffle_ps(v51, v51, 0)));
  *(_QWORD *)((char *)this + 4236) = _mm_unpacklo_ps(v53, _mm_shuffle_ps(v53, v53, 85)).m128_u64[0];
  *((_DWORD *)this + 1061) = _mm_shuffle_ps(v53, v53, 170).m128_u32[0];
}
