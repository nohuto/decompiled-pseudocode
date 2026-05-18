/*
 * XREFs of sub_1800D2024 @ 0x1800D2024
 * Callers:
 *     sub_1800EF660 @ 0x1800EF660 (sub_1800EF660.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D2024(int a1, int a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = 131074LL;
  if ( a2 != 4 )
    v3 = 2LL;
  return a3 | ((__int64)a1 << 35) | v3;
}
