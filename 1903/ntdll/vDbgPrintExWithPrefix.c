/*
 * XREFs of vDbgPrintExWithPrefix @ 0x1800DFBA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180053DE8 @ 0x180053DE8 (sub_180053DE8.c)
 */

ULONG __cdecl vDbgPrintExWithPrefix(PCCH Prefix, ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return sub_180053DE8(Prefix, ComponentId, Level, (char *)Format, arglist, 1);
}
