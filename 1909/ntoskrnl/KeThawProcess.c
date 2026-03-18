/*
 * XREFs of KeThawProcess @ 0x1400F1A50
 * Callers:
 *     PsThawProcess @ 0x1406A10B8 (PsThawProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     KiThawSingleThread @ 0x1400F1B9C (KiThawSingleThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeThawProcess(__int64 a1, char a2)
{
  _QWORD **v3; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r13
  volatile LONG *v7; // r12
  __int64 v8; // r14
  int v9; // eax
  unsigned int v10; // ebp
  _QWORD *i; // rax
  _QWORD *j; // rbx
  _QWORD *v13; // rdx
  struct _KPRCB *v15; // rcx

  v3 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = (volatile LONG *)(a1 + 64);
  v8 = 0LL;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v9 = *(_DWORD *)(a1 + 624);
  v10 = v9 + ((*(_DWORD *)(a1 + 440) >> 3) & 1);
  if ( v10 )
  {
    if ( a2 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 440), 3u);
      v8 = KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 72);
    }
    else
    {
      *(_DWORD *)(a1 + 624) = v9 - 1;
    }
  }
  if ( a2 && (*(_DWORD *)(a1 + 440) & 0x10) != 0 )
  {
    for ( i = *v3; i != v3; i = (_QWORD *)*i )
      *(i - 64) += v8;
  }
  if ( v10 == 1 )
  {
    for ( j = *v3; j != v3; j = (_QWORD *)*j )
    {
      v13 = j - 95;
      if ( a2 || (*((_DWORD *)v13 + 29) & 0x200000) == 0 )
        KiThawSingleThread(CurrentPrcb, v13, 0LL);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
    return 1LL;
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v15 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v15);
    }
    __writecr8(CurrentIrql);
    return v10;
  }
}
