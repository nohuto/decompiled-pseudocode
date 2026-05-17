/*
 * XREFs of sub_180091C70 @ 0x180091C70
 * Callers:
 *     atoi @ 0x18008D0F0 (atoi.c)
 *     atol @ 0x18008D120 (atol.c)
 * Callees:
 *     sub_180091A10 @ 0x180091A10 (sub_180091A10.c)
 */

__int64 __fastcall sub_180091C70(unsigned __int8 *a1, unsigned __int8 **a2, unsigned int a3, int a4)
{
  return sub_180091A10((__int64)&off_180118AE8, a1, a2, a3, 0, a4);
}
