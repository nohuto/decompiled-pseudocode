/*
 * XREFs of MiDecrementModifiedWriteCount @ 0x140022DA0
 * Callers:
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiTrimSharedPage @ 0x1400E97F0 (MiTrimSharedPage.c)
 *     MiReleasePageFileSectionInfo @ 0x140157D9C (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSubsection @ 0x1402A1C08 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1402A246C (MiFlushControlArea.c)
 *     MiFlushComplete @ 0x1402B4B40 (MiFlushComplete.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402B6810 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     MiBuildWakeList @ 0x14001E4A8 (MiBuildWakeList.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
