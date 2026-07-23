/*
 * XREFs of wcschr @ 0x180095A50
 * Callers:
 *     RtlGetExePath @ 0x1800541D0 (RtlGetExePath.c)
 *     RtlpGetDirPath @ 0x180057540 (RtlpGetDirPath.c)
 *     LdrSetDllDirectory @ 0x1800835B0 (LdrSetDllDirectory.c)
 *     EtwpGenerateFileName @ 0x1800888D4 (EtwpGenerateFileName.c)
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
