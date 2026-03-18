/*
 * XREFs of ?Reset@CExpressionPerformanceCounter@@QEAAXXZ @ 0x180203FA4
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800757E0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CExpressionPerformanceCounter::Reset(CExpressionPerformanceCounter *this)
{
  __int64 v1; // rax
  _QWORD *v2; // rdx

  v1 = 0LL;
  v2 = (_QWORD *)((char *)this + 24);
  do
  {
    *((_DWORD *)this + v1++) = 0;
    *v2++ = 0LL;
  }
  while ( v1 < 6 );
}
