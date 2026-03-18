/*
 * XREFs of ?TimeSpanFromMilliSeconds@CExpressionValueStack@@QEAAJXZ @ 0x180204724
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CExpressionValueStack::TimeSpanFromMilliSeconds(CExpressionValueStack *this)
{
  return CExpressionValueStack::TimeSpanFrom(this, 1);
}
