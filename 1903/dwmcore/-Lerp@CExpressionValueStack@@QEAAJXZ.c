/*
 * XREFs of ?Lerp@CExpressionValueStack@@QEAAJXZ @ 0x180201218
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Lerp(CExpressionValueStack *this)
{
  unsigned int v1; // r10d
  CExpressionValueStack *v2; // r11
  __int64 v3; // rdx
  float v4; // xmm12_4
  unsigned int v5; // ebx
  __m128 v6; // xmm4
  __m128 v7; // xmm3
  __m128 v8; // xmm6
  __m128 v9; // xmm5
  __m128 v10; // xmm7
  __m128 v11; // xmm8
  __m128 v12; // xmm11
  __m128 v13; // xmm10
  float v14; // xmm9_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  __m128 v26; // xmm3
  __m128 v27; // xmm4
  float v28; // xmm5_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  __m128 v32; // xmm1
  __m128 v33; // xmm2
  __m128 v34; // xmm5
  __m128 v35; // xmm4
  float v36; // xmm3_4
  float v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  __m128 v40; // xmm3
  __m128 v41; // xmm1
  float v42; // xmm2_4
  float v43; // xmm0_4
  float v44; // xmm1_4
  float v45; // xmm2_4
  float v46; // xmm0_4
  float v47; // xmm2_4
  float v48; // xmm1_4
  unsigned int v50; // [rsp+28h] [rbp-E0h]
  __int128 v51; // [rsp+38h] [rbp-D0h]
  __int64 v52; // [rsp+38h] [rbp-D0h]
  __int64 v53; // [rsp+48h] [rbp-C0h]
  __int128 v54; // [rsp+50h] [rbp-B8h]
  __int64 v55; // [rsp+50h] [rbp-B8h]
  float v56; // [rsp+58h] [rbp-B0h]
  __int128 v57; // [rsp+68h] [rbp-A0h]
  __int128 v58; // [rsp+78h] [rbp-90h]
  __int128 v59; // [rsp+88h] [rbp-80h]
  float v60[8]; // [rsp+98h] [rbp-70h]
  float v61[32]; // [rsp+B8h] [rbp-50h]

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 < 3 )
  {
    v50 = 2979;
LABEL_20:
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      0x80004005,
      v50,
      0LL);
    return v5;
  }
  v3 = *((_QWORD *)this + 3);
  this = (CExpressionValueStack *)*(unsigned int *)(v3 + 80LL * (v1 - 3) + 72);
  v4 = *(float *)(v3 + 80LL * (v1 - 1));
  if ( *(_DWORD *)(v3 + 80LL * (v1 - 1) + 72) != 18 || (v5 = 0, (_DWORD)this != *(_DWORD *)(v3 + 80LL * (v1 - 2) + 72)) )
  {
    v50 = 3005;
    goto LABEL_20;
  }
  switch ( (_DWORD)this )
  {
    case 0x12:
      v48 = *(float *)(v3 + 80LL * (v1 - 2)) - *(float *)(v3 + 80LL * (v1 - 3));
      *(_DWORD *)(v3 + 80LL * (v1 - 3) + 72) = 18;
      *(float *)(v3 + 80LL * (v1 - 3)) = (float)(fmaxf(0.0, fminf(v4, 1.0)) * v48) + *(float *)(v3 + 80LL * (v1 - 3));
      break;
    case 0x23:
      v44 = *(float *)(v3 + 80LL * (v1 - 2)) - *(float *)(v3 + 80LL * (v1 - 3));
      v45 = *(float *)(v3 + 80LL * (v1 - 2) + 4) - *(float *)(v3 + 80LL * (v1 - 3) + 4);
      *(_DWORD *)(v3 + 80LL * (v1 - 3) + 72) = 35;
      v46 = fmaxf(0.0, fminf(v4, 1.0));
      v47 = (float)(v45 * v46) + *(float *)(v3 + 80LL * (v1 - 3) + 4);
      *(float *)(v3 + 80LL * (v1 - 3)) = (float)(v44 * v46) + *(float *)(v3 + 80LL * (v1 - 3));
      *(float *)(v3 + 80LL * (v1 - 3) + 4) = v47;
      break;
    case 0x34:
      v55 = *(_QWORD *)(v3 + 80LL * (v1 - 3));
      v52 = *(_QWORD *)(v3 + 80LL * (v1 - 2));
      v40 = (__m128)(unsigned int)v52;
      v41 = (__m128)HIDWORD(v52);
      v42 = fmaxf(0.0, fminf(v4, 1.0));
      v56 = *(float *)(v3 + 80LL * (v1 - 3) + 8);
      v43 = *(float *)(v3 + 80LL * (v1 - 2) + 8) - v56;
      *(_DWORD *)(v3 + 80LL * (v1 - 3) + 72) = 52;
      v40.m128_f32[0] = (float)((float)(*(float *)&v52 - *(float *)&v55) * v42) + *(float *)&v55;
      v41.m128_f32[0] = (float)((float)(*((float *)&v52 + 1) - *((float *)&v55 + 1)) * v42) + *((float *)&v55 + 1);
      *(_QWORD *)(v3 + 80LL * (v1 - 3)) = _mm_unpacklo_ps(v40, v41).m128_u64[0];
      *(float *)(v3 + 80LL * (v1 - 3) + 8) = (float)(v43 * v42) + v56;
      break;
    case 0x45:
      v34 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 80LL * (v1 - 2)));
      *(_DWORD *)(v3 + 80LL * (v1 - 3) + 72) = 69;
      v35 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 80LL * (v1 - 3)));
      v36 = fmaxf(0.0, fminf(v4, 1.0));
      *(float *)&v51 = (float)((float)(v34.m128_f32[0] - v35.m128_f32[0]) * v36) + v35.m128_f32[0];
      v37 = _mm_shuffle_ps(v35, v35, 85).m128_f32[0];
      v38 = (float)((float)(_mm_shuffle_ps(v34, v34, 85).m128_f32[0] - v37) * v36) + v37;
      v39 = _mm_shuffle_ps(v35, v35, 170).m128_f32[0];
      v35.m128_f32[0] = _mm_shuffle_ps(v35, v35, 255).m128_f32[0];
      *((float *)&v51 + 1) = v38;
      *((float *)&v51 + 2) = (float)((float)(_mm_shuffle_ps(v34, v34, 170).m128_f32[0] - v39) * v36) + v39;
      *((float *)&v51 + 3) = (float)((float)(_mm_shuffle_ps(v34, v34, 255).m128_f32[0] - v35.m128_f32[0]) * v36)
                           + v35.m128_f32[0];
      *(_OWORD *)(v3 + 80LL * (v1 - 3)) = v51;
      break;
    case 0x68:
      v26 = *(__m128 *)(v3 + 80LL * (v1 - 2));
      v27 = *(__m128 *)(v3 + 80LL * (v1 - 3));
      v53 = *(_QWORD *)(v3 + 80LL * (v1 - 3) + 16);
      *(_QWORD *)v61 = *(_QWORD *)(v3 + 80LL * (v1 - 2) + 16);
      v28 = fmaxf(0.0, fminf(v4, 1.0));
      *(_DWORD *)(v3 + 80LL * (v1 - 3) + 72) = 104;
      *(float *)&v54 = (float)((float)(v26.m128_f32[0] - v27.m128_f32[0]) * v28) + v27.m128_f32[0];
      v29 = _mm_shuffle_ps(v27, v27, 85).m128_f32[0];
      v30 = (float)((float)(_mm_shuffle_ps(v26, v26, 85).m128_f32[0] - v29) * v28) + v29;
      v31 = _mm_shuffle_ps(v27, v27, 170).m128_f32[0];
      v27.m128_f32[0] = _mm_shuffle_ps(v27, v27, 255).m128_f32[0];
      *((float *)&v54 + 1) = v30;
      v32 = (__m128)LODWORD(v61[0]);
      v32.m128_f32[0] = (float)((float)(v61[0] - *(float *)&v53) * v28) + *(float *)&v53;
      *((float *)&v54 + 2) = (float)((float)(_mm_shuffle_ps(v26, v26, 170).m128_f32[0] - v31) * v28) + v31;
      v33 = (__m128)LODWORD(v61[1]);
      *((float *)&v54 + 3) = (float)((float)(_mm_shuffle_ps(v26, v26, 255).m128_f32[0] - v27.m128_f32[0]) * v28)
                           + v27.m128_f32[0];
      *(_OWORD *)(v3 + 80LL * (v1 - 3)) = v54;
      v33.m128_f32[0] = (float)((float)(v61[1] - *((float *)&v53 + 1)) * v28) + *((float *)&v53 + 1);
      *(_QWORD *)(v3 + 80LL * (v1 - 3) + 16) = _mm_unpacklo_ps(v32, v33).m128_u64[0];
      break;
    case 0x109:
      v6 = *(__m128 *)(v3 + 80LL * (v1 - 3));
      v7 = *(__m128 *)(v3 + 80LL * (v1 - 2));
      v8 = *(__m128 *)(v3 + 80LL * (v1 - 3) + 16);
      v9 = *(__m128 *)(v3 + 80LL * (v1 - 2) + 16);
      v10 = *(__m128 *)(v3 + 80LL * (v1 - 2) + 32);
      v11 = *(__m128 *)(v3 + 80LL * (v1 - 3) + 32);
      v12 = *(__m128 *)(v3 + 80LL * (v1 - 3) + 48);
      v13 = *(__m128 *)(v3 + 80LL * (v1 - 2) + 48);
      v14 = fmaxf(0.0, fminf(v4, 1.0));
      *(float *)&v57 = (float)((float)(v7.m128_f32[0] - v6.m128_f32[0]) * v14) + v6.m128_f32[0];
      v15 = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
      v16 = (float)((float)(_mm_shuffle_ps(v7, v7, 85).m128_f32[0] - v15) * v14) + v15;
      v17 = _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
      v6.m128_f32[0] = _mm_shuffle_ps(v6, v6, 255).m128_f32[0];
      *((float *)&v57 + 1) = v16;
      *((float *)&v57 + 2) = (float)((float)(_mm_shuffle_ps(v7, v7, 170).m128_f32[0] - v17) * v14) + v17;
      *((float *)&v57 + 3) = (float)((float)(_mm_shuffle_ps(v7, v7, 255).m128_f32[0] - v6.m128_f32[0]) * v14)
                           + v6.m128_f32[0];
      *(float *)&v58 = (float)((float)(v9.m128_f32[0] - v8.m128_f32[0]) * v14) + v8.m128_f32[0];
      v18 = _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
      v19 = (float)((float)(_mm_shuffle_ps(v9, v9, 85).m128_f32[0] - v18) * v14) + v18;
      v20 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
      v8.m128_f32[0] = _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
      *((float *)&v58 + 1) = v19;
      *((float *)&v58 + 2) = (float)((float)(_mm_shuffle_ps(v9, v9, 170).m128_f32[0] - v20) * v14) + v20;
      *((float *)&v58 + 3) = (float)((float)(_mm_shuffle_ps(v9, v9, 255).m128_f32[0] - v8.m128_f32[0]) * v14)
                           + v8.m128_f32[0];
      *(float *)&v59 = (float)((float)(v10.m128_f32[0] - v11.m128_f32[0]) * v14) + v11.m128_f32[0];
      v21 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
      *((float *)&v59 + 1) = (float)((float)(_mm_shuffle_ps(v10, v10, 85).m128_f32[0] - v21) * v14) + v21;
      v22 = _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
      v11.m128_f32[0] = _mm_shuffle_ps(v11, v11, 255).m128_f32[0];
      *(_DWORD *)(v3 + 80LL * (v1 - 3) + 72) = 265;
      *((float *)&v59 + 2) = (float)((float)(_mm_shuffle_ps(v10, v10, 170).m128_f32[0] - v22) * v14) + v22;
      *((float *)&v59 + 3) = (float)((float)(_mm_shuffle_ps(v10, v10, 255).m128_f32[0] - v11.m128_f32[0]) * v14)
                           + v11.m128_f32[0];
      v60[0] = (float)((float)(v13.m128_f32[0] - v12.m128_f32[0]) * v14) + v12.m128_f32[0];
      v23 = _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
      v24 = (float)((float)(_mm_shuffle_ps(v13, v13, 85).m128_f32[0] - v23) * v14) + v23;
      v25 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
      v12.m128_f32[0] = _mm_shuffle_ps(v12, v12, 255).m128_f32[0];
      v60[1] = v24;
      *(_OWORD *)(v3 + 80LL * (v1 - 3)) = v57;
      *(_OWORD *)(v3 + 80LL * (v1 - 3) + 16) = v58;
      v60[2] = (float)((float)(_mm_shuffle_ps(v13, v13, 170).m128_f32[0] - v25) * v14) + v25;
      *(_OWORD *)(v3 + 80LL * (v1 - 3) + 32) = v59;
      v60[3] = (float)((float)(_mm_shuffle_ps(v13, v13, 255).m128_f32[0] - v12.m128_f32[0]) * v14) + v12.m128_f32[0];
      *(_OWORD *)(v3 + 80LL * (v1 - 3) + 48) = *(_OWORD *)v60;
      break;
    default:
      v50 = 3114;
      goto LABEL_20;
  }
  *(_BYTE *)(v3 + 80LL * (v1 - 3) + 76) = 1;
  *((_DWORD *)v2 + 4) -= 2;
  return v5;
}
