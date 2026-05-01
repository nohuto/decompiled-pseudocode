/*
 * XREFs of ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x1802CF6A8
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@0UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x1802CD4B0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJURect@Foundation@W.c)
 *     ?GetViewRectOverlay@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11W4CoreKeyboardEditControlLineType@45678@PEAU9Foundation@8@@Z @ 0x1802CF9D8 (-GetViewRectOverlay@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1800FA5BC (-_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x1802C2F10 (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x1802CF41C (-GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@0@Z.c)
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x1802CF540 (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@UCoreKeyboardPositionAndSizeR.c)
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
  char v8; // bl
  __m128 v13; // xmm2
  float v14; // xmm1_4
  struct _GUID v15; // xmm1
  struct _GUID v16; // xmm0
  __int128 v17; // xmm1
  int v18; // eax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __m128i *RelativePosition; // rax
  __m128i v22; // xmm1
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // xmm0_8
  unsigned __int64 v25; // rcx
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  bool v30; // cc
  float v31; // xmm2_4
  __int64 result; // rax
  struct _GUID v33; // [rsp+30h] [rbp-91h] BYREF
  __m128i v34; // [rsp+40h] [rbp-81h] BYREF
  char *v35; // [rsp+50h] [rbp-71h]
  __int128 v36; // [rsp+60h] [rbp-61h] BYREF
  _OWORD v37[2]; // [rsp+70h] [rbp-51h] BYREF
  __int64 v38; // [rsp+90h] [rbp-31h]
  int v39; // [rsp+98h] [rbp-29h]
  struct _GUID v40; // [rsp+A0h] [rbp-21h] BYREF

  v8 = 0;
  *(_QWORD *)&v33.Data1 = 0LL;
  *(_QWORD *)v33.Data4 = 0LL;
  v35 = a8;
  *(_OWORD *)a6 = 0u;
  *a7 = 0;
  *a8 = 0;
  if ( a5 )
  {
    v13 = (__m128)_mm_loadu_si128(a4);
    v33.Data1 = (int)v13.m128_f32[0];
    v14 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
    *(_DWORD *)&v33.Data2 = (int)v14;
    *(_DWORD *)v33.Data4 = (int)(float)(_mm_shuffle_ps(v13, v13, 170).m128_f32[0] + v13.m128_f32[0]);
    *(_DWORD *)&v33.Data4[4] = (int)(float)(_mm_shuffle_ps(v13, v13, 255).m128_f32[0] + v14);
    v40 = v33;
  }
  else
  {
    v15 = *(struct _GUID *)a3;
    v40 = (struct _GUID)*a4;
    v33 = v15;
    v40 = *(struct _GUID *)KeyboardHosting::ViewRectHelper::GetAvoidanceRect(
                             &v34,
                             (struct Windows::Foundation::Rect *)&v33,
                             (struct Windows::Foundation::Rect *)&v40);
  }
  v16 = v40;
  v34 = (__m128i)v40;
  v33 = v40;
  if ( _TlgGuidIsZero(&v33) )
  {
    *(float *)(a6 + 8) = (float)*((int *)a1 + 2);
    *(float *)(a6 + 12) = (float)*((int *)a1 + 1);
    v27 = (float)(a2[2] + *a2) - (float)*((int *)a1 + 2);
    v31 = (float)(a2[1] + a2[3]) - (float)*((int *)a1 + 1);
    v34 = *(__m128i *)a3;
    v28 = v31 - 10.0;
    if ( !KeyboardHosting::IsRectNull((float *)v34.m128i_i32)
      || (v34 = *a4, !KeyboardHosting::IsRectNull((float *)v34.m128i_i32)) )
    {
      v27 = fminf(v27, (float)*((int *)a1 + 3) + *(float *)a3);
      v28 = fmaxf(a2[1], *(float *)(a3 + 4) - (float)*((int *)a1 + 4));
    }
  }
  else
  {
    v17 = *(_OWORD *)a2;
    *(_QWORD *)&v33.Data1 = 0LL;
    v33.Data1 = *((_DWORD *)a1 + 2);
    v18 = *((_DWORD *)a1 + 1);
    v40 = v16;
    *(_DWORD *)&v33.Data2 = v18;
    v19 = *a1;
    v39 = *((_DWORD *)a1 + 10);
    v36 = v17;
    v20 = a1[1];
    v37[0] = v19;
    *(_QWORD *)&v19 = *((_QWORD *)a1 + 4);
    v37[1] = v20;
    v38 = v19;
    RelativePosition = (__m128i *)KeyboardHosting::ViewRectHelper::GetRelativePosition(
                                    (__int64)&v33,
                                    (__int64)v37,
                                    (__int64)&v36,
                                    &v40,
                                    *(__int64 *)&v33.Data1);
    v22 = *RelativePosition;
    v23 = RelativePosition->m128i_i64[0];
    v24 = _mm_srli_si128(v22, 8).m128i_u64[0];
    v25 = HIDWORD(v23);
    v26 = (float)(int)v23;
    *(float *)(a6 + 8) = (float)((int)v24 - (int)v23);
    *(float *)(a6 + 12) = (float)(HIDWORD(v24) - HIDWORD(v23));
    if ( *a2 > (float)(int)v23 )
      v26 = *a2;
    v27 = (float)(*a2 + a2[2]) - (float)((int)v24 - (int)v23 + 1);
    if ( v26 <= v27 )
      v27 = v26;
    LODWORD(v23) = *((_DWORD *)a1 + 4);
    if ( (int)v25 > v34.m128i_i32[1] )
    {
      v29 = (float)((int)v25 + (int)v23);
      v28 = (float)(a2[3] + a2[1]) - (float)(HIDWORD(v24) - HIDWORD(v23) + 1);
      v30 = v29 <= v28;
    }
    else
    {
      v28 = a2[1];
      v29 = (float)((int)v25 - (int)v23);
      v30 = v28 <= v29;
    }
    if ( v30 )
      v28 = v29;
    *a7 = v26 != v27;
    if ( v29 != v28 )
      v8 = 1;
    *v35 = v8;
  }
  *(float *)a6 = v27;
  result = 0LL;
  *(float *)(a6 + 4) = v28;
  return result;
}
