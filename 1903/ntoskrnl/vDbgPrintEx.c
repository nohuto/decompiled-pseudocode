/*
 * XREFs of vDbgPrintEx @ 0x140126530
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126560 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __stdcall vDbgPrintEx(ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal((void *)&Src, ComponentId, Level, arglist, 1);
}
