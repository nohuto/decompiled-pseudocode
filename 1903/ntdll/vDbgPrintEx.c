/*
 * XREFs of vDbgPrintEx @ 0x1800DFB70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180053DE8 @ 0x180053DE8 (sub_180053DE8.c)
 */

ULONG __cdecl vDbgPrintEx(ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return sub_180053DE8(&dword_18011D492, ComponentId, Level, (char *)Format, arglist, 1);
}
