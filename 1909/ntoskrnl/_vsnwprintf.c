/*
 * XREFs of _vsnwprintf @ 0x14019FA40
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x140002DB0 (RtlStringVPrintfWorkerW.c)
 *     RtlStringCbPrintfW @ 0x140004178 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x1400880E8 (RtlStringCchPrintfW.c)
 *     StringCchPrintfW @ 0x140136578 (StringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x14014512C (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x1401451DC (RtlUnicodeStringPrintfEx.c)
 *     StringVPrintfWorkerW @ 0x1403484B0 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x14019FA5C (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
