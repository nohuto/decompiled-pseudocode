/*
 * XREFs of vDbgPrintExWithPrefix @ 0x1800E2010
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x18004F348 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG __cdecl vDbgPrintExWithPrefix(PCCH Prefix, ULONG ComponentId, ULONG Level, PCCH Format, va_list arglist)
{
  return vDbgPrintExWithPrefixInternal(Prefix, ComponentId, Level, (char *)Format, arglist, 1);
}
