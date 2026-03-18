/*
 * XREFs of ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x1801D2908
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801D2C00 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800A7080 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x180226270 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 *     ??HD2DVector4@@QEBA?AU0@AEBU0@@Z @ 0x18022641C (--HD2DVector4@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CConditionalExpression::AddStackValueToSum(
        CConditionalExpression *this,
        struct CExpressionValue *a2,
        struct CExpressionValueStack *a3)
{
  const struct CExpressionValue *v5; // r8
  int v6; // eax
  _OWORD *v7; // rax
  float v8; // xmm0_4
  __m128 v9; // xmm2
  float v10; // xmm1_4
  float v11; // xmm0_4
  __m128 v12; // xmm1
  __int128 v13; // xmm0
  unsigned int v14; // ebx
  _OWORD *v15; // rax
  __m128 v16; // xmm2
  __m128 v17; // xmm1
  float v18; // eax
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  unsigned int v23; // [rsp+20h] [rbp-88h]
  float v24[8]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v25[64]; // [rsp+50h] [rbp-58h] BYREF

  v5 = (const struct CExpressionValue *)(*((_QWORD *)a3 + 3) + 80LL * (unsigned int)(*((_DWORD *)a3 + 4) - 1));
  if ( !*((_BYTE *)a2 + 76) )
  {
    CExpressionValue::CopyFrom(a2, v5);
LABEL_22:
    --*((_DWORD *)a3 + 4);
    return 0;
  }
  v6 = *((_DWORD *)v5 + 18);
  switch ( v6 )
  {
    case 18:
      v21 = *(float *)v5 + *(float *)a2;
      *((_DWORD *)a2 + 18) = 18;
      *(float *)a2 = v21;
      goto LABEL_21;
    case 35:
      v19 = *(float *)v5 + *(float *)a2;
      v20 = *((float *)v5 + 1) + *((float *)a2 + 1);
      *((_DWORD *)a2 + 18) = 35;
      *(float *)a2 = v19;
      *((float *)a2 + 1) = v20;
      goto LABEL_21;
    case 52:
      v16 = (__m128)*(unsigned int *)v5;
      v16.m128_f32[0] = v16.m128_f32[0] + *(float *)a2;
      v17 = (__m128)*((unsigned int *)a2 + 1);
      v17.m128_f32[0] = v17.m128_f32[0] + *((float *)v5 + 1);
      v24[2] = *((float *)a2 + 2) + *((float *)v5 + 2);
      v18 = v24[2];
      *((_DWORD *)a2 + 18) = 52;
      *(_QWORD *)a2 = _mm_unpacklo_ps(v16, v17).m128_u64[0];
      *((float *)a2 + 2) = v18;
      goto LABEL_21;
    case 69:
      v15 = (_OWORD *)D2DVector4::operator+(a2, v24, v5);
      *((_DWORD *)a2 + 18) = 69;
      *(_OWORD *)a2 = *v15;
      goto LABEL_17;
  }
  if ( v6 <= 69 )
    goto LABEL_15;
  if ( v6 > 71 )
  {
    if ( v6 != 104 )
    {
      if ( v6 == 265 )
      {
        v7 = (_OWORD *)D2DMatrix::operator+(a2, v25);
        *((_DWORD *)a2 + 18) = 265;
        *(_OWORD *)a2 = *v7;
        *((_OWORD *)a2 + 1) = v7[1];
        *((_OWORD *)a2 + 2) = v7[2];
        *((_OWORD *)a2 + 3) = v7[3];
LABEL_17:
        *((_BYTE *)a2 + 76) = 1;
        goto LABEL_22;
      }
LABEL_15:
      v23 = 430;
      goto LABEL_14;
    }
    v8 = *(float *)v5 + *(float *)a2;
    v9 = (__m128)*((unsigned int *)a2 + 5);
    v9.m128_f32[0] = v9.m128_f32[0] + *((float *)v5 + 5);
    v24[1] = *((float *)a2 + 1) + *((float *)v5 + 1);
    v10 = *((float *)a2 + 3) + *((float *)v5 + 3);
    v24[0] = v8;
    v11 = *((float *)a2 + 2) + *((float *)v5 + 2);
    v24[3] = v10;
    v12 = (__m128)*((unsigned int *)a2 + 4);
    v12.m128_f32[0] = v12.m128_f32[0] + *((float *)v5 + 4);
    v24[2] = v11;
    v13 = *(_OWORD *)v24;
    *((_DWORD *)a2 + 18) = 104;
    *(_OWORD *)a2 = v13;
    *((_QWORD *)a2 + 2) = _mm_unpacklo_ps(v12, v9).m128_u64[0];
LABEL_21:
    *((_BYTE *)a2 + 76) = 1;
    goto LABEL_22;
  }
  v23 = 411;
LABEL_14:
  v14 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, v23, 0LL);
  return v14;
}
