/*
 * XREFs of MiContractWsSwapPageFileWorker @ 0x1402E5C40
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1400A0388 (PsDereferencePartition.c)
 *     MiWsSwapPageFileNumber @ 0x1400F1794 (MiWsSwapPageFileNumber.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiQueuePageFileExtension @ 0x1402CEB84 (MiQueuePageFileExtension.c)
 */

void __fastcall MiContractWsSwapPageFileWorker(__int64 a1)
{
  unsigned int v2; // eax
  struct _KTHREAD *CurrentThread; // r13
  __int64 v4; // rbx
  char v5; // al
  struct _KTHREAD *v6; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v8; // r12
  unsigned int v9; // edx
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  _KLOCK_ENTRY *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v17[18]; // [rsp+30h] [rbp-39h] BYREF
  int v18; // [rsp+D0h] [rbp+67h] BYREF
  int v19; // [rsp+D8h] [rbp+6Fh]

  memset(v17, 0, 0x58uLL);
  v2 = MiWsSwapPageFileNumber(a1);
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(a1 + 8LL * v2 + 7904);
  memset(v17, 0, 0x58uLL);
  v17[3] = a1;
  v17[4] = -1LL;
  v5 = *(_BYTE *)(v4 + 204) & 0xF;
  v17[5] = 0x10000LL;
  BYTE4(v17[9]) = v5;
  v17[8] = &v17[7];
  v17[7] = &v17[7];
  LOWORD(v17[6]) = 0;
  BYTE2(v17[6]) = 6;
  HIDWORD(v17[6]) = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 1120, 0LL);
  MiQueuePageFileExtension((__int64)v17, 1, 0x11u);
  KeWaitForSingleObject(&v17[6], Executive, 0, 0, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1120), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1120));
  v18 = 0;
  v6 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 1120) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
  else
    SessionId = -1;
  --v6->SpecialApcDisable;
  v8 = ++v6->AbAllocationRegionCount;
  v9 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v10 = !_BitScanReverse((unsigned int *)&v11, v9);
    v19 = v11;
    if ( v10 )
      break;
    v12 = 1 << v11;
    v13 = v11;
    v14 = &v6->LockEntries[v13];
    v9 &= ~v12;
    if ( (v14->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v14->LockState.0 & 1) == 0
      && (*(_QWORD *)&v14->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 1120) & 0x7FFFFFFFFFFFFFFCLL)
      && v14->LockState.SessionId == SessionId )
    {
      v14->AcquiredByte &= ~1u;
      if ( v14->LockState.0 )
      {
        if ( v14 )
        {
          v14->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v14->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v6->LockEntries[v13].TreeNode);
          v18 = v14->BoostBitmap.AllFields & 0x1FFFF;
          v14->BoostBitmap.AllFields &= 0xFFFE0000;
          v14->ThreadLocalFlags &= ~1u;
          v14->LockState.0 = 0LL;
          v15 = ((char *)v14 - (char *)v6 - 800) / 96;
          if ( v8 == 1 )
            v6->AbEntrySummary |= 1 << v15;
          else
            _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v15);
          goto LABEL_19;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v6, a1 + 1120, SessionId, 0LL);
LABEL_19:
  --v6->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v6, a1 + 1120, &v18);
  v10 = v6->SpecialApcDisable++ == -1;
  if ( v10 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
    KiCheckForKernelApcDelivery(v16);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  _InterlockedExchange((volatile __int32 *)(a1 + 1112), 0);
  PsDereferencePartition(*(_QWORD *)(a1 + 168));
}
