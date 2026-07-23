/*
 * XREFs of MiUpdateLastSubsectionSize @ 0x140134568
 * Callers:
 *     MmExtendSection @ 0x14061D8CC (MmExtendSection.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x140093804 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetSubsectionCharges @ 0x1402C4C84 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiUpdateLastSubsectionSize(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _WORD *v3; // r15
  int v4; // ebx
  __int64 v5; // rbp
  volatile LONG *v8; // r14
  KIRQL v9; // si
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  __int16 v11; // dx
  __int64 v12; // r10
  __int16 v13; // r9
  __int64 v14; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v17; // rcx

  v3 = *(_WORD **)a1;
  v4 = 0;
  v5 = a3;
  v8 = (volatile LONG *)(*(_QWORD *)a1 + 72LL);
  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(v8);
    if ( !(_DWORD)v5 )
      break;
    SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(a1);
    if ( (*(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF) == 0 )
    {
      if ( v4 == 1 )
        v4 = 2;
LABEL_6:
      *(_DWORD *)(a1 + 52) ^= (*(_DWORD *)(a1 + 52) ^ (*(_DWORD *)(a1 + 52) - v5)) & 0x3FFFFFFF;
      break;
    }
    if ( v4 )
      goto LABEL_6;
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v9);
    result = MiGetSubsectionCharges(a1, v5);
    if ( (int)result < 0 )
      return result;
    v4 = 1;
  }
  v11 = *(_WORD *)(a1 + 34);
  *(_DWORD *)(a1 + 40) = (*a2 >> 12) - (*(_DWORD *)(a1 + 36) | ((*(_WORD *)(a1 + 32) & 0xFFC0) << 26));
  *(_WORD *)(a1 + 34) = (16 * *(_WORD *)a2) | v11 & 0xF;
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v17);
  }
  __writecr8(v9);
  if ( (_DWORD)v5 )
  {
    v12 = *(_QWORD *)v3;
    _InterlockedExchange64(
      (volatile __int64 *)(*(_QWORD *)v3 + 24LL),
      _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v3 + 24LL), -1LL, -1LL) + (v5 << 12));
    v13 = *(_WORD *)(v12 + 12);
    v14 = *(unsigned int *)(v12 + 8);
    *(_DWORD *)(v12 + 8) = v5 + v14;
    *(_WORD *)(v12 + 12) = v13 ^ (v13 ^ ((v5 + (v14 | ((unsigned __int64)(v13 & 0x3FF) << 32))) >> 32)) & 0x3FF;
    if ( v4 == 2 )
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_14043B808 + 8LL * (v3[30] & 0x3FF)), 1LL, v5);
  }
  return 0LL;
}
