/*
 * XREFs of PnpRequestDeviceAction @ 0x14015F104
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140132810 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoInvalidateDeviceRelations @ 0x14015F050 (IoInvalidateDeviceRelations.c)
 *     IoInvalidateDeviceState @ 0x140176430 (IoInvalidateDeviceState.c)
 *     PnpInitializeProcessor @ 0x140287908 (PnpInitializeProcessor.c)
 *     PiControlGetSetDeviceStatus @ 0x14059CD40 (PiControlGetSetDeviceStatus.c)
 *     PiProcessQueryDeviceState @ 0x1406EAEE4 (PiProcessQueryDeviceState.c)
 *     IopReleaseDeviceResources @ 0x1406EE924 (IopReleaseDeviceResources.c)
 *     PnpInvalidateRelationsInList @ 0x1406EEF50 (PnpInvalidateRelationsInList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 *     PiResetProblemDevicesWorker @ 0x14070DE70 (PiResetProblemDevicesWorker.c)
 *     IopDeleteDriver @ 0x140710070 (IopDeleteDriver.c)
 *     IopReleaseFilteredBootResources @ 0x14072EB78 (IopReleaseFilteredBootResources.c)
 *     PnpBootPhaseComplete @ 0x14073B5C0 (PnpBootPhaseComplete.c)
 *     PpDevCfgProcessDevices @ 0x14073B67C (PpDevCfgProcessDevices.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140751DB0 (PiDevCfgProcessDeviceCallback.c)
 *     IoReportRootDevice @ 0x140759DE0 (IoReportRootDevice.c)
 *     PipAttemptDependentStart @ 0x140824ED4 (PipAttemptDependentStart.c)
 *     PpSystemHiveLimitCallback @ 0x140828AF0 (PpSystemHiveLimitCallback.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x14083A700 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PiQueueDeviceRequest @ 0x14083DA48 (PiQueueDeviceRequest.c)
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 *     PipInitializeCoreDriversByGroup @ 0x1409CB988 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x1409CBCC4 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     PnpIsSafeToExamineUserModeTeb @ 0x1400065D8 (PnpIsSafeToExamineUserModeTeb.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     PnpDeviceActionWorker @ 0x14015F400 (PnpDeviceActionWorker.c)
 *     PnpLogActionQueueEvent @ 0x14015F86C (PnpLogActionQueueEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
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
  unsigned int v11; // r15d
  char *PoolWithTag; // rdi
  char v13; // al
  GUID *SparePtr; // rcx
  __int64 v15; // rcx
  KIRQL v16; // r14
  _QWORD *v17; // rax
  struct _KPRCB *v19; // rcx
  struct _KPRCB *v20; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  GUID v22; // [rsp+30h] [rbp-38h]

  v22 = NullGuid;
  v11 = 0;
  if ( PnpShutdownEvent.Header.SignalState )
    return (unsigned int)-1073741431;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x32706E50u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  if ( !Object )
    Object = *(PVOID *)(IopRootDeviceNode + 32);
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
    goto LABEL_36;
  if ( a2 != 6 )
  {
    if ( a2 <= 8 )
      goto LABEL_11;
    if ( a2 > 10 && a2 != 14 )
    {
      if ( a2 > 16 && a2 <= 18 )
      {
LABEL_36:
        v13 = 0;
        goto LABEL_12;
      }
LABEL_11:
      v13 = 1;
LABEL_12:
      if ( v13 && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        SparePtr = (GUID *)KeGetCurrentThread()[1].WaitBlock[0].SparePtr;
        if ( SparePtr )
        {
          v22 = *SparePtr;
        }
        else if ( PnpIsSafeToExamineUserModeTeb()
               && KeGetPcr()->NtTib.$D0B1ACB34FBE4905ECC1583689CC2FF1::$FA8FFF1520DD35500AAEFA9E987D7DBA::Self )
        {
          v22 = *(GUID *)&KeGetPcr()->NtTib.$D0B1ACB34FBE4905ECC1583689CC2FF1::$FA8FFF1520DD35500AAEFA9E987D7DBA::Self[105].SubSystemTib;
        }
      }
    }
  }
  *(GUID *)(PoolWithTag + 56) = v22;
  if ( Object )
    v15 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v15 = 0LL;
  PnpLogActionQueueEvent(v15, (unsigned int)a2, 0LL, 0LL, 0, PoolWithTag);
  v16 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v17 = (_QWORD *)qword_1404346A8;
  if ( *(__int64 **)qword_1404346A8 != &PnpEnumerationRequestList )
    __fastfail(3u);
  *(_QWORD *)PoolWithTag = &PnpEnumerationRequestList;
  *((_QWORD *)PoolWithTag + 1) = v17;
  *v17 = PoolWithTag;
  qword_1404346A8 = (__int64)PoolWithTag;
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
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v16);
    PnpDeviceActionWorker(0LL);
  }
  else if ( PnpEnumerationInProgress || !LOBYTE(PnpShutdownEvent.Limit) )
  {
    KxReleaseSpinLock(&PnpSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
    {
      v20 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v20);
    }
    __writecr8(v16);
  }
  else
  {
    PnpEnumerationInProgress = 1;
    KeResetEvent(&PnpEnumerationLock);
    KxReleaseSpinLock(&PnpSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
    {
      v19 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v19);
    }
    __writecr8(v16);
    PnpDeviceEnumerationWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceActionWorker;
    PnpDeviceEnumerationWorkItem.Parameter = 0LL;
    PnpDeviceEnumerationWorkItem.List.Flink = 0LL;
    ExQueueWorkItem(&PnpDeviceEnumerationWorkItem, DelayedWorkQueue);
  }
  return v11;
}
