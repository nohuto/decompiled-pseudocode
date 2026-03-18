/*
 * XREFs of MmGetSessionById @ 0x1400023F0
 * Callers:
 *     MmGetSessionObjectById @ 0x140002348 (MmGetSessionObjectById.c)
 *     MiTrimSharedPageFromViews @ 0x1400C10E0 (MiTrimSharedPageFromViews.c)
 *     PopPowerButtonWorkCallback @ 0x140301080 (PopPowerButtonWorkCallback.c)
 *     PopWatchdogWorker @ 0x140301610 (PopWatchdogWorker.c)
 *     PsGetSiloBySessionId @ 0x1405BC14C (PsGetSiloBySessionId.c)
 *     ExCallSessionCallBack @ 0x140639448 (ExCallSessionCallBack.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140656250 (ExpWnfCaptureScopeInstanceId.c)
 *     PspChangeProcessExecutionState @ 0x140687F94 (PspChangeProcessExecutionState.c)
 *     EtwpEnableGuid @ 0x140691558 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x140693638 (EtwpSendDataBlock.c)
 *     PspAttachSession @ 0x1406EC284 (PspAttachSession.c)
 *     PiUEventBroadcastEventWorker @ 0x140725410 (PiUEventBroadcastEventWorker.c)
 *     PnpNotifyDriverCallback @ 0x140737E98 (PnpNotifyDriverCallback.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14086240C (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140862498 (PiUEventBroadcastPortsChangedEvent.c)
 *     PopLazySensorActiveInput @ 0x1408B59D4 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x1408BE740 (TtmpSessionWorker.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1400024F0 (PsGetThreadServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x140002524 (MiSelectSessionAttachProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmGetSessionById(unsigned int a1)
{
  __int64 v2; // rsi
  __int64 ThreadServerSilo; // rdi
  _QWORD *v4; // rax
  unsigned int v5; // ecx
  __int64 v6; // rdx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v4 = (_QWORD *)qword_1404656E0;
  while ( v4 )
  {
    v5 = *((_DWORD *)v4 - 34);
    if ( a1 > v5 )
    {
      v4 = (_QWORD *)v4[1];
    }
    else
    {
      if ( a1 >= v5 )
      {
        if ( (!ThreadServerSilo || v4[148] == ThreadServerSilo) && v5 == a1 )
          v2 = MiSelectSessionAttachProcess(v4 - 18);
        break;
      }
      v4 = (_QWORD *)*v4;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb, v6);
  }
  __writecr8(OldIrql);
  return v2;
}
