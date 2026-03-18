/*
 * XREFs of wcsrchr @ 0x1401A2110
 * Callers:
 *     EtwpGenerateFileName @ 0x1406BA198 (EtwpGenerateFileName.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406FB7A4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiIsDriverBlocked @ 0x14070A0CC (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x14070A1A0 (PiUpdateDriverDBCache.c)
 *     AslPathSplit @ 0x14070B3EC (AslPathSplit.c)
 *     SdbGetDatabaseMatchEx @ 0x14070BB84 (SdbGetDatabaseMatchEx.c)
 *     PiLookupInDDBCache @ 0x14070D520 (PiLookupInDDBCache.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14073C630 (PopBcdSetDefaultResumeObjectElements.c)
 *     PiDqDeleteUserObject @ 0x140865474 (PiDqDeleteUserObject.c)
 *     BiTranslateSymbolicLinkFile @ 0x14092F800 (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140934D90 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140939528 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14093EE08 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14093F25C (DrvDbDeleteObjectSubKey.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140A38E04 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
