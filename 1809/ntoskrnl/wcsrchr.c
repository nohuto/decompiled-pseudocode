/*
 * XREFs of wcsrchr @ 0x1401978A0
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14067C980 (SdbGetDatabaseMatchEx.c)
 *     AslPathSplit @ 0x14067E618 (AslPathSplit.c)
 *     PiIsDriverBlocked @ 0x14067EB10 (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x14067EC88 (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x14067F1E8 (PiLookupInDDBCache.c)
 *     EtwpGenerateFileName @ 0x1406CF55C (EtwpGenerateFileName.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406F6C90 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140712330 (PopBcdSetDefaultResumeObjectElements.c)
 *     PiDqDeleteUserObject @ 0x14082ACBC (PiDqDeleteUserObject.c)
 *     BiTranslateSymbolicLinkFile @ 0x1408F1B80 (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1408F710C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1408FB864 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x140900A48 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140900ED4 (DrvDbDeleteObjectSubKey.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x1409F39B8 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
