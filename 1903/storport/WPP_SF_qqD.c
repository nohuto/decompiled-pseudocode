/*
 * XREFs of WPP_SF_qqD @ 0x1C0037B10
 * Callers:
 *     RaUnitStartIo @ 0x1C00035B0 (RaUnitStartIo.c)
 *     RaDriverPnpIrp @ 0x1C0006A40 (RaDriverPnpIrp.c)
 *     RaUnitPnpIrp @ 0x1C0006AE0 (RaUnitPnpIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C0007560 (RaDriverDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0007604 (RaUnitDeviceControlIrp.c)
 *     RaDriverScsiIrp @ 0x1C0007C90 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0007D30 (RaUnitScsiIrp.c)
 *     RaidUnitCompleteRequest @ 0x1C0009540 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000B704 (RaUnitAsyncError.c)
 *     RaUnitPowerIrp @ 0x1C0010288 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C001036C (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C0010424 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0010828 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaAdapterStartPowerIo @ 0x1C0011454 (RaAdapterStartPowerIo.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0011990 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C0011A70 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0011BD0 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C0011D70 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0011E50 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0011F00 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0011FB0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterDevicePowerDownSrbComplete @ 0x1C0012050 (RaidAdapterDevicePowerDownSrbComplete.c)
 *     RaidAdapterPnpIrp @ 0x1C0012660 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00128A0 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0015D30 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0016380 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0016690 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaDriverPowerIrp @ 0x1C0016EA0 (RaDriverPowerIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0016F48 (RaidAdapterPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C00170E4 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C00171EC (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C0018500 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0019D3C (RaidAdapterStartDeviceIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00218DC (RaUnitRemoveDeviceIrp.c)
 *     RaUnitStartResetIo @ 0x1C0045A1C (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00470E0 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0047760 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaDriverCreateIrp @ 0x1C006A790 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C006A840 (RaDriverCloseIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C006E4A0 (RaDriverSystemControlIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C006F31C (RaidAdapterFilterResourceRequirementsIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
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
