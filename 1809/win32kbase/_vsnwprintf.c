/*
 * XREFs of _vsnwprintf @ 0x1C00A657C
 * Callers:
 *     RtlStringCchPrintfW @ 0x1C006CE5C (RtlStringCchPrintfW.c)
 *     RtlStringVPrintfWorkerW @ 0x1C00857A0 (RtlStringVPrintfWorkerW.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C008E21C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     RtlUnicodeStringPrintf @ 0x1C011FF34 (RtlUnicodeStringPrintf.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1C00A6598 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
