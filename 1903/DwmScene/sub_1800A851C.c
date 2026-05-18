/*
 * XREFs of sub_1800A851C @ 0x1800A851C
 * Callers:
 *     sub_1800EB0A0 @ 0x1800EB0A0 (sub_1800EB0A0.c)
 * Callees:
 *     sub_1800A8550 @ 0x1800A8550 (sub_1800A8550.c)
 */

__int64 __fastcall sub_1800A851C(int a1, __int64 a2, char a3)
{
  sub_1800A8550(a1, a2, 1LL << a3, 0, 1);
  return a2;
}
