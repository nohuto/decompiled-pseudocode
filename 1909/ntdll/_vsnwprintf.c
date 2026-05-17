/*
 * XREFs of _vsnwprintf @ 0x18008E770
 * Callers:
 *     StringCbPrintfW @ 0x18000283C (StringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x18000C23C (RtlStringCchPrintfW.c)
 *     RtlStringVPrintfWorkerW @ 0x180052794 (RtlStringVPrintfWorkerW.c)
 *     RtlStringVPrintfWorkerW_0 @ 0x18006A334 (RtlStringVPrintfWorkerW_0.c)
 *     RtlStringCbPrintfW @ 0x1800D7D80 (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x1800DD054 (StringCchPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x18008E78C (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Buffer, BufferCount, Format, 0LL, Args);
}
