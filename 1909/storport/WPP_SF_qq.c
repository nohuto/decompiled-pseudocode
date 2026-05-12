/*
 * XREFs of WPP_SF_qq @ 0x1C0038EB0
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C00075B0 (RaDriverDeviceControlIrp.c)
 *     RaDriverScsiIrp @ 0x1C0007CE0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0007D80 (RaUnitScsiIrp.c)
 *     RaUnitPowerIrp @ 0x1C0010428 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C001050C (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C0010728 (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C00108BC (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001105C (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0011B30 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C0011C10 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0011D70 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C0011F10 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0011FF0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C00120A0 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0012150 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001293C (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0015CFC (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0015EA0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaDriverPowerIrp @ 0x1C0016DF0 (RaDriverPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0017034 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C001713C (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDevice @ 0x1C00172B8 (RaidAdapterPowerUpDevice.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017634 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C0018610 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaDriverAddDevice @ 0x1C001A5F0 (RaDriverAddDevice.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C001C234 (RaidAdapterStartDeviceIrp.c)
 *     StorpInitializeTimer @ 0x1C0021990 (StorpInitializeTimer.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C0021A74 (RaUnitRemoveDeviceIrp.c)
 *     StorpFreeTimer @ 0x1C003DE24 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003E08C (StorpFreeWorkItem.c)
 *     StorpInitializeWorkItem @ 0x1C003EB84 (StorpInitializeWorkItem.c)
 *     RaDriverCreateIrp @ 0x1C006B690 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C006B740 (RaDriverCloseIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006C7E4 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaDriverSystemControlIrp @ 0x1C006F700 (RaDriverSystemControlIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0073120 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0073748 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0073A5C (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterScsiIrp @ 0x1C0074394 (RaidAdapterScsiIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
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
