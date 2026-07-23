/*
 * XREFs of EtwpDisableCompression @ 0x140333460
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x140003800 (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x1403332FC (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     KeGetEffectiveIrql @ 0x1400A16B0 (KeGetEffectiveIrql.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     EtwpRelinquishCompressionTarget @ 0x140333A6C (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpDisableCompression(__int64 a1)
{
  ULONG_PTR v2; // rsi
  unsigned __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
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
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
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
        && v10->LockState.SessionId == SessionId )
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
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
      goto LABEL_24;
    }
    v10->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v10->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v9].TreeNode);
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
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, &v15);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v14);
  }
}
