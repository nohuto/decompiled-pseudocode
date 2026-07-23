/*
 * XREFs of _vsnwprintf @ 0x1800917F0
 * Callers:
 *     RtlStringCchPrintfW @ 0x18004B0C8 (RtlStringCchPrintfW.c)
 *     RtlStringVPrintfWorkerW @ 0x18004FDF0 (RtlStringVPrintfWorkerW.c)
 *     RtlStringVPrintfWorkerW_0 @ 0x180074B14 (RtlStringVPrintfWorkerW_0.c)
 *     StringCbPrintfW @ 0x1800889D0 (StringCbPrintfW.c)
 *     RtlStringCbPrintfW @ 0x1800D9E30 (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x1800DF408 (StringCchPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x18009180C (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Buffer, BufferCount, Format, 0LL, Args);
}
