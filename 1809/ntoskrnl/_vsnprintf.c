/*
 * XREFs of _vsnprintf @ 0x140194E60
 * Callers:
 *     RtlStringCbVPrintfA @ 0x1400F4EDC (RtlStringCbVPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x14017E048 (RtlStringVPrintfWorkerA.c)
 *     RtlStringCchPrintfA @ 0x14018E100 (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x140194E7C (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
