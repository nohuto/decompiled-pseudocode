/*
 * XREFs of _vsnwprintf @ 0x14019F320
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x140002DB0 (RtlStringVPrintfWorkerW.c)
 *     RtlStringCbPrintfW @ 0x1400040E8 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x140087CC8 (RtlStringCchPrintfW.c)
 *     StringCchPrintfW @ 0x140135BD8 (StringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x140144A8C (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x140144B3C (RtlUnicodeStringPrintfEx.c)
 *     StringVPrintfWorkerW @ 0x140348A50 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x14019F33C (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
