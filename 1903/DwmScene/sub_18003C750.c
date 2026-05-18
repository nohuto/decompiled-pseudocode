/*
 * XREFs of sub_18003C750 @ 0x18003C750
 * Callers:
 *     sub_18003C128 @ 0x18003C128 (sub_18003C128.c)
 *     sub_18003C1EC @ 0x18003C1EC (sub_18003C1EC.c)
 * Callees:
 *     sub_180127334 @ 0x180127334 (sub_180127334.c)
 */

__int64 sub_18003C750(int a1, int a2, const char *a3, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  return sub_180127334(a1, 256, a2, (_DWORD)a3, (__int64)va);
}
