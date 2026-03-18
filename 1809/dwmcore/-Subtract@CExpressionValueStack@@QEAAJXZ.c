/*
 * XREFs of ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x1801D2EC0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??GD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1802181FC (--GD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 *     ??GD2DVector4@@QEBA?AU0@AEBU0@@Z @ 0x180218550 (--GD2DVector4@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Subtract(CExpressionValueStack *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned int v6; // r14d
  unsigned int v7; // edx
  __int64 v8; // rax
  float *v9; // rdi
  CExpressionValue *v10; // rax
  float *v11; // rbx
  CExpressionValue *v12; // rax
  unsigned int v13; // eax
  _OWORD *v14; // rax
  float v15; // xmm0_4
  __m128 v16; // xmm2
  float v17; // xmm1_4
  float v18; // xmm0_4
  __m128 v19; // xmm1
  __int128 v20; // xmm0
  _OWORD *v21; // rax
  __m128 v22; // xmm2
  __m128 v23; // xmm1
  unsigned int v24; // eax
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  unsigned int v29; // [rsp+20h] [rbp-49h]
  float v30[8]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v31[80]; // [rsp+50h] [rbp-19h] BYREF

  v5 = *((unsigned int *)this + 4);
  if ( (unsigned int)v5 >= 2 )
  {
    v7 = *((_DWORD *)this + 12);
    v8 = (unsigned int)(v5 - 2);
    v9 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v8 < v7 )
    {
      v11 = (float *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v31);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v31);
      LODWORD(v5) = *((_DWORD *)this + 4);
      v11 = (float *)&CExpressionValueStack::s_emptyValue;
      v7 = *((_DWORD *)this + 12);
    }
    v5 = (unsigned int)(v5 - 1);
    if ( (unsigned int)v5 < v7 )
    {
      v9 = (float *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v31);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v31);
    }
    v13 = *((_DWORD *)v11 + 18);
    v6 = 0;
    if ( v13 == *((_DWORD *)v9 + 18) )
    {
      switch ( v13 )
      {
        case 0x12u:
          v27 = *v11 - *v9;
          *((_DWORD *)v11 + 18) = 18;
          *v11 = v27;
          break;
        case 0x23u:
          v25 = *v11 - *v9;
          v26 = v11[1] - v9[1];
          *((_DWORD *)v11 + 18) = 35;
          *v11 = v25;
          v11[1] = v26;
          break;
        case 0x34u:
          v22 = (__m128)*(unsigned int *)v11;
          v22.m128_f32[0] = v22.m128_f32[0] - *v9;
          v23 = (__m128)*((unsigned int *)v11 + 1);
          v23.m128_f32[0] = v23.m128_f32[0] - v9[1];
          v30[2] = v11[2] - v9[2];
          v24 = LODWORD(v30[2]);
          *((_DWORD *)v11 + 18) = 52;
          *(_QWORD *)v11 = _mm_unpacklo_ps(v22, v23).m128_u64[0];
          *((_DWORD *)v11 + 2) = v24;
          break;
        case 0x45u:
          v21 = (_OWORD *)D2DVector4::operator-(v11, v30, v9, a4);
          *((_DWORD *)v11 + 18) = 69;
          *(_OWORD *)v11 = *v21;
          break;
        case 0x68u:
          v15 = *v11 - *v9;
          v16 = (__m128)*((unsigned int *)v11 + 5);
          v16.m128_f32[0] = v16.m128_f32[0] - v9[5];
          v30[1] = v11[1] - v9[1];
          v17 = v11[3] - v9[3];
          v30[0] = v15;
          v18 = v11[2] - v9[2];
          v30[3] = v17;
          v19 = (__m128)*((unsigned int *)v11 + 4);
          v19.m128_f32[0] = v19.m128_f32[0] - v9[4];
          v30[2] = v18;
          v20 = *(_OWORD *)v30;
          *((_DWORD *)v11 + 18) = 104;
          *(_OWORD *)v11 = v20;
          *((_QWORD *)v11 + 2) = _mm_unpacklo_ps(v19, v16).m128_u64[0];
          break;
        case 0x109u:
          v14 = (_OWORD *)D2DMatrix::operator-(v11, v31, v9);
          *((_DWORD *)v11 + 18) = 265;
          *(_OWORD *)v11 = *v14;
          *((_OWORD *)v11 + 1) = v14[1];
          *((_OWORD *)v11 + 2) = v14[2];
          *((_OWORD *)v11 + 3) = v14[3];
          break;
        default:
          v29 = 1045;
          goto LABEL_3;
      }
      *((_BYTE *)v11 + 76) = 1;
      --*((_DWORD *)this + 4);
      return v6;
    }
    v29 = 991;
  }
  else
  {
    v29 = 968;
  }
LABEL_3:
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    v5,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v29);
  return v6;
}
