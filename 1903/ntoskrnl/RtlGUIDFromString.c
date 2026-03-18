/*
 * XREFs of RtlGUIDFromString @ 0x1405C15F0
 * Callers:
 *     RtlQueryPackageClaims @ 0x140084370 (RtlQueryPackageClaims.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x14029F5A0 (PiDevCfgParseInterfaceKeyName.c)
 *     PiDevCfgParsePropertyKeyName @ 0x14029F638 (PiDevCfgParsePropertyKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1403142D0 (RtlRaiseCustomSystemEventTrigger.c)
 *     PiPnpRtlCmActionCallback @ 0x1405BDA80 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1405BE198 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmCacheDataDecode @ 0x1405BF150 (PiDmCacheDataDecode.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1405C02CC (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _PnpIsValidGuidString @ 0x1405C10D8 (_PnpIsValidGuidString.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1405C2798 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x1405C29A0 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406244FC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1406259E4 (_CmGetDeviceInterfaceClassGuid.c)
 *     IoVolumeDeviceToGuid @ 0x1406615B0 (IoVolumeDeviceToGuid.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1406F0C04 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PipProcessStartPhase3 @ 0x1406FEE28 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140715D4C (_PnpGetGenericStorePropertyKeys.c)
 *     PipGenerateContainerID @ 0x14071BAF8 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14071CAE0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PnpIsValidGuidString @ 0x14071D8E8 (PnpIsValidGuidString.c)
 *     BiGetObjectIdentifier @ 0x14073DEBC (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x14073E4C8 (BiConvertRegistryDataToElement.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1407486C4 (EtwpEnableAutoLoggerProvider.c)
 *     PiDcInitUpdateProperties @ 0x140755C2C (PiDcInitUpdateProperties.c)
 *     _CmSplitDevicePanelId @ 0x140767558 (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140768220 (_CmDevicePanelEnumSubkeyCallback.c)
 *     WdipSemLoadNextEndEvent @ 0x14076B788 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14076BA8C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14076BD10 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x14076C124 (WdipSemLoadNextScenario.c)
 *     EtwStartAutoLogger @ 0x14076DA0C (EtwStartAutoLogger.c)
 *     IoVolumeDeviceNameToGuid @ 0x140858090 (IoVolumeDeviceNameToGuid.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x140866B44 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140866EC0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140868468 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087C5A0 (PiCreateDriverSwDeviceCallback.c)
 *     SddlpUuidFromString @ 0x1408E4068 (SddlpUuidFromString.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1408EE7AC (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x14090EBF8 (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x14092E56C (BcdEnumerateObjects.c)
 *     BiBindEfiEntryToBcdObject @ 0x14092FF7C (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x140930128 (BiBuildIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140931AAC (BiGetObjectReferenceFromEfiEntry.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 *     EmpParseEntryTypes @ 0x1409FA004 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1409FAE54 (EmpInfParseGetGuidFromName.c)
 *     PipResetDevice @ 0x140A3AB28 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x1405C16D0 (ScanHexFormat.c)
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
