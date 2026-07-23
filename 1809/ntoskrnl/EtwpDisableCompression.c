/*
 * XREFs of EtwpDisableCompression @ 0x140315398
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x140015278 (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140315234 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeGetEffectiveIrql @ 0x1400CABB0 (KeGetEffectiveIrql.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     EtwpRelinquishCompressionTarget @ 0x1403159AC (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpDisableCompression(__int64 a1)
{
  ULONG_PTR v2; // rsi
  unsigned __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v6; // bp
  unsigned int v7; // r8d
  int v8; // eax
  __int64 v9; // rcx
  _KLOCK_ENTRY *v10; // rdi
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+58h] [rbp+10h]

  if ( *(_DWORD *)(a1 + 1164) != 1
    && _InterlockedExchange((volatile __int32 *)(a1 + 1152), 0)
    && !*(_DWORD *)(a1 + 1120)
    && KeGetEffectiveIrql() < 2u )
  {
    v2 = a1 + 1128;
    ExAcquirePushLockExclusiveEx(a1 + 1128, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1128), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1128));
    v15 = 0;
    v3 = a1 + 1128;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v6 = ++CurrentThread->AbAllocationRegionCount;
    v7 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v11 = !_BitScanReverse((unsigned int *)&v12, v7);
      v16 = v12;
      if ( v11 )
        goto LABEL_17;
      v8 = 1 << v12;
      v9 = v12;
      v10 = &CurrentThread->LockEntries[v9];
      v7 &= ~v8;
      if ( (v10->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v10->LockState.0 & 1) == 0
        && (*(_QWORD *)&v10->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
        && v10->LockState.SessionId == (_DWORD)SessionId )
      {
        v10->AcquiredByte &= ~1u;
        if ( v10->LockState.0 )
          break;
      }
    }
    if ( !v10 )
    {
LABEL_17:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, (unsigned int)SessionId, 0LL);
      goto LABEL_24;
    }
    v10->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v10->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v9].TreeNode, SessionId);
    v15 = 0;
    v15 = v10->BoostBitmap.AllFields & 0x1FFFF;
    v10->BoostBitmap.AllFields &= 0xFFFE0000;
    v10->ThreadLocalFlags &= ~1u;
    v10->LockState.0 = 0LL;
    v13 = ((char *)v10 - (char *)CurrentThread - 800) / 96;
    if ( v6 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v13;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v13);
LABEL_24:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, (__int64)&v15);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v14);
  }
}
