/*
 * XREFs of wcsrchr @ 0x180092520
 * Callers:
 *     sub_180002740 @ 0x180002740 (sub_180002740.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_18002946C @ 0x18002946C (sub_18002946C.c)
 *     sub_180054AFC @ 0x180054AFC (sub_180054AFC.c)
 *     sub_18006C178 @ 0x18006C178 (sub_18006C178.c)
 *     sub_1800711E8 @ 0x1800711E8 (sub_1800711E8.c)
 *     sub_180082DD0 @ 0x180082DD0 (sub_180082DD0.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r9
  wchar_t *v3; // r8
  __int16 v5; // ax

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  do
    v5 = *--Str;
  while ( Str != v2 && v5 != Ch );
  if ( v5 == Ch )
    return (wchar_t *)Str;
  return v3;
}
