/*
 * XREFs of _vsnprintf @ 0x1C00A66A4
 * Callers:
 *     RtlStringCchPrintfA @ 0x1C0006AE8 (RtlStringCchPrintfA.c)
 *     RtlStringCbPrintfA @ 0x1C006C1DC (RtlStringCbPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1C00A66C0 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
