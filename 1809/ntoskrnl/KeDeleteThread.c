/*
 * XREFs of KeDeleteThread @ 0x14013D3A4
 * Callers:
 *     PspReaper @ 0x14013D220 (PspReaper.c)
 * Callees:
 *     KiDecrementProcessStackCount @ 0x1400174F0 (KiDecrementProcessStackCount.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiWaitForContextSwap @ 0x14013D450 (KiWaitForContextSwap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
    v4 = KeAcquireSpinLockRaiseToDpc(&qword_140421F98);
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
    KxReleaseSpinLock(&qword_140421F98);
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
