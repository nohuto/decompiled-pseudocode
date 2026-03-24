/*
 * XREFs of _vsnwprintf @ 0x140194C20
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x140015FF0 (RtlStringVPrintfWorkerW.c)
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x1400923A8 (RtlStringCchPrintfW.c)
 *     StringCchPrintfW @ 0x140134B04 (StringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x14015D71C (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x14015D7CC (RtlUnicodeStringPrintfEx.c)
 *     StringVPrintfWorkerW @ 0x140327234 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x140194C3C (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
