/*
 * XREFs of wcsrchr @ 0x180092BC0
 * Callers:
 *     EtwpGenerateFileName @ 0x180002740 (EtwpGenerateFileName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     CompatCachepLookupCdb @ 0x18002946C (CompatCachepLookupCdb.c)
 *     LdrpGetDataModulePath @ 0x180054B9C (LdrpGetDataModulePath.c)
 *     RtlpGetDirPath @ 0x18006C3C8 (RtlpGetDirPath.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180071438 (RtlpResolveAssemblyStorageMapEntry.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180083470 (LdrpGetModuleInfoFromVirtualMemory.c)
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
