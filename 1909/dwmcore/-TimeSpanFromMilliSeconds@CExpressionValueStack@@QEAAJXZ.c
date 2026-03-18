/*
 * XREFs of ?TimeSpanFromMilliSeconds@CExpressionValueStack@@QEAAJXZ @ 0x180203034
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CExpressionValueStack::TimeSpanFromMilliSeconds(CExpressionValueStack *this)
{
  return CExpressionValueStack::TimeSpanFrom(this, 1);
}
