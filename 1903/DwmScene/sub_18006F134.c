/*
 * XREFs of sub_18006F134 @ 0x18006F134
 * Callers:
 *     sub_180072E60 @ 0x180072E60 (sub_180072E60.c)
 * Callees:
 *     sub_18006DE4C @ 0x18006DE4C (sub_18006DE4C.c)
 */

_QWORD *__fastcall sub_18006F134(_QWORD *a1, __int64 a2, _QWORD **a3)
{
  _QWORD *result; // rax
  _QWORD *v5; // rcx

  result = sub_18006DE4C(a1);
  *((_WORD *)result + 12) = 0;
  v5 = *a3;
  result[4] = 0LL;
  result[5] = 0LL;
  result[4] = *v5;
  result[5] = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  result[6] = 0LL;
  result[7] = 0LL;
  return result;
}
