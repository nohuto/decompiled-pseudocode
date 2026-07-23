/*
 * XREFs of MiInsertSlabEntry @ 0x1402DC654
 * Callers:
 *     MiReplenishSlabAllocator @ 0x1402DCC24 (MiReplenishSlabAllocator.c)
 *     MiCreateBootSlabEntries @ 0x140A3C9F0 (MiCreateBootSlabEntries.c)
 *     MmUpdateSlabRangeProtection @ 0x140A3CE28 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x140064630 (RtlRbInsertNodeEx.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCompareSlabEntry @ 0x1402DB604 (MiCompareSlabEntry.c)
 */

__int64 __fastcall MiInsertSlabEntry(__int64 a1, __int64 a2, __int64 a3)
{
  KIRQL v6; // r14
  signed __int64 v7; // rbx
  BOOLEAN v8; // r8
  int v9; // ebp
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 16));
  v7 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v7 )
    v7 ^= a2;
  v8 = 0;
  v9 = *(_BYTE *)(a2 + 8) & 1;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( (int)MiCompareSlabEntry((_QWORD *)(a3 + 24), v7) < 0 )
      {
        v10 = *(_QWORD *)v7;
        if ( v9 )
        {
          if ( !v10 )
            goto LABEL_16;
          v10 ^= v7;
        }
        if ( !v10 )
        {
LABEL_16:
          v8 = 0;
          break;
        }
      }
      else
      {
        v10 = *(_QWORD *)(v7 + 8);
        if ( v9 )
        {
          if ( !v10 )
            goto LABEL_10;
          v10 ^= v7;
        }
        if ( !v10 )
        {
LABEL_10:
          v8 = 1;
          break;
        }
      }
      v7 = v10;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)a2, (PRTL_BALANCED_NODE)v7, v8, (PRTL_BALANCED_NODE)a3);
  v11 = *(_QWORD *)(a2 + 24);
  if ( !v11 || (v12 = *(_DWORD *)(a3 + 132), *(_DWORD *)(v11 + 132) > v12) && v12 )
    *(_QWORD *)(a2 + 24) = a3;
  *(_QWORD *)(a2 + 32) += *(unsigned int *)(a3 + 132);
  ++*(_QWORD *)(a2 + 40);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8592), 0x200uLL);
  if ( *(_DWORD *)(a3 + 132) == 512 )
  {
    *(_QWORD *)(a2 + 104) = KiQueryUnbiasedInterruptTime();
    *(_DWORD *)(a2 + 56) |= 1u;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v6;
  __writecr8(v6);
  return result;
}
