/*
 * XREFs of sub_18011CED4 @ 0x18011CED4
 * Callers:
 *     sub_18011D7AC @ 0x18011D7AC (sub_18011D7AC.c)
 * Callees:
 *     sub_1801273E4 @ 0x1801273E4 (sub_1801273E4.c)
 */

__int64 sub_18011CED4(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return sub_1801273E4(a1, 2112LL, a2, (__int64 *)va);
}
