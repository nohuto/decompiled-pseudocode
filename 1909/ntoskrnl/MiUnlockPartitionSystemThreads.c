/*
 * XREFs of MiUnlockPartitionSystemThreads @ 0x14019E528
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x1406502AC (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockPartitionSystemThreads(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // r14
  unsigned int v7; // r8d
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _KLOCK_ENTRY *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v16; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+70h] [rbp+18h]

  v2 = a1 + 176;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 176));
  v16 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
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
      && v12->LockState.SessionId == SessionId )
    {
      v12->AcquiredByte &= ~1u;
      if ( v12->LockState.0 )
      {
        if ( v12 )
        {
          v12->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v12->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v11].TreeNode);
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
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
LABEL_17:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, &v16);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v14);
  return KiLeaveGuardedRegionUnsafe(a2);
}
