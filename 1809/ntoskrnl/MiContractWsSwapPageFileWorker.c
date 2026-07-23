/*
 * XREFs of MiContractWsSwapPageFileWorker @ 0x1402CB8D0
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiWsSwapPageFileNumber @ 0x1400E4EC8 (MiWsSwapPageFileNumber.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiQueuePageFileExtension @ 0x1402B89D4 (MiQueuePageFileExtension.c)
 */

void __fastcall MiContractWsSwapPageFileWorker(__int64 a1)
{
  unsigned int v2; // eax
  struct _KTHREAD *CurrentThread; // r12
  __int64 v4; // rcx
  __int64 v5; // rbx
  char v6; // al
  struct _KTHREAD *v7; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v9; // r13
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  _KLOCK_ENTRY *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v18[18]; // [rsp+30h] [rbp-39h] BYREF
  int v19; // [rsp+D0h] [rbp+67h] BYREF
  int v20; // [rsp+D8h] [rbp+6Fh]

  v2 = MiWsSwapPageFileNumber(a1);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(v4 + 8LL * v2 + 7136);
  memset(v18, 0, 0x58uLL);
  v18[3] = a1;
  v18[4] = -1LL;
  v6 = *(_BYTE *)(v5 + 204) & 0xF;
  v18[5] = 0x10000LL;
  BYTE4(v18[9]) = v6;
  v18[8] = &v18[7];
  v18[7] = &v18[7];
  LOWORD(v18[6]) = 0;
  BYTE2(v18[6]) = 6;
  HIDWORD(v18[6]) = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 1112, 0LL);
  MiQueuePageFileExtension((__int64)v18, 1, 0x11u);
  KeWaitForSingleObject(&v18[6], Executive, 0, 0, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1112));
  v19 = 0;
  v7 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 1112) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
  else
    SessionId = -1;
  --v7->SpecialApcDisable;
  v9 = ++v7->AbAllocationRegionCount;
  LODWORD(v10) = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v12, v10);
    v20 = v12;
    if ( v11 )
      break;
    v13 = 1 << v12;
    v14 = v12;
    v15 = &v7->LockEntries[v14];
    v10 = ~v13 & (unsigned int)v10;
    if ( (v15->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v15->LockState.0 & 1) == 0
      && (*(_QWORD *)&v15->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 1112) & 0x7FFFFFFFFFFFFFFCLL)
      && v15->LockState.SessionId == SessionId )
    {
      v15->AcquiredByte &= ~1u;
      if ( v15->LockState.0 )
      {
        if ( v15 )
        {
          v15->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v15->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v7->LockEntries[v14].TreeNode, v10);
          v19 = 0;
          v19 = v15->BoostBitmap.AllFields & 0x1FFFF;
          v15->BoostBitmap.AllFields &= 0xFFFE0000;
          v15->ThreadLocalFlags &= ~1u;
          v15->LockState.0 = 0LL;
          v16 = ((char *)v15 - (char *)v7 - 800) / 96;
          if ( v9 == 1 )
            v7->AbEntrySummary |= 1 << v16;
          else
            _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v16);
          goto LABEL_19;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v7, a1 + 1112, SessionId, 0LL);
LABEL_19:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, a1 + 1112, (__int64)&v19);
  v11 = v7->SpecialApcDisable++ == -1;
  if ( v11 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(v17);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  _InterlockedExchange((volatile __int32 *)(a1 + 1104), 0);
  PsDereferencePartition(*(_QWORD *)(a1 + 168));
}
