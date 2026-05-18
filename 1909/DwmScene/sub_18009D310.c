/*
 * XREFs of sub_18009D310 @ 0x18009D310
 * Callers:
 *     sub_18002D0C8 @ 0x18002D0C8 (sub_18002D0C8.c)
 *     sub_18002DDDC @ 0x18002DDDC (sub_18002DDDC.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_18009D310(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *result; // rax

  *a1 = a2;
  a1[2] = 1;
  a1[3] = 1;
  a1[5] = a5;
  a1[6] = a6;
  result = a1;
  a1[1] = a3;
  a1[4] = a4;
  return result;
}
