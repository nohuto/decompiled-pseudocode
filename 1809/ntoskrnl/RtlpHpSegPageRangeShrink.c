/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x14000ACF0
 * Callers:
 *     RtlpHpSegFree @ 0x140007CDC (RtlpHpSegFree.c)
 *     RtlpHpSegAlloc @ 0x14000B118 (RtlpHpSegAlloc.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpSegLockAcquire @ 0x14000B57C (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14000B704 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14000B82C (RtlpHpSegPageRangeCoalesce.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpSegSegmentFree @ 0x1401547C4 (RtlpHpSegSegmentFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  int v4; // ebp
  char v8; // al
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // r14
  struct _KTHREAD *CurrentThread; // rsi
  __int64 SessionId; // rdx
  BOOL v15; // r15d
  unsigned int v16; // r8d
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _KLOCK_ENTRY *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  char *v24; // rax
  __int64 v25; // r9
  char v26; // cl
  __int64 v27; // rcx
  int v28; // [rsp+88h] [rbp+10h] BYREF
  int v29; // [rsp+90h] [rbp+18h] BYREF

  v29 = a3;
  v4 = *(unsigned __int8 *)(a2 + 31);
  if ( (unsigned int)(v4 - 1) > 1 )
  {
    v24 = (char *)(a2 + 56);
    v25 = (unsigned int)(v4 - 2);
    do
    {
      v26 = *v24;
      v24 += 32;
      *(v24 - 32) = v26 & 0xFE;
      --v25;
    }
    while ( v25 );
  }
  v8 = RtlpHpSegLockAcquire(a1, a4);
  v9 = *(_DWORD *)(a2 + 28);
  LOBYTE(v29) = v8;
  if ( HIBYTE(v9) != v4 )
  {
    *(_BYTE *)(a2 + 31) = 0;
    *(_WORD *)(a2 + 28) = -1;
  }
  *(_BYTE *)(a2 + 24) |= 2u;
  *(_BYTE *)(32LL * (unsigned int)(v4 - 1) + a2 + 31) = v4 - 1;
  *(_WORD *)(a2 + 28) = v9;
  *(_BYTE *)(a2 + 31) = v4;
  *(_DWORD *)a2 = -857879331;
  *(_BYTE *)(a2 + 24) &= 0xF3u;
  v10 = RtlpHpSegPageRangeCoalesce(a1, (__int64)&v29);
  result = RtlpHpSegFreeRangeInsert(a1, v10, 0LL);
  v12 = result;
  if ( result )
  {
    v27 = *(_QWORD *)result;
    result = *(_QWORD *)(result + 8);
    if ( *(_QWORD *)(v27 + 8) != v12 || *(_QWORD *)result != v12 )
      __fastfail(3u);
    *(_QWORD *)result = v27;
    *(_QWORD *)(v27 + 8) = result;
    --*(_QWORD *)(a1 + 88);
  }
  if ( (a4 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v29 < 2u )
      {
        _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick();
      }
      result = (unsigned __int8)v29;
      __writecr8((unsigned __int8)v29);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 64);
      v28 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --CurrentThread->SpecialApcDisable;
      v15 = ++CurrentThread->AbAllocationRegionCount == 1;
      v16 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      v17 = !_BitScanReverse((unsigned int *)&v18, v16);
      if ( v17 )
        goto LABEL_36;
      while ( 1 )
      {
        v19 = 1 << v18;
        v20 = v18;
        v21 = &CurrentThread->LockEntries[v20];
        v16 &= ~v19;
        if ( (v21->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v21->LockState.0 & 1) == 0
          && (*(_QWORD *)&v21->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 64) & 0x7FFFFFFFFFFFFFFCLL)
          && v21->LockState.SessionId == (_DWORD)SessionId )
        {
          v21->AcquiredByte &= ~1u;
          if ( v21->LockState.0 )
            break;
        }
        v17 = !_BitScanReverse((unsigned int *)&v18, v16);
        if ( v17 )
          goto LABEL_36;
      }
      if ( !v21 )
      {
LABEL_36:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 64, (unsigned int)SessionId, 0LL);
      }
      else
      {
        v21->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v21->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v20].TreeNode, SessionId);
        v28 = 0;
        v28 = v21->BoostBitmap.AllFields & 0x1FFFF;
        v21->BoostBitmap.AllFields &= 0xFFFE0000;
        v21->ThreadLocalFlags &= ~1u;
        v21->LockState.0 = 0LL;
        v22 = ((char *)v21 - (char *)CurrentThread - 800) / 96;
        if ( v15 )
          CurrentThread->AbEntrySummary |= 1 << v22;
        else
          _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v22);
      }
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(CurrentThread, a1 + 64, &v28);
      v17 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v17
        && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v23);
      }
      result = KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  if ( v12 )
    return RtlpHpSegSegmentFree(a1);
  return result;
}
