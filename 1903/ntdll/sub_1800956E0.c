/*
 * XREFs of sub_1800956E0 @ 0x1800956E0
 * Callers:
 *     sub_1800951A0 @ 0x1800951A0 (sub_1800951A0.c)
 * Callees:
 *     sub_18009671A @ 0x18009671A (sub_18009671A.c)
 *     sub_1800A32A0 @ 0x1800A32A0 (sub_1800A32A0.c)
 */

__int64 sub_1800956E0()
{
  __int64 v0; // rbx

  v0 = sub_1800A32A0() & 0x3F;
  sub_18009671A();
  return (unsigned int)v0;
}
