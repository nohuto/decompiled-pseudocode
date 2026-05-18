/*
 * XREFs of sub_18006F244 @ 0x18006F244
 * Callers:
 *     sub_180072F70 @ 0x180072F70 (sub_180072F70.c)
 * Callees:
 *     sub_18006DF5C @ 0x18006DF5C (sub_18006DF5C.c)
 */

_QWORD *__fastcall sub_18006F244(_QWORD *a1, __int64 a2, _QWORD **a3)
{
  _QWORD *result; // rax
  _QWORD *v5; // rcx

  result = sub_18006DF5C(a1);
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
