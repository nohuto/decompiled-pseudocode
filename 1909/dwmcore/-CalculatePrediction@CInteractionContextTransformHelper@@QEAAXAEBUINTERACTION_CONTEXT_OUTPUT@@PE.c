/*
 * XREFs of ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z @ 0x18025CC74
 * Callers:
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x180233E10 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180066EA0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _anonymous_namespace_::operator_ @ 0x18025CC0C (_anonymous_namespace_--operator_.c)
 *     ?TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z @ 0x18025D628 (-TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z.c)
 */

void __fastcall CInteractionContextTransformHelper::CalculatePrediction(
        CInteractionContextTransformHelper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2,
        __m128 *a3,
        const struct tagRECT *a4,
        unsigned int a5,
        float a6,
        float a7,
        float *a8,
        float *a9)
{
  __m128 *v10; // rcx
  __m128 v12; // xmm0
  __m128 v13; // xmm13
  __int32 v14; // r14d
  float *v15; // rax
  __int64 v16; // r8
  _DWORD *v17; // r9
  __int128 *v18; // r10
  float v19; // xmm4_4
  __m128 v20; // xmm3
  int v21; // r11d
  float v22; // xmm15_4
  __int64 v23; // xmm1_8
  float v24; // xmm3_4
  float v25; // xmm15_4
  float v26; // xmm11_4
  float v27; // xmm10_4
  float v28; // xmm12_4
  __m128i v29; // xmm7
  int v30; // eax
  float v31; // xmm9_4
  __int128 v32; // xmm0
  float v33; // xmm8_4
  float v34; // xmm7_4
  __int64 v35; // r10
  char v36; // r11
  __int128 v37; // xmm0
  __int64 v38; // r10
  __int128 v39; // xmm0
  __int64 v40; // r10
  __int128 v41; // xmm0
  float v42; // xmm4_4
  float v43; // xmm2_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm4_4
  __int64 v47; // xmm1_8
  float v48; // xmm4_4
  __int64 v49; // xmm3_8
  float v50; // xmm1_4
  float v51; // [rsp+38h] [rbp-D0h] BYREF
  float v52; // [rsp+3Ch] [rbp-CCh] BYREF
  float v53; // [rsp+40h] [rbp-C8h] BYREF
  float v54; // [rsp+44h] [rbp-C4h] BYREF
  float v55; // [rsp+48h] [rbp-C0h] BYREF
  float v56; // [rsp+4Ch] [rbp-BCh] BYREF
  float v57; // [rsp+50h] [rbp-B8h]
  __m128 v58; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v59[3]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+80h] [rbp-88h]

  v10 = (__m128 *)((char *)this + 176);
  if ( (*((_BYTE *)a2 + 4) & 1) != 0 )
  {
    v58.m128_u64[0] = 0LL;
    LODWORD(v59[0]) = 0;
    v58.m128_u64[1] = 1065353216LL;
    v12 = v58;
    *((_BYTE *)this + 196) = 0;
    *v10 = v12;
    v10[1].m128_i32[0] = 0;
    *((_BYTE *)this + 197) = a5 == 1;
  }
  else
  {
    *((_BYTE *)this + 197) &= a5 == 1;
  }
  if ( !a3 )
    a3 = v10;
  v13 = *a3;
  v14 = a3[1].m128_i32[0];
  LODWORD(v59[0]) = v14;
  v58 = v13;
  v15 = anonymous_namespace_::operator_((float *)&v59[1], v58.m128_f32, (float *)this + 44);
  v20 = *(__m128 *)v15;
  *(float *)&v60 = v15[4];
  *a8 = v20.m128_f32[0] + a6;
  *a9 = _mm_shuffle_ps(v20, v20, 85).m128_f32[0] + a7;
  if ( *(_DWORD *)a2 == v21 && *((_DWORD *)a2 + 2) == 2 && v17 )
  {
    v22 = *((float *)a2 + 10);
    v23 = *((_QWORD *)v18 + 2);
    v24 = v22 + v13.m128_f32[0];
    v25 = v22 - *((float *)a2 + 5);
    v26 = *(float *)v16;
    v27 = *((float *)a2 + 11) - *((float *)a2 + 6);
    v28 = *((float *)v18 + 45);
    v29 = _mm_cvtsi32_si128(v17[2] - *v17);
    v30 = v17[3] - v17[1];
    v31 = *((float *)a2 + 11) + _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
    v51 = v25;
    v32 = *v18;
    v33 = (float)v30 - v19;
    v57 = v27;
    v52 = v27;
    v34 = _mm_cvtepi32_ps(v29).m128_f32[0] - v19;
    v53 = v26;
    v54 = v28;
    v55 = v24;
    v56 = v31;
    *(_OWORD *)&v59[1] = v32;
    v60 = v23;
    if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v59[1]) )
    {
      v37 = *(_OWORD *)(v35 + 48);
      v60 = *(_QWORD *)(v35 + 64);
      *(_OWORD *)&v59[1] = v37;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v59[1],
        v24,
        v31,
        &v55,
        &v56);
      v39 = *(_OWORD *)(v38 + 48);
      v60 = *(_QWORD *)(v38 + 64);
      *(_OWORD *)&v59[1] = v39;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v59[1],
        v25,
        v27,
        &v51,
        &v52);
      v41 = *(_OWORD *)(v40 + 48);
      v60 = *(_QWORD *)(v40 + 64);
      *(_OWORD *)&v59[1] = v41;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v59[1],
        v26,
        v28,
        &v53,
        &v54);
      v25 = v51;
      v26 = v53;
      v28 = v54;
      v24 = v55;
      v31 = v56;
      v57 = v52;
    }
    if ( !*(_BYTE *)(v35 + 197)
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v24) & _xmm) <= v34
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v31) & _xmm) <= v33 )
    {
      v36 = 0;
    }
    if ( v36 )
    {
      if ( *(_BYTE *)(v35 + 196) )
      {
        *a8 = 0.0;
        *a9 = 0.0;
      }
      else
      {
        v42 = v31;
        v43 = v24;
        v44 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v24) & _xmm);
        if ( v44 > v34 )
        {
          v24 = v34;
          if ( v43 < 0.0 )
            LODWORD(v24) = LODWORD(v34) ^ _xmm;
          v42 = (float)(v31 * v24) / v43;
        }
        v45 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v42) & _xmm);
        if ( v45 > v33 )
        {
          v42 = v33;
          if ( v31 < 0.0 )
            LODWORD(v42) = LODWORD(v33) ^ _xmm;
          v24 = (float)(v43 * v42) / v31;
        }
        v46 = v42 - (float)(v28 + v57);
        *a8 = v24 - (float)(v26 + v25);
        *a9 = v46;
        v47 = *(_QWORD *)(v35 + 16);
        *(_OWORD *)&v59[1] = *(_OWORD *)v35;
        v60 = v47;
        if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v59[1]) )
        {
          v49 = *(_QWORD *)(v35 + 88);
          v50 = *a8;
          *(_OWORD *)&v59[1] = *(_OWORD *)(v35 + 72);
          v60 = v49;
          CInteractionContextTransformHelper::TransformDirection(
            (const struct D2D1::Matrix3x2F *)&v59[1],
            v50,
            v48,
            a8,
            a9);
        }
      }
    }
    *(_BYTE *)(v35 + 196) = v36;
  }
  *(__m128 *)v16 = v13;
  *(_DWORD *)(v16 + 16) = v14;
}
