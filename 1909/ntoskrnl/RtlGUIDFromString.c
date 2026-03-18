/*
 * XREFs of RtlGUIDFromString @ 0x1405C1AC0
 * Callers:
 *     RtlQueryPackageClaims @ 0x140084770 (RtlQueryPackageClaims.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x14029F300 (PiDevCfgParseInterfaceKeyName.c)
 *     PiDevCfgParsePropertyKeyName @ 0x14029F398 (PiDevCfgParsePropertyKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x140313D20 (RtlRaiseCustomSystemEventTrigger.c)
 *     PiPnpRtlCmActionCallback @ 0x1405BDF50 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1405BE668 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmCacheDataDecode @ 0x1405BF620 (PiDmCacheDataDecode.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1405C079C (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _PnpIsValidGuidString @ 0x1405C15A8 (_PnpIsValidGuidString.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1405C2C68 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x1405C2E70 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406283AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x140629894 (_CmGetDeviceInterfaceClassGuid.c)
 *     IoVolumeDeviceToGuid @ 0x140690260 (IoVolumeDeviceToGuid.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1406F26A4 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PipProcessStartPhase3 @ 0x140700C08 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14071800C (_PnpGetGenericStorePropertyKeys.c)
 *     PipGenerateContainerID @ 0x14071D8E8 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14071E970 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PnpIsValidGuidString @ 0x14071F778 (PnpIsValidGuidString.c)
 *     BiGetObjectIdentifier @ 0x14073FDBC (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x1407403C8 (BiConvertRegistryDataToElement.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14074B208 (EtwpEnableAutoLoggerProvider.c)
 *     PiDcInitUpdateProperties @ 0x1407566BC (PiDcInitUpdateProperties.c)
 *     _CmSplitDevicePanelId @ 0x14076C058 (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14076CD20 (_CmDevicePanelEnumSubkeyCallback.c)
 *     WdipSemLoadNextEndEvent @ 0x14076E5DC (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14076E8E0 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14076EB64 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x14076EF78 (WdipSemLoadNextScenario.c)
 *     EtwStartAutoLogger @ 0x140770860 (EtwStartAutoLogger.c)
 *     IoVolumeDeviceNameToGuid @ 0x140857790 (IoVolumeDeviceNameToGuid.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x140866244 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408665C0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140867B68 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087BCA0 (PiCreateDriverSwDeviceCallback.c)
 *     SddlpUuidFromString @ 0x1408E3970 (SddlpUuidFromString.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1408EE0BC (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x14090E658 (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x14092DFE0 (BcdEnumerateObjects.c)
 *     BiBindEfiEntryToBcdObject @ 0x14092F9F0 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x14092FB9C (BiBuildIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140931520 (BiGetObjectReferenceFromEfiEntry.c)
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 *     EmpParseEntryTypes @ 0x1409F9F14 (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x1409FAD64 (EmpInfParseGetGuidFromName.c)
 *     PipResetDevice @ 0x140A3A8F8 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x1405C1BA0 (ScanHexFormat.c)
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
