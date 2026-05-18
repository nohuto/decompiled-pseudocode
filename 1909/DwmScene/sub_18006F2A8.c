/*
 * XREFs of sub_18006F2A8 @ 0x18006F2A8
 * Callers:
 *     sub_180073018 @ 0x180073018 (sub_180073018.c)
 * Callees:
 *     sub_18002B85C @ 0x18002B85C (sub_18002B85C.c)
 */

_QWORD *__fastcall sub_18006F2A8(_QWORD *a1, __int64 a2, _QWORD **a3)
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
  result[6] = 0LL;
  result[7] = 0LL;
  result[8] = 0LL;
  return result;
}
