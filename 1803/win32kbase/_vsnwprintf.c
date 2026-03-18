/*
 * XREFs of _vsnwprintf @ 0x1C0073DAC
 * Callers:
 *     RtlStringCchPrintfW @ 0x1C00A0A6C (RtlStringCchPrintfW.c)
 *     RtlStringVPrintfWorkerW @ 0x1C00D22E4 (RtlStringVPrintfWorkerW.c)
 *     RtlUnicodeStringPrintf @ 0x1C00F531C (RtlUnicodeStringPrintf.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0142114 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1C0073DC8 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
