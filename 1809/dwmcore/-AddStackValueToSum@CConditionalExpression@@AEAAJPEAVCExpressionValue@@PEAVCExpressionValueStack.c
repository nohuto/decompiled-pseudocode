/*
 * XREFs of ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x180192A08
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180192D50 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180052EB4 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1802185AC (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 *     ??HD2DVector4@@QEBA?AU0@AEBU0@@Z @ 0x180218758 (--HD2DVector4@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CConditionalExpression::AddStackValueToSum(
        CConditionalExpression *this,
        struct CExpressionValue *a2,
        struct CExpressionValueStack *a3)
{
  __int64 v4; // rax
  CExpressionValue *v6; // rax
  const struct CExpressionValue *v7; // rdi
  unsigned int v8; // esi
  int v9; // eax
  _OWORD *v10; // rax
  float v11; // xmm0_4
  __m128 v12; // xmm2
  float v13; // xmm1_4
  float v14; // xmm0_4
  __m128 v15; // xmm1
  __int128 v16; // xmm0
  _OWORD *v17; // rax
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  float v20; // eax
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  unsigned int v25; // [rsp+20h] [rbp-49h]
  float v26[8]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v27[80]; // [rsp+50h] [rbp-19h] BYREF

  v4 = (unsigned int)(*((_DWORD *)a3 + 4) - 1);
  if ( (unsigned int)v4 < *((_DWORD *)a3 + 12) )
  {
    v7 = (const struct CExpressionValue *)(*((_QWORD *)a3 + 3) + 80 * v4);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
    v7 = (const struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
  }
  v8 = 0;
  if ( !*((_BYTE *)a2 + 76) )
  {
    CExpressionValue::CopyFrom(a2, v7);
LABEL_24:
    --*((_DWORD *)a3 + 4);
    return v8;
  }
  v9 = *((_DWORD *)v7 + 18);
  switch ( v9 )
  {
    case 18:
      v23 = *(float *)v7 + *(float *)a2;
      *((_DWORD *)a2 + 18) = 18;
      *(float *)a2 = v23;
      goto LABEL_23;
    case 35:
      v21 = *(float *)v7 + *(float *)a2;
      v22 = *((float *)v7 + 1) + *((float *)a2 + 1);
      *((_DWORD *)a2 + 18) = 35;
      *(float *)a2 = v21;
      *((float *)a2 + 1) = v22;
      goto LABEL_23;
    case 52:
      v18 = (__m128)*(unsigned int *)v7;
      v18.m128_f32[0] = v18.m128_f32[0] + *(float *)a2;
      v19 = (__m128)*((unsigned int *)a2 + 1);
      v19.m128_f32[0] = v19.m128_f32[0] + *((float *)v7 + 1);
      v26[2] = *((float *)a2 + 2) + *((float *)v7 + 2);
      v20 = v26[2];
      *((_DWORD *)a2 + 18) = 52;
      *(_QWORD *)a2 = _mm_unpacklo_ps(v18, v19).m128_u64[0];
      *((float *)a2 + 2) = v20;
      goto LABEL_23;
    case 69:
      v17 = (_OWORD *)D2DVector4::operator+(a2, v26, v7);
      *((_DWORD *)a2 + 18) = 69;
      *(_OWORD *)a2 = *v17;
      goto LABEL_23;
  }
  if ( v9 <= 69 )
  {
LABEL_18:
    v25 = 486;
    goto LABEL_17;
  }
  if ( v9 > 71 )
  {
    if ( v9 == 104 )
    {
      v11 = *(float *)v7 + *(float *)a2;
      v12 = (__m128)*((unsigned int *)a2 + 5);
      v12.m128_f32[0] = v12.m128_f32[0] + *((float *)v7 + 5);
      v26[1] = *((float *)a2 + 1) + *((float *)v7 + 1);
      v13 = *((float *)a2 + 3) + *((float *)v7 + 3);
      v26[0] = v11;
      v14 = *((float *)a2 + 2) + *((float *)v7 + 2);
      v26[3] = v13;
      v15 = (__m128)*((unsigned int *)a2 + 4);
      v15.m128_f32[0] = v15.m128_f32[0] + *((float *)v7 + 4);
      v26[2] = v14;
      v16 = *(_OWORD *)v26;
      *((_DWORD *)a2 + 18) = 104;
      *(_OWORD *)a2 = v16;
      *((_QWORD *)a2 + 2) = _mm_unpacklo_ps(v15, v12).m128_u64[0];
      goto LABEL_23;
    }
    if ( v9 == 265 )
    {
      v10 = (_OWORD *)D2DMatrix::operator+(a2, v27, v7);
      *((_DWORD *)a2 + 18) = 265;
      *(_OWORD *)a2 = *v10;
      *((_OWORD *)a2 + 1) = v10[1];
      *((_OWORD *)a2 + 2) = v10[2];
      *((_OWORD *)a2 + 3) = v10[3];
LABEL_23:
      *((_BYTE *)a2 + 76) = 1;
      goto LABEL_24;
    }
    goto LABEL_18;
  }
  v25 = 467;
LABEL_17:
  v8 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, v25);
  return v8;
}
