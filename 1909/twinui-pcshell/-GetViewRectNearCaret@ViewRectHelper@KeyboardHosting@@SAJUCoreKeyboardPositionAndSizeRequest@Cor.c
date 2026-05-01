/*
 * XREFs of ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18034F73C
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@0UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x18034D400 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJURect@Foundation@W.c)
 *     ?GetViewRectOverlay@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11W4CoreKeyboardEditControlLineType@45678@PEAU9Foundation@8@@Z @ 0x18034FAE0 (-GetViewRectOverlay@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_GipVerticalCandidateWindowExperience@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800AC5EC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_GipVerticalCandidateWindowExperience.c)
 *     ?_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x18013F57C (-_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x1803401BC (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x18034F45C (-GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@0@Z.c)
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18034F580 (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@UCoreKeyboardPositionAndSizeR.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
        __int128 *a1,
        float *a2,
        __int64 a3,
        const __m128i *a4,
        char a5,
        __int64 a6,
        bool *a7,
        char *a8)
{
  char v8; // di
  __m128 v13; // xmm2
  float v14; // xmm1_4
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  int v18; // eax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __m128i *RelativePosition; // rax
  float v22; // xmm6_4
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  float v26; // xmm7_4
  float v27; // xmm1_4
  float v28; // xmm6_4
  int v29; // eax
  float v30; // xmm2_4
  float v31; // xmm1_4
  bool v32; // cc
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm6_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  __m128i v38; // xmm0
  float v39; // xmm3_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  __int64 result; // rax
  struct _GUID v43; // [rsp+38h] [rbp-B1h] BYREF
  __m128i v44; // [rsp+48h] [rbp-A1h] BYREF
  __m128i v45; // [rsp+58h] [rbp-91h] BYREF
  char *v46; // [rsp+68h] [rbp-81h]
  _OWORD v47[2]; // [rsp+78h] [rbp-71h] BYREF
  __int64 v48; // [rsp+98h] [rbp-51h]
  int v49; // [rsp+A0h] [rbp-49h]
  __m128i v50; // [rsp+A8h] [rbp-41h] BYREF

  v8 = 0;
  *(_QWORD *)&v43.Data1 = 0LL;
  *(_QWORD *)v43.Data4 = 0LL;
  v46 = a8;
  *(_OWORD *)a6 = 0u;
  *a7 = 0;
  *a8 = 0;
  if ( a5 )
  {
    v13 = (__m128)_mm_loadu_si128(a4);
    v43.Data1 = (int)v13.m128_f32[0];
    v14 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
    *(_DWORD *)&v43.Data2 = (int)v14;
    *(_DWORD *)v43.Data4 = (int)(float)(_mm_shuffle_ps(v13, v13, 170).m128_f32[0] + v13.m128_f32[0]);
    *(_DWORD *)&v43.Data4[4] = (int)(float)(_mm_shuffle_ps(v13, v13, 255).m128_f32[0] + v14);
    v50 = (__m128i)v43;
  }
  else
  {
    v15 = *(__m128i *)a3;
    v50 = *a4;
    v45 = v15;
    v50 = *(__m128i *)KeyboardHosting::ViewRectHelper::GetAvoidanceRect(
                        &v44,
                        (struct Windows::Foundation::Rect *)&v45,
                        (struct Windows::Foundation::Rect *)&v50);
  }
  v16 = v50;
  v45 = v50;
  v43 = (struct _GUID)v50;
  if ( !_TlgGuidIsZero(&v43) )
  {
    v17 = *(__m128i *)a2;
    v43.Data1 = *((_DWORD *)a1 + 2);
    v18 = *((_DWORD *)a1 + 1);
    v50 = v16;
    *(_DWORD *)&v43.Data2 = v18;
    v19 = *a1;
    v49 = *((_DWORD *)a1 + 10);
    v44 = v17;
    v20 = a1[1];
    v47[0] = v19;
    *(_QWORD *)&v19 = *((_QWORD *)a1 + 4);
    v47[1] = v20;
    v48 = v19;
    RelativePosition = (__m128i *)KeyboardHosting::ViewRectHelper::GetRelativePosition(
                                    (__int64)&v43,
                                    v47,
                                    (__int64)&v44,
                                    &v50,
                                    *(__int64 *)&v43.Data1);
    v22 = *a2;
    v23 = RelativePosition->m128i_i64[0];
    *(_QWORD *)&v19 = _mm_srli_si128(*RelativePosition, 8).m128i_u64[0];
    v24 = (unsigned int)v19 - (unsigned int)RelativePosition->m128i_i64[0];
    v25 = (unsigned int)(DWORD1(v19) - HIDWORD(RelativePosition->m128i_i64[0]));
    v26 = (float)(int)RelativePosition->m128i_i64[0];
    *(float *)&v19 = (float)(int)(v19 - RelativePosition->m128i_i64[0]);
    v43 = (struct _GUID)*RelativePosition;
    *(_DWORD *)(a6 + 8) = v19;
    v27 = v26;
    *(float *)(a6 + 12) = (float)(int)v25;
    if ( v22 > v26 )
    {
      v26 = v22;
      v27 = v22;
    }
    v28 = (float)(v22 + a2[2]) - (float)(v24 + 1);
    if ( v27 <= v28 )
      v28 = v27;
    if ( a5 && (*((_BYTE *)a1 + 20) & 4) != 0 )
      v28 = *(float *)a4->m128i_i32;
    wil::Feature<__WilFeatureTraits_Feature_GipVerticalCandidateWindowExperience>::ReportUsageToService(v23, v25, v24);
    if ( ((*((_DWORD *)a1 + 5) - 4) & 0xFFFFFFFB) != 0 )
    {
      v29 = *((_DWORD *)a1 + 4);
      if ( *(int *)&v43.Data2 <= v45.m128i_i32[1] )
      {
        v30 = a2[1];
        v31 = (float)(*(_DWORD *)&v43.Data2 - v29);
LABEL_15:
        v32 = v30 <= v31;
LABEL_22:
        if ( v32 )
          v30 = v31;
        *a7 = v26 != v28;
        if ( v31 != v30 )
          v8 = 1;
        *v46 = v8;
        goto LABEL_32;
      }
      v33 = a2[3] + a2[1];
      v31 = (float)(*(_DWORD *)&v43.Data2 + v29);
    }
    else
    {
      v30 = a2[1];
      v31 = (float)*(int *)&v43.Data2;
      if ( v30 > (float)*(int *)&v43.Data2 )
        v31 = a2[1];
      if ( *(int *)&v43.Data2 <= v45.m128i_i32[1] )
        goto LABEL_15;
      v33 = v30 + a2[3];
    }
    v30 = v33 - (float)(*(_DWORD *)&v43.Data4[4] - *(_DWORD *)&v43.Data2 + 1);
    v32 = v31 <= v30;
    goto LABEL_22;
  }
  v34 = a2[1] + a2[3];
  v35 = a2[2] + *a2;
  v36 = (float)*((int *)a1 + 2);
  v37 = (float)*((int *)a1 + 1);
  *(float *)(a6 + 8) = v36;
  v28 = v35 - v36;
  v38 = *(__m128i *)a3;
  v39 = v34 - v37;
  *(float *)(a6 + 12) = v37;
  v44 = v38;
  v30 = v39 - 10.0;
  if ( !KeyboardHosting::IsRectNull((float *)v44.m128i_i32)
    || (v44 = *a4, !KeyboardHosting::IsRectNull((float *)v44.m128i_i32)) )
  {
    v40 = *(float *)(a3 + 4);
    v28 = fminf(v28, (float)*((int *)a1 + 3) + *(float *)a3);
    v41 = (float)*((int *)a1 + 4);
    if ( *((_DWORD *)a1 + 5) == 1 )
      v30 = fmaxf(a2[1], v40 - v41);
    else
      v30 = fminf(v39, v41 + v40);
  }
LABEL_32:
  *(float *)a6 = v28;
  result = 0LL;
  *(float *)(a6 + 4) = v30;
  return result;
}
