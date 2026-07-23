/*
 * XREFs of _vsnwprintf @ 0x140194D60
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x140015FF0 (RtlStringVPrintfWorkerW.c)
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x1400922E8 (RtlStringCchPrintfW.c)
 *     StringCchPrintfW @ 0x140134BD4 (StringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x14015D81C (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x14015D8CC (RtlUnicodeStringPrintfEx.c)
 *     StringVPrintfWorkerW @ 0x140327424 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x140194D7C (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
