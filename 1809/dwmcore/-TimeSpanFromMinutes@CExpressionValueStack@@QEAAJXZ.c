/*
 * XREFs of ?TimeSpanFromMinutes@CExpressionValueStack@@QEAAJXZ @ 0x1801D3304
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CExpressionValueStack::TimeSpanFromMinutes(CExpressionValueStack *this)
{
  return CExpressionValueStack::TimeSpanFrom(this, 60000);
}
