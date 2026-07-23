/*
 * XREFs of RtlpHpReleaseQueuedLockExclusive @ 0x1400616F0
 * Callers:
 *     RtlpHpVsContextMultiAlloc @ 0x14005F744 (RtlpHpVsContextMultiAlloc.c)
 *     RtlpHpVsContextAllocateInternal @ 0x140061BE0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x1400620A0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x140062F20 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextFreeList @ 0x14010B3A0 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsContextFreeInternal @ 0x14010B42C (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsChunkDecommit @ 0x14010B63C (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsContextAllocate @ 0x140111370 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033B218 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpReleaseQueuedLockExclusive(int a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int8 v4; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int SessionId; // r8d
  unsigned __int8 v10; // r12
  unsigned int v11; // edx
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  _KLOCK_ENTRY *v16; // r14
  __int64 v17; // rdx
  int v18; // eax
  struct _KPRCB *v19; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+70h] [rbp+18h]

  v2 = *(_QWORD *)(a2 + 8);
  if ( a1 )
  {
    v4 = *(_BYTE *)(a2 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    else
      *(_DWORD *)v2 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = SchedulerAssist[5] - 1;
        SchedulerAssist[5] = v18;
        if ( !v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      v19 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v19);
    }
    result = v4;
    __writecr8(v4);
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    v21 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v10 = ++CurrentThread->AbAllocationRegionCount;
    v11 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v12 = !_BitScanReverse((unsigned int *)&v13, v11);
    v22 = v13;
    if ( v12 )
      goto LABEL_28;
    while ( 1 )
    {
      v14 = 1 << v13;
      v15 = v13;
      v16 = &CurrentThread->LockEntries[v15];
      v11 &= ~v14;
      if ( (v16->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v16->LockState.0 & 1) == 0
        && (*(_QWORD *)&v16->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
        && v16->LockState.SessionId == SessionId )
      {
        v16->AcquiredByte &= ~1u;
        if ( v16->LockState.0 )
          break;
      }
      v12 = !_BitScanReverse((unsigned int *)&v13, v11);
      v22 = v13;
      if ( v12 )
        goto LABEL_28;
    }
    if ( !v16 )
    {
LABEL_28:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
    }
    else
    {
      v16->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v16->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v15].TreeNode);
      v21 = v16->BoostBitmap.AllFields & 0x1FFFF;
      v16->BoostBitmap.AllFields &= 0xFFFE0000;
      v16->ThreadLocalFlags &= ~1u;
      v16->LockState.0 = 0LL;
      v17 = ((char *)v16 - (char *)CurrentThread - 800) / 96;
      if ( v10 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v17;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v17);
    }
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, &v21);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  return result;
}
