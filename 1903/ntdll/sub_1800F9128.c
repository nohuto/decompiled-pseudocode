/*
 * XREFs of sub_1800F9128 @ 0x1800F9128
 * Callers:
 *     sub_18007DA44 @ 0x18007DA44 (sub_18007DA44.c)
 * Callees:
 *     sub_180088360 @ 0x180088360 (sub_180088360.c)
 */

__int64 __fastcall sub_1800F9128(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d

  if ( (unsigned int)(a2 - 4520) <= 0x1A && sub_180088360(a1) )
    return (unsigned int)(v3 + v2);
  else
    return 0LL;
}
