/*
 * XREFs of __security_check_cookie @ 0x1C002C5B0
 * Callers:
 *     UsbhEtwLogDevicePowerEvent @ 0x1C00031F0 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhFdoSystemPowerState @ 0x1C0006010 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C000688C (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEnableTimerObject @ 0x1C000D520 (UsbhEnableTimerObject.c)
 *     UsbhDmTimerDpc @ 0x1C000DB30 (UsbhDmTimerDpc.c)
 *     UsbhCreateDevice @ 0x1C000E4F8 (UsbhCreateDevice.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000EDB8 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhBusConnectPdo @ 0x1C000F090 (UsbhBusConnectPdo.c)
 *     UsbhDisableTimerObject @ 0x1C000F740 (UsbhDisableTimerObject.c)
 *     UsbhReset1Complete @ 0x1C000FD00 (UsbhReset1Complete.c)
 *     UsbhQueryBusRelations @ 0x1C0010C30 (UsbhQueryBusRelations.c)
 *     UsbhInitializeDevice @ 0x1C00112AC (UsbhInitializeDevice.c)
 *     UsbhHubProcessIsr @ 0x1C0011C70 (UsbhHubProcessIsr.c)
 *     UsbhReset2Complete @ 0x1C0012CC0 (UsbhReset2Complete.c)
 *     UsbhSyncPowerOnPorts @ 0x1C001A780 (UsbhSyncPowerOnPorts.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001C210 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhQuerySSstate @ 0x1C001F3B4 (UsbhQuerySSstate.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C0020660 (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogHubInformation @ 0x1C0020788 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogPortInformation @ 0x1C00208A0 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwWrite @ 0x1C0020BB0 (UsbhEtwWrite.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C0020D30 (UsbhGetAcpiPortAttributes.c)
 *     UsbhAcpiEnumChildren @ 0x1C0020DF4 (UsbhAcpiEnumChildren.c)
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 *     UsbhUpdateUxdSettings @ 0x1C002203C (UsbhUpdateUxdSettings.c)
 *     UsbhGetD3Policy @ 0x1C002278C (UsbhGetD3Policy.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C0022BD0 (UsbhGetGlobalUxdSettings.c)
 *     UsbhCreatePdo @ 0x1C0022E20 (UsbhCreatePdo.c)
 *     UsbhCheckDeviceErrata @ 0x1C0025640 (UsbhCheckDeviceErrata.c)
 *     UsbhGetDeviceFlags @ 0x1C0025940 (UsbhGetDeviceFlags.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0025AF4 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     DriverEntry @ 0x1C0029F14 (DriverEntry.c)
 *     __GSHandlerCheckCommon @ 0x1C002C63C (__GSHandlerCheckCommon.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C003F390 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x1C003F688 (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x1C003F7C0 (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 *     UsbhSetPortPower @ 0x1C0040EF0 (UsbhSetPortPower.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C0044BF0 (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhIoctlValidateParameters @ 0x1C00507A4 (UsbhIoctlValidateParameters.c)
 *     UsbhUpdateRegSurpriseRemovalCount @ 0x1C0052A40 (UsbhUpdateRegSurpriseRemovalCount.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C0054438 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhGetPerformanceInfo @ 0x1C0054C78 (UsbhGetPerformanceInfo.c)
 *     UsbhReset1Timeout @ 0x1C0058060 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C0058650 (UsbhReset2Timeout.c)
 *     UsbhPdoCheckBootDeviceReady @ 0x1C005B4C0 (UsbhPdoCheckBootDeviceReady.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C005B9C0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C005BCC0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C005BFC8 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C005E03C (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C005E0FC (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C005E2E0 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdDeviceKey @ 0x1C005E604 (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C005E898 (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x1C005EB38 (UsbhPropagateUxdState.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C005F174 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005F2C4 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C005F3C8 (UsbhEtwLogHubException.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C005F4FC (UsbhEtwLogHubPastExceptions.c)
 *     MyRegQueryUlong @ 0x1C0060870 (MyRegQueryUlong.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
