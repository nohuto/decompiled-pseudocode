/*
 * XREFs of vsprintf @ 0x140197780
 * Callers:
 *     <none>
 * Callees:
 *     _vsprintf_l @ 0x140197704 (_vsprintf_l.c)
 */

int __cdecl vsprintf(char *Dest, const char *Format, va_list Args)
{
  return vsprintf_l(Dest, Format, 0LL, Args);
}
