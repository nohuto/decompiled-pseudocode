/*
 * XREFs of wcschr @ 0x180092980
 * Callers:
 *     EtwpGenerateFileName @ 0x180002740 (EtwpGenerateFileName.c)
 *     RtlpGetDirPath @ 0x18006C3C8 (RtlpGetDirPath.c)
 *     LdrSetDllDirectory @ 0x18007F5E0 (LdrSetDllDirectory.c)
 *     RtlGetExePath @ 0x180081440 (RtlGetExePath.c)
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
