/*
 * XREFs of KiQueryEffectivePriorityThread @ 0x1400D14D0
 * Callers:
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x1400D1500 (KiIsThreadRankNonZero.c)
 */

__int64 __fastcall KiQueryEffectivePriorityThread(__int64 a1, __int64 a2)
{
  bool v3; // zf
  __int64 result; // rax

  v3 = (unsigned __int8)KiIsThreadRankNonZero(a1, a2) == 0;
  result = 1LL;
  if ( v3 )
    return (unsigned int)*(char *)(a1 + 195);
  return result;
}
