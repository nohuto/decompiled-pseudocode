/*
 * XREFs of _vsnprintf @ 0x140194D00
 * Callers:
 *     RtlStringCbVPrintfA @ 0x1400F4E3C (RtlStringCbVPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x14017DEE8 (RtlStringVPrintfWorkerA.c)
 *     RtlStringCchPrintfA @ 0x14018DFA0 (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x140194D1C (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
