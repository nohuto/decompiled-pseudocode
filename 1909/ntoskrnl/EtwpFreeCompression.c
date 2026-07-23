/*
 * XREFs of EtwpFreeCompression @ 0x1400FD480
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406AC3AC (EtwpFreeLoggerContext.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeRemoveQueueDpcEx @ 0x1400FD550 (KeRemoveQueueDpcEx.c)
 *     EtwpFreePlaceholderList @ 0x1400FD644 (EtwpFreePlaceholderList.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     EtwpRelinquishCompressionTarget @ 0x140333A6C (EtwpRelinquishCompressionTarget.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeCompression(__int64 a1)
{
  void *v2; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // r14
  unsigned int v7; // r8d
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _KLOCK_ENTRY *v12; // rdi
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+68h] [rbp+10h]

  KeRemoveQueueDpcEx(a1 + 1176, 0LL);
  if ( *(_DWORD *)(a1 + 1152) )
  {
    ExAcquirePushLockExclusiveEx(a1 + 1128, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1128), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1128));
    v17 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 1128) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v6 = ++CurrentThread->AbAllocationRegionCount;
    v7 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v8 = !_BitScanReverse((unsigned int *)&v9, v7);
      v18 = v9;
      if ( v8 )
        goto LABEL_12;
      v10 = 1 << v9;
      v11 = v9;
      v12 = &CurrentThread->LockEntries[v11];
      v7 &= ~v10;
      if ( (v12->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v12->LockState.0 & 1) == 0
        && (*(_QWORD *)&v12->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 1128) & 0x7FFFFFFFFFFFFFFCLL)
        && v12->LockState.SessionId == SessionId )
      {
        v12->AcquiredByte &= ~1u;
        if ( v12->LockState.0 )
          break;
      }
    }
    if ( !v12 )
    {
LABEL_12:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 1128, SessionId, 0LL);
      goto LABEL_24;
    }
    v12->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v12->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v11].TreeNode);
    v13 = v12->BoostBitmap.AllFields & 0x1FFFF;
    v14 = v12->BoostBitmap.AllFields & 0xFFFE0000;
    v12->ThreadLocalFlags &= ~1u;
    v17 = v13;
    v12->BoostBitmap.AllFields = v14;
    v12->LockState.0 = 0LL;
    v15 = ((char *)v12 - (char *)CurrentThread - 800) / 96;
    if ( v6 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v15;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v15);
LABEL_24:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a1 + 1128, &v17);
    v8 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v8 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v16);
    _InterlockedExchange((volatile __int32 *)(a1 + 1152), 0);
  }
  v2 = *(void **)(a1 + 1144);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return EtwpFreePlaceholderList(a1);
}
