/*
 * XREFs of _vsnprintf @ 0x18008E6A0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x180053E88 (vDbgPrintExWithPrefixInternal.c)
 *     RtlStringCbPrintfA @ 0x1800734F8 (RtlStringCbPrintfA.c)
 *     StringCbPrintfA @ 0x1800CE69C (StringCbPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x18008E6BC (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return vsnprintf_l(Buffer, BufferCount, Format, 0LL, ArgList);
}
