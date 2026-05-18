/*
 * XREFs of sub_18006F310 @ 0x18006F310
 * Callers:
 *     sub_180072CA8 @ 0x180072CA8 (sub_180072CA8.c)
 *     sub_1800A1FB4 @ 0x1800A1FB4 (sub_1800A1FB4.c)
 *     sub_1800A7430 @ 0x1800A7430 (sub_1800A7430.c)
 * Callees:
 *     sub_180038D74 @ 0x180038D74 (sub_180038D74.c)
 */

_QWORD *__fastcall sub_18006F310(_QWORD *a1, __int64 a2, _QWORD **a3)
{
  _QWORD *result; // rax

  result = sub_180038D74(a1);
  *((_WORD *)result + 12) = 0;
  result[4] = **a3;
  result[5] = 0LL;
  result[6] = 0LL;
  return result;
}
