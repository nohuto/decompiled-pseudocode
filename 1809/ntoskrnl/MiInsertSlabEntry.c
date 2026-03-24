/*
 * XREFs of MiInsertSlabEntry @ 0x1402C2AA4
 * Callers:
 *     MiReplenishSlabAllocator @ 0x1402C2CB4 (MiReplenishSlabAllocator.c)
 *     MiCreateSlabEntriesFromLoaderSlab @ 0x1409F745C (MiCreateSlabEntriesFromLoaderSlab.c)
 *     MmUpdateSlabRangeProtection @ 0x1409F75B8 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008CF10 (KiQueryUnbiasedInterruptTime.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC660 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1400BD6B0 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCompareSlabEntry @ 0x1402C1F64 (MiCompareSlabEntry.c)
 */

__int64 __fastcall MiInsertSlabEntry(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  KIRQL v6; // al
  __int64 v7; // rdx
  KIRQL v8; // r14
  unsigned __int64 v9; // rbx
  bool v10; // r8
  int v11; // ebp
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 16));
  v7 = *(_QWORD *)(a2 + 8);
  v8 = v6;
  v9 = *(_QWORD *)a2;
  if ( (v7 & 1) != 0 && v9 )
    v9 ^= a2;
  v10 = 0;
  v11 = v7 & 1;
  if ( v9 )
  {
    while ( 1 )
    {
      if ( (int)MiCompareSlabEntry((_QWORD *)(a3 + 24), v9) < 0 )
      {
        v12 = *(_QWORD *)v9;
        if ( v11 )
        {
          if ( !v12 )
            goto LABEL_16;
          v12 ^= v9;
        }
        if ( !v12 )
        {
LABEL_16:
          v10 = 0;
          break;
        }
      }
      else
      {
        v12 = *(_QWORD *)(v9 + 8);
        if ( v11 )
        {
          if ( !v12 )
            goto LABEL_10;
          v12 ^= v9;
        }
        if ( !v12 )
        {
LABEL_10:
          v10 = 1;
          break;
        }
      }
      v9 = v12;
    }
  }
  RtlRbInsertNodeEx(a2, v9, v10, (_QWORD *)a3);
  v13 = *(_QWORD *)(a2 + 24);
  if ( !v13 || (v14 = *(_DWORD *)(a3 + 120), *(_DWORD *)(v13 + 120) > v14) && v14 )
    *(_QWORD *)(a2 + 24) = a3;
  *(_QWORD *)(a2 + 32) += *(unsigned int *)(a3 + 120);
  ++*(_QWORD *)(a2 + 40);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7824), 0x200uLL);
  if ( *(_DWORD *)(a3 + 120) == 512 )
  {
    *(_QWORD *)(a2 + 56) = KiQueryUnbiasedInterruptTime();
    *(_DWORD *)(a2 + 52) |= 1u;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v8;
  __writecr8(v8);
  return result;
}
