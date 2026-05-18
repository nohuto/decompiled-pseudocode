/*
 * XREFs of sub_1800A862C @ 0x1800A862C
 * Callers:
 *     sub_1800EB1B0 @ 0x1800EB1B0 (sub_1800EB1B0.c)
 * Callees:
 *     sub_1800A8660 @ 0x1800A8660 (sub_1800A8660.c)
 */

__int64 __fastcall sub_1800A862C(int a1, __int64 a2, char a3)
{
  sub_1800A8660(a1, a2, 1LL << a3, 0, 1);
  return a2;
}
