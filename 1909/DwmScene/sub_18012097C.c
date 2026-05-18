/*
 * XREFs of sub_18012097C @ 0x18012097C
 * Callers:
 *     sub_180121A58 @ 0x180121A58 (sub_180121A58.c)
 *     sub_1801248C4 @ 0x1801248C4 (sub_1801248C4.c)
 * Callees:
 *     sub_180025694 @ 0x180025694 (sub_180025694.c)
 */

_QWORD *__fastcall sub_18012097C(_QWORD *a1, __int64 a2, _DWORD **a3)
{
  _QWORD *result; // rax

  result = sub_180025694(a1);
  *((_WORD *)result + 12) = 0;
  *((_DWORD *)result + 8) = **a3;
  result[12] = 0LL;
  return result;
}
