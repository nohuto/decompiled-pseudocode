/*
 * XREFs of MmGetSessionById @ 0x14007E4E0
 * Callers:
 *     MmGetSessionObjectById @ 0x14007F244 (MmGetSessionObjectById.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB40C (MiTrimSharedPageFromViews.c)
 *     PopPowerButtonWorkCallback @ 0x1402E47A0 (PopPowerButtonWorkCallback.c)
 *     PopWatchdogWorker @ 0x1402E4F30 (PopWatchdogWorker.c)
 *     PsGetSiloBySessionId @ 0x140596B48 (PsGetSiloBySessionId.c)
 *     EtwpSendDataBlock @ 0x1405C039C (EtwpSendDataBlock.c)
 *     PspChangeProcessExecutionState @ 0x1406035AC (PspChangeProcessExecutionState.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14060FE20 (ExpWnfCaptureScopeInstanceId.c)
 *     EtwpEnableGuid @ 0x140655F38 (EtwpEnableGuid.c)
 *     PspAttachSession @ 0x14069E7C8 (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x14069E824 (ExCallSessionCallBack.c)
 *     PiUEventBroadcastEventWorker @ 0x140702FB0 (PiUEventBroadcastEventWorker.c)
 *     PnpNotifyDriverCallback @ 0x140703754 (PnpNotifyDriverCallback.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1408287D0 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14082885C (PiUEventBroadcastPortsChangedEvent.c)
 *     PopLazySensorActiveInput @ 0x140878F20 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x1408810C0 (TtmpSessionWorker.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetThreadServerSilo @ 0x14007E5E0 (PsGetThreadServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x14007E614 (MiSelectSessionAttachProcess.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC760 (KxReleaseQueuedSpinLock.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B42EC (KeIsExecutingInArbitraryThreadContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
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
  KeAcquireInStackQueuedSpinLock(&qword_14043AE80, &LockHandle);
  v4 = (_QWORD *)qword_140439FC8;
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
