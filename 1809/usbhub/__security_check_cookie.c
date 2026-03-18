/*
 * XREFs of __security_check_cookie @ 0x1C002B380
 * Callers:
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0003024 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhFdoSystemPowerState @ 0x1C0005B50 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0006394 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEnableTimerObject @ 0x1C000CE80 (UsbhEnableTimerObject.c)
 *     UsbhDmTimerDpc @ 0x1C000D480 (UsbhDmTimerDpc.c)
 *     UsbhCreateDevice @ 0x1C000DE24 (UsbhCreateDevice.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000E914 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhBusConnectPdo @ 0x1C000EBD0 (UsbhBusConnectPdo.c)
 *     UsbhDisableTimerObject @ 0x1C000F100 (UsbhDisableTimerObject.c)
 *     UsbhReset1Complete @ 0x1C000F680 (UsbhReset1Complete.c)
 *     UsbhQueryBusRelations @ 0x1C0010640 (UsbhQueryBusRelations.c)
 *     UsbhInitializeDevice @ 0x1C0010C7C (UsbhInitializeDevice.c)
 *     UsbhHubProcessIsr @ 0x1C0011670 (UsbhHubProcessIsr.c)
 *     UsbhReset2Complete @ 0x1C0012680 (UsbhReset2Complete.c)
 *     UsbhSyncPowerOnPorts @ 0x1C0019FF0 (UsbhSyncPowerOnPorts.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B740 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhQuerySSstate @ 0x1C001E944 (UsbhQuerySSstate.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C001F95C (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogHubInformation @ 0x1C001FA68 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogPortInformation @ 0x1C001FB60 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwWrite @ 0x1C001FE60 (UsbhEtwWrite.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C001FFE0 (UsbhGetAcpiPortAttributes.c)
 *     UsbhAcpiEnumChildren @ 0x1C0020088 (UsbhAcpiEnumChildren.c)
 *     UsbhSetupDevice @ 0x1C0020B00 (UsbhSetupDevice.c)
 *     UsbhUpdateUxdSettings @ 0x1C002139C (UsbhUpdateUxdSettings.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C00216A0 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhGetD3Policy @ 0x1C0021D10 (UsbhGetD3Policy.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C0022120 (UsbhGetGlobalUxdSettings.c)
 *     UsbhCreatePdo @ 0x1C0022330 (UsbhCreatePdo.c)
 *     UsbhCheckDeviceErrata @ 0x1C00249F4 (UsbhCheckDeviceErrata.c)
 *     UsbhGetDeviceFlags @ 0x1C0024CF4 (UsbhGetDeviceFlags.c)
 *     DriverEntry @ 0x1C0028F14 (DriverEntry.c)
 *     __GSHandlerCheckCommon @ 0x1C002B40C (__GSHandlerCheckCommon.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C003DDF8 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x1C003E0D4 (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x1C003E200 (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 *     UsbhSetPortPower @ 0x1C003F8B0 (UsbhSetPortPower.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C004356C (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhIoctlValidateParameters @ 0x1C004EB08 (UsbhIoctlValidateParameters.c)
 *     UsbhUpdateRegSurpriseRemovalCount @ 0x1C0050C50 (UsbhUpdateRegSurpriseRemovalCount.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C0052394 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhGetPerformanceInfo @ 0x1C0052BA8 (UsbhGetPerformanceInfo.c)
 *     UsbhReset1Timeout @ 0x1C0055D50 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C00562F0 (UsbhReset2Timeout.c)
 *     UsbhPdoCheckBootDeviceReady @ 0x1C0059120 (UsbhPdoCheckBootDeviceReady.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C00595F0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C00598F0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0059BF8 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C005BB70 (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C005BC20 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C005BDE4 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetUxdDeviceKey @ 0x1C005C0CC (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C005C328 (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x1C005C514 (UsbhPropagateUxdState.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C005CB38 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005CC74 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C005CD64 (UsbhEtwLogHubException.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C005CE78 (UsbhEtwLogHubPastExceptions.c)
 *     MyRegQueryUlong @ 0x1C005DF9C (MyRegQueryUlong.c)
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
