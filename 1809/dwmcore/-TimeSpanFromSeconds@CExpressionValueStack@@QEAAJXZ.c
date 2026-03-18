/*
 * XREFs of ?TimeSpanFromSeconds@CExpressionValueStack@@QEAAJXZ @ 0x1801D3314
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CExpressionValueStack::TimeSpanFromSeconds(CExpressionValueStack *this)
{
  return CExpressionValueStack::TimeSpanFrom(this, 1000);
}
