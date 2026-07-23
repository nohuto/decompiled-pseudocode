/*
 * XREFs of wcschr @ 0x140197810
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x140289608 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x1403069F4 (SmUniqueIdParseProductName.c)
 *     PiGetDeviceRegProperty @ 0x140588C10 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1405C75E8 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405C7B1C (_CmGetDeviceRegPropWorker.c)
 *     LocalGetSDDLDeliminator @ 0x1406B1860 (LocalGetSDDLDeliminator.c)
 *     EtwpGenerateFileName @ 0x1406D07DC (EtwpGenerateFileName.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406D3204 (PiPnpRtlGetFilteredDeviceList.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1406D42FC (DrvDbGetObjectDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406D4864 (_RegRtlCreateTreeTransacted.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1406D6914 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiProcessNewDeviceNode @ 0x1406E51B4 (PiProcessNewDeviceNode.c)
 *     PiSwFindSwDevice @ 0x1406EE5EC (PiSwFindSwDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406F5DDC (PiDevCfgFindDeviceDriver.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406F639C (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1406F7860 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406F7F10 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiNormalizeDeviceText @ 0x1406FEFE0 (PiNormalizeDeviceText.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140711208 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     BiCreatePartitionDevice @ 0x14071565C (BiCreatePartitionDevice.c)
 *     MmCallDllInitialize @ 0x14071C99C (MmCallDllInitialize.c)
 *     AslPathClean @ 0x1407236F4 (AslPathClean.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140723904 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbQueryDataExTagID @ 0x140723C24 (SdbQueryDataExTagID.c)
 *     SepParseElamCertResources @ 0x14073D818 (SepParseElamCertResources.c)
 *     _CmSplitDevicePanelId @ 0x14074AD2C (_CmSplitDevicePanelId.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14074AFE0 (_CmGetMatchingDeviceListForSubkey.c)
 *     LocalpConvertStringSidToSid @ 0x14074F05C (LocalpConvertStringSidToSid.c)
 *     PiGetDeviceRegistryProperty @ 0x140825918 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140831A80 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x140832618 (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x1408C8958 (EtwpCovSampSplitSegments.c)
 *     BiDoesHiveKeyExist @ 0x1408F2658 (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x1408F2A40 (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x140902174 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140903824 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbValidateDeviceIdName @ 0x140904C38 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x140904CB0 (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x140904D14 (DrvDbValidateDriverInfFileName.c)
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
