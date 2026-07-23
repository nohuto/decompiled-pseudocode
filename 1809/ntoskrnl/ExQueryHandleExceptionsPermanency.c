/*
 * XREFs of ExQueryHandleExceptionsPermanency @ 0x140160874
 * Callers:
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     ObpCloseHandle @ 0x1405F673C (ObpCloseHandle.c)
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

_QWORD *__fastcall ExQueryHandleExceptionsPermanency(__int64 a1, _BYTE *a2, bool *a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  bool v9; // al
  struct _KTHREAD *v10; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v12; // r14
  unsigned int v13; // r8d
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  _KLOCK_ENTRY *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = a1 + 56;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v8 = *(_QWORD *)(a1 + 96);
  if ( v8 )
  {
    *a2 = 1;
    v9 = (*(_DWORD *)(v8 + 8) & 8) != 0;
  }
  else if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
  {
    *a2 = 1;
    v9 = 1;
  }
  else
  {
    *a2 = 0;
    v9 = 0;
  }
  *a3 = v9;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  v22 = 0;
  v10 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v10->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v10->SpecialApcDisable;
  v12 = ++v10->AbAllocationRegionCount;
  v13 = ((char)v10->AbEntrySummary | (char)v10->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v15, v13);
    v23 = v15;
    if ( v14 )
      break;
    v16 = 1 << v15;
    v17 = v15;
    v18 = &v10->LockEntries[v17];
    v13 &= ~v16;
    if ( (v18->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v18->LockState.0 & 1) == 0
      && (*(_QWORD *)&v18->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
      && v18->LockState.SessionId == (_DWORD)SessionId )
    {
      v18->AcquiredByte &= ~1u;
      if ( v18->LockState.0 )
      {
        if ( v18 )
        {
          v18->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v18->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v10->LockEntries[v17].TreeNode, SessionId);
          v22 = 0;
          v22 = v18->BoostBitmap.AllFields & 0x1FFFF;
          v18->BoostBitmap.AllFields &= 0xFFFE0000;
          v18->ThreadLocalFlags &= ~1u;
          v18->LockState.0 = 0LL;
          v19 = ((char *)v18 - (char *)v10 - 800) / 96;
          if ( v12 == 1 )
            v10->AbEntrySummary |= 1 << v19;
          else
            _InterlockedOr8((volatile signed __int8 *)&v10->AbOrphanedEntrySummary, 1 << v19);
          goto LABEL_20;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v10->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v10, v7, (unsigned int)SessionId, 0LL);
LABEL_20:
  --v10->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v10, v7, (__int64)&v22);
  v14 = v10->SpecialApcDisable++ == -1;
  if ( v14 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery(v20);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
