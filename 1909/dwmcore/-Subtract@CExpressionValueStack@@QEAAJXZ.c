/*
 * XREFs of ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x180202CA0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??GD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x180225EC0 (--GD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 *     ??GD2DVector4@@QEBA?AU0@AEBU0@@Z @ 0x180226214 (--GD2DVector4@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Subtract(CExpressionValueStack *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edx
  unsigned int v6; // esi
  float *v7; // rbx
  __int64 v8; // r8
  unsigned int v9; // eax
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
  unsigned int v20; // eax
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  unsigned int v25; // [rsp+20h] [rbp-88h]
  float v26[8]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v27[64]; // [rsp+50h] [rbp-58h] BYREF

  v4 = *((_DWORD *)this + 4);
  if ( v4 >= 2 )
  {
    v6 = 0;
    v7 = (float *)(*((_QWORD *)this + 3) + 80LL * (v4 - 2));
    v8 = *((_QWORD *)this + 3) + 80LL * (v4 - 1);
    v9 = *((_DWORD *)v7 + 18);
    if ( v9 == *(_DWORD *)(v8 + 72) )
    {
      switch ( v9 )
      {
        case 0x12u:
          v23 = *v7 - *(float *)v8;
          *((_DWORD *)v7 + 18) = 18;
          *v7 = v23;
          break;
        case 0x23u:
          v21 = *v7 - *(float *)v8;
          v22 = v7[1] - *(float *)(v8 + 4);
          *((_DWORD *)v7 + 18) = 35;
          *v7 = v21;
          v7[1] = v22;
          break;
        case 0x34u:
          v18 = (__m128)*(unsigned int *)v7;
          v18.m128_f32[0] = v18.m128_f32[0] - *(float *)v8;
          v19 = (__m128)*((unsigned int *)v7 + 1);
          v19.m128_f32[0] = v19.m128_f32[0] - *(float *)(v8 + 4);
          v26[2] = v7[2] - *(float *)(v8 + 8);
          v20 = LODWORD(v26[2]);
          *((_DWORD *)v7 + 18) = 52;
          *(_QWORD *)v7 = _mm_unpacklo_ps(v18, v19).m128_u64[0];
          *((_DWORD *)v7 + 2) = v20;
          break;
        case 0x45u:
          v17 = (_OWORD *)D2DVector4::operator-(v7, v26, v8, a4);
          *((_DWORD *)v7 + 18) = 69;
          *(_OWORD *)v7 = *v17;
          break;
        case 0x68u:
          v11 = *v7 - *(float *)v8;
          v12 = (__m128)*((unsigned int *)v7 + 5);
          v12.m128_f32[0] = v12.m128_f32[0] - *(float *)(v8 + 20);
          v26[1] = v7[1] - *(float *)(v8 + 4);
          v13 = v7[3] - *(float *)(v8 + 12);
          v26[0] = v11;
          v14 = v7[2] - *(float *)(v8 + 8);
          v26[3] = v13;
          v15 = (__m128)*((unsigned int *)v7 + 4);
          v15.m128_f32[0] = v15.m128_f32[0] - *(float *)(v8 + 16);
          v26[2] = v14;
          v16 = *(_OWORD *)v26;
          *((_DWORD *)v7 + 18) = 104;
          *(_OWORD *)v7 = v16;
          *((_QWORD *)v7 + 2) = _mm_unpacklo_ps(v15, v12).m128_u64[0];
          break;
        case 0x109u:
          v10 = (_OWORD *)D2DMatrix::operator-(v7, v27);
          *((_DWORD *)v7 + 18) = 265;
          *(_OWORD *)v7 = *v10;
          *((_OWORD *)v7 + 1) = v10[1];
          *((_OWORD *)v7 + 2) = v10[2];
          *((_OWORD *)v7 + 3) = v10[3];
          break;
        default:
          v25 = 1033;
          goto LABEL_3;
      }
      *((_BYTE *)v7 + 76) = 1;
      --*((_DWORD *)this + 4);
      return v6;
    }
    v25 = 979;
  }
  else
  {
    v25 = 956;
  }
LABEL_3:
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    0x80004005,
    v25,
    0LL);
  return v6;
}
