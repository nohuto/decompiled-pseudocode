/*
 * XREFs of wcschr @ 0x1800922E0
 * Callers:
 *     sub_180002740 @ 0x180002740 (sub_180002740.c)
 *     sub_18006C178 @ 0x18006C178 (sub_18006C178.c)
 *     LdrSetDllDirectory @ 0x18007EF40 (LdrSetDllDirectory.c)
 *     RtlGetExePath @ 0x180080DA0 (RtlGetExePath.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  while ( *Str )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    ++Str;
  }
  if ( !Ch )
    return (wchar_t *)Str;
  return 0LL;
}
