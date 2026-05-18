/*
 * XREFs of sub_18008F2F8 @ 0x18008F2F8
 * Callers:
 *     sub_18008F670 @ 0x18008F670 (sub_18008F670.c)
 * Callees:
 *     sub_180064588 @ 0x180064588 (sub_180064588.c)
 */

_QWORD *__fastcall sub_18008F2F8(_QWORD *a1, __int64 a2, _WORD **a3)
{
  _QWORD *result; // rax

  result = sub_180064588(a1);
  *((_WORD *)result + 12) = 0;
  *((_WORD *)result + 14) = **a3;
  *((_DWORD *)result + 8) = 0;
  return result;
}
