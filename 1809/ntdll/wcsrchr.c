/*
 * XREFs of wcsrchr @ 0x180095C90
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180033AC8 (RtlpResolveAssemblyStorageMapEntry.c)
 *     LdrpGetDataModulePath @ 0x180034A1C (LdrpGetDataModulePath.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003E950 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpGetDirPath @ 0x180057540 (RtlpGetDirPath.c)
 *     CompatCachepLookupCdb @ 0x1800778A0 (CompatCachepLookupCdb.c)
 *     EtwpGenerateFileName @ 0x1800888D4 (EtwpGenerateFileName.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x18008F564 (LdrpGetModuleInfoFromVirtualMemory.c)
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
