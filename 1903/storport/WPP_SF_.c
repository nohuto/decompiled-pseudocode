/*
 * XREFs of WPP_SF_ @ 0x1C003783C
 * Callers:
 *     RaidResumeIoQueue @ 0x1C00021EC (RaidResumeIoQueue.c)
 *     StorPortNotification @ 0x1C0005250 (StorPortNotification.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0012AF0 (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0013D40 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0015AD4 (RaUnitWaitForRemoveLock.c)
 *     StorpAllocatePool @ 0x1C00183B4 (StorpAllocatePool.c)
 *     StorpGetDeviceObjects @ 0x1C0018634 (StorpGetDeviceObjects.c)
 *     StorpFreePool @ 0x1C0018688 (StorpFreePool.c)
 *     RaCallMiniportFindAdapter @ 0x1C0018D14 (RaCallMiniportFindAdapter.c)
 *     RaidGetStartIoPerfParams @ 0x1C001DFB0 (RaidGetStartIoPerfParams.c)
 *     StorpGetOriginalMdl @ 0x1C001E0F0 (StorpGetOriginalMdl.c)
 *     RaidAdapterConnectInterrupt @ 0x1C001EE64 (RaidAdapterConnectInterrupt.c)
 *     StorpInitializeTimer @ 0x1C0021110 (StorpInitializeTimer.c)
 *     RaidInitializePerfOpts @ 0x1C0021ADC (RaidInitializePerfOpts.c)
 *     StorpGetMSIInfo @ 0x1C0022CD4 (StorpGetMSIInfo.c)
 *     SrbShimHookDeviceControl @ 0x1C0022E40 (SrbShimHookDeviceControl.c)
 *     StorpAcquireMSISpinLock @ 0x1C003BDC0 (StorpAcquireMSISpinLock.c)
 *     StorpAllocateMdl @ 0x1C003C460 (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C003C59C (StorpBuildMdlForNonPagedPool.c)
 *     StorpBuildScatterGatherList @ 0x1C003C644 (StorpBuildScatterGatherList.c)
 *     StorpFreeMdl @ 0x1C003C98C (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C003CA34 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003CC9C (StorpFreeWorkItem.c)
 *     StorpGetDataInSgList @ 0x1C003CF84 (StorpGetDataInSgList.c)
 *     StorpGetExtendedTable @ 0x1C003D000 (StorpGetExtendedTable.c)
 *     StorpGetSystemAddress @ 0x1C003D618 (StorpGetSystemAddress.c)
 *     StorpInitializeWorkItem @ 0x1C003D794 (StorpInitializeWorkItem.c)
 *     StorpPutScatterGatherList @ 0x1C003DDBC (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C003DEBC (StorpQueueWorkItem.c)
 *     StorpReleaseMSISpinLock @ 0x1C003DFF4 (StorpReleaseMSISpinLock.c)
 *     RaUnitRequestPowerDown @ 0x1C003F1D0 (RaUnitRequestPowerDown.c)
 *     RaUnitRequestPowerUp @ 0x1C003F320 (RaUnitRequestPowerUp.c)
 *     RaUnitSmartReturnStatus @ 0x1C00456D0 (RaUnitSmartReturnStatus.c)
 *     RaidUnitRequestTimeout @ 0x1C0047E58 (RaidUnitRequestTimeout.c)
 *     ATADeviceIdShimHookDeviceControl @ 0x1C0050480 (ATADeviceIdShimHookDeviceControl.c)
 *     DeviceIdShimHookDeviceControl @ 0x1C0050750 (DeviceIdShimHookDeviceControl.c)
 *     SrbShimStorageAdapterPropertyCompletionHook @ 0x1C0050C60 (SrbShimStorageAdapterPropertyCompletionHook.c)
 *     RaidAdapterReleaseResources @ 0x1C0073254 (RaidAdapterReleaseResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
