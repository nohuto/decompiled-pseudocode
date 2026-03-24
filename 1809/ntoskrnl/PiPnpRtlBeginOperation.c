/*
 * XREFs of PiPnpRtlBeginOperation @ 0x140596E08
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x14058FC40 (PiDcHandleCustomDeviceEvent.c)
 *     PiDqActionDataGetRequestedProperties @ 0x140590E50 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqQueryEvaluateFilter @ 0x14059552C (PiDqQueryEvaluateFilter.c)
 *     PiDqIrpPropertySet @ 0x1406D58DC (PiDqIrpPropertySet.c)
 *     PiSwPropertySet @ 0x1406D7950 (PiSwPropertySet.c)
 *     PiDqActionDataGetChangedProperties @ 0x1406DB244 (PiDqActionDataGetChangedProperties.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F14 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1406E4E10 (PipEnumerateCompleted.c)
 *     PiProcessQueryDeviceState @ 0x1406E9C44 (PiProcessQueryDeviceState.c)
 *     PipProcessStartPhase3 @ 0x1406EAB18 (PipProcessStartPhase3.c)
 *     PnpProcessTargetDeviceEvent @ 0x1406EB0C0 (PnpProcessTargetDeviceEvent.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1406EB1DC (PiDcUpdateDeviceContainerMembership.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1406EB72C (PnpNewDeviceNodeDependencyCheck.c)
 *     IopRemoveDevice @ 0x1406ECE04 (IopRemoveDevice.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1406ED72C (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x1406EF560 (PipSetDevNodeProblem.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F1F20 (PiPnpRtlObjectEventWorker.c)
 *     PipClearDevNodeProblem @ 0x1406F6CD8 (PipClearDevNodeProblem.c)
 *     IopRegisterDeviceInterface @ 0x140709AD4 (IopRegisterDeviceInterface.c)
 *     IoReportDetectedDevice @ 0x14072D220 (IoReportDetectedDevice.c)
 *     PpDevCfgProcessDevices @ 0x14073A48C (PpDevCfgProcessDevices.c)
 *     IoReportRootDevice @ 0x140758BF0 (IoReportRootDevice.c)
 *     PiProcessAddBootDevices @ 0x1407598C8 (PiProcessAddBootDevices.c)
 *     PiProcessClearDeviceProblem @ 0x14075FD9C (PiProcessClearDeviceProblem.c)
 *     PipMergeDependencyEdgeList @ 0x140823F8C (PipMergeDependencyEdgeList.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140828D2C (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCreateDevice @ 0x1408367B4 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140837188 (PiCMDeleteDevice.c)
 *     PiCMDeleteObject @ 0x1408377B0 (PiCMDeleteObject.c)
 *     PiProcessSetDeviceProblem @ 0x14083A51C (PiProcessSetDeviceProblem.c)
 *     PiInitializeDevice @ 0x14083C164 (PiInitializeDevice.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x140006820 (RtlInitializeGenericTableAvl.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1405999E8 (PiPnpRtlGetCurrentOperation.c)
 */

__int64 __fastcall PiPnpRtlBeginOperation(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  int CurrentOperation; // eax
  unsigned int v4; // ebx
  _DWORD *v5; // rax
  char *PoolWithTag; // rax
  char *v7; // rdi
  struct _KTHREAD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _DWORD *v12; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a1 = 0LL;
  v12 = 0LL;
  CurrentOperation = PiPnpRtlGetCurrentOperation(&v12);
  v4 = CurrentOperation;
  if ( CurrentOperation == -1073741275 )
  {
    v4 = 0;
  }
  else if ( CurrentOperation < 0 )
  {
    return v4;
  }
  v5 = v12;
  if ( v12 )
  {
    ++v12[36];
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x41706E50u);
    v12 = PoolWithTag;
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    *((_DWORD *)PoolWithTag + 36) = 1;
    *((_QWORD *)PoolWithTag + 2) = CurrentThread;
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(PoolWithTag + 24),
      PiPnpRtlObjectEventCompareObjects,
      PiPnpRtlOperationAllocateGenericTableEntry,
      PiPnpRtlOperationFreeGenericTableEntry,
      0LL);
    *((_QWORD *)v7 + 17) = v7 + 128;
    *((_QWORD *)v7 + 16) = v7 + 128;
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiPnpRtlActiveOperationsLock, 1u);
    v9 = PiPnpRtlActiveOperations;
    if ( *(__int64 **)(PiPnpRtlActiveOperations + 8) != &PiPnpRtlActiveOperations )
      __fastfail(3u);
    v10 = (__int64)v12;
    *(_QWORD *)v12 = PiPnpRtlActiveOperations;
    *(_QWORD *)(v10 + 8) = &PiPnpRtlActiveOperations;
    *(_QWORD *)(v9 + 8) = v10;
    PiPnpRtlActiveOperations = v10;
    ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v5 = v12;
  }
  *a1 = v5;
  return v4;
}
