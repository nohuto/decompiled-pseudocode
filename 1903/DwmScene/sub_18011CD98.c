/*
 * XREFs of sub_18011CD98 @ 0x18011CD98
 * Callers:
 *     sub_18011D21C @ 0x18011D21C (sub_18011D21C.c)
 * Callees:
 *     sub_1801272D4 @ 0x1801272D4 (sub_1801272D4.c)
 */

__int64 sub_18011CD98(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return sub_1801272D4(a1, 256LL, a2, (__int64 *)va);
}
