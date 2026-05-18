/*
 * XREFs of sub_1800D20A4 @ 0x1800D20A4
 * Callers:
 *     sub_1800EF660 @ 0x1800EF660 (sub_1800EF660.c)
 *     sub_180110840 @ 0x180110840 (sub_180110840.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D20A4(int a1, int a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = 1048640LL;
  if ( a2 != 4 )
    v3 = 64LL;
  return a3 | ((__int64)a1 << 50) | v3;
}
