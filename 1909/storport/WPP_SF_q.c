/*
 * XREFs of WPP_SF_q @ 0x1C0038D48
 * Callers:
 *     StorpRequestTimer @ 0x1C000EBFC (StorpRequestTimer.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C000F040 (RaidUnitPendingDpcRoutine.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0012B8C (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0013DD0 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidQueryAcpiDsdSynchronous @ 0x1C001A21C (RaidQueryAcpiDsdSynchronous.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C001F4C4 (RaidSyncAcpiEvalMethod.c)
 *     StorpInitializeTimer @ 0x1C0021990 (StorpInitializeTimer.c)
 *     RaDriverUnload @ 0x1C00395A0 (RaDriverUnload.c)
 *     StorPortReady @ 0x1C003CC10 (StorPortReady.c)
 *     StorpFreeTimer @ 0x1C003DE24 (StorpFreeTimer.c)
 *     RaUnitAsyncNotificationWorkItemRoutine @ 0x1C0044EE0 (RaUnitAsyncNotificationWorkItemRoutine.c)
 *     RaUnitAttributeManagement @ 0x1C0045088 (RaUnitAttributeManagement.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x1C0045740 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitGetQOSIoctl @ 0x1C00459D0 (RaUnitGetQOSIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0045E78 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C0046470 (RaUnitSetUnresponsiveAttribute.c)
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C0047B98 (RaUnitUnresponsiveAttributeMgmt.c)
 *     RaidUnitRequestTimeout @ 0x1C0048FC8 (RaidUnitRequestTimeout.c)
 *     RaidUnitGetDeviceParameters @ 0x1C006D420 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
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
