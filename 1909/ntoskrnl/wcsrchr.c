/*
 * XREFs of wcsrchr @ 0x1401A2830
 * Callers:
 *     EtwpGenerateFileName @ 0x1406AF750 (EtwpGenerateFileName.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406FD584 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiIsDriverBlocked @ 0x14070BEAC (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x14070BF80 (PiUpdateDriverDBCache.c)
 *     AslPathSplit @ 0x14070D1CC (AslPathSplit.c)
 *     SdbGetDatabaseMatchEx @ 0x14070D964 (SdbGetDatabaseMatchEx.c)
 *     PiLookupInDDBCache @ 0x14070F300 (PiLookupInDDBCache.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14073E530 (PopBcdSetDefaultResumeObjectElements.c)
 *     PiDqDeleteUserObject @ 0x140864B74 (PiDqDeleteUserObject.c)
 *     BiTranslateSymbolicLinkFile @ 0x14092F274 (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140934804 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140938F98 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14093E878 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14093ECCC (DrvDbDeleteObjectSubKey.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140A38B84 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
