/*
 * XREFs of PnpRequestDeviceAction @ 0x14015D184
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400EBD70 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoInvalidateDeviceRelations @ 0x14015D0D0 (IoInvalidateDeviceRelations.c)
 *     IoInvalidateDeviceState @ 0x14017FCB0 (IoInvalidateDeviceState.c)
 *     PnpInitializeProcessor @ 0x14029D814 (PnpInitializeProcessor.c)
 *     PiControlGetSetDeviceStatus @ 0x1406A2980 (PiControlGetSetDeviceStatus.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 *     PnpInvalidateRelationsInList @ 0x14072FE3C (PnpInvalidateRelationsInList.c)
 *     IopReleaseDeviceResources @ 0x140730810 (IopReleaseDeviceResources.c)
 *     IopReleaseFilteredBootResources @ 0x140751758 (IopReleaseFilteredBootResources.c)
 *     PnpBootPhaseComplete @ 0x140754ED4 (PnpBootPhaseComplete.c)
 *     PpDevCfgProcessDevices @ 0x140754F9C (PpDevCfgProcessDevices.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140776120 (PiDevCfgProcessDeviceCallback.c)
 *     PiResetProblemDevicesWorker @ 0x14077A230 (PiResetProblemDevicesWorker.c)
 *     IoReportRootDevice @ 0x14077EA20 (IoReportRootDevice.c)
 *     IopDeleteDriver @ 0x140784030 (IopDeleteDriver.c)
 *     PipAttemptDependentStart @ 0x14085E124 (PipAttemptDependentStart.c)
 *     IopResourceRequirementsChanged @ 0x140860098 (IopResourceRequirementsChanged.c)
 *     PpSystemHiveLimitCallback @ 0x140861CD0 (PpSystemHiveLimitCallback.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x14087411C (PipDmgRequestRestartOnBlockedDevice.c)
 *     PiQueueDeviceRequest @ 0x14087798C (PiQueueDeviceRequest.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A0FED8 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x140A10210 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140A10470 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140099F60 (PnpIsSafeToExamineUserModeTeb.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     PopDirectedDripsSetDisengageReason @ 0x1401593AC (PopDirectedDripsSetDisengageReason.c)
 *     PnpDeviceActionWorker @ 0x14015D540 (PnpDeviceActionWorker.c)
 *     PnpLogActionQueueEvent @ 0x14015D9C4 (PnpLogActionQueueEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
               && KeGetPcr()->NtTib.$9424C633A3F015B2949C47ACD1C6BB49::$C9A5EC8C1EDA84B9BBBFFDE0BE1813B0::Self )
        {
          v24 = *(GUID *)&KeGetPcr()->NtTib.$9424C633A3F015B2949C47ACD1C6BB49::$C9A5EC8C1EDA84B9BBBFFDE0BE1813B0::Self[105].SubSystemTib;
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
  v16 = KeAcquireSpinLockRaiseToDpc(&qword_140444D00);
  if ( ++dword_140444D08 == 1 )
  {
    if ( byte_140444D78 )
      qword_140444D88 = MEMORY[0xFFFFF78000000008];
    PopDirectedDripsSetDisengageReason(4);
  }
  ++PopDirectedDripsState[v15 + 148];
  if ( byte_140444D78 )
    ++PopDirectedDripsState[v15 + 234];
  KxReleaseSpinLock(&qword_140444D00);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v16);
  v17 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v18 = (_QWORD *)qword_14045F2E8;
  if ( *(__int64 **)qword_14045F2E8 != &PnpEnumerationRequestList )
    __fastfail(3u);
  *(_QWORD *)PoolWithTag = &PnpEnumerationRequestList;
  *((_QWORD *)PoolWithTag + 1) = v18;
  *v18 = PoolWithTag;
  qword_14045F2E8 = (__int64)PoolWithTag;
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
