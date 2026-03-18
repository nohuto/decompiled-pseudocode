/*
 * XREFs of KeFreezeProcess @ 0x1400EE7A4
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402BBF64 (MiReAcquireOutSwappedProcessCommit.c)
 *     PsFreezeProcess @ 0x1406A34C4 (PsFreezeProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     KiFreezeSingleThread @ 0x1400EE8A0 (KiFreezeSingleThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeFreezeProcess(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r14
  volatile LONG *v6; // rbp
  int v7; // eax
  unsigned int v8; // edi
  _QWORD *v9; // rdi
  _QWORD *i; // rbx
  _QWORD *v11; // rdx
  struct _KPRCB *v13; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v7 = *(_DWORD *)(a1 + 624);
  v8 = v7 + ((*(_DWORD *)(a1 + 440) >> 3) & 1);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 72) = KiQueryUnbiasedInterruptTime();
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 3u);
  }
  else
  {
    *(_DWORD *)(a1 + 624) = v7 + 1;
  }
  if ( v8 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v13 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v13);
    }
    __writecr8(CurrentIrql);
    return v8;
  }
  else
  {
    v9 = (_QWORD *)(a1 + 48);
    for ( i = *(_QWORD **)(a1 + 48); i != v9; i = (_QWORD *)*i )
    {
      v11 = i - 95;
      if ( a2 || (*((_DWORD *)v11 + 29) & 0x200000) == 0 )
        KiFreezeSingleThread(CurrentPrcb, v11);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
    return 0LL;
  }
}
