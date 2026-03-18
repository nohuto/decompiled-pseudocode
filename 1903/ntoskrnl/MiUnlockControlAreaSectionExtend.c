/*
 * XREFs of MiUnlockControlAreaSectionExtend @ 0x1400EACB0
 * Callers:
 *     MmExtendSection @ 0x14069C8C0 (MmExtendSection.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiBuildWakeList @ 0x1400743CC (MiBuildWakeList.c)
 *     KeSignalGate @ 0x1401309D0 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
