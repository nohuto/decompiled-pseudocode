/*
 * XREFs of WPP_SF_ @ 0x1C0038C2C
 * Callers:
 *     RaidResumeIoQueue @ 0x1C000219C (RaidResumeIoQueue.c)
 *     StorPortNotification @ 0x1C00052A0 (StorPortNotification.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0012B8C (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0013DD0 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaUnitWaitForRemoveLock @ 0x1C001736C (RaUnitWaitForRemoveLock.c)
 *     StorpAllocatePool @ 0x1C00184C4 (StorpAllocatePool.c)
 *     StorpGetDeviceObjects @ 0x1C00187C4 (StorpGetDeviceObjects.c)
 *     StorpFreePool @ 0x1C0018818 (StorpFreePool.c)
 *     RaCallMiniportFindAdapter @ 0x1C001D1C0 (RaCallMiniportFindAdapter.c)
 *     RaidAdapterConnectInterrupt @ 0x1C001DB08 (RaidAdapterConnectInterrupt.c)
 *     RaidGetStartIoPerfParams @ 0x1C001EE00 (RaidGetStartIoPerfParams.c)
 *     StorpGetOriginalMdl @ 0x1C001EF40 (StorpGetOriginalMdl.c)
 *     StorpInitializeTimer @ 0x1C0021990 (StorpInitializeTimer.c)
 *     RaidInitializePerfOpts @ 0x1C0021C74 (RaidInitializePerfOpts.c)
 *     StorpGetMSIInfo @ 0x1C0022E24 (StorpGetMSIInfo.c)
 *     SrbShimHookDeviceControl @ 0x1C0022F90 (SrbShimHookDeviceControl.c)
 *     StorpAcquireMSISpinLock @ 0x1C003D1B0 (StorpAcquireMSISpinLock.c)
 *     StorpAllocateMdl @ 0x1C003D850 (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C003D98C (StorpBuildMdlForNonPagedPool.c)
 *     StorpBuildScatterGatherList @ 0x1C003DA34 (StorpBuildScatterGatherList.c)
 *     StorpFreeMdl @ 0x1C003DD7C (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C003DE24 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003E08C (StorpFreeWorkItem.c)
 *     StorpGetDataInSgList @ 0x1C003E374 (StorpGetDataInSgList.c)
 *     StorpGetExtendedTable @ 0x1C003E3F0 (StorpGetExtendedTable.c)
 *     StorpGetSystemAddress @ 0x1C003EA08 (StorpGetSystemAddress.c)
 *     StorpInitializeWorkItem @ 0x1C003EB84 (StorpInitializeWorkItem.c)
 *     StorpPutScatterGatherList @ 0x1C003F1AC (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C003F2AC (StorpQueueWorkItem.c)
 *     StorpReleaseMSISpinLock @ 0x1C003F3E4 (StorpReleaseMSISpinLock.c)
 *     RaUnitRequestPowerDown @ 0x1C00405C0 (RaUnitRequestPowerDown.c)
 *     RaUnitRequestPowerUp @ 0x1C0040710 (RaUnitRequestPowerUp.c)
 *     RaUnitSmartReturnStatus @ 0x1C0046AC0 (RaUnitSmartReturnStatus.c)
 *     RaidUnitRequestTimeout @ 0x1C0048FC8 (RaidUnitRequestTimeout.c)
 *     ATADeviceIdShimHookDeviceControl @ 0x1C0051600 (ATADeviceIdShimHookDeviceControl.c)
 *     DeviceIdShimHookDeviceControl @ 0x1C00518D0 (DeviceIdShimHookDeviceControl.c)
 *     SrbShimStorageAdapterPropertyCompletionHook @ 0x1C0051DE0 (SrbShimStorageAdapterPropertyCompletionHook.c)
 *     RaidAdapterReleaseResources @ 0x1C0074128 (RaidAdapterReleaseResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
