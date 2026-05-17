/*
 * XREFs of vDbgPrintEx @ 0x1800DFB70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180053DE8 @ 0x180053DE8 (sub_180053DE8.c)
 */

__int64 __fastcall vDbgPrintEx(unsigned int a1, unsigned int a2, char *a3, va_list a4)
{
  return sub_180053DE8(byte_18011D492, a1, a2, a3, a4, 1);
}
