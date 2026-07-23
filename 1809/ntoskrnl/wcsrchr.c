/*
 * XREFs of wcsrchr @ 0x140197A00
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14067DB20 (SdbGetDatabaseMatchEx.c)
 *     AslPathSplit @ 0x14067F7B8 (AslPathSplit.c)
 *     PiIsDriverBlocked @ 0x14067FCB0 (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x14067FE28 (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x140680388 (PiLookupInDDBCache.c)
 *     EtwpGenerateFileName @ 0x1406D07DC (EtwpGenerateFileName.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406F7F10 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1407135B0 (PopBcdSetDefaultResumeObjectElements.c)
 *     PiDqDeleteUserObject @ 0x14082BE9C (PiDqDeleteUserObject.c)
 *     BiTranslateSymbolicLinkFile @ 0x1408F2E20 (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1408F83AC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1408FCB04 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x140901CE8 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140902174 (DrvDbDeleteObjectSubKey.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x1409F49C0 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
