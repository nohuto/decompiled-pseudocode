/*
 * XREFs of _RegRtlSetValue @ 0x1406FCBC8
 * Callers:
 *     _CmSetDeviceRegPropWorker @ 0x1406E2BA8 (_CmSetDeviceRegPropWorker.c)
 *     _PnpSetPropertyWorker @ 0x1406E61F0 (_PnpSetPropertyWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x1406E8194 (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406E9870 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140704B20 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _SysCtxOpenControlSet @ 0x14073BCB8 (_SysCtxOpenControlSet.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14073C23C (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiCMGenerateDeviceInstance @ 0x140837E24 (PiCMGenerateDeviceInstance.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083D808 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14083E148 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083E5DC (PiDrvDbResolveFilePathKeyValues.c)
 *     _PnpCtxRegSetValue @ 0x1408F5F08 (_PnpCtxRegSetValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1408F856C (_CmSetInstallerClassRegPropWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x1408FB234 (_CmAddPanelDeviceWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x1408FE288 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1408FF2F0 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x1408FF6CC (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x1408FF8A8 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x1408FFD0C (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _RegRtlCopyTreeInternal @ 0x140900520 (_RegRtlCopyTreeInternal.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140902584 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140903304 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1409038D8 (DrvDbSetRegValueMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x1401B8D70 (ZwSetValueKey.c)
 */

int __fastcall RegRtlSetValue(HANDLE KeyHandle, const WCHAR *a2, ULONG a3, void *a4, ULONG DataSize)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return ZwSetValueKey(KeyHandle, &DestinationString, 0, a3, a4, DataSize);
  return result;
}
