/*
 * XREFs of PnpRequestDeviceAction @ 0x14015D824
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400887D0 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoInvalidateDeviceRelations @ 0x14015D770 (IoInvalidateDeviceRelations.c)
 *     IoInvalidateDeviceState @ 0x1401803A0 (IoInvalidateDeviceState.c)
 *     PnpInitializeProcessor @ 0x14029D574 (PnpInitializeProcessor.c)
 *     PiControlGetSetDeviceStatus @ 0x14066FE60 (PiControlGetSetDeviceStatus.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140730890 (PnpProcessQueryRemoveAndEject.c)
 *     PnpInvalidateRelationsInList @ 0x14073209C (PnpInvalidateRelationsInList.c)
 *     IopReleaseDeviceResources @ 0x140732A70 (IopReleaseDeviceResources.c)
 *     IopReleaseFilteredBootResources @ 0x1407521E8 (IopReleaseFilteredBootResources.c)
 *     PnpBootPhaseComplete @ 0x140755964 (PnpBootPhaseComplete.c)
 *     PpDevCfgProcessDevices @ 0x140755A2C (PpDevCfgProcessDevices.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140779700 (PiDevCfgProcessDeviceCallback.c)
 *     PiResetProblemDevicesWorker @ 0x14077D280 (PiResetProblemDevicesWorker.c)
 *     IoReportRootDevice @ 0x140781440 (IoReportRootDevice.c)
 *     IopDeleteDriver @ 0x140786390 (IopDeleteDriver.c)
 *     PipAttemptDependentStart @ 0x14085D824 (PipAttemptDependentStart.c)
 *     IopResourceRequirementsChanged @ 0x14085F798 (IopResourceRequirementsChanged.c)
 *     PpSystemHiveLimitCallback @ 0x1408613D0 (PpSystemHiveLimitCallback.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x14087381C (PipDmgRequestRestartOnBlockedDevice.c)
 *     PiQueueDeviceRequest @ 0x14087708C (PiQueueDeviceRequest.c)
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A10670 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x140A109A8 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140A10C08 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x1400EDFB0 (PnpIsSafeToExamineUserModeTeb.c)
 *     PopDirectedDripsSetDisengageReason @ 0x140159A4C (PopDirectedDripsSetDisengageReason.c)
 *     PnpDeviceActionWorker @ 0x14015DBE0 (PnpDeviceActionWorker.c)
 *     PnpLogActionQueueEvent @ 0x14015E064 (PnpLogActionQueueEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpRequestDeviceAction(
        PVOID Object,
        int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  char *PoolWithTag; // rdi
  char v12; // al
  GUID *SparePtr; // rcx
  __int64 v14; // rcx
  __int64 v15; // rsi
  KIRQL v16; // r12
  KIRQL v17; // r12
  _QWORD *v18; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v21; // rcx
  struct _KPRCB *v22; // rcx
  struct _KPRCB *v23; // rcx
  GUID v24; // [rsp+30h] [rbp-38h]

  v24 = NullGuid;
  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x32706E50u);
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( !Object )
    Object = (PVOID)*((_QWORD *)IopRootDeviceNode + 4);
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  *((_QWORD *)PoolWithTag + 2) = Object;
  *((_DWORD *)PoolWithTag + 6) = a2;
  PoolWithTag[28] = a3;
  *((_QWORD *)PoolWithTag + 4) = a4;
  *((_QWORD *)PoolWithTag + 5) = a5;
  *((_QWORD *)PoolWithTag + 6) = a6;
  *((_DWORD *)PoolWithTag + 18) = 1;
  PoolWithTag[76] = 0;
  PoolWithTag[88] = 0;
  *((_QWORD *)PoolWithTag + 10) = 0LL;
  if ( !a2 )
    goto LABEL_44;
  if ( a2 != 6 )
  {
    if ( a2 <= 8 )
    {
LABEL_8:
      v12 = 1;
LABEL_9:
      if ( v12 && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        SparePtr = (GUID *)KeGetCurrentThread()[1].WaitBlock[0].SparePtr;
        if ( SparePtr )
        {
          v24 = *SparePtr;
        }
        else if ( PnpIsSafeToExamineUserModeTeb()
               && KeGetPcr()->NtTib.$9D9B0EC91357685197870F19570BC36A::$178D88066840D12B034B909BF2D1FA47::Self )
        {
          v24 = *(GUID *)&KeGetPcr()->NtTib.$9D9B0EC91357685197870F19570BC36A::$178D88066840D12B034B909BF2D1FA47::Self[105].SubSystemTib;
        }
      }
      goto LABEL_13;
    }
    if ( a2 > 10 && a2 != 14 )
    {
      if ( a2 <= 16 || a2 > 18 )
        goto LABEL_8;
LABEL_44:
      v12 = 0;
      goto LABEL_9;
    }
  }
LABEL_13:
  *(GUID *)(PoolWithTag + 56) = v24;
  if ( Object )
    v14 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v14 = 0LL;
  PnpLogActionQueueEvent(v14, (unsigned int)a2, 0LL, 0LL);
  v15 = *((unsigned int *)PoolWithTag + 6);
  v16 = KeAcquireSpinLockRaiseToDpc(&qword_1404449E0);
  if ( ++dword_1404449E8 == 1 )
  {
    if ( byte_140444A58 )
      qword_140444A68 = MEMORY[0xFFFFF78000000008];
    PopDirectedDripsSetDisengageReason(4);
  }
  ++PopDirectedDripsState[v15 + 148];
  if ( byte_140444A58 )
    ++PopDirectedDripsState[v15 + 234];
  KxReleaseSpinLock(&qword_1404449E0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v16);
  v17 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v18 = (_QWORD *)qword_14045EFB8;
  if ( *(__int64 **)qword_14045EFB8 != &PnpEnumerationRequestList )
    __fastfail(3u);
  *(_QWORD *)PoolWithTag = &PnpEnumerationRequestList;
  *((_QWORD *)PoolWithTag + 1) = v18;
  *v18 = PoolWithTag;
  qword_14045EFB8 = (__int64)PoolWithTag;
  if ( a7 )
  {
    ++*((_DWORD *)PoolWithTag + 18);
    *a7 = PoolWithTag;
  }
  if ( a2 == 7 || a2 == 10 )
  {
    PnpEnumerationInProgress = 1;
    KeResetEvent(&PnpEnumerationLock);
    KxReleaseSpinLock(&PnpSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
    {
      v23 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v23);
    }
    __writecr8(v17);
    PnpDeviceActionWorker(0LL);
  }
  else if ( PnpEnumerationInProgress || !PnPBootDriversLoaded )
  {
    KxReleaseSpinLock(&PnpSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
    {
      v22 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v22);
    }
    __writecr8(v17);
  }
  else
  {
    PnpEnumerationInProgress = 1;
    KeResetEvent(&PnpEnumerationLock);
    KxReleaseSpinLock(&PnpSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
    {
      v21 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v21);
    }
    __writecr8(v17);
    PnpDeviceEnumerationWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceActionWorker;
    PnpDeviceEnumerationWorkItem.Parameter = 0LL;
    PnpDeviceEnumerationWorkItem.List.Flink = 0LL;
    ExQueueWorkItem(&PnpDeviceEnumerationWorkItem, DelayedWorkQueue);
  }
  return 0LL;
}
