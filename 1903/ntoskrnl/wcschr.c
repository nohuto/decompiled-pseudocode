/*
 * XREFs of wcschr @ 0x1401A1F20
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14029F638 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x1403241F8 (SmUniqueIdParseProductName.c)
 *     PiGetDeviceRegProperty @ 0x1405BFBC8 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C23C4 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1405C2798 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     EtwpGenerateFileName @ 0x1406BA198 (EtwpGenerateFileName.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406F08E4 (PiPnpRtlGetFilteredDeviceList.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1406F2228 (DrvDbGetObjectDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406F2794 (_RegRtlCreateTreeTransacted.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1406F6190 (_CmGetDeviceInterfaceReferenceString.c)
 *     LocalGetSDDLDeliminator @ 0x1406F8C3C (LocalGetSDDLDeliminator.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1406FAB04 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406FACDC (PiDevCfgFindDeviceDriver.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406FB124 (DrvDbGetDeviceIdMappedProperty.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406FB7A4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiNormalizeDeviceText @ 0x1406FE3AC (PiNormalizeDeviceText.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     PiSwFindSwDevice @ 0x140730E84 (PiSwFindSwDevice.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140732124 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     BiCreatePartitionDevice @ 0x14073E7CC (BiCreatePartitionDevice.c)
 *     MmCallDllInitialize @ 0x1407441F0 (MmCallDllInitialize.c)
 *     AslPathClean @ 0x14074C4E4 (AslPathClean.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x14074C6F4 (SdbpCreateSearchPathPartsFromPath.c)
 *     SepParseElamCertResources @ 0x1407646CC (SepParseElamCertResources.c)
 *     _CmSplitDevicePanelId @ 0x140767558 (_CmSplitDevicePanelId.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140767814 (_CmGetMatchingDeviceListForSubkey.c)
 *     LocalpConvertStringSidToSid @ 0x140771BA4 (LocalpConvertStringSidToSid.c)
 *     PiGetDeviceRegistryProperty @ 0x14085EB68 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14086B200 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14086BD98 (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x140904B4C (EtwpCovSampSplitSegments.c)
 *     SdbQueryDataExTagID @ 0x140921C40 (SdbQueryDataExTagID.c)
 *     BiDoesHiveKeyExist @ 0x14092F034 (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x14092F410 (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x14093F25C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140940A6C (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbValidateDeviceIdName @ 0x140941F50 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x140941FC8 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x14094202C (DrvDbValidateDriverInfFileName.c)
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
