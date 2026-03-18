/*
 * XREFs of _RegRtlSetValue @ 0x14071A884
 * Callers:
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1407037EC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceRegPropWorker @ 0x140705B24 (_CmSetDeviceRegPropWorker.c)
 *     _PnpSetPropertyWorker @ 0x140708F64 (_PnpSetPropertyWorker.c)
 *     _PnpCtxRegSetValue @ 0x14070AA00 (_PnpCtxRegSetValue.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x14072D3B0 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140755074 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     _SysCtxOpenControlSet @ 0x140756088 (_SysCtxOpenControlSet.c)
 *     PiCMGenerateDeviceInstance @ 0x140872074 (PiCMGenerateDeviceInstance.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14087833C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140878CFC (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408793C4 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140935C9C (_CmSetInstallerClassRegPropWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x140938970 (_CmAddPanelDeviceWorker.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14093D13C (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x14093D518 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x14093D6F4 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x14093DB58 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _RegRtlCopyTreeInternal @ 0x14093E36C (_RegRtlCopyTreeInternal.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1409404DC (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1409418F4 (DrvDbSetRegValueMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 */

int __fastcall RegRtlSetValue(HANDLE KeyHandle, const WCHAR *a2, ULONG a3, void *a4, ULONG DataSize)
{
  int result; // eax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  result = RtlInitUnicodeStringEx(&ValueName, a2);
  if ( result >= 0 )
    return ZwSetValueKey(KeyHandle, &ValueName, 0, a3, a4, DataSize);
  return result;
}
