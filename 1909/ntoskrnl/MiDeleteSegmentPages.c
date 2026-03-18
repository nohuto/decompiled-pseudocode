/*
 * XREFs of MiDeleteSegmentPages @ 0x1400BF0E4
 * Callers:
 *     MiSegmentDelete @ 0x14064E778 (MiSegmentDelete.c)
 *     MiInitializeImageExtents @ 0x14088C1E0 (MiInitializeImageExtents.c)
 * Callees:
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetCommittedPages @ 0x1400716F8 (MiGetCommittedPages.c)
 *     MiDeleteSubsectionPages @ 0x1400BC810 (MiDeleteSubsectionPages.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDeleteSegmentPages(_QWORD *a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rdx
  __int64 v4; // r15
  __int64 v5; // rbp
  int v6; // ebx
  __int64 v7; // rax
  KIRQL v8; // di
  __int64 CommittedPages; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v14; // rcx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1 + 16;
  v2 = *((_WORD *)a1 + 30) & 0x3FF;
  v15 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(qword_140465E88 + 8 * v2);
  v6 = *(_DWORD *)(*a1 + 12LL);
  while ( v1 )
  {
    v7 = MiDeleteSubsectionPages(v1, &v15);
    v1 = (__int64 *)v1[2];
    v4 += v7;
  }
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1 + 18);
  while ( a1[4] )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)a1 + 18);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v8);
    _mm_pause();
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1 + 18);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)a1 + 18);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    v14 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v14);
  }
  __writecr8(v8);
  CommittedPages = MiGetCommittedPages(a1);
  v10 = CommittedPages;
  if ( CommittedPages )
  {
    v11 = CommittedPages - v15;
    MiReturnCommit(v5, CommittedPages - v15);
    if ( (v6 & 0x1000) != 0 )
    {
      if ( (ULONG_PTR *)v5 == &MiSystemPartition )
        MiReturnResidentAvailable(v11);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 8128), v11);
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 8584), -v10);
  }
  return v4;
}
