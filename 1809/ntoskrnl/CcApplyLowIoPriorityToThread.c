/*
 * XREFs of CcApplyLowIoPriorityToThread @ 0x14007E024
 * Callers:
 *     CcWriteBehindInternal @ 0x14007D2E0 (CcWriteBehindInternal.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     PsSetIoPriorityThread @ 0x1400DEFD8 (PsSetIoPriorityThread.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140108C50 (CcUpdateSharedCacheMapFlag.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall CcApplyLowIoPriorityToThread(__int64 a1, char a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v6; // r14
  struct _KTHREAD *v7; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v9; // r15
  unsigned int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  _KLOCK_ENTRY *v15; // rdi
  __int64 v16; // rdx
  int *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int8 v21; // r15
  unsigned int v22; // r8d
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  _KLOCK_ENTRY *v26; // rdi
  __int64 v27; // rdx
  int v28; // [rsp+80h] [rbp+40h] BYREF
  int v29; // [rsp+88h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( !a3[1] )
    KeBugCheckEx(0x34u, 0x489uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 896) >= *(_DWORD *)(a1 + 200) || *(_QWORD *)(a1 + 864) || a3[129] || (a3[38] & 0x10000) != 0 )
      return;
    v6 = a1 + 888;
    ExAcquirePushLockExclusiveEx(a1 + 888, 0LL);
    *(_QWORD *)(a1 + 864) = CurrentThread;
    *(_QWORD *)(a1 + 872) = a3;
    *(_DWORD *)(a1 + 884) = PsSetIoPriorityThread(CurrentThread, 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    v28 = 0;
    v7 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v7->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v7->SpecialApcDisable;
    v9 = ++v7->AbAllocationRegionCount;
    v10 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v11 = !_BitScanReverse((unsigned int *)&v12, v10);
      if ( v11 )
        break;
      v13 = 1 << v12;
      v14 = v12;
      v15 = &v7->LockEntries[v14];
      v10 &= ~v13;
      if ( (v15->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v15->LockState.0 & 1) == 0
        && (*(_QWORD *)&v15->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
        && v15->LockState.SessionId == (_DWORD)SessionId )
      {
        v15->AcquiredByte &= ~1u;
        if ( v15->LockState.0 )
        {
          if ( v15 )
          {
            v15->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v15->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v7->LockEntries[v14].TreeNode, SessionId);
            v28 = 0;
            v28 = v15->BoostBitmap.AllFields & 0x1FFFF;
            v15->BoostBitmap.AllFields &= 0xFFFE0000;
            v15->ThreadLocalFlags &= ~1u;
            v15->LockState.0 = 0LL;
            v16 = ((char *)v15 - (char *)v7 - 800) / 96;
            if ( v9 == 1 )
              v7->AbEntrySummary |= 1 << v16;
            else
              _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v16);
            goto LABEL_25;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, v6, (unsigned int)SessionId, 0LL);
LABEL_25:
    v17 = &v28;
  }
  else
  {
    if ( *(struct _KTHREAD **)(a1 + 864) != CurrentThread )
      return;
    v6 = a1 + 888;
    ExAcquirePushLockExclusiveEx(a1 + 888, 0LL);
    PsSetIoPriorityThread(CurrentThread, *(unsigned int *)(a1 + 884));
    v19 = *(unsigned int *)(a1 + 880);
    if ( (_DWORD)v19 != 32 )
      KeSetPriorityThread(KeGetCurrentThread(), v19);
    if ( (a3[38] & 0x20000000) != 0 )
    {
      LOBYTE(v19) = 1;
      PsBoostThreadIo(CurrentThread, v19);
      CcUpdateSharedCacheMapFlag(a3, 0x20000000LL, 0LL);
    }
    *(_QWORD *)(a1 + 864) = 0LL;
    *(_QWORD *)(a1 + 872) = 0LL;
    *(_DWORD *)(a1 + 884) = 5;
    *(_DWORD *)(a1 + 880) = 32;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    v29 = 0;
    v7 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
      v20 = (unsigned int)MmGetSessionIdEx((__int64)v7->ApcState.Process);
    else
      v20 = 0xFFFFFFFFLL;
    --v7->SpecialApcDisable;
    v21 = ++v7->AbAllocationRegionCount;
    v22 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v11 = !_BitScanReverse((unsigned int *)&v23, v22);
      if ( v11 )
        break;
      v24 = 1 << v23;
      v25 = v23;
      v26 = &v7->LockEntries[v25];
      v22 &= ~v24;
      if ( (v26->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v26->LockState.0 & 1) == 0
        && (*(_QWORD *)&v26->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
        && v26->LockState.SessionId == (_DWORD)v20 )
      {
        v26->AcquiredByte &= ~1u;
        if ( v26->LockState.0 )
        {
          if ( v26 )
          {
            v26->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v26->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v7->LockEntries[v25].TreeNode, v20);
            v29 = 0;
            v29 = v26->BoostBitmap.AllFields & 0x1FFFF;
            v26->BoostBitmap.AllFields &= 0xFFFE0000;
            v26->ThreadLocalFlags &= ~1u;
            v26->LockState.0 = 0LL;
            v27 = ((char *)v26 - (char *)v7 - 800) / 96;
            if ( v21 == 1 )
              v7->AbEntrySummary |= 1 << v27;
            else
              _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v27);
            goto LABEL_49;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, v6, (unsigned int)v20, 0LL);
LABEL_49:
    v17 = &v29;
  }
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, v6, (__int64)v17);
  v11 = v7->SpecialApcDisable++ == -1;
  if ( v11 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(v18);
}
