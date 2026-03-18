/*
 * XREFs of KeDeleteThread @ 0x1400E3698
 * Callers:
 *     PspReaper @ 0x1400E3500 (PspReaper.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiDecrementProcessStackCount @ 0x1400909F0 (KiDecrementProcessStackCount.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiWaitForContextSwap @ 0x1400E3744 (KiWaitForContextSwap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeDeleteThread(__int64 *a1)
{
  __int64 result; // rax
  __int64 *v3; // rdi
  KIRQL v4; // al
  __int64 v5; // rcx
  KIRQL v6; // si
  __int64 **v7; // rdx
  struct _KPRCB *CurrentPrcb; // rcx

  KiWaitForContextSwap(a1);
  result = KiDecrementProcessStackCount(a1[23]);
  v3 = a1 + 179;
  if ( a1[179] != 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&qword_14044DC58);
    v5 = *v3;
    v6 = v4;
    if ( *v3 != 1 && a1[180] )
    {
      v7 = (__int64 **)a1[180];
      if ( *(__int64 **)(v5 + 8) != v3 || *v7 != v3 )
        __fastfail(3u);
      *v7 = (__int64 *)v5;
      *(_QWORD *)(v5 + 8) = v7;
    }
    KxReleaseSpinLock(&qword_14044DC58);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v6;
    __writecr8(v6);
  }
  return result;
}
