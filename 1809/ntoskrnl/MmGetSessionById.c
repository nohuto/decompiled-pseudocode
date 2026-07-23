/*
 * XREFs of MmGetSessionById @ 0x14007E4D0
 * Callers:
 *     MmGetSessionObjectById @ 0x14007F234 (MmGetSessionObjectById.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     PopPowerButtonWorkCallback @ 0x1402E4990 (PopPowerButtonWorkCallback.c)
 *     PopWatchdogWorker @ 0x1402E5120 (PopWatchdogWorker.c)
 *     PsGetSiloBySessionId @ 0x140597B48 (PsGetSiloBySessionId.c)
 *     EtwpSendDataBlock @ 0x1405C139C (EtwpSendDataBlock.c)
 *     PspChangeProcessExecutionState @ 0x1406045AC (PspChangeProcessExecutionState.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140610E20 (ExpWnfCaptureScopeInstanceId.c)
 *     EtwpEnableGuid @ 0x1406570F8 (EtwpEnableGuid.c)
 *     PspAttachSession @ 0x14069FA88 (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x14069FAE4 (ExCallSessionCallBack.c)
 *     PiUEventBroadcastEventWorker @ 0x140704250 (PiUEventBroadcastEventWorker.c)
 *     PnpNotifyDriverCallback @ 0x1407049F4 (PnpNotifyDriverCallback.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1408299D0 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140829A5C (PiUEventBroadcastPortsChangedEvent.c)
 *     PopLazySensorActiveInput @ 0x14087A180 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x140882320 (TtmpSessionWorker.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetThreadServerSilo @ 0x14007E5D0 (PsGetThreadServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x14007E604 (MiSelectSessionAttachProcess.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B442C (KeIsExecutingInArbitraryThreadContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmGetSessionById(unsigned int a1)
{
  __int64 v2; // rsi
  __int64 ThreadServerSilo; // rbx
  _QWORD *v4; // rcx
  unsigned int v5; // edx
  _QWORD *v6; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext() )
    ThreadServerSilo = 0LL;
  else
    ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
  v4 = (_QWORD *)qword_14043B088;
  while ( v4 )
  {
    v5 = *((_DWORD *)v4 - 38);
    if ( a1 > v5 )
    {
      v4 = (_QWORD *)v4[1];
    }
    else
    {
      if ( a1 >= v5 )
      {
        v6 = v4 - 20;
        if ( (!ThreadServerSilo || v6[1038] == ThreadServerSilo) && v5 == a1 )
          v2 = MiSelectSessionAttachProcess(v6);
        break;
      }
      v4 = (_QWORD *)*v4;
    }
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  return v2;
}
