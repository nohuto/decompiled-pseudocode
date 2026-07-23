/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x14010E1B0
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x1400BADE0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1400BED70 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400BC3E0 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x14010E7A0 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x14010E88C (RtlpHpLfhSubsegmentSetOwner.c)
 *     RtlpHpLfhSubsegmentFree @ 0x14010E8B0 (RtlpHpLfhSubsegmentFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  unsigned int v5; // r12d
  __int64 v8; // rbx
  KIRQL v10; // si
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int SessionId; // r8d
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  _KLOCK_ENTRY *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  BOOL v22; // [rsp+30h] [rbp-48h]
  int v23; // [rsp+88h] [rbp+10h] BYREF
  int v24; // [rsp+90h] [rbp+18h]

  result = *(unsigned __int16 *)(a3 + 34);
  v5 = 0;
  v8 = a3;
  if ( *(_WORD *)(a3 + 32) != (_WORD)result )
  {
    v10 = RtlpHpAcquireLockExclusive((volatile LONG *)(a2 + 16), *(unsigned __int8 *)(a1 + 57));
    RtlpHpLfhSubsegmentSetOwner(v8, a2);
    if ( *(_WORD *)(v8 + 32) == *(_WORD *)(v8 + 34) )
      *(_QWORD *)(v8 + 16) = 0LL;
    else
      v8 = RtlpHpLfhOwnerMoveSubsegment(a2, v8, 0LL);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      result = v10;
      __writecr8(v10);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 16));
      v23 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a2 + 16) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v22 = ++CurrentThread->AbAllocationRegionCount == 1;
      LODWORD(v13) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      v14 = !_BitScanReverse((unsigned int *)&v15, v13);
      v24 = v15;
      if ( v14 )
        goto LABEL_33;
      while ( 1 )
      {
        v16 = 1 << v15;
        v17 = v15;
        v18 = &CurrentThread->LockEntries[v17];
        v13 = ~v16 & (unsigned int)v13;
        if ( (v18->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v18->LockState.0 & 1) == 0
          && (*(_QWORD *)&v18->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a2 + 16) & 0x7FFFFFFFFFFFFFFCLL)
          && v18->LockState.SessionId == SessionId )
        {
          v18->AcquiredByte &= ~1u;
          if ( v18->LockState.0 )
            break;
        }
        v14 = !_BitScanReverse((unsigned int *)&v15, v13);
        v24 = v15;
        if ( v14 )
          goto LABEL_33;
      }
      if ( !v18 )
      {
LABEL_33:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a2 + 16, SessionId, 0LL);
      }
      else
      {
        v18->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v18->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v17].TreeNode, v13);
        v23 = 0;
        v23 = v18->BoostBitmap.AllFields & 0x1FFFF;
        v18->BoostBitmap.AllFields &= 0xFFFE0000;
        v18->ThreadLocalFlags &= ~1u;
        v18->LockState.0 = 0LL;
        v19 = ((char *)v18 - (char *)CurrentThread - 800) / 96;
        if ( v22 )
          CurrentThread->AbEntrySummary |= 1 << v19;
        else
          _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v19);
      }
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a2 + 16, (__int64)&v23);
      v14 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v14
        && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v20);
      }
      result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  if ( v8 )
  {
    if ( (a4 & 1) != 0 )
      v5 = 1;
    return RtlpHpLfhSubsegmentFree(a1, v8, a2, v5);
  }
  return result;
}
