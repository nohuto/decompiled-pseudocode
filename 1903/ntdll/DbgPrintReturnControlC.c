/*
 * XREFs of DbgPrintReturnControlC @ 0x1800DFAC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180053DE8 @ 0x180053DE8 (sub_180053DE8.c)
 */

__int64 DbgPrintReturnControlC(char *a1, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, a1);
  return sub_180053DE8(&dword_18011D492, 0x65u, 0, a1, va, 0);
}
