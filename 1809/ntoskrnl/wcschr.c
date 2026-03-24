/*
 * XREFs of wcschr @ 0x1401976D0
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x140289418 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x140306804 (SmUniqueIdParseProductName.c)
 *     PiGetDeviceRegProperty @ 0x140587C10 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1405C65E8 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C6B1C (_CmGetDeviceRegPropWorker.c)
 *     LocalGetSDDLDeliminator @ 0x1406B05C0 (LocalGetSDDLDeliminator.c)
 *     EtwpGenerateFileName @ 0x1406CF53C (EtwpGenerateFileName.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406D1F64 (PiPnpRtlGetFilteredDeviceList.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1406D305C (DrvDbGetObjectDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406D35C4 (_RegRtlCreateTreeTransacted.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1406D5674 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F14 (PiProcessNewDeviceNode.c)
 *     PiSwFindSwDevice @ 0x1406ED34C (PiSwFindSwDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406F4B3C (PiDevCfgFindDeviceDriver.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406F50FC (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1406F65C0 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406F6C70 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiNormalizeDeviceText @ 0x1406FDD40 (PiNormalizeDeviceText.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x14070FF68 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     BiCreatePartitionDevice @ 0x1407143BC (BiCreatePartitionDevice.c)
 *     MmCallDllInitialize @ 0x14071B6FC (MmCallDllInitialize.c)
 *     AslPathClean @ 0x140722454 (AslPathClean.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140722664 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbQueryDataExTagID @ 0x140722984 (SdbQueryDataExTagID.c)
 *     SepParseElamCertResources @ 0x14073C628 (SepParseElamCertResources.c)
 *     _CmSplitDevicePanelId @ 0x140749B3C (_CmSplitDevicePanelId.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140749DF0 (_CmGetMatchingDeviceListForSubkey.c)
 *     LocalpConvertStringSidToSid @ 0x14074DE6C (LocalpConvertStringSidToSid.c)
 *     PiGetDeviceRegistryProperty @ 0x140824718 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140830820 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408313B8 (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x1408C7698 (EtwpCovSampSplitSegments.c)
 *     BiDoesHiveKeyExist @ 0x1408F1398 (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x1408F1780 (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x140900EB4 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140902564 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbValidateDeviceIdName @ 0x140903978 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x1409039F0 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x140903A54 (DrvDbValidateDriverInfFileName.c)
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
