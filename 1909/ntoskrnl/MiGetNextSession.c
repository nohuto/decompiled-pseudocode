/*
 * XREFs of MiGetNextSession @ 0x14008CB84
 * Callers:
 *     MmGetNextSession @ 0x14008CB70 (MmGetNextSession.c)
 *     MiEmptyAccessLogs @ 0x14017D570 (MiEmptyAccessLogs.c)
 *     PsQueryCpuQuotaInformation @ 0x14019EA24 (PsQueryCpuQuotaInformation.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1400024F0 (PsGetThreadServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x140002524 (MiSelectSessionAttachProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiGetNextSession(_QWORD *Object)
{
  _QWORD *v2; // rdi
  __int64 ThreadServerSilo; // r14
  __int64 v4; // rbx
  __int64 *v5; // rbx
  _QWORD *v6; // rax
  unsigned __int8 OldIrql; // bl
  unsigned __int8 v9; // bl
  struct _KPRCB *v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  if ( Object )
    v4 = Object[128];
  else
    v4 = 0LL;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( v4 )
  {
    v5 = *(__int64 **)(v4 + 128);
    goto LABEL_5;
  }
  v5 = (__int64 *)qword_140466680;
  if ( qword_140466680 )
  {
LABEL_5:
    while ( v5 != &qword_140466680 )
    {
      v6 = MiSelectSessionAttachProcess((__int64)(v5 - 16));
      v2 = v6;
      if ( v6 )
      {
        if ( !ThreadServerSilo || v5[150] == ThreadServerSilo )
          break;
        ObfDereferenceObject(v6);
        v2 = 0LL;
      }
      v5 = (__int64 *)*v5;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    if ( Object )
      ObfDereferenceObject(Object);
    return v2;
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v9 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v10 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v10);
    }
    __writecr8(v9);
    return 0LL;
  }
}
