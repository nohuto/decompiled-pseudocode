/*
 * XREFs of WPP_SF_qq @ 0x1C003BBF8
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C0008F40 (RaDriverDeviceControlIrp.c)
 *     RaDriverScsiIrp @ 0x1C0009700 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C00097A0 (RaUnitScsiIrp.c)
 *     RaUnitPowerIrp @ 0x1C00123F0 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C00124D4 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C00126F0 (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0012874 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0013050 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0013464 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C0013540 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C001369C (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C0013770 (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C00138F0 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C00139D0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0013A80 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0013B30 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaDriverPowerIrp @ 0x1C0013EC0 (RaDriverPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0014104 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C001420C (RaidAdapterPowerDownDevice.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00149DC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0015ACC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C0016150 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0016B44 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0017234 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C001B7F8 (RaidAdapterStartDeviceIrp.c)
 *     RaDriverAddDevice @ 0x1C001C030 (RaDriverAddDevice.c)
 *     StorpInitializeTimer @ 0x1C0023870 (StorpInitializeTimer.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00252E0 (RaUnitRemoveDeviceIrp.c)
 *     StorpFreeTimer @ 0x1C0040194 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C00403FC (StorpFreeWorkItem.c)
 *     StorpInitializeWorkItem @ 0x1C0040E58 (StorpInitializeWorkItem.c)
 *     RaDriverCloseIrp @ 0x1C006A740 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C006A7F0 (RaDriverCreateIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006AF84 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaDriverSystemControlIrp @ 0x1C006FC10 (RaDriverSystemControlIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0072E30 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0073478 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0073798 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterScsiIrp @ 0x1C0074020 (RaidAdapterScsiIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
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
