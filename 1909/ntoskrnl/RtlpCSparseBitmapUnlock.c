/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x14010F18C
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x14010E3EC (RtlpCSparseBitmapPageDecommit.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x14010E7C8 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x14010F094 (RtlSparseArrayElementAllocate.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14010F3D8 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpCSparseBitmapUnlock(int *a1)
{
  __int64 v1; // rax
  int v2; // edx
  unsigned __int64 v3; // rdi
  unsigned __int8 v4; // bl
  volatile LONG *v5; // rcx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v9; // r14
  unsigned int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  _KLOCK_ENTRY *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v19; // [rsp+60h] [rbp+8h] BYREF
  int v20; // [rsp+68h] [rbp+10h]

  v1 = *((_QWORD *)a1 + 1);
  v2 = *a1;
  v3 = v1 + 24;
  if ( *(_BYTE *)(v1 + 48) )
  {
    v4 = *((_BYTE *)a1 + 4);
    v5 = (volatile LONG *)(v1 + 24);
    if ( v2 == 1 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    else
      ExReleaseSpinLockSharedFromDpcLevel(v5);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v4;
    __writecr8(v4);
  }
  else
  {
    if ( v2 == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v3);
      v19 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v9 = ++CurrentThread->AbAllocationRegionCount;
      v10 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v11 = !_BitScanReverse((unsigned int *)&v12, v10);
        v20 = v12;
        if ( v11 )
          break;
        v13 = 1 << v12;
        v14 = v12;
        v15 = &CurrentThread->LockEntries[v14];
        v10 &= ~v13;
        if ( (v15->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v15->LockState.0 & 1) == 0
          && (*(_QWORD *)&v15->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
          && v15->LockState.SessionId == SessionId )
        {
          v15->AcquiredByte &= ~1u;
          if ( v15->LockState.0 )
          {
            if ( v15 )
            {
              v15->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v15->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v14].TreeNode);
              v19 = v15->BoostBitmap.AllFields & 0x1FFFF;
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
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, SessionId, 0LL);
LABEL_28:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v3, &v19);
      v11 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v11
        && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v17);
      }
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v3);
      KeAbPostRelease(v3);
    }
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
