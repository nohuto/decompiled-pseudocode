/*
 * XREFs of sub_18006F3BC @ 0x18006F3BC
 * Callers:
 *     sub_180072DF8 @ 0x180072DF8 (sub_180072DF8.c)
 * Callees:
 *     sub_18002B81C @ 0x18002B81C (sub_18002B81C.c)
 */

_QWORD *__fastcall sub_18006F3BC(_QWORD *a1, __int64 a2, _QWORD **a3)
{
  _QWORD *result; // rax

  result = sub_18002B81C(a1);
  *((_WORD *)result + 12) = 0;
  result[4] = **a3;
  result[5] = 0LL;
  return result;
}
