/*
 * XREFs of ?Matrix3x2FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x18006F1A4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromScale(unsigned __int64 this, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v3; // r12d
  CExpressionValue *v5; // rax
  float *v6; // rbx
  float v7; // xmm0_4
  __int128 v8; // xmm0
  float v10; // xmm0_4
  __m128 v11; // xmm3
  float v12; // xmm2_4
  __m128 v13; // xmm1
  char v14; // al
  unsigned int v15; // edx
  __int64 v16; // rax
  float *v17; // rbx
  CExpressionValue *v18; // rax
  void *v19; // r14
  CExpressionValue *v20; // rax
  float v21; // xmm2_4
  __m128 v22; // xmm1
  __m128 v23; // xmm3
  __int128 v24; // xmm0
  __m128 v25; // xmm2
  float v26; // xmm0_4
  float v27; // xmm2_4
  __m128 v28; // xmm3
  __m128 v29; // xmm4
  __int128 v30; // xmm0
  unsigned int v31; // edx
  __int64 v32; // rax
  float *v33; // rbx
  CExpressionValue *v34; // rax
  __int64 v35; // rax
  CExpressionValue *v36; // rax
  float *v37; // r15
  CExpressionValue *v38; // rax
  float v39; // xmm2_4
  float v40; // xmm0_4
  unsigned int v41; // [rsp+28h] [rbp-59h]
  _BYTE v42[80]; // [rsp+48h] [rbp-39h] BYREF
  float v43[6]; // [rsp+98h] [rbp+17h]

  v2 = this;
  v3 = 0;
  LODWORD(this) = *(_DWORD *)(this + 16);
  if ( (unsigned int)this >= a2 )
  {
    switch ( a2 )
    {
      case 1u:
        this = (unsigned int)(this - 1);
        if ( (unsigned int)this < *(_DWORD *)(v2 + 48) )
        {
          v6 = (float *)(*(_QWORD *)(v2 + 24) + 80 * this);
        }
        else
        {
          v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v42);
          v6 = (float *)&CExpressionValueStack::s_emptyValue;
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
          CExpressionValue::~CExpressionValue((CExpressionValue *)v42);
        }
        if ( *((_DWORD *)v6 + 18) == 18 )
        {
          v7 = *v6;
          v43[2] = 0.0;
          *(_QWORD *)v43 = LODWORD(v7);
          v43[3] = v7;
          v8 = *(_OWORD *)v43;
          *((_DWORD *)v6 + 18) = 104;
          *(_OWORD *)v6 = v8;
          *((_BYTE *)v6 + 76) = 1;
          *((_QWORD *)v6 + 2) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
          goto LABEL_10;
        }
        if ( *((_DWORD *)v6 + 18) == 35 )
        {
          v10 = *v6;
          v11 = 0LL;
          v12 = v6[1];
          v13 = 0LL;
          v14 = 1;
          v43[2] = 0.0;
          *(_QWORD *)v43 = LODWORD(v10);
          *((_DWORD *)v6 + 18) = 104;
          v43[3] = v12;
          *((_BYTE *)v6 + 76) = 1;
          v13.m128_f32[0] = 0.0 - (float)(v10 * 0.0);
          v11.m128_f32[0] = 0.0 - (float)(v12 * 0.0);
          *(_OWORD *)v6 = *(_OWORD *)v43;
          *((_QWORD *)v6 + 2) = _mm_unpacklo_ps(v13, v11).m128_u64[0];
          goto LABEL_47;
        }
        break;
      case 2u:
        v15 = *(_DWORD *)(v2 + 48);
        v16 = (unsigned int)(this - 2);
        v17 = (float *)&CExpressionValueStack::s_emptyValue;
        if ( (unsigned int)v16 < v15 )
        {
          v19 = (void *)(*(_QWORD *)(v2 + 24) + 80 * v16);
        }
        else
        {
          v18 = CExpressionValue::CExpressionValue((CExpressionValue *)v42);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v18);
          CExpressionValue::~CExpressionValue((CExpressionValue *)v42);
          LODWORD(this) = *(_DWORD *)(v2 + 16);
          v19 = &CExpressionValueStack::s_emptyValue;
          v15 = *(_DWORD *)(v2 + 48);
        }
        this = (unsigned int)(this - 1);
        if ( (unsigned int)this < v15 )
        {
          v17 = (float *)(*(_QWORD *)(v2 + 24) + 80 * this);
        }
        else
        {
          v20 = CExpressionValue::CExpressionValue((CExpressionValue *)v42);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v20);
          CExpressionValue::~CExpressionValue((CExpressionValue *)v42);
        }
        if ( *((_DWORD *)v19 + 18) == 18 )
        {
          if ( *((_DWORD *)v17 + 18) == 18 )
          {
            v23 = 0LL;
            v21 = *v17;
            v22 = 0LL;
            v43[0] = *(float *)v19;
            v43[3] = v21;
            v22.m128_f32[0] = 0.0 - (float)(v43[0] * 0.0);
            v23.m128_f32[0] = 0.0 - (float)(v21 * 0.0);
LABEL_24:
            *(_QWORD *)&v43[1] = 0LL;
            v24 = *(_OWORD *)v43;
            *((_DWORD *)v19 + 18) = 104;
            *(_OWORD *)v19 = v24;
            *((_QWORD *)v19 + 2) = _mm_unpacklo_ps(v22, v23).m128_u64[0];
            *((_BYTE *)v19 + 76) = 1;
            goto LABEL_10;
          }
          if ( *((_DWORD *)v19 + 18) == 18 && *((_DWORD *)v17 + 18) == 35 )
          {
            v25 = (__m128)*(unsigned int *)v17;
            v23 = (__m128)*((unsigned int *)v17 + 1);
            v26 = 1.0 - *(float *)v19;
            v43[0] = *(float *)v19;
            v43[3] = v43[0];
            v25.m128_f32[0] = v25.m128_f32[0] * v26;
            v23.m128_f32[0] = v23.m128_f32[0] * v26;
            v22 = v25;
            goto LABEL_24;
          }
        }
        if ( *((_DWORD *)v19 + 18) == 35 && *((_DWORD *)v17 + 18) == 35 )
        {
          v27 = *((float *)v19 + 1);
          v28 = (__m128)*(unsigned int *)v17;
          v29 = (__m128)*((unsigned int *)v17 + 1);
          v43[0] = *(float *)v19;
          v43[3] = v27;
          v28.m128_f32[0] = v28.m128_f32[0] - (float)(v43[0] * v28.m128_f32[0]);
          v29.m128_f32[0] = v29.m128_f32[0] - (float)(v27 * v29.m128_f32[0]);
LABEL_31:
          *(_QWORD *)&v43[1] = 0LL;
          v14 = 1;
          v30 = *(_OWORD *)v43;
          *((_DWORD *)v19 + 18) = 104;
          *(_OWORD *)v19 = v30;
          *((_QWORD *)v19 + 2) = _mm_unpacklo_ps(v28, v29).m128_u64[0];
          *((_BYTE *)v19 + 76) = 1;
          goto LABEL_47;
        }
        break;
      case 3u:
        v31 = *(_DWORD *)(v2 + 48);
        v32 = (unsigned int)(this - 3);
        v33 = (float *)&CExpressionValueStack::s_emptyValue;
        if ( (unsigned int)v32 < v31 )
        {
          v19 = (void *)(*(_QWORD *)(v2 + 24) + 80 * v32);
        }
        else
        {
          v34 = CExpressionValue::CExpressionValue((CExpressionValue *)v42);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v34);
          CExpressionValue::~CExpressionValue((CExpressionValue *)v42);
          LODWORD(this) = *(_DWORD *)(v2 + 16);
          v19 = &CExpressionValueStack::s_emptyValue;
          v31 = *(_DWORD *)(v2 + 48);
        }
        v35 = (unsigned int)(this - 2);
        if ( (unsigned int)v35 < v31 )
        {
          v37 = (float *)(*(_QWORD *)(v2 + 24) + 80 * v35);
        }
        else
        {
          v36 = CExpressionValue::CExpressionValue((CExpressionValue *)v42);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v36);
          CExpressionValue::~CExpressionValue((CExpressionValue *)v42);
          LODWORD(this) = *(_DWORD *)(v2 + 16);
          v37 = (float *)&CExpressionValueStack::s_emptyValue;
          v31 = *(_DWORD *)(v2 + 48);
        }
        this = (unsigned int)(this - 1);
        if ( (unsigned int)this < v31 )
        {
          v33 = (float *)(*(_QWORD *)(v2 + 24) + 80 * this);
        }
        else
        {
          v38 = CExpressionValue::CExpressionValue((CExpressionValue *)v42);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v38);
          CExpressionValue::~CExpressionValue((CExpressionValue *)v42);
        }
        if ( *((_DWORD *)v19 + 18) == 18 && *((_DWORD *)v37 + 18) == 18 && *((_DWORD *)v33 + 18) == 35 )
        {
          v28 = (__m128)*(unsigned int *)v33;
          v29 = (__m128)*((unsigned int *)v33 + 1);
          v39 = *v37;
          v40 = *v33 * *(float *)v19;
          v43[0] = *(float *)v19;
          v43[3] = v39;
          v28.m128_f32[0] = v28.m128_f32[0] - v40;
          v29.m128_f32[0] = v29.m128_f32[0] - (float)(v29.m128_f32[0] * v39);
          goto LABEL_31;
        }
        break;
    }
    v14 = 0;
LABEL_47:
    if ( !v14 )
    {
      v41 = 5928;
      goto LABEL_3;
    }
LABEL_10:
    *(_DWORD *)(v2 + 16) += 1 - a2;
    return v3;
  }
  v41 = 5831;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v41);
  return v3;
}
