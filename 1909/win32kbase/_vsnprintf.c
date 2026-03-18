/*
 * XREFs of _vsnprintf @ 0x1C00B8104
 * Callers:
 *     ?RtlStringCbPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C005F7C8 (-RtlStringCbPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C0159DBC (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 * Callees:
 *     _vsnprintf_l @ 0x1C00B8120 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
