/*
 * XREFs of sub_1800D7384 @ 0x1800D7384
 * Callers:
 *     sub_1800D9558 @ 0x1800D9558 (sub_1800D9558.c)
 * Callees:
 *     sub_18002B81C @ 0x18002B81C (sub_18002B81C.c)
 */

_QWORD *__fastcall sub_1800D7384(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  result = sub_18002B81C(a1);
  *((_WORD *)result + 12) = 0;
  result[4] = *(_QWORD *)a2;
  *((_DWORD *)result + 10) = *(_DWORD *)(a2 + 8);
  return result;
}
