/*
 * XREFs of CcAmILowPriorityWriter @ 0x140021B3C
 * Callers:
 *     CcFlushCachePriv @ 0x14001EA90 (CcFlushCachePriv.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

bool __fastcall CcAmILowPriorityWriter(__int64 a1)
{
  __int64 Partition; // rbx
  ULONG_PTR v2; // rsi
  bool v3; // bp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v6; // r14
  unsigned int v7; // r8d
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _KLOCK_ENTRY *v12; // rdi
  __int64 v13; // rdx
  $FFD56A4B518EFE5E17FDE2C5CC486782 *v14; // rcx
  int v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+70h] [rbp+18h]

  Partition = CcGetPartition(a1);
  v2 = Partition + 888;
  ExAcquirePushLockExclusiveEx(Partition + 888, 0LL);
  v3 = *(_QWORD *)(Partition + 864) == (_QWORD)KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Partition + 888), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  v16 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --CurrentThread->SpecialApcDisable;
  v6 = ++CurrentThread->AbAllocationRegionCount;
  v7 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v8 = !_BitScanReverse((unsigned int *)&v9, v7);
    v17 = v9;
    if ( v8 )
      break;
    v10 = 1 << v9;
    v11 = v9;
    v12 = &CurrentThread->LockEntries[v11];
    v7 &= ~v10;
    if ( (v12->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v12->LockState.0 & 1) == 0
      && (*(_QWORD *)&v12->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
      && v12->LockState.SessionId == (_DWORD)SessionId )
    {
      v12->AcquiredByte &= ~1u;
      if ( v12->LockState.0 )
      {
        if ( v12 )
        {
          v12->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v12->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v11].TreeNode, SessionId);
          v16 = 0;
          v16 = v12->BoostBitmap.AllFields & 0x1FFFF;
          v12->BoostBitmap.AllFields &= 0xFFFE0000;
          v12->ThreadLocalFlags &= ~1u;
          v12->LockState.0 = 0LL;
          v13 = ((char *)v12 - (char *)CurrentThread - 800) / 96;
          if ( v6 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v13;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v13);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, (unsigned int)SessionId, 0LL);
LABEL_17:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, v2, &v16);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 )
  {
    v14 = &CurrentThread->152;
    if ( ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v14->ApcState.ApcListHead[0].Flink != v14 )
      KiCheckForKernelApcDelivery((__int64)v14);
  }
  return v3;
}
