/*
 * XREFs of ?TimeSpanFrom@CExpressionValueStack@@QEAAJI@Z @ 0x1801D3234
 * Callers:
 *     ?TimeSpanFromMilliSeconds@CExpressionValueStack@@QEAAJXZ @ 0x1801D32F4 (-TimeSpanFromMilliSeconds@CExpressionValueStack@@QEAAJXZ.c)
 *     ?TimeSpanFromMinutes@CExpressionValueStack@@QEAAJXZ @ 0x1801D3304 (-TimeSpanFromMinutes@CExpressionValueStack@@QEAAJXZ.c)
 *     ?TimeSpanFromSeconds@CExpressionValueStack@@QEAAJXZ @ 0x1801D3314 (-TimeSpanFromSeconds@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::TimeSpanFrom(CExpressionValueStack *this, int a2)
{
  int v2; // eax
  unsigned int v4; // ebx
  __int64 v5; // rax
  CExpressionValue *v6; // rax
  _DWORD *v7; // rbx
  unsigned int v9; // [rsp+20h] [rbp-68h]
  _BYTE v10[88]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v5 = (unsigned int)(v2 - 1);
    if ( (unsigned int)v5 < *((_DWORD *)this + 12) )
    {
      v7 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v10);
      v7 = &CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v10);
    }
    if ( v7[18] == 18 )
    {
      v7[18] = 42;
      *((_BYTE *)v7 + 76) = 1;
      *(float *)v7 = (float)a2 * *(float *)v7;
      return 0;
    }
    v9 = 7214;
  }
  else
  {
    v9 = 7202;
  }
  v4 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v9);
  return v4;
}
