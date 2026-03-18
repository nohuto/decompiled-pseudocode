/*
 * XREFs of ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1800E72C0
 * Callers:
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180193130 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x1801E82B0 (-Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 */

struct CExpressionValue *__fastcall CExpressionValueStack::PeekStackValue(CExpressionValueStack *this, int a2)
{
  __int64 v2; // r8
  CExpressionValue *v3; // rax
  _BYTE v5[88]; // [rsp+20h] [rbp-58h] BYREF

  v2 = (unsigned int)(*((_DWORD *)this + 4) + a2 - 1);
  if ( (unsigned int)v2 < *((_DWORD *)this + 12) )
    return (struct CExpressionValue *)(*((_QWORD *)this + 3) + 80 * v2);
  v3 = CExpressionValue::CExpressionValue((CExpressionValue *)v5);
  CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v3);
  CExpressionValue::~CExpressionValue((CExpressionValue *)v5);
  return (struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
}
