/*
 * XREFs of ?ColorLerp@CExpressionValueStack@@QEAAJXZ @ 0x1801FEBF0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180093350 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CExpressionValueStack::ColorLerp(CExpressionValueStack *this)
{
  return CExpressionValueStack::ColorLerpHsl(this);
}
