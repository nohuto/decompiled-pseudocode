/*
 * XREFs of MiUpdateActiveSubsection @ 0x1402B4908
 * Callers:
 *     MmExtendSection @ 0x14061D8CC (MmExtendSection.c)
 * Callees:
 *     MiReferenceSubsection @ 0x1400770D4 (MiReferenceSubsection.c)
 *     MiDecrementSubsections @ 0x140079400 (MiDecrementSubsections.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiAllocateFileExtents @ 0x140853410 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiUpdateActiveSubsection(_QWORD *BugCheckParameter2)
{
  unsigned int v1; // ebx
  ULONG_PTR v2; // rdi
  int FileExtents; // r15d
  __int64 v4; // r12
  volatile LONG *v5; // rbp
  KIRQL v6; // si
  int v7; // r13d
  struct _KPRCB *CurrentPrcb; // rcx
  BOOL v9; // r14d
  struct _KPRCB *v10; // rcx
  struct _KPRCB *v12; // rcx
  __int64 v13; // [rsp+60h] [rbp+8h]

  v1 = 0;
  v2 = (ULONG_PTR)BugCheckParameter2;
  v13 = *BugCheckParameter2;
  FileExtents = 0;
  v4 = 0LL;
  v5 = (volatile LONG *)(*BugCheckParameter2 + 72LL);
  v6 = ExAcquireSpinLockExclusive(v5);
  while ( 1 )
  {
    if ( !*(_QWORD *)(v2 + 8) || (*(_DWORD *)(v2 + 52) & 0x40000000) == 0 )
      goto LABEL_22;
    if ( (int)MiReferenceSubsection(v2) < 2 )
      break;
    v7 = *(_DWORD *)(v2 + 44) - (*(_DWORD *)(v2 + 52) & 0x3FFFFFFF);
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v6);
    FileExtents = MiAllocateFileExtents(v2, 0);
    v9 = 0;
    v6 = ExAcquireSpinLockExclusive(v5);
    if ( FileExtents >= 0 )
      v9 = v7 != *(_DWORD *)(v2 + 44) - (*(_DWORD *)(v2 + 52) & 0x3FFFFFFF);
    v4 += MiDecrementSubsections(v2, v2, 0);
    if ( v9 )
      goto LABEL_23;
    if ( FileExtents < 0 )
      goto LABEL_14;
LABEL_22:
    v2 = *(_QWORD *)(v2 + 16);
LABEL_23:
    if ( !v2 )
    {
LABEL_14:
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
      {
        v10 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v10);
      }
      __writecr8(v6);
      if ( v4 )
      {
        LOBYTE(v1) = *(_QWORD *)(v13 + 64) != 0LL;
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(v13 + 60) & 0x3FF)),
          v1,
          v4);
      }
      return (unsigned int)FileExtents;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    v12 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v12);
  }
  __writecr8(v6);
  return 0LL;
}
