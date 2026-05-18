/*
 * XREFs of sub_18008F408 @ 0x18008F408
 * Callers:
 *     sub_18008F780 @ 0x18008F780 (sub_18008F780.c)
 * Callees:
 *     sub_180064698 @ 0x180064698 (sub_180064698.c)
 */

_QWORD *__fastcall sub_18008F408(_QWORD *a1, __int64 a2, _WORD **a3)
{
  _QWORD *result; // rax

  result = sub_180064698(a1);
  *((_WORD *)result + 12) = 0;
  *((_WORD *)result + 14) = **a3;
  *((_DWORD *)result + 8) = 0;
  return result;
}
