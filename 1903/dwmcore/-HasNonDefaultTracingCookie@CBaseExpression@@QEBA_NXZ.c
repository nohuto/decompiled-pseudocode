/*
 * XREFs of ?HasNonDefaultTracingCookie@CBaseExpression@@QEBA_NXZ @ 0x1801D56D0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800840A0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseExpression::HasNonDefaultTracingCookie(CBaseExpression *this)
{
  return *(_DWORD *)(*((_QWORD *)this + 38) + 4LL) >> 31;
}
