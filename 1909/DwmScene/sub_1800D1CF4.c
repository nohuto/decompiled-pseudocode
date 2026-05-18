/*
 * XREFs of sub_1800D1CF4 @ 0x1800D1CF4
 * Callers:
 *     sub_1800EC240 @ 0x1800EC240 (sub_1800EC240.c)
 *     sub_1800EF660 @ 0x1800EF660 (sub_1800EF660.c)
 *     sub_1800F0450 @ 0x1800F0450 (sub_1800F0450.c)
 *     sub_180110840 @ 0x180110840 (sub_180110840.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D1CF4(int a1, int a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = 262160LL;
  if ( a2 != 4 )
    v3 = 16LL;
  return a3 | ((__int64)a1 << 38) | v3;
}
