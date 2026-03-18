/*
 * XREFs of KeForceResumeProcess @ 0x1400EEA04
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x1402BBF30 (MiReAcquireCommitFailWorker.c)
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     PspTerminateProcess @ 0x1406727B8 (PspTerminateProcess.c)
 *     PsFreezeProcess @ 0x1406A34C4 (PsFreezeProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiThawSingleThread @ 0x1400EEC40 (KiThawSingleThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeForceResumeProcess(__int64 a1)
{
  _QWORD **v2; // rsi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // r14
  volatile LONG *v5; // rbp
  __int64 v6; // r8
  __int64 result; // rax
  _QWORD *i; // rdi
  struct _KPRCB *v9; // rcx

  v2 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( *(_DWORD *)(a1 + 624) + ((*(_DWORD *)(a1 + 440) >> 3) & 1) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 440), 3u);
    *(_DWORD *)(a1 + 624) = 0;
    for ( i = *v2; i != v2; i = (_QWORD *)*i )
    {
      LOBYTE(v6) = 1;
      KiThawSingleThread(CurrentPrcb, i - 95, v6);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    return KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v9 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v9);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
