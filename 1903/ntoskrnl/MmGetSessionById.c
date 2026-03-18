/*
 * XREFs of MmGetSessionById @ 0x1400023F0
 * Callers:
 *     MmGetSessionObjectById @ 0x140002348 (MmGetSessionObjectById.c)
 *     MiTrimSharedPageFromViews @ 0x1400E1260 (MiTrimSharedPageFromViews.c)
 *     PopPowerButtonWorkCallback @ 0x1403015D0 (PopPowerButtonWorkCallback.c)
 *     PopWatchdogWorker @ 0x140301B60 (PopWatchdogWorker.c)
 *     PsGetSiloBySessionId @ 0x1405BBD6C (PsGetSiloBySessionId.c)
 *     ExCallSessionCallBack @ 0x1406361E8 (ExCallSessionCallBack.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140642700 (ExpWnfCaptureScopeInstanceId.c)
 *     EtwpEnableGuid @ 0x140664144 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x140666224 (EtwpSendDataBlock.c)
 *     PspChangeProcessExecutionState @ 0x140694A24 (PspChangeProcessExecutionState.c)
 *     PspAttachSession @ 0x1406EAFC4 (PspAttachSession.c)
 *     PiUEventBroadcastEventWorker @ 0x140723570 (PiUEventBroadcastEventWorker.c)
 *     PnpNotifyDriverCallback @ 0x140735C38 (PnpNotifyDriverCallback.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x140862D0C (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140862D98 (PiUEventBroadcastPortsChangedEvent.c)
 *     PopLazySensorActiveInput @ 0x1408B6104 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x1408BEE70 (TtmpSessionWorker.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1400024F0 (PsGetThreadServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x140002524 (MiSelectSessionAttachProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
  v4 = (_QWORD *)qword_1404659E0;
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
