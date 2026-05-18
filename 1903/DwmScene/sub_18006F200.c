/*
 * XREFs of sub_18006F200 @ 0x18006F200
 * Callers:
 *     sub_180072B98 @ 0x180072B98 (sub_180072B98.c)
 *     sub_1800A1EA4 @ 0x1800A1EA4 (sub_1800A1EA4.c)
 *     sub_1800A7320 @ 0x1800A7320 (sub_1800A7320.c)
 * Callees:
 *     sub_180038C64 @ 0x180038C64 (sub_180038C64.c)
 */

_QWORD *__fastcall sub_18006F200(_QWORD *a1, __int64 a2, _QWORD **a3)
{
  _QWORD *result; // rax

  result = sub_180038C64(a1);
  *((_WORD *)result + 12) = 0;
  result[4] = **a3;
  result[5] = 0LL;
  result[6] = 0LL;
  return result;
}
