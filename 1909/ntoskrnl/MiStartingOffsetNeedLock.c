/*
 * XREFs of MiStartingOffsetNeedLock @ 0x1400B8B88
 * Callers:
 *     MiPfPrepareReadList @ 0x14064E070 (MiPfPrepareReadList.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiStartingOffset @ 0x1400B8AD0 (MiStartingOffset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiStartingOffsetNeedLock(__int64 *a1, unsigned int a2)
{
  __int64 v2; // r8
  KIRQL v5; // bl
  volatile LONG *v6; // rdi
  unsigned __int64 v7; // rsi
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = *a1;
  if ( (*(_DWORD *)(*a1 + 56) & 0x20) != 0 || !*(_QWORD *)(v2 + 64) )
  {
    v5 = 17;
    v6 = (volatile LONG *)(v2 + 72);
  }
  else
  {
    v6 = (volatile LONG *)(v2 + 72);
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v2 + 72));
  }
  v7 = MiStartingOffset(a1, a1[1], a2);
  if ( v5 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(v6);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v5);
  }
  return v7;
}
