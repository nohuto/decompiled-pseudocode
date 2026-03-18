/*
 * XREFs of ?HasNonDefaultTracingCookie@CBaseExpression@@QEBA_NXZ @ 0x18018C40C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseExpression::HasNonDefaultTracingCookie(CBaseExpression *this)
{
  return *(_DWORD *)(*((_QWORD *)this + 35) + 4LL) >> 31;
}
