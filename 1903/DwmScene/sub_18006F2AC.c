/*
 * XREFs of sub_18006F2AC @ 0x18006F2AC
 * Callers:
 *     sub_180072CE8 @ 0x180072CE8 (sub_180072CE8.c)
 * Callees:
 *     sub_18002B70C @ 0x18002B70C (sub_18002B70C.c)
 */

_QWORD *__fastcall sub_18006F2AC(_QWORD *a1, __int64 a2, _QWORD **a3)
{
  _QWORD *result; // rax

  result = sub_18002B70C(a1);
  *((_WORD *)result + 12) = 0;
  result[4] = **a3;
  result[5] = 0LL;
  return result;
}
