/*
 * XREFs of WPP_SF_qq @ 0x1C0037AC0
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C0007560 (RaDriverDeviceControlIrp.c)
 *     RaDriverScsiIrp @ 0x1C0007C90 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0007D30 (RaUnitScsiIrp.c)
 *     RaUnitPowerIrp @ 0x1C0010288 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C001036C (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C0010588 (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C001071C (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0010EBC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0011990 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C0011A70 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0011BD0 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C0011D70 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0011E50 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0011F00 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0011FB0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00128A0 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0015D30 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0016690 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaDriverPowerIrp @ 0x1C0016EA0 (RaDriverPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C00170E4 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C00171EC (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDevice @ 0x1C0017368 (RaidAdapterPowerUpDevice.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017624 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C0018500 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0019D3C (RaidAdapterStartDeviceIrp.c)
 *     RaDriverAddDevice @ 0x1C001CE20 (RaDriverAddDevice.c)
 *     StorpInitializeTimer @ 0x1C0021110 (StorpInitializeTimer.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00218DC (RaUnitRemoveDeviceIrp.c)
 *     StorpFreeTimer @ 0x1C003CA34 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003CC9C (StorpFreeWorkItem.c)
 *     StorpInitializeWorkItem @ 0x1C003D794 (StorpInitializeWorkItem.c)
 *     RaDriverCreateIrp @ 0x1C006A790 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C006A840 (RaDriverCloseIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006B8E4 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaDriverSystemControlIrp @ 0x1C006E4A0 (RaDriverSystemControlIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C007224C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0072874 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0072B88 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterScsiIrp @ 0x1C00734C0 (RaidAdapterScsiIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qq(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           va1,
           8LL,
           0LL);
}
