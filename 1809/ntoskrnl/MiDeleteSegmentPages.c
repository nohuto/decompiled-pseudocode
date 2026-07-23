/*
 * XREFs of MiDeleteSegmentPages @ 0x140094D78
 * Callers:
 *     MiSegmentDelete @ 0x14061F928 (MiSegmentDelete.c)
 *     MiCopyDirectMapHeader @ 0x140853E04 (MiCopyDirectMapHeader.c)
 *     MiInitializeImageExtents @ 0x140854124 (MiInitializeImageExtents.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiDeleteSubsectionPages @ 0x140094EC0 (MiDeleteSubsectionPages.c)
 *     MiGetCommittedPages @ 0x1400957D4 (MiGetCommittedPages.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDeleteSegmentPages(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v3; // r15
  __int64 v4; // rbp
  int v5; // ebx
  __int64 v6; // rax
  KIRQL v7; // di
  unsigned __int64 CommittedPages; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v13; // rcx

  v1 = a1 + 128;
  v3 = 0LL;
  v4 = *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  while ( v1 )
  {
    v6 = MiDeleteSubsectionPages(v1);
    v1 = *(_QWORD *)(v1 + 16);
    v3 += v6;
  }
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  while ( *(_QWORD *)(a1 + 32) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v7);
    _mm_pause();
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    v13 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v13);
  }
  __writecr8(v7);
  CommittedPages = MiGetCommittedPages(a1);
  v9 = CommittedPages;
  if ( CommittedPages )
  {
    v10 = CommittedPages;
    MiReturnCommit(v4, CommittedPages);
    if ( (v5 & 0x1000) != 0 )
    {
      if ( (ULONG_PTR *)v4 == &MiSystemPartition )
        MiReturnResidentAvailable(v10);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 7360), v10);
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 7816), -(__int64)v9);
  }
  return v3;
}
