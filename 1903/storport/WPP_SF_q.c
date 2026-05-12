/*
 * XREFs of WPP_SF_q @ 0x1C0037958
 * Callers:
 *     StorpRequestTimer @ 0x1C000EECC (StorpRequestTimer.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C000F310 (RaidUnitPendingDpcRoutine.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0012AF0 (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0013D40 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidQueryAcpiDsdSynchronous @ 0x1C001CB30 (RaidQueryAcpiDsdSynchronous.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C001E674 (RaidSyncAcpiEvalMethod.c)
 *     StorpInitializeTimer @ 0x1C0021110 (StorpInitializeTimer.c)
 *     RaDriverUnload @ 0x1C00381B0 (RaDriverUnload.c)
 *     StorPortReady @ 0x1C003B820 (StorPortReady.c)
 *     StorpFreeTimer @ 0x1C003CA34 (StorpFreeTimer.c)
 *     RaUnitAsyncNotificationWorkItemRoutine @ 0x1C0043AF0 (RaUnitAsyncNotificationWorkItemRoutine.c)
 *     RaUnitAttributeManagement @ 0x1C0043C98 (RaUnitAttributeManagement.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x1C0044350 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitGetQOSIoctl @ 0x1C00445E0 (RaUnitGetQOSIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0044A88 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C0045080 (RaUnitSetUnresponsiveAttribute.c)
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C00467A8 (RaUnitUnresponsiveAttributeMgmt.c)
 *     RaidUnitRequestTimeout @ 0x1C0047E58 (RaidUnitRequestTimeout.c)
 *     RaidUnitGetDeviceParameters @ 0x1C006C644 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_q(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           0LL);
}
