/*
 * XREFs of ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x180091370
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??GD2DMatrix@@QEBA?AU0@XZ @ 0x18022606C (--GD2DMatrix@@QEBA-AU0@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Negate(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int *v2; // rbx
  unsigned int v3; // eax
  unsigned int v4; // xmm1_4
  unsigned int v5; // ebx
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  unsigned int v9; // xmm0_4
  _OWORD *v10; // rax
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm0
  __m128 v14; // xmm0
  unsigned int v15; // [rsp+20h] [rbp-29h]
  _BYTE v16[64]; // [rsp+50h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
  {
    v15 = 748;
    goto LABEL_12;
  }
  v2 = (unsigned int *)(*((_QWORD *)this + 3) + 80LL * (unsigned int)(v1 - 1));
  v3 = v2[18];
  if ( v3 != 35 )
  {
    switch ( v3 )
    {
      case 0x12u:
        *v2 ^= _xmm;
        v2[18] = 18;
        goto LABEL_4;
      case 0x34u:
        v7 = (__m128)*v2;
        v8 = (__m128)v2[1];
        v9 = v2[2] ^ _xmm;
        v2[18] = 52;
        *(_QWORD *)v2 = _mm_unpacklo_ps(
                          _mm_xor_ps(v7, (__m128)(unsigned int)_xmm),
                          _mm_xor_ps(v8, (__m128)(unsigned int)_xmm)).m128_u64[0];
        v2[2] = v9;
        goto LABEL_4;
      case 0x45u:
        v14 = *(__m128 *)v2;
        v2[18] = 69;
        *(__m128 *)v2 = _mm_xor_ps(v14, (__m128)_xmm);
        goto LABEL_4;
      case 0x68u:
        v11 = (__m128)v2[4];
        v12 = (__m128)v2[5];
        v13 = _mm_xor_ps(*(__m128 *)v2, (__m128)_xmm);
        v2[18] = 104;
        *(__m128 *)v2 = v13;
        *((_QWORD *)v2 + 2) = _mm_unpacklo_ps(_mm_xor_ps(v11, (__m128)_xmm), _mm_xor_ps(v12, (__m128)_xmm)).m128_u64[0];
        goto LABEL_4;
      case 0x109u:
        v10 = (_OWORD *)D2DMatrix::operator-(v2, v16);
        v2[18] = 265;
        *(_OWORD *)v2 = *v10;
        *((_OWORD *)v2 + 1) = v10[1];
        *((_OWORD *)v2 + 2) = v10[2];
        *((_OWORD *)v2 + 3) = v10[3];
        goto LABEL_4;
    }
    v15 = 810;
LABEL_12:
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      0x80004005,
      v15,
      0LL);
    return v5;
  }
  v4 = v2[1] ^ _xmm;
  *v2 ^= _xmm;
  v2[1] = v4;
  v2[18] = 35;
LABEL_4:
  *((_BYTE *)v2 + 76) = 1;
  return 0;
}
