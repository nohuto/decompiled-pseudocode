/*
 * XREFs of _vsnprintf @ 0x180091720
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x18004F348 (vDbgPrintExWithPrefixInternal.c)
 *     RtlStringCbPrintfA @ 0x18006354C (RtlStringCbPrintfA.c)
 *     StringCbPrintfA @ 0x1800CFDBC (StringCbPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x18009173C (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return vsnprintf_l(Buffer, BufferCount, Format, 0LL, ArgList);
}
