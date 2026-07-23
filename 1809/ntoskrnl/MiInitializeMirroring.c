/*
 * XREFs of MiInitializeMirroring @ 0x1409BDF88
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MiSizeMemoryListLocks @ 0x1406D1FC0 (MiSizeMemoryListLocks.c)
 *     MiUpdateMirrorBitmaps @ 0x1406E0D6C (MiUpdateMirrorBitmaps.c)
 *     MiInitializeDynamicBitmap @ 0x1407169C0 (MiInitializeDynamicBitmap.c)
 */

__int64 MiInitializeMirroring()
{
  SIZE_T v0; // rdi
  PVOID PoolWithTag; // rax
  __int64 v2; // rbx
  __int64 *v3; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v5; // ebx
  ULONG_PTR v6; // rax
  struct _KTHREAD *v8; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v10; // bp
  unsigned int v11; // r8d
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  _KLOCK_ENTRY *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  _OWORD v19[3]; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+70h] [rbp+8h] BYREF
  int v21; // [rsp+78h] [rbp+10h]

  stru_14043B848.List.Flink = 0LL;
  stru_14043B830.Header.WaitListHead.Blink = &stru_14043B830.Header.WaitListHead;
  stru_14043B830.Header.WaitListHead.Flink = &stru_14043B830.Header.WaitListHead;
  LOWORD(stru_14043B830.Header.Lock) = 1;
  stru_14043B848.WorkerRoutine = (void (__fastcall *)(void *))MiFinishResume;
  stru_14043B830.Header.Size = 6;
  stru_14043B830.Header.SignalState = 1;
  stru_14043B848.Parameter = (void *)-1LL;
  v0 = MiSizeMemoryListLocks();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v0, 0x614C6D4Du);
  v2 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v0);
    qword_14043ED68 = v2;
    v3 = qword_14043B870;
    CurrentThread = KeGetCurrentThread();
    v5 = 0;
    while ( 1 )
    {
      v6 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)0x200000);
      if ( !v6 || !(unsigned int)MiInitializeDynamicBitmap(v19, (__int64)(v6 << 25) >> 16, 0x1000000000LL, 12) )
        break;
      *(_QWORD *)&v19[0] = 0LL;
      ++v5;
      *(_OWORD *)v3 = v19[0];
      v3 += 2;
      if ( v5 >= 2 )
      {
        if ( (dword_140541184 & 1) != 0 )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043DAB8, 0LL);
          MiUpdateMirrorBitmaps();
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043DAB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043DAB8);
          v20 = 0;
          v8 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_14043DAB8) == 1 )
            SessionId = (unsigned int)MmGetSessionIdEx((__int64)v8->ApcState.Process);
          else
            SessionId = 0xFFFFFFFFLL;
          --v8->SpecialApcDisable;
          v10 = ++v8->AbAllocationRegionCount;
          v11 = ((char)v8->AbEntrySummary | (char)v8->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v12 = !_BitScanReverse((unsigned int *)&v13, v11);
            v21 = v13;
            if ( v12 )
              goto LABEL_16;
            v14 = 1 << v13;
            v15 = v13;
            v16 = &v8->LockEntries[v15];
            v11 &= ~v14;
            if ( (v16->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v16->LockState.0 & 1) == 0
              && (*(_QWORD *)&v16->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14043DAB8 & 0x7FFFFFFFFFFFFFFCLL)
              && v16->LockState.SessionId == (_DWORD)SessionId )
            {
              v16->AcquiredByte &= ~1u;
              if ( v16->LockState.0 )
                break;
            }
          }
          if ( !v16 )
          {
LABEL_16:
            if ( (*((_DWORD *)&v8->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v8, (ULONG_PTR)&qword_14043DAB8, (unsigned int)SessionId, 0LL);
            goto LABEL_28;
          }
          v16->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v16->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v8->LockEntries[v15].TreeNode, SessionId);
          v20 = 0;
          v20 = v16->BoostBitmap.AllFields & 0x1FFFF;
          v16->BoostBitmap.AllFields &= 0xFFFE0000;
          v16->ThreadLocalFlags &= ~1u;
          v16->LockState.0 = 0LL;
          v17 = ((char *)v16 - (char *)v8 - 800) / 96;
          if ( v10 == 1 )
            v8->AbEntrySummary |= 1 << v17;
          else
            _InterlockedOr8((volatile signed __int8 *)&v8->AbOrphanedEntrySummary, 1 << v17);
LABEL_28:
          --v8->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v8, (__int64)&qword_14043DAB8, (__int64)&v20);
          v12 = v8->SpecialApcDisable++ == -1;
          if ( v12 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
            KiCheckForKernelApcDelivery(v18);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        return 1LL;
      }
    }
  }
  return 0LL;
}
