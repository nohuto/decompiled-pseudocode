/*
 * XREFs of vsprintf @ 0x1401A25B0
 * Callers:
 *     <none>
 * Callees:
 *     _vsprintf_l @ 0x1401A24E4 (_vsprintf_l.c)
 */

int __cdecl vsprintf(char *Dest, const char *Format, va_list Args)
{
  return vsprintf_l(Dest, Format, 0LL, Args);
}
