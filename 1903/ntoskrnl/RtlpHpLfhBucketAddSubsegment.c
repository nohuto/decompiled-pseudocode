/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x14012044C
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x14001D800 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSlotAllocate @ 0x140038A80 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14001F3C0 (RtlpHpAcquireLockExclusive.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x140120770 (RtlpHpLfhSubsegmentSetOwner.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x140120794 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentFree @ 0x140120884 (RtlpHpLfhSubsegmentFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v6; // rsi
  volatile signed __int64 *v9; // rbp
  KIRQL v10; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v14; // r13
  unsigned int v15; // r8d
  bool v16; // zf
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  _KLOCK_ENTRY *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // [rsp+78h] [rbp+10h] BYREF
  int v24; // [rsp+80h] [rbp+18h]

  result = *(unsigned __int16 *)(a3 + 34);
  v6 = a3;
  if ( *(_WORD *)(a3 + 32) != (_WORD)result )
  {
    v9 = (volatile signed __int64 *)(a2 + 16);
    v10 = RtlpHpAcquireLockExclusive((volatile LONG *)(a2 + 16), *(unsigned __int8 *)(a1 + 57));
    RtlpHpLfhSubsegmentSetOwner(v6, a2);
    if ( *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34) )
      *(_QWORD *)(v6 + 16) = 0LL;
    else
      v6 = RtlpHpLfhOwnerMoveSubsegment(a2, v6, 0LL);
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
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 16));
      v23 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a2 + 16) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v14 = ++CurrentThread->AbAllocationRegionCount;
      v15 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v16 = !_BitScanReverse((unsigned int *)&v17, v15);
        v24 = v17;
        if ( v16 )
          break;
        v18 = 1 << v17;
        v19 = v17;
        v20 = &CurrentThread->LockEntries[v19];
        v15 &= ~v18;
        if ( (v20->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v20->LockState.0 & 1) == 0
          && (*(_QWORD *)&v20->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL)
          && v20->LockState.SessionId == SessionId )
        {
          v20->AcquiredByte &= ~1u;
          if ( v20->LockState.0 )
          {
            if ( v20 )
            {
              v20->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v20->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v19].TreeNode);
              v23 = v20->BoostBitmap.AllFields & 0x1FFFF;
              v20->BoostBitmap.AllFields &= 0xFFFE0000;
              v20->ThreadLocalFlags &= ~1u;
              v20->LockState.0 = 0LL;
              v21 = ((char *)v20 - (char *)CurrentThread - 800) / 96;
              if ( v14 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v21;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v21);
              goto LABEL_31;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a2 + 16, SessionId, 0LL);
LABEL_31:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a2 + 16, &v23);
      v16 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v16
        && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v22);
      }
      result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  if ( v6 )
    return RtlpHpLfhSubsegmentFree(a1, v6, a2, a4 & 1);
  return result;
}
