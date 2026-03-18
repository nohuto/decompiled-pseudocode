/*
 * XREFs of wcschr @ 0x1401976B0
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x140289318 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x140306704 (SmUniqueIdParseProductName.c)
 *     PiGetDeviceRegProperty @ 0x140587C10 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1405C65E8 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C6B1C (_CmGetDeviceRegPropWorker.c)
 *     LocalGetSDDLDeliminator @ 0x1406B05E0 (LocalGetSDDLDeliminator.c)
 *     EtwpGenerateFileName @ 0x1406CF55C (EtwpGenerateFileName.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406D1F84 (PiPnpRtlGetFilteredDeviceList.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1406D307C (DrvDbGetObjectDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406D35E4 (_RegRtlCreateTreeTransacted.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1406D5694 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 *     PiSwFindSwDevice @ 0x1406ED36C (PiSwFindSwDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406F4B5C (PiDevCfgFindDeviceDriver.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406F511C (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1406F65E0 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406F6C90 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiNormalizeDeviceText @ 0x1406FDD60 (PiNormalizeDeviceText.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x14070FF88 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     BiCreatePartitionDevice @ 0x1407143DC (BiCreatePartitionDevice.c)
 *     MmCallDllInitialize @ 0x14071B71C (MmCallDllInitialize.c)
 *     AslPathClean @ 0x140722474 (AslPathClean.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140722684 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbQueryDataExTagID @ 0x1407229A4 (SdbQueryDataExTagID.c)
 *     SepParseElamCertResources @ 0x14073C648 (SepParseElamCertResources.c)
 *     _CmSplitDevicePanelId @ 0x140749B5C (_CmSplitDevicePanelId.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140749E10 (_CmGetMatchingDeviceListForSubkey.c)
 *     LocalpConvertStringSidToSid @ 0x14074DE8C (LocalpConvertStringSidToSid.c)
 *     PiGetDeviceRegistryProperty @ 0x140824738 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140830840 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408313D8 (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x1408C76B8 (EtwpCovSampSplitSegments.c)
 *     BiDoesHiveKeyExist @ 0x1408F13B8 (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x1408F17A0 (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x140900ED4 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140902584 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbValidateDeviceIdName @ 0x140903998 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x140903A10 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x140903A74 (DrvDbValidateDriverInfFileName.c)
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
