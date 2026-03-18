/*
 * XREFs of ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x1800BF9EC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x18001F4C4 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800C0A0C (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x180219A48 (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Multiply(CExpressionValueStack *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // r14d
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 *v6; // rdi
  CExpressionValue *v7; // rax
  float *v8; // rbx
  __int64 v9; // rcx
  CExpressionValue *v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int128 v13; // xmm1
  unsigned int v14; // r9d
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  float v17; // xmm2_4
  float v18; // xmm3_4
  __m128 v19; // xmm4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm3_4
  __m128 v27; // xmm2
  float v28; // xmm0_4
  __m128 v29; // xmm4
  __m128 v30; // xmm3
  float v31; // eax
  __m128 v32; // xmm2
  __m128 v33; // xmm1
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm0_4
  int v38; // eax
  unsigned int v39; // ecx
  __int128 v41; // [rsp+30h] [rbp-49h] BYREF
  __int64 v42; // [rsp+48h] [rbp-31h]
  float v43; // [rsp+50h] [rbp-29h]
  _OWORD v44[5]; // [rsp+60h] [rbp-19h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( v2 < 2 )
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v2,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x436u);
    return v3;
  }
  v4 = *((_DWORD *)this + 12);
  v5 = v2 - 2;
  v3 = 0;
  v6 = (__int64 *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v5 < v4 )
  {
    v8 = (float *)(*((_QWORD *)this + 3) + 80 * v5);
  }
  else
  {
    v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v44);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v44);
    v2 = *((_DWORD *)this + 4);
    v8 = (float *)&CExpressionValueStack::s_emptyValue;
    v4 = *((_DWORD *)this + 12);
  }
  v9 = v2 - 1;
  if ( (unsigned int)v9 < v4 )
  {
    v6 = (__int64 *)(*((_QWORD *)this + 3) + 80 * v9);
  }
  else
  {
    v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v44);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v44);
  }
  v11 = *((_DWORD *)v8 + 18);
  v12 = *((_DWORD *)v6 + 18);
  if ( v11 == v12 )
  {
    if ( v11 == 18 )
    {
      v37 = *(float *)v6 * *v8;
      *((_DWORD *)v8 + 18) = 18;
      *v8 = v37;
      goto LABEL_26;
    }
    if ( v11 == 35 )
    {
      v35 = *v8 * *(float *)v6;
      v36 = v8[1] * *((float *)v6 + 1);
      *((_DWORD *)v8 + 18) = 35;
      *v8 = v35;
      v8[1] = v36;
      goto LABEL_26;
    }
    if ( v11 == 52 )
    {
      v31 = v8[2];
      *(_QWORD *)&v41 = *(_QWORD *)v8;
      v42 = *v6;
      v32 = (__m128)(unsigned int)v42;
      v32.m128_f32[0] = *(float *)&v42 * *(float *)&v41;
      *((float *)&v41 + 2) = v31;
      v33 = (__m128)HIDWORD(v42);
      v33.m128_f32[0] = *((float *)&v42 + 1) * *((float *)&v41 + 1);
      v43 = *((float *)v6 + 2);
      v34 = v43 * v31;
      *((_DWORD *)v8 + 18) = 52;
      *((float *)&v41 + 2) = v34;
      *(_QWORD *)v8 = _mm_unpacklo_ps(v32, v33).m128_u64[0];
      v8[2] = v34;
      goto LABEL_26;
    }
    if ( v11 == 69 )
    {
      v29 = (__m128)_mm_loadu_si128((const __m128i *)v6);
      *((_DWORD *)v8 + 18) = 69;
      v30 = (__m128)_mm_loadu_si128((const __m128i *)v8);
      *(float *)&v41 = v29.m128_f32[0] * v30.m128_f32[0];
      *((float *)&v41 + 3) = _mm_shuffle_ps(v29, v29, 255).m128_f32[0] * _mm_shuffle_ps(v30, v30, 255).m128_f32[0];
      *((float *)&v41 + 1) = _mm_shuffle_ps(v29, v29, 85).m128_f32[0] * _mm_shuffle_ps(v30, v30, 85).m128_f32[0];
      *((float *)&v41 + 2) = _mm_shuffle_ps(v29, v29, 170).m128_f32[0] * _mm_shuffle_ps(v30, v30, 170).m128_f32[0];
    }
    else
    {
      if ( v11 != 71 )
      {
        if ( v11 == 104 )
        {
          v17 = v8[3];
          v18 = v8[2];
          v19 = (__m128)*((unsigned int *)v8 + 4);
          v20 = *((float *)v6 + 3) * v8[1];
          *(float *)&v41 = (float)(*(float *)v6 * *v8) + (float)(*((float *)v6 + 2) * v8[1]);
          v21 = (float)(*((float *)v6 + 1) * *v8) + v20;
          v22 = v17;
          v23 = v17 * *((float *)v6 + 3);
          v24 = v22 * *((float *)v6 + 2);
          *((float *)&v41 + 1) = v21;
          v25 = v18 * *(float *)v6;
          v26 = (float)(v18 * *((float *)v6 + 1)) + v23;
          v27 = v19;
          v27.m128_f32[0] = v19.m128_f32[0] * *(float *)v6;
          v19.m128_f32[0] = v19.m128_f32[0] * *((float *)v6 + 1);
          *((float *)&v41 + 2) = v25 + v24;
          v28 = v8[5];
          *((float *)&v41 + 3) = v26;
          v19.m128_f32[0] = (float)(v19.m128_f32[0] + (float)(v28 * *((float *)v6 + 3))) + *((float *)v6 + 5);
          v27.m128_f32[0] = (float)(v27.m128_f32[0] + (float)(v28 * *((float *)v6 + 2))) + *((float *)v6 + 4);
          *(_OWORD *)v8 = v41;
          *((_DWORD *)v8 + 18) = 104;
          *((_QWORD *)v8 + 2) = _mm_unpacklo_ps(v27, v19).m128_u64[0];
        }
        else
        {
          if ( v11 != 265 )
          {
            v3 = -2147467259;
            MilInstrumentationCheckHR_MaybeFailFast(
              v12,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              -2147467259,
              0x49Fu);
            return v3;
          }
          D2DMatrixMultiply((struct D2DMatrix *)v44, (const struct D2DMatrix *)v8, (const struct D2DMatrix *)v6);
          v13 = v44[1];
          *(_OWORD *)v8 = v44[0];
          *((_DWORD *)v8 + 18) = v14;
          v15 = v44[2];
          *((_OWORD *)v8 + 1) = v13;
          v16 = v44[3];
          *((_OWORD *)v8 + 2) = v15;
          *((_OWORD *)v8 + 3) = v16;
        }
LABEL_26:
        *((_BYTE *)v8 + 76) = 1;
        --*((_DWORD *)this + 4);
        return v3;
      }
      D3DXQuaternionMultiply(
        (struct D2DQuaternion *)&v41,
        (const struct D2DQuaternion *)v6,
        (const struct D2DQuaternion *)v8);
      *((_DWORD *)v8 + 18) = 71;
    }
    *(_OWORD *)v8 = v41;
    goto LABEL_26;
  }
  if ( v12 == 18 || v11 == 18 )
  {
    v38 = CExpressionValueStack::Scale(this);
    v3 = v38;
    if ( v38 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(
        v39,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        v38,
        0x4AEu);
  }
  else
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v12,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x4B8u);
  }
  return v3;
}
