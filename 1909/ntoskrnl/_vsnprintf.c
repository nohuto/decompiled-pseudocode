/*
 * XREFs of _vsnprintf @ 0x14019FB70
 * Callers:
 *     RtlStringCbVPrintfA @ 0x1401548E0 (RtlStringCbVPrintfA.c)
 *     RtlStringCchPrintfA @ 0x140189BB8 (RtlStringCchPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x14018C5B8 (RtlStringVPrintfWorkerA.c)
 * Callees:
 *     _vsnprintf_l @ 0x14019FB8C (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
