/*
 * XREFs of PiPnpRtlEndOperation @ 0x1405BB924
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
 *     RtlIsGenericTableEmptyAvl @ 0x140001C90 (RtlIsGenericTableEmptyAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1405BB8DC (PiPnpRtlObjectEventDispatch.c)
 *     PiPnpRtlObjectEventRelease @ 0x1405BBA60 (PiPnpRtlObjectEventRelease.c)
 */

void __fastcall PiPnpRtlEndOperation(PVOID **P)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // rax
  PVOID *v5; // rdx
  PVOID *v6; // rax
  _QWORD **v7; // rdi
  _QWORD *v8; // rcx
  HANDLE *v9; // rcx
  _QWORD *v10; // rax
  HANDLE *Buffer; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)P + 36))-- == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
    v4 = KeGetCurrentThread();
    --v4->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiPnpRtlActiveOperationsLock, 1u);
    v5 = *P;
    if ( (*P)[1] != P || (v6 = P[1], *v6 != P) )
LABEL_16:
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    while ( !RtlIsGenericTableEmptyAvl((PRTL_AVL_TABLE)(P + 3)) )
    {
      v9 = (HANDLE *)P[5][4];
      Buffer = v9;
      if ( v9[2] )
      {
        ZwClose(v9[2]);
        Buffer[2] = 0LL;
        v9 = Buffer;
      }
      PiPnpRtlObjectEventDispatch((__int64)v9);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(P + 3), &Buffer);
      PiPnpRtlObjectEventRelease(Buffer);
    }
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v7 = P + 16;
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 == v7 )
        break;
      if ( (_QWORD **)v8[1] != v7 )
        goto LABEL_16;
      v10 = (_QWORD *)*v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 )
        goto LABEL_16;
      *v7 = v10;
      v10[1] = v7;
      Buffer = (HANDLE *)(v8 - 7);
      PiPnpRtlObjectEventRelease(v8 - 7);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}
