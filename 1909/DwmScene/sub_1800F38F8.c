/*
 * XREFs of sub_1800F38F8 @ 0x1800F38F8
 * Callers:
 *     sub_1800F352C @ 0x1800F352C (sub_1800F352C.c)
 * Callees:
 *     sub_1800F1E34 @ 0x1800F1E34 (sub_1800F1E34.c)
 */

_DWORD *__fastcall sub_1800F38F8(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_1800F1E34(a1, a2);
  *result = *a3;
  result[1] = a3[1];
  result[2] = a3[2];
  return result;
}
