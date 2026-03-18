/*
 * XREFs of ?Add@CExpressionValueStack@@QEAAJXZ @ 0x18006C874
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1802185AC (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 *     ??HD2DVector4@@QEBA?AU0@AEBU0@@Z @ 0x180218758 (--HD2DVector4@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Add(unsigned __int64 this)
{
  unsigned __int64 v1; // rsi
  unsigned int v2; // r14d
  unsigned int v3; // edx
  __int64 v4; // rax
  float *v5; // rdi
  CExpressionValue *v6; // rax
  float *v7; // rbx
  CExpressionValue *v8; // rax
  int v9; // eax
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
  int v20; // eax
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  unsigned int v25; // [rsp+20h] [rbp-49h]
  __int128 v26; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v27[80]; // [rsp+50h] [rbp-19h] BYREF

  v1 = this;
  LODWORD(this) = *(_DWORD *)(this + 16);
  if ( (unsigned int)this >= 2 )
  {
    v3 = *(_DWORD *)(v1 + 48);
    v4 = (unsigned int)(this - 2);
    v5 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < v3 )
    {
      v7 = (float *)(*(_QWORD *)(v1 + 24) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
      LODWORD(this) = *(_DWORD *)(v1 + 16);
      v7 = (float *)&CExpressionValueStack::s_emptyValue;
      v3 = *(_DWORD *)(v1 + 48);
    }
    this = (unsigned int)(this - 1);
    if ( (unsigned int)this < v3 )
    {
      v5 = (float *)(*(_QWORD *)(v1 + 24) + 80 * this);
    }
    else
    {
      v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v8);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
    }
    v9 = *((_DWORD *)v7 + 18);
    v2 = 0;
    if ( v9 == *((_DWORD *)v5 + 18) )
    {
      switch ( v9 )
      {
        case 18:
          v23 = *v5 + *v7;
          *((_DWORD *)v7 + 18) = 18;
          *v7 = v23;
          break;
        case 35:
          v21 = *v5 + *v7;
          v22 = v5[1] + v7[1];
          *((_DWORD *)v7 + 18) = 35;
          *v7 = v21;
          v7[1] = v22;
          break;
        case 52:
          v18 = (__m128)*(unsigned int *)v5;
          v18.m128_f32[0] = v18.m128_f32[0] + *v7;
          v19 = (__m128)*((unsigned int *)v5 + 1);
          v19.m128_f32[0] = v19.m128_f32[0] + v7[1];
          *((float *)&v26 + 2) = v5[2] + v7[2];
          v20 = DWORD2(v26);
          *((_DWORD *)v7 + 18) = 52;
          *(_QWORD *)v7 = _mm_unpacklo_ps(v18, v19).m128_u64[0];
          *((_DWORD *)v7 + 2) = v20;
          break;
        case 69:
          v17 = (_OWORD *)D2DVector4::operator+(v7, &v26, v5);
          *((_DWORD *)v7 + 18) = 69;
          *(_OWORD *)v7 = *v17;
          break;
        case 104:
          v11 = *v5 + *v7;
          v12 = (__m128)*((unsigned int *)v5 + 5);
          v12.m128_f32[0] = v12.m128_f32[0] + v7[5];
          *((float *)&v26 + 1) = v5[1] + v7[1];
          v13 = v5[3] + v7[3];
          *(float *)&v26 = v11;
          v14 = v5[2] + v7[2];
          *((float *)&v26 + 3) = v13;
          v15 = (__m128)*((unsigned int *)v5 + 4);
          v15.m128_f32[0] = v15.m128_f32[0] + v7[4];
          *((float *)&v26 + 2) = v14;
          v16 = v26;
          *((_DWORD *)v7 + 18) = 104;
          *(_OWORD *)v7 = v16;
          *((_QWORD *)v7 + 2) = _mm_unpacklo_ps(v15, v12).m128_u64[0];
          break;
        case 265:
          v10 = (_OWORD *)D2DMatrix::operator+(v7, v27, v5);
          *((_DWORD *)v7 + 18) = 265;
          *(_OWORD *)v7 = *v10;
          *((_OWORD *)v7 + 1) = v10[1];
          *((_OWORD *)v7 + 2) = v10[2];
          *((_OWORD *)v7 + 3) = v10[3];
          break;
        default:
          v25 = 935;
          goto LABEL_3;
      }
      *((_BYTE *)v7 + 76) = 1;
      --*(_DWORD *)(v1 + 16);
      return v2;
    }
    v25 = 880;
  }
  else
  {
    v25 = 852;
  }
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v25);
  return v2;
}
