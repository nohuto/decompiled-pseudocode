/*
 * XREFs of ?Matrix3x2@CExpressionValueStack@@QEAAJXZ @ 0x1800C0F9C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2(unsigned __int64 this)
{
  unsigned __int64 v1; // rbx
  unsigned int v2; // edi
  _QWORD *v3; // r14
  int v4; // esi
  CExpressionValue *v5; // rax
  _DWORD *v6; // rax
  bool v7; // zf
  __int64 v8; // rcx
  __m128 v9; // xmm1
  __m128 v10; // xmm2
  unsigned int v12; // [rsp+20h] [rbp-79h]
  __int128 v13; // [rsp+30h] [rbp-69h]
  _BYTE v14[80]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v15[6]; // [rsp+A0h] [rbp+7h] BYREF

  v1 = this;
  if ( *(_DWORD *)(this + 16) >= 6u )
  {
    v2 = 0;
    v3 = v15;
    v4 = 0;
    while ( 1 )
    {
      this = (unsigned int)(v4 + *(_DWORD *)(v1 + 16) - 6);
      if ( (unsigned int)this < *(_DWORD *)(v1 + 48) )
      {
        v6 = (_DWORD *)(*(_QWORD *)(v1 + 24) + 80 * this);
      }
      else
      {
        v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v14);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v14);
        v6 = &CExpressionValueStack::s_emptyValue;
      }
      v7 = v6[18] == 18;
      *v3 = v6;
      if ( !v7 )
        break;
      ++v4;
      ++v3;
      if ( v4 >= 6 )
      {
        v8 = v15[0];
        DWORD1(v13) = *(_DWORD *)v15[1];
        LODWORD(v13) = *(_DWORD *)v15[0];
        DWORD2(v13) = *(_DWORD *)v15[2];
        HIDWORD(v13) = *(_DWORD *)v15[3];
        v9 = (__m128)*(unsigned int *)v15[4];
        v10 = (__m128)*(unsigned int *)v15[5];
        *(_OWORD *)v15[0] = v13;
        *(_DWORD *)(v8 + 72) = 104;
        *(_QWORD *)(v8 + 16) = _mm_unpacklo_ps(v9, v10).m128_u64[0];
        *(_BYTE *)(v8 + 76) = 1;
        *(_DWORD *)(v1 + 16) -= 5;
        return v2;
      }
    }
    v12 = 5538;
  }
  else
  {
    v12 = 5524;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v12);
  return v2;
}
