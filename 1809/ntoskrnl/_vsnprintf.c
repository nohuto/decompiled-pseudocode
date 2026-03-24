/*
 * XREFs of _vsnprintf @ 0x140194D20
 * Callers:
 *     RtlStringCbVPrintfA @ 0x1400F4E5C (RtlStringCbVPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x14017DF08 (RtlStringVPrintfWorkerA.c)
 *     RtlStringCchPrintfA @ 0x14018DFC0 (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x140194D3C (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
