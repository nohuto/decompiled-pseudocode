/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x14000A7A0
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x140008938 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlSparseArrayElementAllocate @ 0x14000A4E8 (RtlSparseArrayElementAllocate.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x14000A690 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14000A9E4 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpCSparseBitmapUnlock(int *a1)
{
  __int64 v1; // rax
  int v2; // edx
  ULONG_PTR v3; // rdi
  unsigned __int8 v4; // bl
  volatile LONG *v5; // rcx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v9; // r14
  unsigned int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  _KLOCK_ENTRY *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+68h] [rbp+10h]

  v1 = *((_QWORD *)a1 + 1);
  v2 = *a1;
  v3 = v1 + 32;
  if ( *(_BYTE *)(v1 + 56) )
  {
    v4 = *((_BYTE *)a1 + 4);
    v5 = (volatile LONG *)(v1 + 32);
    if ( v2 == 1 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    else
      ExReleaseSpinLockSharedFromDpcLevel(v5);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick();
    }
    result = v4;
    __writecr8(v4);
  }
  else
  {
    if ( v2 == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v3);
      v18 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --CurrentThread->SpecialApcDisable;
      v9 = ++CurrentThread->AbAllocationRegionCount;
      v10 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v11 = !_BitScanReverse((unsigned int *)&v12, v10);
        v19 = v12;
        if ( v11 )
          break;
        v13 = 1 << v12;
        v14 = v12;
        v15 = &CurrentThread->LockEntries[v14];
        v10 &= ~v13;
        if ( (v15->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v15->LockState.0 & 1) == 0
          && (*(_QWORD *)&v15->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
          && v15->LockState.SessionId == (_DWORD)SessionId )
        {
          v15->AcquiredByte &= ~1u;
          if ( v15->LockState.0 )
          {
            if ( v15 )
            {
              v15->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v15->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v14].TreeNode, SessionId);
              v18 = 0;
              v18 = v15->BoostBitmap.AllFields & 0x1FFFF;
              v15->BoostBitmap.AllFields &= 0xFFFE0000;
              v15->ThreadLocalFlags &= ~1u;
              v15->LockState.0 = 0LL;
              v16 = ((char *)v15 - (char *)CurrentThread - 800) / 96;
              if ( v9 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v16;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v16);
              goto LABEL_28;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, (unsigned int)SessionId, 0LL);
LABEL_28:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(CurrentThread, v3, &v18);
      v11 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v11
        && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v17);
      }
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v3);
      KeAbPostRelease(v3);
    }
    return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  return result;
}
