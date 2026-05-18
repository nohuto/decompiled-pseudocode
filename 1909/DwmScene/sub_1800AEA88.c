/*
 * XREFs of sub_1800AEA88 @ 0x1800AEA88
 * Callers:
 *     sub_1800AEAC8 @ 0x1800AEAC8 (sub_1800AEAC8.c)
 *     sub_1800AEB74 @ 0x1800AEB74 (sub_1800AEB74.c)
 *     sub_1800B0A34 @ 0x1800B0A34 (sub_1800B0A34.c)
 *     sub_1801008C0 @ 0x1801008C0 (sub_1801008C0.c)
 * Callees:
 *     sub_1800B1CAC @ 0x1800B1CAC (sub_1800B1CAC.c)
 */

__int64 __fastcall sub_1800AEA88(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx

  v3 = a3;
  v5 = a2;
  sub_1800B1CAC();
  return ((v3 + 4 * v5) << 6) + a1 + 548;
}
