/*
 * XREFs of PoUninitializeStopWatch @ 0x140001E10
 * Callers:
 *     PopAvlDeleteStatsForPowerRequest @ 0x14058983C (PopAvlDeleteStatsForPowerRequest.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PoUninitializeStopWatch(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // r8
  _QWORD *v3; // rdx

  result = a1 + 1;
  *a1 = 0LL;
  v2 = a1[1];
  if ( *(_QWORD **)(v2 + 8) != a1 + 1 || (v3 = (_QWORD *)a1[2], (_QWORD *)*v3 != result) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  *result = 0LL;
  a1[2] = 0LL;
  return result;
}
