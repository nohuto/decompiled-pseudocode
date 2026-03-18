/*
 * XREFs of MiDecrementModifiedWriteCount @ 0x1400BF958
 * Callers:
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiTrimSharedPage @ 0x14012F104 (MiTrimSharedPage.c)
 *     MiReleasePageFileSectionInfo @ 0x1401633D0 (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSubsection @ 0x1402B8BA0 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1402B9410 (MiFlushControlArea.c)
 *     MiFlushComplete @ 0x1402C9DA0 (MiFlushComplete.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402CC5E4 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiBuildWakeList @ 0x14007463C (MiBuildWakeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 *__fastcall MiDecrementModifiedWriteCount(__int64 a1, int a2)
{
  volatile LONG *v2; // rdi
  KIRQL v4; // bl
  __int64 *v5; // rsi
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = (volatile LONG *)(a1 + 72);
  if ( a2 == 1 )
    v4 = 17;
  else
    v4 = ExAcquireSpinLockExclusive(v2);
  --*(_DWORD *)(a1 + 76);
  v5 = MiBuildWakeList(a1, 8);
  if ( v4 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v4);
  }
  return v5;
}
