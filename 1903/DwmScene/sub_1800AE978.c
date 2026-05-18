/*
 * XREFs of sub_1800AE978 @ 0x1800AE978
 * Callers:
 *     sub_1800AE9B8 @ 0x1800AE9B8 (sub_1800AE9B8.c)
 *     sub_1800AEA64 @ 0x1800AEA64 (sub_1800AEA64.c)
 *     sub_1800B0924 @ 0x1800B0924 (sub_1800B0924.c)
 *     sub_1801007B0 @ 0x1801007B0 (sub_1801007B0.c)
 * Callees:
 *     sub_1800B1B9C @ 0x1800B1B9C (sub_1800B1B9C.c)
 */

__int64 __fastcall sub_1800AE978(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx

  v3 = a3;
  v5 = a2;
  sub_1800B1B9C();
  return ((v3 + 4 * v5) << 6) + a1 + 548;
}
