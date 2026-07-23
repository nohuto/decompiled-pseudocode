/*
 * XREFs of MiSetSubsectionBase @ 0x1401390C0
 * Callers:
 *     MiExtendSection @ 0x14061D4C8 (MiExtendSection.c)
 *     MiAllocateFileExtents @ 0x140853410 (MiAllocateFileExtents.c)
 * Callees:
 *     MiIncrementSubsectionViewCount @ 0x140077A40 (MiIncrementSubsectionViewCount.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetSubsectionBase(__int64 *BugCheckParameter2, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  ULONG_PTR v7; // r14
  volatile LONG *v8; // r15
  KIRQL v9; // bp
  int v10; // eax
  int v11; // eax
  __int64 result; // rax
  unsigned int v13; // eax
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = *BugCheckParameter2;
  v7 = 0LL;
  v8 = (volatile LONG *)(*BugCheckParameter2 + 72);
  v9 = ExAcquireSpinLockExclusive(v8);
  if ( (*(_DWORD *)(v3 + 56) & 0x20) == 0 )
  {
    v7 = (ULONG_PTR)BugCheckParameter2;
    MiIncrementSubsectionViewCount(BugCheckParameter2, 0LL);
  }
  v10 = *((_DWORD *)BugCheckParameter2 + 12);
  *((_WORD *)BugCheckParameter2 + 16) |= 1u;
  v11 = v10 & 0x3FFFFFFF;
  BugCheckParameter2[1] = a2;
  *((_DWORD *)BugCheckParameter2 + 12) = v11;
  if ( v7 && a3 <= 1 )
  {
    if ( a3 == 1 )
      v13 = v11 | 0x40000000;
    else
      v13 = v11 | 0x80000000;
    *((_DWORD *)BugCheckParameter2 + 12) = v13;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v9;
  __writecr8(v9);
  return result;
}
