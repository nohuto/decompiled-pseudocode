/*
 * XREFs of ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x1800C01A4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??GD2DMatrix@@QEBA?AU0@XZ @ 0x1802183A8 (--GD2DMatrix@@QEBA-AU0@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Negate(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rax
  CExpressionValue *v4; // rax
  unsigned int *v5; // rbx
  unsigned int v6; // eax
  _OWORD *v7; // rax
  __m128 v8; // xmm1
  __m128 v9; // xmm2
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  __m128 v12; // xmm3
  __m128 v13; // xmm2
  unsigned int v14; // xmm0_4
  unsigned int v15; // xmm1_4
  unsigned int v17; // [rsp+20h] [rbp-39h]
  _BYTE v18[80]; // [rsp+50h] [rbp-9h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = (unsigned int)(v1 - 1);
    if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
    {
      v5 = (unsigned int *)(*((_QWORD *)this + 3) + 80 * v3);
    }
    else
    {
      v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v18);
      v5 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v4);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v18);
    }
    v6 = v5[18];
    switch ( v6 )
    {
      case 0x12u:
        *v5 ^= _xmm;
        v5[18] = 18;
        break;
      case 0x23u:
        v15 = v5[1] ^ _xmm;
        *v5 ^= _xmm;
        v5[1] = v15;
        v5[18] = 35;
        break;
      case 0x34u:
        v12 = (__m128)*v5;
        v13 = (__m128)v5[1];
        v14 = v5[2] ^ _xmm;
        v5[18] = 52;
        *(_QWORD *)v5 = _mm_unpacklo_ps(
                          _mm_xor_ps(v12, (__m128)(unsigned int)_xmm),
                          _mm_xor_ps(v13, (__m128)(unsigned int)_xmm)).m128_u64[0];
        v5[2] = v14;
        break;
      case 0x45u:
        v11 = *(__m128 *)v5;
        v5[18] = 69;
        *(__m128 *)v5 = _mm_xor_ps(v11, (__m128)_xmm);
        break;
      case 0x68u:
        v8 = (__m128)v5[4];
        v9 = (__m128)v5[5];
        v10 = _mm_xor_ps(*(__m128 *)v5, (__m128)_xmm);
        v5[18] = 104;
        *(__m128 *)v5 = v10;
        *((_QWORD *)v5 + 2) = _mm_unpacklo_ps(_mm_xor_ps(v8, (__m128)_xmm), _mm_xor_ps(v9, (__m128)_xmm)).m128_u64[0];
        break;
      case 0x109u:
        v7 = (_OWORD *)D2DMatrix::operator-(v5, v18);
        v5[18] = 265;
        *(_OWORD *)v5 = *v7;
        *((_OWORD *)v5 + 1) = v7[1];
        *((_OWORD *)v5 + 2) = v7[2];
        *((_OWORD *)v5 + 3) = v7[3];
        break;
      default:
        v17 = 822;
        goto LABEL_3;
    }
    *((_BYTE *)v5 + 76) = 1;
    return 0;
  }
  v17 = 760;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v17);
  return v2;
}
