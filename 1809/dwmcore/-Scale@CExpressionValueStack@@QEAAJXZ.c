/*
 * XREFs of ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x18001F4C4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x1800BF9EC (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??DD2DMatrix@@QEBA?AU0@M@Z @ 0x180218078 (--DD2DMatrix@@QEBA-AU0@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Scale(CExpressionValueStack *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // ebx
  unsigned int v4; // edx
  __int64 v5; // rax
  __m128 *v6; // rdi
  CExpressionValue *v7; // rax
  __m128 *v8; // rbx
  __int64 v9; // rcx
  float *v10; // r15
  CExpressionValue *v11; // rax
  __m128 *v12; // rsi
  __m128 *v13; // rax
  __int32 v14; // eax
  __m128 *v15; // rax
  __m128 v16; // xmm3
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  float v19; // xmm1_4
  unsigned int v20; // xmm0_4
  unsigned int v21; // xmm2_4
  __m128 v22; // xmm2
  __m128 v23; // xmm1
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  unsigned int v29; // [rsp+28h] [rbp-49h]
  __m128 v30; // [rsp+38h] [rbp-39h]
  _BYTE v31[80]; // [rsp+58h] [rbp-19h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( v2 >= 2 )
  {
    v4 = *((_DWORD *)this + 12);
    v5 = v2 - 2;
    v6 = (__m128 *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v5 < v4 )
    {
      v8 = (__m128 *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v31);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v31);
      v2 = *((_DWORD *)this + 4);
      v8 = (__m128 *)&CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v9 = v2 - 1;
    v10 = (float *)v8;
    if ( (unsigned int)v9 < v4 )
    {
      v6 = (__m128 *)(*((_QWORD *)this + 3) + 80 * v9);
    }
    else
    {
      v11 = CExpressionValue::CExpressionValue((CExpressionValue *)v31);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v11);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v31);
    }
    v2 = 18;
    v12 = v8;
    if ( v6[4].m128_i32[2] != 18 )
    {
      if ( v8[4].m128_i32[2] != 18 )
      {
        v29 = 2690;
        goto LABEL_3;
      }
      v13 = v8;
      v8 = v6;
      v6 = v13;
    }
    v14 = v8[4].m128_i32[2];
    switch ( v14 )
    {
      case 18:
        v27 = v6->m128_f32[0] * v8->m128_f32[0];
        v12[4].m128_i32[2] = 18;
        v12->m128_f32[0] = v27;
        break;
      case 35:
        v25 = v6->m128_f32[0] * v8->m128_f32[1];
        v26 = v6->m128_f32[0] * v8->m128_f32[0];
        v12[4].m128_i32[2] = 35;
        v12->m128_f32[1] = v25;
        *v10 = v26;
        break;
      case 52:
        v22 = (__m128)v6->m128_u32[0];
        v23 = v22;
        v24 = v22.m128_f32[0] * v8->m128_f32[2];
        v22.m128_f32[0] = v22.m128_f32[0] * v8->m128_f32[0];
        v23.m128_f32[0] = v23.m128_f32[0] * v8->m128_f32[1];
        v12[4].m128_i32[2] = 52;
        v12->m128_u64[0] = _mm_unpacklo_ps(v22, v23).m128_u64[0];
        v12->m128_f32[2] = v24;
        break;
      case 69:
        v19 = v6->m128_f32[0] * v8->m128_f32[1];
        v30.m128_f32[0] = v6->m128_f32[0] * v8->m128_f32[0];
        *(float *)&v20 = v6->m128_f32[0] * v8->m128_f32[2];
        *(float *)&v21 = v6->m128_f32[0] * v8->m128_f32[3];
        v12[4].m128_i32[2] = 69;
        v30.m128_u64[1] = __PAIR64__(v21, v20);
        v30.m128_f32[1] = v19;
        *v12 = v30;
        break;
      case 104:
        v16 = _mm_shuffle_ps((__m128)v6->m128_u32[0], (__m128)v6->m128_u32[0], 0);
        v17 = v16;
        v18 = _mm_mul_ps(*v8, v16);
        v17.m128_f32[0] = v16.m128_f32[0] * v8[1].m128_f32[0];
        v16.m128_f32[0] = v16.m128_f32[0] * v8[1].m128_f32[1];
        v12[4].m128_i32[2] = 104;
        *v12 = v18;
        v12[1].m128_u64[0] = _mm_unpacklo_ps(v17, v16).m128_u64[0];
        break;
      case 265:
        v15 = (__m128 *)D2DMatrix::operator*(v8, v31);
        v12[4].m128_i32[2] = 265;
        *v12 = *v15;
        v12[1] = v15[1];
        v12[2] = v15[2];
        v12[3] = v15[3];
        break;
      default:
        v29 = 2753;
        goto LABEL_3;
    }
    v12[4].m128_i8[12] = 1;
    --*((_DWORD *)this + 4);
    return 0;
  }
  v29 = 2656;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    v2,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v29);
  return v3;
}
