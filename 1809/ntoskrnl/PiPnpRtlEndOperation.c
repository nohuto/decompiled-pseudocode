/*
 * XREFs of PiPnpRtlEndOperation @ 0x140595CA4
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x14058FC40 (PiDcHandleCustomDeviceEvent.c)
 *     PiDqActionDataGetRequestedProperties @ 0x140590E50 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqQueryEvaluateFilter @ 0x14059552C (PiDqQueryEvaluateFilter.c)
 *     PiDqIrpPropertySet @ 0x1406D58FC (PiDqIrpPropertySet.c)
 *     PiSwPropertySet @ 0x1406D7970 (PiSwPropertySet.c)
 *     PiDqActionDataGetChangedProperties @ 0x1406DB264 (PiDqActionDataGetChangedProperties.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1406E4E30 (PipEnumerateCompleted.c)
 *     PiProcessQueryDeviceState @ 0x1406E9C64 (PiProcessQueryDeviceState.c)
 *     PipProcessStartPhase3 @ 0x1406EAB38 (PipProcessStartPhase3.c)
 *     PnpProcessTargetDeviceEvent @ 0x1406EB0E0 (PnpProcessTargetDeviceEvent.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1406EB1FC (PiDcUpdateDeviceContainerMembership.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1406EB74C (PnpNewDeviceNodeDependencyCheck.c)
 *     IopRemoveDevice @ 0x1406ECE24 (IopRemoveDevice.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1406ED74C (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x1406EF580 (PipSetDevNodeProblem.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F1F40 (PiPnpRtlObjectEventWorker.c)
 *     PipClearDevNodeProblem @ 0x1406F6CF8 (PipClearDevNodeProblem.c)
 *     IopRegisterDeviceInterface @ 0x140709AF4 (IopRegisterDeviceInterface.c)
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 *     PpDevCfgProcessDevices @ 0x14073A4AC (PpDevCfgProcessDevices.c)
 *     IoReportRootDevice @ 0x140758C10 (IoReportRootDevice.c)
 *     PiProcessAddBootDevices @ 0x1407598E8 (PiProcessAddBootDevices.c)
 *     PiProcessClearDeviceProblem @ 0x14075FDBC (PiProcessClearDeviceProblem.c)
 *     PipMergeDependencyEdgeList @ 0x140823FAC (PipMergeDependencyEdgeList.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140828D4C (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCreateDevice @ 0x1408367D4 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1408371A8 (PiCMDeleteDevice.c)
 *     PiCMDeleteObject @ 0x1408377D0 (PiCMDeleteObject.c)
 *     PiProcessSetDeviceProblem @ 0x14083A53C (PiProcessSetDeviceProblem.c)
 *     PiInitializeDevice @ 0x14083C184 (PiInitializeDevice.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x1400067C0 (RtlIsGenericTableEmptyAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140006CA0 (RtlDeleteElementGenericTableAvl.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PiPnpRtlObjectEventDispatch @ 0x140595C5C (PiPnpRtlObjectEventDispatch.c)
 *     PiPnpRtlObjectEventRelease @ 0x140595DE0 (PiPnpRtlObjectEventRelease.c)
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
