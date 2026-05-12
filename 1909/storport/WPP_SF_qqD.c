/*
 * XREFs of WPP_SF_qqD @ 0x1C0038F00
 * Callers:
 *     RaUnitStartIo @ 0x1C00035A0 (RaUnitStartIo.c)
 *     RaDriverPnpIrp @ 0x1C0006A90 (RaDriverPnpIrp.c)
 *     RaUnitPnpIrp @ 0x1C0006B30 (RaUnitPnpIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C00075B0 (RaDriverDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0007654 (RaUnitDeviceControlIrp.c)
 *     RaDriverScsiIrp @ 0x1C0007CE0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0007D80 (RaUnitScsiIrp.c)
 *     RaidUnitCompleteRequest @ 0x1C0009590 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000B754 (RaUnitAsyncError.c)
 *     RaUnitPowerIrp @ 0x1C0010428 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C001050C (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C00105C4 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00109C8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaAdapterStartPowerIo @ 0x1C00115F4 (RaAdapterStartPowerIo.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0011B30 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C0011C10 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0011D70 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C0011F10 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0011FF0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C00120A0 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0012150 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterDevicePowerDownSrbComplete @ 0x1C00121F0 (RaidAdapterDevicePowerDownSrbComplete.c)
 *     RaidAdapterPnpIrp @ 0x1C00126FC (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001293C (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0015CFC (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0015EA0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0015F78 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaDriverPowerIrp @ 0x1C0016DF0 (RaDriverPowerIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0016E98 (RaidAdapterPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0017034 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C001713C (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C0018610 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C001C234 (RaidAdapterStartDeviceIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C0021A74 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitStartResetIo @ 0x1C0046E0C (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0048580 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0048C00 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaDriverCreateIrp @ 0x1C006B690 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C006B740 (RaDriverCloseIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C006F700 (RaDriverSystemControlIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C007035C (RaidAdapterFilterResourceRequirementsIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qqD(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}
