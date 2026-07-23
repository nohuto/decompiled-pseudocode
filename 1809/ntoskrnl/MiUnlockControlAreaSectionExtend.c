/*
 * XREFs of MiUnlockControlAreaSectionExtend @ 0x140092B68
 * Callers:
 *     MmExtendSection @ 0x14061D8CC (MmExtendSection.c)
 * Callees:
 *     MiBuildWakeList @ 0x14001E4A8 (MiBuildWakeList.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiUnlockControlAreaSectionExtend(ULONG_PTR a1, __int64 a2)
{
  int v2; // r14d
  KIRQL v5; // si
  __int64 *v6; // rax
  volatile LONG *v7; // rcx
  __int64 *v8; // rdi
  __int64 *v9; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = *(_DWORD *)(a2 + 8);
  KeAbPostRelease(a1);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = MiBuildWakeList(a1, *(_DWORD *)(a2 + 8));
  v7 = (volatile LONG *)(a1 + 72);
  v8 = v6;
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v5);
  if ( v8 )
  {
    do
    {
      v9 = (__int64 *)*v8;
      if ( v8 != (__int64 *)a2 )
        KeSignalGate(v8 + 2, 1LL);
      v8 = v9;
    }
    while ( v9 );
  }
  CurrentThread = KeGetCurrentThread();
  if ( v2 == 16 )
    return (_QWORD *)KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  else
    return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
