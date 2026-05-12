/*
 * XREFs of WPP_SF_DD @ 0x1C00378AC
 * Callers:
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0010EBC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidStallDeviceQueue @ 0x1C00116AC (RaidStallDeviceQueue.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0012AF0 (RaidpBuildAdapterBusRelations.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C00170E4 (RaidAdapterSetDevicePowerIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017624 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C00456D0 (RaUnitSmartReturnStatus.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006B8E4 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C007224C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0072874 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0072B88 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_DD(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           0LL);
}
