/*
 * XREFs of wcschr @ 0x1401A2640
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14029F398 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x140323C48 (SmUniqueIdParseProductName.c)
 *     PiGetDeviceRegProperty @ 0x1405C0098 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C2894 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1405C2C68 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     EtwpGenerateFileName @ 0x1406AF750 (EtwpGenerateFileName.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406F2384 (PiPnpRtlGetFilteredDeviceList.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1406F3CC8 (DrvDbGetObjectDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406F4234 (_RegRtlCreateTreeTransacted.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1406F7F50 (_CmGetDeviceInterfaceReferenceString.c)
 *     LocalGetSDDLDeliminator @ 0x1406FAA18 (LocalGetSDDLDeliminator.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1406FC8E4 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406FCABC (PiDevCfgFindDeviceDriver.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406FCF04 (DrvDbGetDeviceIdMappedProperty.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406FD584 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiNormalizeDeviceText @ 0x14070018C (PiNormalizeDeviceText.c)
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     PiSwFindSwDevice @ 0x1407330E4 (PiSwFindSwDevice.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140734384 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     BiCreatePartitionDevice @ 0x1407406CC (BiCreatePartitionDevice.c)
 *     MmCallDllInitialize @ 0x1407460F0 (MmCallDllInitialize.c)
 *     AslPathClean @ 0x14074CF74 (AslPathClean.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x14074D184 (SdbpCreateSearchPathPartsFromPath.c)
 *     SepParseElamCertResources @ 0x1407691CC (SepParseElamCertResources.c)
 *     _CmSplitDevicePanelId @ 0x14076C058 (_CmSplitDevicePanelId.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14076C314 (_CmGetMatchingDeviceListForSubkey.c)
 *     LocalpConvertStringSidToSid @ 0x140775184 (LocalpConvertStringSidToSid.c)
 *     PiGetDeviceRegistryProperty @ 0x14085E268 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14086A900 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14086B498 (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x1409044AC (EtwpCovSampSplitSegments.c)
 *     SdbQueryDataExTagID @ 0x1409216A0 (SdbQueryDataExTagID.c)
 *     BiDoesHiveKeyExist @ 0x14092EAA8 (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x14092EE84 (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x14093ECCC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1409404DC (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbValidateDeviceIdName @ 0x1409419C0 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x140941A38 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x140941A9C (DrvDbValidateDriverInfFileName.c)
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
