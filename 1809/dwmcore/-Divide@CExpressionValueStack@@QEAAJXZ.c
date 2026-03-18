/*
 * XREFs of ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x1800C03A0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1802198A4 (-D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x180219A48 (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Divide(unsigned __int64 this)
{
  unsigned __int64 v1; // r14
  unsigned int v2; // esi
  unsigned int v3; // edx
  __int64 v4; // rax
  void *v5; // rdi
  CExpressionValue *v6; // rax
  void *v7; // rbx
  CExpressionValue *v8; // rax
  int v9; // eax
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  __int32 v16; // eax
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  __m128 v20; // xmm2
  __m128 v21; // xmm1
  float v22; // xmm4_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm3_4
  float v26; // xmm0_4
  unsigned int v28; // [rsp+28h] [rbp-39h]
  __m128i v29; // [rsp+38h] [rbp-29h] BYREF
  __m128i v30; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v31[16]; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v32[80]; // [rsp+68h] [rbp+7h] BYREF

  v1 = this;
  LODWORD(this) = *(_DWORD *)(this + 16);
  if ( (unsigned int)this >= 2 )
  {
    v3 = *(_DWORD *)(v1 + 48);
    v4 = (unsigned int)(this - 2);
    v5 = &CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < v3 )
    {
      v7 = (void *)(*(_QWORD *)(v1 + 24) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v32);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v32);
      LODWORD(this) = *(_DWORD *)(v1 + 16);
      v7 = &CExpressionValueStack::s_emptyValue;
      v3 = *(_DWORD *)(v1 + 48);
    }
    this = (unsigned int)(this - 1);
    if ( (unsigned int)this < v3 )
    {
      v5 = (void *)(*(_QWORD *)(v1 + 24) + 80 * this);
    }
    else
    {
      v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v32);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v8);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v32);
    }
    v9 = *((_DWORD *)v7 + 18);
    v2 = 0;
    if ( v9 != *((_DWORD *)v5 + 18) )
    {
      v28 = 1260;
      goto LABEL_3;
    }
    if ( v9 == 18 )
    {
      if ( *(float *)v5 == 0.0 )
      {
        v28 = 1273;
        goto LABEL_3;
      }
      v26 = *(float *)v7 / *(float *)v5;
      *((_DWORD *)v7 + 18) = 18;
    }
    else
    {
      if ( v9 != 35 )
      {
        if ( v9 == 52 )
        {
          v16 = *((_DWORD *)v7 + 2);
          v29.m128i_i64[0] = *(_QWORD *)v7;
          v30.m128i_i64[0] = *(_QWORD *)v5;
          v29.m128i_i32[2] = v16;
          v30.m128i_i32[2] = *((_DWORD *)v5 + 2);
          if ( *(float *)v30.m128i_i32 == 0.0
            || (v17 = *(float *)&v30.m128i_i32[1], *(float *)&v30.m128i_i32[1] == 0.0)
            || (v18 = *(float *)&v30.m128i_i32[2], *(float *)&v30.m128i_i32[2] == 0.0) )
          {
            v28 = 1313;
            goto LABEL_3;
          }
          v19 = *(float *)&v29.m128i_i32[2];
          v20 = (__m128)v29.m128i_u32[0];
          v20.m128_f32[0] = *(float *)v29.m128i_i32 / *(float *)v30.m128i_i32;
          *((_DWORD *)v7 + 18) = 52;
          v21 = (__m128)v29.m128i_u32[1];
          v21.m128_f32[0] = *(float *)&v29.m128i_i32[1] / v17;
          *(float *)&v29.m128i_i32[2] = v19 / v18;
          *(_QWORD *)v7 = _mm_unpacklo_ps(v20, v21).m128_u64[0];
          *((float *)v7 + 2) = v19 / v18;
        }
        else
        {
          if ( v9 == 69 )
          {
            v11 = _mm_loadu_si128((const __m128i *)v5);
            v29 = *(__m128i *)v7;
            v30 = v11;
            if ( *(float *)v11.m128i_i32 == 0.0
              || (v12 = *(float *)&v30.m128i_i32[1], *(float *)&v30.m128i_i32[1] == 0.0)
              || (v13 = *(float *)&v30.m128i_i32[2], *(float *)&v30.m128i_i32[2] == 0.0)
              || (v14 = *(float *)&v30.m128i_i32[3], *(float *)&v30.m128i_i32[3] == 0.0) )
            {
              v28 = 1336;
              goto LABEL_3;
            }
            v15 = *(float *)v29.m128i_i32 / *(float *)v11.m128i_i32;
            *((_DWORD *)v7 + 18) = 69;
            *(float *)v30.m128i_i32 = v15;
            *(float *)&v30.m128i_i32[1] = *(float *)&v29.m128i_i32[1] / v12;
            *(float *)&v30.m128i_i32[2] = *(float *)&v29.m128i_i32[2] / v13;
            *(float *)&v30.m128i_i32[3] = *(float *)&v29.m128i_i32[3] / v14;
            v10 = v30;
          }
          else
          {
            if ( v9 != 71 )
            {
              v28 = 1388;
              goto LABEL_3;
            }
            v30 = *(__m128i *)v7;
            v29 = _mm_loadu_si128((const __m128i *)v5);
            if ( *(float *)v29.m128i_i32 == 0.0
              || *(float *)&v29.m128i_i32[1] == 0.0
              || *(float *)&v29.m128i_i32[2] == 0.0
              || *(float *)&v29.m128i_i32[3] == 0.0 )
            {
              v28 = 1360;
              goto LABEL_3;
            }
            D3DXQuaternionInverse((struct D2DQuaternion *)v31, (const struct D2DQuaternion *)&v29);
            D3DXQuaternionMultiply(
              (struct D2DQuaternion *)&v29,
              (const struct D2DQuaternion *)v31,
              (const struct D2DQuaternion *)&v30);
            v10 = v29;
            *((_DWORD *)v7 + 18) = 71;
          }
          *(__m128i *)v7 = v10;
        }
LABEL_44:
        *((_BYTE *)v7 + 76) = 1;
        --*(_DWORD *)(v1 + 16);
        return v2;
      }
      v22 = *(float *)v5;
      v23 = *(float *)v7;
      v24 = *((float *)v7 + 1);
      v25 = *((float *)v5 + 1);
      if ( *(float *)v5 == 0.0 || v25 == 0.0 )
      {
        v28 = 1292;
        goto LABEL_3;
      }
      *((_DWORD *)v7 + 18) = 35;
      v26 = v23 / v22;
      *((float *)v7 + 1) = v24 / v25;
    }
    *(float *)v7 = v26;
    goto LABEL_44;
  }
  v28 = 1237;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v28);
  return v2;
}
