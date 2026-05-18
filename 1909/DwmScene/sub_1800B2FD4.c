/*
 * XREFs of sub_1800B2FD4 @ 0x1800B2FD4
 * Callers:
 *     sub_1800B3700 @ 0x1800B3700 (sub_1800B3700.c)
 * Callees:
 *     sub_18002B85C @ 0x18002B85C (sub_18002B85C.c)
 */

_QWORD *__fastcall sub_1800B2FD4(_QWORD *a1, __int64 a2, _QWORD **a3)
{
  _QWORD *result; // rax
  _QWORD *v5; // rcx

  result = sub_18002B85C(a1);
  *((_WORD *)result + 12) = 0;
  v5 = *a3;
  result[4] = 0LL;
  result[5] = 0LL;
  result[4] = *v5;
  result[5] = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  *(_QWORD *)((char *)result + 52) = 0LL;
  *(_QWORD *)((char *)result + 60) = 0LL;
  result[6] = 0LL;
  result[7] = 0LL;
  return result;
}
