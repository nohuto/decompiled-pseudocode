/*
 * XREFs of ?Matrix3x2FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x1800D0788
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromScale(CExpressionValueStack *this, unsigned int a2)
{
  unsigned int v2; // r11d
  char v3; // di
  CExpressionValueStack *v4; // rbx
  float v5; // xmm0_4
  __m128 v6; // xmm3
  float v7; // xmm2_4
  __m128 v8; // xmm1
  unsigned int v9; // ebx
  __int64 v11; // r8
  __m128 v12; // xmm1
  __m128 v13; // xmm3
  float v14; // xmm1_4
  __m128 v15; // xmm3
  float v16; // xmm2_4
  __m128 v17; // xmm4
  __int64 v18; // r8
  __int64 v19; // r9
  float *v20; // rax
  __m128 v21; // xmm3
  float v22; // xmm1_4
  float v23; // xmm0_4
  __m128 v24; // xmm4
  float v25; // xmm2_4
  unsigned int v26; // [rsp+20h] [rbp-30h]
  __int128 v27; // [rsp+30h] [rbp-20h]
  float v28[6]; // [rsp+30h] [rbp-20h]
  float v29[6]; // [rsp+30h] [rbp-20h]
  __int128 v30; // [rsp+30h] [rbp-20h]
  __int128 v31; // [rsp+30h] [rbp-20h]

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v4 = this;
  if ( v2 < a2 )
  {
    v26 = 5819;
LABEL_12:
    v9 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      0x80004005,
      v26,
      0LL);
    return v9;
  }
  switch ( a2 )
  {
    case 1u:
      this = (CExpressionValueStack *)*((_QWORD *)this + 3);
      if ( *((_DWORD *)this + 20 * v2 - 2) == 18 )
      {
        v28[2] = 0.0;
        *(_QWORD *)v28 = *((unsigned int *)this + 20 * v2 - 20);
        v28[3] = *((float *)this + 20 * v2 - 20);
        *((_DWORD *)this + 20 * v2 - 2) = 104;
        *((_OWORD *)this + 5 * v2 - 5) = *(_OWORD *)v28;
        *((_BYTE *)this + 80 * v2 - 4) = 1;
        *((_QWORD *)this + 10 * v2 - 8) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        goto LABEL_8;
      }
      if ( *((_DWORD *)this + 20 * v2 - 2) == 35 )
      {
        v5 = *((float *)this + 20 * v2 - 20);
        v6 = 0LL;
        v7 = *((float *)this + 20 * v2 - 19);
        v8 = 0LL;
        DWORD2(v27) = 0;
        *(_QWORD *)&v27 = LODWORD(v5);
        *((_DWORD *)this + 20 * v2 - 2) = 104;
        *((float *)&v27 + 3) = v7;
        *((_BYTE *)this + 80 * v2 - 4) = 1;
        v8.m128_f32[0] = 0.0 - (float)(v5 * 0.0);
        v6.m128_f32[0] = 0.0 - (float)(v7 * 0.0);
        *((_OWORD *)this + 5 * v2 - 5) = v27;
        *((_QWORD *)this + 10 * v2 - 8) = _mm_unpacklo_ps(v8, v6).m128_u64[0];
LABEL_6:
        v3 = 1;
      }
      break;
    case 2u:
      v11 = *((_QWORD *)this + 3);
      if ( *(_DWORD *)(v11 + 80LL * (v2 - 2) + 72) == 18 )
      {
        if ( *(_DWORD *)(v11 + 80LL * (v2 - 1) + 72) == 18 )
        {
          v13 = 0LL;
          v12 = 0LL;
          v29[0] = *(float *)(v11 + 80LL * (v2 - 2));
          v29[3] = *(float *)(v11 + 80LL * (v2 - 1));
          v12.m128_f32[0] = 0.0 - (float)(v29[0] * 0.0);
          v13.m128_f32[0] = 0.0 - (float)(v29[3] * 0.0);
        }
        else
        {
          if ( *(_DWORD *)(v11 + 80LL * (v2 - 1) + 72) != 35 )
            break;
          v13 = (__m128)(unsigned int)FLOAT_1_0;
          v13.m128_f32[0] = 1.0 - *(float *)(v11 + 80LL * (v2 - 2));
          v29[0] = *(float *)(v11 + 80LL * (v2 - 2));
          v29[3] = v29[0];
          v12 = v13;
          v13.m128_f32[0] = v13.m128_f32[0] * *(float *)(v11 + 80LL * (v2 - 1) + 4);
          v12.m128_f32[0] = v12.m128_f32[0] * *(float *)(v11 + 80LL * (v2 - 1));
        }
        *(_QWORD *)&v29[1] = 0LL;
        *(_OWORD *)(v11 + 80LL * (v2 - 2)) = *(_OWORD *)v29;
        *(_DWORD *)(v11 + 80LL * (v2 - 2) + 72) = 104;
        *(_QWORD *)(v11 + 80LL * (v2 - 2) + 16) = _mm_unpacklo_ps(v12, v13).m128_u64[0];
        *(_BYTE *)(v11 + 80LL * (v2 - 2) + 76) = 1;
        goto LABEL_8;
      }
      if ( *(_DWORD *)(v11 + 80LL * (v2 - 2) + 72) == 35 && *(_DWORD *)(v11 + 80LL * (v2 - 1) + 72) == 35 )
      {
        v14 = *(float *)(v11 + 80LL * (v2 - 2));
        v15 = (__m128)*(unsigned int *)(v11 + 80LL * (v2 - 1));
        v16 = *(float *)(v11 + 80LL * (v2 - 2) + 4);
        v17 = (__m128)*(unsigned int *)(v11 + 80LL * (v2 - 1) + 4);
        DWORD2(v30) = 0;
        *(_QWORD *)&v30 = LODWORD(v14);
        *(_DWORD *)(v11 + 80LL * (v2 - 2) + 72) = 104;
        *((float *)&v30 + 3) = v16;
        *(_BYTE *)(v11 + 80LL * (v2 - 2) + 76) = 1;
        v15.m128_f32[0] = v15.m128_f32[0] - (float)(v14 * v15.m128_f32[0]);
        *(_OWORD *)(v11 + 80LL * (v2 - 2)) = v30;
        v17.m128_f32[0] = v17.m128_f32[0] - (float)(v16 * v17.m128_f32[0]);
        *(_QWORD *)(v11 + 80LL * (v2 - 2) + 16) = _mm_unpacklo_ps(v15, v17).m128_u64[0];
        goto LABEL_6;
      }
      break;
    case 3u:
      v18 = *((_QWORD *)this + 3) + 80LL * (v2 - 3);
      v19 = *((_QWORD *)this + 3) + 80LL * (v2 - 2);
      v20 = (float *)(*((_QWORD *)this + 3) + 80LL * (v2 - 1));
      if ( *(_DWORD *)(v18 + 72) == 18 && *(_DWORD *)(v19 + 72) == 18 && *((_DWORD *)v20 + 18) == 35 )
      {
        v21 = (__m128)*(unsigned int *)v20;
        v22 = *(float *)v18;
        v23 = *v20;
        v24 = (__m128)*((unsigned int *)v20 + 1);
        v25 = *(float *)v19;
        *(_QWORD *)((char *)&v31 + 4) = 0LL;
        *(_DWORD *)(v18 + 72) = 104;
        *(float *)&v31 = v22;
        *(_BYTE *)(v18 + 76) = 1;
        v21.m128_f32[0] = v21.m128_f32[0] - (float)(v23 * v22);
        *((float *)&v31 + 3) = v25;
        v24.m128_f32[0] = v24.m128_f32[0] - (float)(v24.m128_f32[0] * v25);
        *(_OWORD *)v18 = v31;
        *(_QWORD *)(v18 + 16) = _mm_unpacklo_ps(v21, v24).m128_u64[0];
        goto LABEL_6;
      }
      break;
  }
  if ( !v3 )
  {
    v26 = 5916;
    goto LABEL_12;
  }
LABEL_8:
  *((_DWORD *)v4 + 4) += 1 - a2;
  return 0;
}
