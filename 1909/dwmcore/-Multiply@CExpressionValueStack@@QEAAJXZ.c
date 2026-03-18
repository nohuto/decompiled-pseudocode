/*
 * XREFs of ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x180094150
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800350E8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800BC720 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x180202824 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x1802278AC (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Multiply(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  CExpressionValueStack *v2; // r10
  __int64 v3; // rdx
  unsigned int v4; // ebx
  __int64 v5; // r9
  float *v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  float v9; // xmm0_4
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  __int128 v13; // xmm1
  int v14; // r11d
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __m128 v17; // xmm4
  __m128 v18; // xmm3
  float v19; // eax
  __m128 v20; // xmm2
  __m128 v21; // xmm1
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  signed int v25; // eax
  __int64 v26; // rcx
  __int128 v27; // [rsp+30h] [rbp-29h] BYREF
  __int64 v28; // [rsp+40h] [rbp-19h]
  __int64 v29; // [rsp+48h] [rbp-11h]
  float v30; // [rsp+50h] [rbp-9h]
  _OWORD v31[4]; // [rsp+60h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 < 2 )
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      0x80004005,
      0x42Au,
      0LL);
    return v4;
  }
  v3 = *((_QWORD *)this + 3);
  v4 = 0;
  v5 = v3 + 80LL * (v1 - 2);
  v6 = (float *)(80LL * (v1 - 1) + v3);
  v7 = *(_DWORD *)(v5 + 72);
  v8 = *((unsigned int *)v6 + 18);
  if ( v7 == (_DWORD)v8 )
  {
    switch ( v7 )
    {
      case 104:
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v27,
          (const struct D2D1::Matrix3x2F *)v5,
          (const struct D2D1::Matrix3x2F *)v6);
        v10 = v27;
        *(_DWORD *)(v5 + 72) = 104;
        v11 = v28;
        *(_OWORD *)v5 = v10;
        *(_QWORD *)(v5 + 16) = v11;
        break;
      case 18:
        v9 = *v6 * *(float *)v5;
        *(_DWORD *)(v5 + 72) = 18;
        *(float *)v5 = v9;
        break;
      case 35:
        v23 = *(float *)v5 * *v6;
        v24 = *(float *)(v5 + 4) * v6[1];
        *(_DWORD *)(v5 + 72) = 35;
        *(float *)v5 = v23;
        *(float *)(v5 + 4) = v24;
        break;
      case 52:
        v19 = *(float *)(v5 + 8);
        *(_QWORD *)&v27 = *(_QWORD *)v5;
        v29 = *(_QWORD *)v6;
        v20 = (__m128)(unsigned int)v29;
        v20.m128_f32[0] = *(float *)&v29 * *(float *)&v27;
        *((float *)&v27 + 2) = v19;
        v21 = (__m128)HIDWORD(v29);
        v21.m128_f32[0] = *((float *)&v29 + 1) * *((float *)&v27 + 1);
        v30 = v6[2];
        v22 = v30 * v19;
        *(_DWORD *)(v5 + 72) = 52;
        *((float *)&v27 + 2) = v22;
        *(_QWORD *)v5 = _mm_unpacklo_ps(v20, v21).m128_u64[0];
        *(float *)(v5 + 8) = v22;
        break;
      default:
        switch ( v7 )
        {
          case 69:
            v17 = (__m128)_mm_loadu_si128((const __m128i *)v6);
            *(_DWORD *)(v5 + 72) = 69;
            v18 = (__m128)_mm_loadu_si128((const __m128i *)v5);
            *(float *)&v27 = v17.m128_f32[0] * v18.m128_f32[0];
            *((float *)&v27 + 3) = _mm_shuffle_ps(v17, v17, 255).m128_f32[0] * _mm_shuffle_ps(v18, v18, 255).m128_f32[0];
            *((float *)&v27 + 1) = _mm_shuffle_ps(v17, v17, 85).m128_f32[0] * _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
            *((float *)&v27 + 2) = _mm_shuffle_ps(v17, v17, 170).m128_f32[0] * _mm_shuffle_ps(v18, v18, 170).m128_f32[0];
            break;
          case 71:
            D3DXQuaternionMultiply(
              (struct D2DQuaternion *)&v27,
              (const struct D2DQuaternion *)v6,
              (const struct D2DQuaternion *)v5);
            *(_DWORD *)(v5 + 72) = 71;
            break;
          case 265:
            D2DMatrixMultiply((struct D2DMatrix *)v31, (const struct D2DMatrix *)v5, (const struct D2DMatrix *)v6);
            v13 = v31[1];
            *(_OWORD *)v5 = v31[0];
            *(_DWORD *)(v5 + 72) = v14;
            v15 = v31[2];
            *(_OWORD *)(v5 + 16) = v13;
            v16 = v31[3];
            *(_OWORD *)(v5 + 32) = v15;
            *(_OWORD *)(v5 + 48) = v16;
            goto LABEL_7;
          default:
            v4 = -2147467259;
            MilInstrumentationCheckHR_MaybeFailFast(
              v8,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              0x80004005,
              0x493u,
              0LL);
            return v4;
        }
        *(_OWORD *)v5 = v27;
        break;
    }
LABEL_7:
    *(_BYTE *)(v5 + 76) = 1;
    --*((_DWORD *)v2 + 4);
    return v4;
  }
  if ( (_DWORD)v8 == 18 || v7 == 18 )
  {
    v25 = CExpressionValueStack::Scale(v2);
    v4 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(
        v26,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        v25,
        0x4A2u,
        0LL);
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v8,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      0x80004005,
      0x4ACu,
      0LL);
  }
  return v4;
}
