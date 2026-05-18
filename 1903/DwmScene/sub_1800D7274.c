/*
 * XREFs of sub_1800D7274 @ 0x1800D7274
 * Callers:
 *     sub_1800D9448 @ 0x1800D9448 (sub_1800D9448.c)
 * Callees:
 *     sub_18002B70C @ 0x18002B70C (sub_18002B70C.c)
 */

_QWORD *__fastcall sub_1800D7274(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  result = sub_18002B70C(a1);
  *((_WORD *)result + 12) = 0;
  result[4] = *(_QWORD *)a2;
  *((_DWORD *)result + 10) = *(_DWORD *)(a2 + 8);
  return result;
}
