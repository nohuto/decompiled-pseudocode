/*
 * XREFs of sub_1800F6148 @ 0x1800F6148
 * Callers:
 *     sub_1800525D0 @ 0x1800525D0 (sub_1800525D0.c)
 * Callees:
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_1800F6148(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  if ( a2 > 2 )
    memset((void *)(a1 + 2), a3, a2 - 2);
  return 0LL;
}
