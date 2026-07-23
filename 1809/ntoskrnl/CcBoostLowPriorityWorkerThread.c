/*
 * XREFs of CcBoostLowPriorityWorkerThread @ 0x140107FD0
 * Callers:
 *     CcFlushCachePriv @ 0x14001EA90 (CcFlushCachePriv.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140023880 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x1401086DC (IoBoostThreadIoPriority.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140108C50 (CcUpdateSharedCacheMapFlag.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

_QWORD *__fastcall CcBoostLowPriorityWorkerThread(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v7; // bp
  unsigned int v8; // r8d
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  _KLOCK_ENTRY *v13; // rdi
  __int64 v14; // rdx
  _QWORD *result; // rax
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // [rsp+58h] [rbp+10h] BYREF
  int v21; // [rsp+60h] [rbp+18h]

  if ( a2 && !*(_DWORD *)(a2 + 4) )
    KeBugCheckEx(0x34u, 0x50BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = a1 + 888;
  ExAcquirePushLockExclusiveEx(a1 + 888, 0LL);
  if ( *(_QWORD *)(a1 + 864)
    && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) > 0
    && (!a2 || a2 == *(_QWORD *)(a1 + 872)) )
  {
    IoBoostThreadIoPriority(v17, 2LL, 0LL);
    *(_DWORD *)(a1 + 880) = KeSetPriorityThread(*(PKTHREAD *)(a1 + 864), 13);
    v18 = *(_QWORD *)(a1 + 872);
    if ( !*(_DWORD *)(v18 + 4) )
      KeBugCheckEx(0x34u, 0x538uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (*(_DWORD *)(v18 + 152) & 0x20000000) == 0 )
    {
      PsBoostThreadIo(*(_QWORD *)(a1 + 864), 0LL);
      LOBYTE(v19) = 1;
      CcUpdateSharedCacheMapFlag(*(_QWORD *)(a1 + 872), 0x20000000LL, v19);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  v20 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --CurrentThread->SpecialApcDisable;
  v7 = ++CurrentThread->AbAllocationRegionCount;
  v8 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v9 = !_BitScanReverse((unsigned int *)&v10, v8);
    v21 = v10;
    if ( v9 )
      break;
    v11 = 1 << v10;
    v12 = v10;
    v13 = &CurrentThread->LockEntries[v12];
    v8 &= ~v11;
    if ( (v13->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v13->LockState.0 & 1) == 0
      && (*(_QWORD *)&v13->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && v13->LockState.SessionId == (_DWORD)SessionId )
    {
      v13->AcquiredByte &= ~1u;
      if ( v13->LockState.0 )
      {
        if ( v13 )
        {
          v13->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v13->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v12].TreeNode, SessionId);
          v20 = 0;
          v20 = v13->BoostBitmap.AllFields & 0x1FFFF;
          v13->BoostBitmap.AllFields &= 0xFFFE0000;
          v13->ThreadLocalFlags &= ~1u;
          v13->LockState.0 = 0LL;
          v14 = ((char *)v13 - (char *)CurrentThread - 800) / 96;
          if ( v7 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v14;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v14);
          goto LABEL_20;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v4, (unsigned int)SessionId, 0LL);
LABEL_20:
  --CurrentThread->AbAllocationRegionCount;
  result = (_QWORD *)KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v4, (__int64)&v20);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v16);
  }
  return result;
}
