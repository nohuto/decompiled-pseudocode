/*
 * XREFs of vDbgPrintEx @ 0x140126BA0
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140126BD0 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __stdcall vDbgPrintEx(ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal((void *)&Src, ComponentId, Level, arglist, 1);
}
