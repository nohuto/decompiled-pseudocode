/*
 * XREFs of ?Add@CExpressionValueStack@@QEAAJXZ @ 0x1800D201C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x180226270 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 *     ??HD2DVector4@@QEBA?AU0@AEBU0@@Z @ 0x18022641C (--HD2DVector4@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Add(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v3; // esi
  __int64 v4; // rbx
  float *v5; // r8
  int v6; // eax
  float v7; // xmm0_4
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  float v11; // eax
  _OWORD *v12; // rax
  float v13; // xmm0_4
  __m128 v14; // xmm2
  float v15; // xmm1_4
  float v16; // xmm0_4
  __m128 v17; // xmm1
  __int128 v18; // xmm0
  _OWORD *v19; // rax
  float v20; // xmm1_4
  float v21; // xmm0_4
  unsigned int v22; // [rsp+20h] [rbp-88h]
  float v23[8]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v24[64]; // [rsp+50h] [rbp-58h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 2 )
  {
    v22 = 840;
    goto LABEL_11;
  }
  v3 = 0;
  v4 = *((_QWORD *)this + 3) + 80LL * (v1 - 2);
  v5 = (float *)(*((_QWORD *)this + 3) + 80LL * (v1 - 1));
  v6 = *(_DWORD *)(v4 + 72);
  if ( v6 != *((_DWORD *)v5 + 18) )
  {
    v22 = 868;
    goto LABEL_11;
  }
  if ( v6 != 18 )
  {
    switch ( v6 )
    {
      case 52:
        v9 = (__m128)*(unsigned int *)v5;
        v9.m128_f32[0] = v9.m128_f32[0] + *(float *)v4;
        v10 = (__m128)*((unsigned int *)v5 + 1);
        v10.m128_f32[0] = v10.m128_f32[0] + *(float *)(v4 + 4);
        v23[2] = v5[2] + *(float *)(v4 + 8);
        *(_DWORD *)(v4 + 72) = 52;
        v11 = v23[2];
        *(_QWORD *)v4 = _mm_unpacklo_ps(v9, v10).m128_u64[0];
        *(float *)(v4 + 8) = v11;
        goto LABEL_5;
      case 35:
        v20 = *v5 + *(float *)v4;
        v21 = v5[1] + *(float *)(v4 + 4);
        *(_DWORD *)(v4 + 72) = 35;
        *(float *)v4 = v20;
        *(float *)(v4 + 4) = v21;
        goto LABEL_5;
      case 69:
        v19 = (_OWORD *)D2DVector4::operator+(v4, v23, v5);
        *(_DWORD *)(v4 + 72) = 69;
        *(_OWORD *)v4 = *v19;
        goto LABEL_5;
      case 104:
        v13 = *v5 + *(float *)v4;
        v14 = (__m128)*((unsigned int *)v5 + 5);
        v14.m128_f32[0] = v14.m128_f32[0] + *(float *)(v4 + 20);
        v23[1] = v5[1] + *(float *)(v4 + 4);
        v15 = v5[3] + *(float *)(v4 + 12);
        v23[0] = v13;
        v16 = v5[2] + *(float *)(v4 + 8);
        v23[3] = v15;
        v17 = (__m128)*((unsigned int *)v5 + 4);
        v17.m128_f32[0] = v17.m128_f32[0] + *(float *)(v4 + 16);
        v23[2] = v16;
        v18 = *(_OWORD *)v23;
        *(_DWORD *)(v4 + 72) = 104;
        *(_OWORD *)v4 = v18;
        *(_QWORD *)(v4 + 16) = _mm_unpacklo_ps(v17, v14).m128_u64[0];
        goto LABEL_5;
      case 265:
        v12 = (_OWORD *)D2DMatrix::operator+(v4, v24);
        *(_DWORD *)(v4 + 72) = 265;
        *(_OWORD *)v4 = *v12;
        *(_OWORD *)(v4 + 16) = v12[1];
        *(_OWORD *)(v4 + 32) = v12[2];
        *(_OWORD *)(v4 + 48) = v12[3];
        goto LABEL_5;
    }
    v22 = 923;
LABEL_11:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      0x80004005,
      v22,
      0LL);
    return v3;
  }
  v7 = *v5 + *(float *)v4;
  *(_DWORD *)(v4 + 72) = 18;
  *(float *)v4 = v7;
LABEL_5:
  *(_BYTE *)(v4 + 76) = 1;
  --*((_DWORD *)this + 4);
  return v3;
}
