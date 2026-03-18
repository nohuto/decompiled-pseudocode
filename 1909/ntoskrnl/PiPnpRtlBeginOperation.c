/*
 * XREFs of PiPnpRtlBeginOperation @ 0x1405BD6D8
 * Callers:
 *     PiDqActionDataGetRequestedProperties @ 0x1405B7804 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqQueryEvaluateFilter @ 0x1405BB3D8 (PiDqQueryEvaluateFilter.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140697168 (PiDcHandleCustomDeviceEvent.c)
 *     PiDqIrpPropertySet @ 0x1406F5400 (PiDqIrpPropertySet.c)
 *     PipClearDevNodeProblem @ 0x1406FADBC (PipClearDevNodeProblem.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406FBDA0 (PiPnpRtlObjectEventWorker.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1407009D0 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipProcessStartPhase3 @ 0x140700C08 (PipProcessStartPhase3.c)
 *     PnpProcessTargetDeviceEvent @ 0x1407011A4 (PnpProcessTargetDeviceEvent.c)
 *     PiProcessQueryDeviceState @ 0x140703450 (PiProcessQueryDeviceState.c)
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140707CA0 (PipEnumerateCompleted.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14070C918 (PiDcUpdateDeviceContainerMembership.c)
 *     PiDqActionDataGetChangedProperties @ 0x14071FD08 (PiDqActionDataGetChangedProperties.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140731B24 (PnpUnlinkDeviceRemovalRelations.c)
 *     IopRemoveDevice @ 0x140732B24 (IopRemoveDevice.c)
 *     PipSetDevNodeProblem @ 0x1407339B4 (PipSetDevNodeProblem.c)
 *     IopRegisterDeviceInterface @ 0x140737524 (IopRegisterDeviceInterface.c)
 *     PiSwPropertySet @ 0x14074421C (PiSwPropertySet.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     PpDevCfgProcessDevices @ 0x140755A2C (PpDevCfgProcessDevices.c)
 *     PiProcessAddBootDevices @ 0x140780918 (PiProcessAddBootDevices.c)
 *     IoReportRootDevice @ 0x140781440 (IoReportRootDevice.c)
 *     PipMergeDependencyEdgeList @ 0x14085DADC (PipMergeDependencyEdgeList.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140862A0C (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCreateDevice @ 0x140870890 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1408712B4 (PiCMDeleteDevice.c)
 *     PiCMDeleteObject @ 0x140871950 (PiCMDeleteObject.c)
 *     PiProcessClearDeviceProblem @ 0x1408745A0 (PiProcessClearDeviceProblem.c)
 *     PiProcessSetDeviceProblem @ 0x140874898 (PiProcessSetDeviceProblem.c)
 *     PiInitializeDevice @ 0x1408769E0 (PiInitializeDevice.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400025C0 (RtlInitializeGenericTableAvl.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1405BF860 (PiPnpRtlGetCurrentOperation.c)
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v5 = v12;
  }
  *a1 = v5;
  return v4;
}
