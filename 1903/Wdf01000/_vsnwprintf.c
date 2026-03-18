/*
 * XREFs of _vsnwprintf @ 0x1C001A414
 * Callers:
 *     RtlUnicodeStringPrintf @ 0x1C002F610 (RtlUnicodeStringPrintf.c)
 *     RtlStringVPrintfWorkerW @ 0x1C002F6D4 (RtlStringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1C001A430 (_vsnwprintf_l.c)
 */

int __fastcall vsnwprintf(wchar_t *string, unsigned __int64 count, const wchar_t *format, char *ap)
{
  return vsnwprintf_l(string, count, format, 0LL, ap);
}
