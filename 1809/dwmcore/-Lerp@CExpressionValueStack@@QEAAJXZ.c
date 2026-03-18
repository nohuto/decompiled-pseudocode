/*
 * XREFs of ?Lerp@CExpressionValueStack@@QEAAJXZ @ 0x1801CF434
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Lerp(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rax
  float *v5; // rsi
  CExpressionValue *v6; // rax
  _OWORD *v7; // rbx
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  _OWORD *v10; // rdi
  CExpressionValue *v11; // rax
  int v12; // eax
  float v13; // xmm12_4
  unsigned int v14; // esi
  __m128 v15; // xmm4
  __m128 v16; // xmm3
  __m128 v17; // xmm6
  __m128 v18; // xmm5
  __m128 v19; // xmm7
  __m128 v20; // xmm8
  __m128 v21; // xmm11
  __m128 v22; // xmm10
  float v23; // xmm2_4
  float v24; // xmm9_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  __int128 v36; // xmm1
  float v37; // xmm2_4
  __int128 v38; // xmm0
  __m128 v39; // xmm3
  __m128 v40; // xmm5
  float v41; // xmm4_4
  float v42; // xmm0_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  __m128 v45; // xmm1
  __m128 v46; // xmm2
  __m128 v47; // xmm5
  __m128 v48; // xmm4
  float v49; // xmm3_4
  float v50; // xmm0_4
  float v51; // xmm1_4
  float v52; // xmm0_4
  __m128 v53; // xmm3
  __m128 v54; // xmm1
  float v55; // xmm2_4
  float v56; // xmm0_4
  float v57; // xmm1_4
  float v58; // xmm2_4
  float v59; // xmm0_4
  float v60; // xmm2_4
  float v61; // xmm1_4
  unsigned int v63; // [rsp+28h] [rbp-E0h]
  __int128 v64; // [rsp+38h] [rbp-D0h]
  __int128 v65; // [rsp+38h] [rbp-D0h]
  __int64 v66; // [rsp+50h] [rbp-B8h]
  float v67; // [rsp+58h] [rbp-B0h]
  __int64 v68; // [rsp+60h] [rbp-A8h]
  __int128 v69; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v70; // [rsp+78h] [rbp-90h]
  __int128 v71; // [rsp+88h] [rbp-80h]
  float v72[12]; // [rsp+98h] [rbp-70h]
  float v73[32]; // [rsp+C8h] [rbp-40h]

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 < 3 )
  {
    v63 = 2991;
LABEL_29:
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v2,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v63);
    return v14;
  }
  v3 = *((_DWORD *)this + 12);
  v4 = (unsigned int)(v2 - 3);
  v5 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v4 < v3 )
  {
    v7 = (_OWORD *)(*((_QWORD *)this + 3) + 80 * v4);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)&v69);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)&v69);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v7 = &CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v8 = (unsigned int)(v2 - 2);
  if ( (unsigned int)v8 < v3 )
  {
    v10 = (_OWORD *)(*((_QWORD *)this + 3) + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)&v69);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)&v69);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v10 = &CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v2 = (unsigned int)(v2 - 1);
  if ( (unsigned int)v2 < v3 )
  {
    v5 = (float *)(*((_QWORD *)this + 3) + 80 * v2);
  }
  else
  {
    v11 = CExpressionValue::CExpressionValue((CExpressionValue *)&v69);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v11);
    CExpressionValue::~CExpressionValue((CExpressionValue *)&v69);
  }
  v12 = *((_DWORD *)v7 + 18);
  v13 = *v5;
  if ( *((_DWORD *)v5 + 18) != 18 || (v14 = 0, v12 != *((_DWORD *)v10 + 18)) )
  {
    v63 = 3017;
    goto LABEL_29;
  }
  switch ( v12 )
  {
    case 18:
      v61 = *(float *)v10 - *(float *)v7;
      *((_DWORD *)v7 + 18) = 18;
      *(float *)v7 = (float)(fmaxf(0.0, fminf(v13, 1.0)) * v61) + *(float *)v7;
      break;
    case 35:
      v57 = *(float *)v10 - *(float *)v7;
      v58 = *((float *)v10 + 1) - *((float *)v7 + 1);
      *((_DWORD *)v7 + 18) = 35;
      v59 = fmaxf(0.0, fminf(v13, 1.0));
      v60 = (float)(v58 * v59) + *((float *)v7 + 1);
      *(float *)v7 = (float)(v57 * v59) + *(float *)v7;
      *((float *)v7 + 1) = v60;
      break;
    case 52:
      v66 = *(_QWORD *)v7;
      v53 = (__m128)(unsigned int)*(_QWORD *)v10;
      v54 = (__m128)(unsigned int)HIDWORD(*(_QWORD *)v10);
      v55 = fmaxf(0.0, fminf(v13, 1.0));
      v54.m128_f32[0] = COERCE_FLOAT(HIDWORD(*(_QWORD *)v10)) - COERCE_FLOAT(HIDWORD(*(_QWORD *)v7));
      v67 = *((float *)v7 + 2);
      v56 = *((float *)v10 + 2) - v67;
      v53.m128_f32[0] = (float)(COERCE_FLOAT(*(_QWORD *)v10) - COERCE_FLOAT(*(_QWORD *)v7)) * v55;
      *((_DWORD *)v7 + 18) = 52;
      v53.m128_f32[0] = v53.m128_f32[0] + *(float *)&v66;
      v54.m128_f32[0] = (float)(v54.m128_f32[0] * v55) + *((float *)&v66 + 1);
      *(_QWORD *)v7 = _mm_unpacklo_ps(v53, v54).m128_u64[0];
      *((float *)v7 + 2) = (float)(v56 * v55) + v67;
      break;
    case 69:
      v47 = (__m128)_mm_loadu_si128((const __m128i *)v10);
      *((_DWORD *)v7 + 18) = 69;
      v48 = (__m128)_mm_loadu_si128((const __m128i *)v7);
      v49 = fmaxf(0.0, fminf(v13, 1.0));
      *(float *)&v65 = (float)((float)(v47.m128_f32[0] - v48.m128_f32[0]) * v49) + v48.m128_f32[0];
      v50 = _mm_shuffle_ps(v48, v48, 85).m128_f32[0];
      v51 = (float)((float)(_mm_shuffle_ps(v47, v47, 85).m128_f32[0] - v50) * v49) + v50;
      v52 = _mm_shuffle_ps(v48, v48, 170).m128_f32[0];
      v48.m128_f32[0] = _mm_shuffle_ps(v48, v48, 255).m128_f32[0];
      *((float *)&v65 + 1) = v51;
      *((float *)&v65 + 2) = (float)((float)(_mm_shuffle_ps(v47, v47, 170).m128_f32[0] - v52) * v49) + v52;
      *((float *)&v65 + 3) = (float)((float)(_mm_shuffle_ps(v47, v47, 255).m128_f32[0] - v48.m128_f32[0]) * v49)
                           + v48.m128_f32[0];
      *v7 = v65;
      break;
    case 104:
      v39 = *(__m128 *)v10;
      v40 = *(__m128 *)v7;
      v68 = *((_QWORD *)v7 + 2);
      *(_QWORD *)v73 = *((_QWORD *)v10 + 2);
      v41 = fmaxf(0.0, fminf(v13, 1.0));
      *((_DWORD *)v7 + 18) = 104;
      *(float *)&v64 = (float)((float)(v39.m128_f32[0] - v40.m128_f32[0]) * v41) + v40.m128_f32[0];
      v42 = _mm_shuffle_ps(v40, v40, 85).m128_f32[0];
      v43 = (float)((float)(_mm_shuffle_ps(v39, v39, 85).m128_f32[0] - v42) * v41) + v42;
      v44 = _mm_shuffle_ps(v40, v40, 170).m128_f32[0];
      v40.m128_f32[0] = _mm_shuffle_ps(v40, v40, 255).m128_f32[0];
      *((float *)&v64 + 1) = v43;
      v45 = (__m128)LODWORD(v73[0]);
      v45.m128_f32[0] = (float)((float)(v73[0] - *(float *)&v68) * v41) + *(float *)&v68;
      *((float *)&v64 + 2) = (float)((float)(_mm_shuffle_ps(v39, v39, 170).m128_f32[0] - v44) * v41) + v44;
      v46 = (__m128)LODWORD(v73[1]);
      *((float *)&v64 + 3) = (float)((float)(_mm_shuffle_ps(v39, v39, 255).m128_f32[0] - v40.m128_f32[0]) * v41)
                           + v40.m128_f32[0];
      v46.m128_f32[0] = (float)(v73[1] - *((float *)&v68 + 1)) * v41;
      *v7 = v64;
      v46.m128_f32[0] = v46.m128_f32[0] + *((float *)&v68 + 1);
      *((_QWORD *)v7 + 2) = _mm_unpacklo_ps(v45, v46).m128_u64[0];
      break;
    default:
      v2 = 265LL;
      if ( v12 != 265 )
      {
        v63 = 3126;
        goto LABEL_29;
      }
      v15 = *(__m128 *)v7;
      v16 = *(__m128 *)v10;
      v17 = *((__m128 *)v7 + 1);
      v18 = *((__m128 *)v10 + 1);
      v19 = *((__m128 *)v10 + 2);
      v20 = *((__m128 *)v7 + 2);
      v21 = *((__m128 *)v7 + 3);
      v22 = *((__m128 *)v10 + 3);
      v23 = _mm_shuffle_ps(*(__m128 *)v10, *(__m128 *)v10, 170).m128_f32[0];
      v24 = fmaxf(0.0, fminf(v13, 1.0));
      *(float *)&v69 = (float)((float)(COERCE_FLOAT(*v10) - COERCE_FLOAT(*v7)) * v24) + COERCE_FLOAT(*v7);
      v25 = _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
      v26 = (float)((float)(_mm_shuffle_ps(v16, v16, 85).m128_f32[0] - v25) * v24) + v25;
      v27 = _mm_shuffle_ps(v15, v15, 170).m128_f32[0];
      v15.m128_f32[0] = _mm_shuffle_ps(v15, v15, 255).m128_f32[0];
      *((float *)&v69 + 1) = v26;
      *((float *)&v69 + 2) = (float)((float)(v23 - v27) * v24) + v27;
      *((float *)&v69 + 3) = (float)((float)(_mm_shuffle_ps(v16, v16, 255).m128_f32[0] - v15.m128_f32[0]) * v24)
                           + v15.m128_f32[0];
      *(float *)&v70 = (float)((float)(v18.m128_f32[0] - v17.m128_f32[0]) * v24) + v17.m128_f32[0];
      v28 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
      v29 = (float)((float)(_mm_shuffle_ps(v18, v18, 85).m128_f32[0] - v28) * v24) + v28;
      v30 = _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
      v17.m128_f32[0] = _mm_shuffle_ps(v17, v17, 255).m128_f32[0];
      *((float *)&v70 + 1) = v29;
      *((float *)&v70 + 2) = (float)((float)(_mm_shuffle_ps(v18, v18, 170).m128_f32[0] - v30) * v24) + v30;
      *((float *)&v70 + 3) = (float)((float)(_mm_shuffle_ps(v18, v18, 255).m128_f32[0] - v17.m128_f32[0]) * v24)
                           + v17.m128_f32[0];
      *(float *)&v71 = (float)((float)(v19.m128_f32[0] - v20.m128_f32[0]) * v24) + v20.m128_f32[0];
      v31 = _mm_shuffle_ps(v20, v20, 85).m128_f32[0];
      *((float *)&v71 + 1) = (float)((float)(_mm_shuffle_ps(v19, v19, 85).m128_f32[0] - v31) * v24) + v31;
      v32 = _mm_shuffle_ps(v20, v20, 170).m128_f32[0];
      v20.m128_f32[0] = _mm_shuffle_ps(v20, v20, 255).m128_f32[0];
      *((_DWORD *)v7 + 18) = 265;
      *((float *)&v71 + 2) = (float)((float)(_mm_shuffle_ps(v19, v19, 170).m128_f32[0] - v32) * v24) + v32;
      *((float *)&v71 + 3) = (float)((float)(_mm_shuffle_ps(v19, v19, 255).m128_f32[0] - v20.m128_f32[0]) * v24)
                           + v20.m128_f32[0];
      v72[0] = (float)((float)(v22.m128_f32[0] - v21.m128_f32[0]) * v24) + v21.m128_f32[0];
      v33 = _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
      v34 = (float)((float)(_mm_shuffle_ps(v22, v22, 85).m128_f32[0] - v33) * v24) + v33;
      v35 = _mm_shuffle_ps(v21, v21, 170).m128_f32[0];
      v21.m128_f32[0] = _mm_shuffle_ps(v21, v21, 255).m128_f32[0];
      v72[1] = v34;
      v36 = v70;
      v37 = (float)((float)(_mm_shuffle_ps(v22, v22, 170).m128_f32[0] - v35) * v24) + v35;
      *v7 = v69;
      v38 = v71;
      v7[1] = v36;
      v72[2] = v37;
      v7[2] = v38;
      v72[3] = (float)((float)(_mm_shuffle_ps(v22, v22, 255).m128_f32[0] - v21.m128_f32[0]) * v24) + v21.m128_f32[0];
      v7[3] = *(_OWORD *)v72;
      break;
  }
  *((_BYTE *)v7 + 76) = 1;
  *((_DWORD *)this + 4) -= 2;
  return v14;
}
