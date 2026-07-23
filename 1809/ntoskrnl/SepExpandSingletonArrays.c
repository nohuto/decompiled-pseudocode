/*
 * XREFs of SepExpandSingletonArrays @ 0x14013B6AC
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x14065016C (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 SepExpandSingletonArrays()
{
  PVOID PoolWithTag; // rax
  void *v1; // rsi
  KIRQL v2; // di
  _QWORD *v3; // rax
  _QWORD *v4; // r14
  PEX_SPIN_LOCK v5; // rbx
  PEX_SPIN_LOCK v6; // rcx
  void *v7; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v10; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x600uLL, 0x74446553u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 0x600uLL);
  v2 = ExAcquireSpinLockExclusive(SepSingletonGlobal);
  v3 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(*((_DWORD *)SepSingletonGlobal + 1) + 1), 0x74446553u);
  v4 = v3;
  if ( !v3 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SepSingletonGlobal);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v2);
    ExFreePoolWithTag(v1, 0x74446553u);
    return 3221225495LL;
  }
  v5 = SepSingletonGlobal;
  memmove(v3, *((const void **)SepSingletonGlobal + 1), 8LL * *((unsigned int *)SepSingletonGlobal + 1));
  v4[*((unsigned int *)v5 + 1)] = v1;
  v6 = SepSingletonGlobal;
  v7 = (void *)*((_QWORD *)SepSingletonGlobal + 1);
  ++*((_DWORD *)SepSingletonGlobal + 1);
  *((_QWORD *)v6 + 1) = v4;
  ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    v10 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v10);
  }
  __writecr8(v2);
  ExFreePoolWithTag(v7, 0x74446553u);
  return 0LL;
}
