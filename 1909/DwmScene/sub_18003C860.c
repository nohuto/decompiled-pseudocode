/*
 * XREFs of sub_18003C860 @ 0x18003C860
 * Callers:
 *     sub_18003C238 @ 0x18003C238 (sub_18003C238.c)
 *     sub_18003C2FC @ 0x18003C2FC (sub_18003C2FC.c)
 * Callees:
 *     sub_180127444 @ 0x180127444 (sub_180127444.c)
 */

__int64 sub_18003C860(int a1, int a2, const char *a3, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  return sub_180127444(a1, 256, a2, (_DWORD)a3, (__int64)va);
}
