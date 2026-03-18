/*
 * XREFs of _vsnprintf @ 0x14019F450
 * Callers:
 *     RtlStringCbVPrintfA @ 0x140154240 (RtlStringCbVPrintfA.c)
 *     RtlStringCchPrintfA @ 0x140189608 (RtlStringCchPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x14018BC28 (RtlStringVPrintfWorkerA.c)
 * Callees:
 *     _vsnprintf_l @ 0x14019F46C (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
