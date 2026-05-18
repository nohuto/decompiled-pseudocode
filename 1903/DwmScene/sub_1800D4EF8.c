/*
 * XREFs of sub_1800D4EF8 @ 0x1800D4EF8
 * Callers:
 *     sub_1800667DC @ 0x1800667DC (sub_1800667DC.c)
 * Callees:
 *     sub_1800D4D90 @ 0x1800D4D90 (sub_1800D4D90.c)
 */

__int64 __fastcall sub_1800D4EF8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1800D4D90((_QWORD *)a1, a2);
  *(_WORD *)(a1 + 184) = 257;
  result = a1;
  *(_QWORD *)(a1 + 192) = 1LL;
  return result;
}
