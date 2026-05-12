/*
 * XREFs of WPP_SF_qqD @ 0x1C003BC48
 * Callers:
 *     RaUnitStartIo @ 0x1C0003430 (RaUnitStartIo.c)
 *     RaDriverPnpIrp @ 0x1C0008220 (RaDriverPnpIrp.c)
 *     RaUnitPnpIrp @ 0x1C00082C0 (RaUnitPnpIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C0008F40 (RaDriverDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0008FE4 (RaUnitDeviceControlIrp.c)
 *     RaDriverScsiIrp @ 0x1C0009700 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C00097A0 (RaUnitScsiIrp.c)
 *     RaidUnitCompleteRequest @ 0x1C000B940 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000D9D4 (RaUnitAsyncError.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001221C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitPowerIrp @ 0x1C00123F0 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C00124D4 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C001258C (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0012980 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0013050 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaAdapterStartPowerIo @ 0x1C001327C (RaAdapterStartPowerIo.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0013464 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C0013540 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C001369C (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C00138F0 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C00139D0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0013A80 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0013B30 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterDevicePowerDownSrbComplete @ 0x1C0013BD0 (RaidAdapterDevicePowerDownSrbComplete.c)
 *     RaDriverPowerIrp @ 0x1C0013EC0 (RaDriverPowerIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0013F68 (RaidAdapterPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0014104 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C001420C (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C0016150 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0016B44 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterPnpIrp @ 0x1C0016FAC (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0017234 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C001B7F8 (RaidAdapterStartDeviceIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00252E0 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitStartResetIo @ 0x1C00486F4 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0049A50 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C004A230 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaDriverCloseIrp @ 0x1C006A740 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C006A7F0 (RaDriverCreateIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C006FC10 (RaDriverSystemControlIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0070B50 (RaidAdapterFilterResourceRequirementsIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
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
