/*
 * XREFs of ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x180202824
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x180094150 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??DD2DMatrix@@QEBA?AU0@M@Z @ 0x180225D3C (--DD2DMatrix@@QEBA-AU0@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Scale(__int64 this)
{
  unsigned int v1; // r9d
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // r10
  __m128 *v5; // r8
  __m128 *v6; // r9
  __int64 v7; // rbx
  __int32 v8; // eax
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  __m128 v11; // xmm3
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  float v14; // xmm1_4
  unsigned int v15; // xmm0_4
  unsigned int v16; // xmm2_4
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  unsigned int v24; // [rsp+28h] [rbp-29h]
  __int128 v25; // [rsp+38h] [rbp-19h]
  _BYTE v26[64]; // [rsp+58h] [rbp+7h] BYREF

  v1 = *(_DWORD *)(this + 16);
  v2 = this;
  if ( v1 >= 2 )
  {
    v4 = *(_QWORD *)(this + 24) + 80LL * (v1 - 2);
    v5 = (__m128 *)v4;
    v6 = (__m128 *)(*(_QWORD *)(this + 24) + 80LL * (v1 - 1));
    v7 = v4;
    this = 18LL;
    if ( v6[4].m128_i32[2] != 18 )
    {
      if ( *(_DWORD *)(v4 + 72) != 18 )
      {
        v24 = 2678;
        goto LABEL_3;
      }
      v5 = v6;
      v6 = (__m128 *)v4;
    }
    v8 = v5[4].m128_i32[2];
    switch ( v8 )
    {
      case 18:
        v22 = v6->m128_f32[0] * v5->m128_f32[0];
        *(_DWORD *)(v4 + 72) = 18;
        *(float *)v4 = v22;
        break;
      case 35:
        v20 = v6->m128_f32[0] * v5->m128_f32[1];
        v21 = v6->m128_f32[0] * v5->m128_f32[0];
        *(_DWORD *)(v4 + 72) = 35;
        *(float *)(v4 + 4) = v20;
        *(float *)v4 = v21;
        break;
      case 52:
        v17 = (__m128)v6->m128_u32[0];
        v18 = v17;
        v19 = v17.m128_f32[0] * v5->m128_f32[2];
        v17.m128_f32[0] = v17.m128_f32[0] * v5->m128_f32[0];
        v18.m128_f32[0] = v18.m128_f32[0] * v5->m128_f32[1];
        *(_DWORD *)(v4 + 72) = 52;
        *(_QWORD *)v4 = _mm_unpacklo_ps(v17, v18).m128_u64[0];
        *(float *)(v4 + 8) = v19;
        break;
      case 69:
        v14 = v6->m128_f32[0] * v5->m128_f32[1];
        *(float *)&v25 = v6->m128_f32[0] * v5->m128_f32[0];
        *(float *)&v15 = v6->m128_f32[0] * v5->m128_f32[2];
        *(float *)&v16 = v6->m128_f32[0] * v5->m128_f32[3];
        *(_DWORD *)(v4 + 72) = 69;
        *((_QWORD *)&v25 + 1) = __PAIR64__(v16, v15);
        *((float *)&v25 + 1) = v14;
        *(_OWORD *)v4 = v25;
        break;
      case 104:
        v11 = _mm_shuffle_ps((__m128)v6->m128_u32[0], (__m128)v6->m128_u32[0], 0);
        v12 = v11;
        v13 = _mm_mul_ps(*v5, v11);
        v12.m128_f32[0] = v11.m128_f32[0] * v5[1].m128_f32[0];
        v11.m128_f32[0] = v11.m128_f32[0] * v5[1].m128_f32[1];
        *(_DWORD *)(v4 + 72) = 104;
        *(__m128 *)v4 = v13;
        *(_QWORD *)(v4 + 16) = _mm_unpacklo_ps(v12, v11).m128_u64[0];
        break;
      case 265:
        v9 = (_OWORD *)D2DMatrix::operator*(v5, v26);
        *(_DWORD *)(v7 + 72) = 265;
        *(_OWORD *)v7 = *v9;
        *(_OWORD *)(v7 + 16) = v9[1];
        *(_OWORD *)(v7 + 32) = v9[2];
        v10 = v9[3];
        *(_BYTE *)(v7 + 76) = 1;
        *(_OWORD *)(v7 + 48) = v10;
LABEL_22:
        --*(_DWORD *)(v2 + 16);
        return 0;
      default:
        v24 = 2741;
        goto LABEL_3;
    }
    *(_BYTE *)(v4 + 76) = 1;
    goto LABEL_22;
  }
  v24 = 2644;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    0x80004005,
    v24,
    0LL);
  return v3;
}
