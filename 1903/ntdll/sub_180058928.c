/*
 * XREFs of sub_180058928 @ 0x180058928
 * Callers:
 *     sub_1800575E0 @ 0x1800575E0 (sub_1800575E0.c)
 *     sub_1800E08F4 @ 0x1800E08F4 (sub_1800E08F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180058928(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v3; // r9

  if ( a1 < a2 )
    v3 = -1LL;
  else
    v3 = a1 - a2;
  *a3 = v3;
  return a1 < a2 ? 0xC0000095 : 0;
}
