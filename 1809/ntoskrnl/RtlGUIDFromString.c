/*
 * XREFs of RtlGUIDFromString @ 0x14059A5A0
 * Callers:
 *     RtlQueryPackageClaims @ 0x1400A5570 (RtlQueryPackageClaims.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x140289290 (PiDevCfgParseInterfaceKeyName.c)
 *     PiDevCfgParsePropertyKeyName @ 0x140289318 (PiDevCfgParsePropertyKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1402F55A0 (RtlRaiseCustomSystemEventTrigger.c)
 *     PiDmCacheDataDecode @ 0x140598F2C (PiDmCacheDataDecode.c)
 *     PiPnpRtlCmActionCallback @ 0x140599080 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1405997C0 (PiDmObjectUpdateCachedCmProperty.c)
 *     _PnpIsValidGuidString @ 0x14059A534 (_PnpIsValidGuidString.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x14059ADB0 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x14059BFC8 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14059C504 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     IoVolumeDeviceToGuid @ 0x1405A44B0 (IoVolumeDeviceToGuid.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1405C65E8 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x1405C6810 (_CmValidateDeviceInterfaceName.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1406D2290 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x1406EAB38 (PipProcessStartPhase3.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406F6DD0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406FA568 (_PnpGetGenericStorePropertyKeys.c)
 *     PipGenerateContainerID @ 0x140700980 (PipGenerateContainerID.c)
 *     PnpIsValidGuidString @ 0x140702260 (PnpIsValidGuidString.c)
 *     BiGetObjectIdentifier @ 0x140713B18 (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x1407140E8 (BiConvertRegistryDataToElement.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140723A18 (EtwpEnableAutoLoggerProvider.c)
 *     PiDcInitUpdateProperties @ 0x14073AEA4 (PiDcInitUpdateProperties.c)
 *     EtwStartAutoLogger @ 0x140741E88 (EtwStartAutoLogger.c)
 *     WdipSemLoadNextEndEvent @ 0x140743868 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140743B60 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140743DD8 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1407441C0 (WdipSemLoadNextScenario.c)
 *     _CmSplitDevicePanelId @ 0x140749B5C (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14074A870 (_CmDevicePanelEnumSubkeyCallback.c)
 *     IoVolumeDeviceNameToGuid @ 0x14081E170 (IoVolumeDeviceNameToGuid.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x14082C314 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082C68C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14082DC0C (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140840BC0 (PiCreateDriverSwDeviceCallback.c)
 *     SddlpUuidFromString @ 0x1408A6D10 (SddlpUuidFromString.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1408B132C (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x1408D13F8 (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x1408F08FC (BcdEnumerateObjects.c)
 *     BiBindEfiEntryToBcdObject @ 0x1408F22F8 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x1408F2488 (BiBuildIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1408F3E04 (BiGetObjectReferenceFromEfiEntry.c)
 *     EmpParseEntryTypes @ 0x1409BE0E8 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1409BEF08 (EmpInfParseGetGuidFromName.c)
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 *     PipResetDevice @ 0x1409F5568 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x14059A680 (ScanHexFormat.c)
 */

NTSTATUS __stdcall RtlGUIDFromString(PCUNICODE_STRING GuidString, GUID *Guid)
{
  unsigned int v3; // ecx
  unsigned __int8 *Data4; // rdx
  unsigned __int8 *v5; // r8
  __int64 v7; // [rsp+70h] [rbp-28h] BYREF
  __int64 v8; // [rsp+78h] [rbp-20h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  if ( (unsigned int)ScanHexFormat(
                       GuidString->Buffer,
                       GuidString->Length >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       Guid,
                       &Guid->Data2,
                       &Guid->Data3,
                       &v7,
                       (char *)&v7 + 2,
                       (char *)&v7 + 4,
                       (char *)&v7 + 6,
                       &v8,
                       (char *)&v8 + 2,
                       (char *)&v8 + 4,
                       (char *)&v8 + 6) == -1 )
    return -1073741811;
  v3 = 0;
  Data4 = Guid->Data4;
  v5 = (unsigned __int8 *)&v7;
  do
  {
    ++v3;
    *Data4 = *v5;
    v5 += 2;
    ++Data4;
  }
  while ( v3 < 8 );
  return 0;
}
