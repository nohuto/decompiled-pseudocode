/*
 * XREFs of ?ColorLerp@CExpressionValueStack@@QEAAJXZ @ 0x1801CE1BC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CExpressionValueStack::ColorLerp(unsigned __int64 this)
{
  return CExpressionValueStack::ColorLerpHsl(this);
}
