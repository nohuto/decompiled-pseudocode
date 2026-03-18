/*
 * XREFs of ?Round@CExpressionValueStack@@QEAAJXZ @ 0x1801D2A6C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ceilf_0 @ 0x1800EFFF7 (ceilf_0.c)
 *     floorf_0 @ 0x1800F000F (floorf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Round(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rax
  CExpressionValue *v4; // rax
  _DWORD *v5; // rbx
  float v6; // xmm6_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  unsigned int v11; // [rsp+20h] [rbp-78h]
  _BYTE v12[80]; // [rsp+30h] [rbp-68h] BYREF
  float Y; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
  {
    v11 = 4596;
LABEL_3:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v11);
    return v2;
  }
  v3 = (unsigned int)(v1 - 1);
  if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
  {
    v5 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v3);
  }
  else
  {
    v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v12);
    v5 = &CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v4);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v12);
  }
  if ( v5[18] != 18 )
  {
    v11 = 4641;
    goto LABEL_3;
  }
  v6 = *(float *)v5;
  v7 = modff(*(float *)v5, &Y);
  if ( ((int)(float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(Y) & _xmm) & 1) != 0
    || (v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7) & _xmm), v8 != 0.5) )
  {
    if ( v6 < 0.0 )
      v9 = ceilf_0(v6 - 0.5);
    else
      v9 = floorf_0(v6 + 0.5);
  }
  else if ( v6 < 0.0 )
  {
    v9 = ceilf_0(v6 - 0.5) + 1.0;
  }
  else
  {
    v9 = floorf_0(v6 + 0.5) - 1.0;
  }
  v5[18] = 18;
  *(float *)v5 = v9;
  *((_BYTE *)v5 + 76) = 1;
  return 0;
}
