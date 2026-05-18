/*
 * XREFs of sub_18011CEA8 @ 0x18011CEA8
 * Callers:
 *     sub_18011D32C @ 0x18011D32C (sub_18011D32C.c)
 * Callees:
 *     sub_1801273E4 @ 0x1801273E4 (sub_1801273E4.c)
 */

__int64 sub_18011CEA8(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return sub_1801273E4(a1, 256LL, a2, (__int64 *)va);
}
