/*
 * XREFs of ?ColorLerp@CExpressionValueStack@@QEAAJXZ @ 0x1802002E0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CExpressionValueStack::ColorLerp(CExpressionValueStack *this)
{
  return CExpressionValueStack::ColorLerpHsl(this);
}
