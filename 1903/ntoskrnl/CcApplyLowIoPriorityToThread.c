/*
 * XREFs of CcApplyLowIoPriorityToThread @ 0x14007E86C
 * Callers:
 *     CcWriteBehindInternal @ 0x14007E1E0 (CcWriteBehindInternal.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140010B30 (KeSetPriorityThread.c)
 *     PsBoostThreadIo @ 0x14003DFB0 (PsBoostThreadIo.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     PsSetIoPriorityThread @ 0x14007FF38 (PsSetIoPriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140126200 (CcUpdateSharedCacheMapFlag.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __fastcall CcApplyLowIoPriorityToThread(__int64 a1, char a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v6; // rbp
  struct _KTHREAD *v7; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v9; // r14
  unsigned int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  _KLOCK_ENTRY *v15; // rdi
  __int64 v16; // rdx
  int *v17; // r8
  __int64 v18; // rdx
  unsigned int v19; // edx
  unsigned __int8 v20; // r14
  unsigned int v21; // r8d
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  _KLOCK_ENTRY *v25; // rdi
  __int64 v26; // rdx
  int v27; // [rsp+80h] [rbp+18h] BYREF
  int v28; // [rsp+88h] [rbp+20h] BYREF

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
    v27 = 0;
    v7 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
    else
      SessionId = -1;
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
        && v15->LockState.SessionId == SessionId )
      {
        v15->AcquiredByte &= ~1u;
        if ( v15->LockState.0 )
        {
          if ( v15 )
          {
            v15->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v15->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v7->LockEntries[v14].TreeNode);
            v27 = v15->BoostBitmap.AllFields & 0x1FFFF;
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
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, v6, SessionId, 0LL);
LABEL_25:
    v17 = &v27;
  }
  else
  {
    if ( *(struct _KTHREAD **)(a1 + 864) != CurrentThread )
      return;
    v6 = a1 + 888;
    ExAcquirePushLockExclusiveEx(a1 + 888, 0LL);
    PsSetIoPriorityThread(CurrentThread, *(unsigned int *)(a1 + 884));
    v18 = *(unsigned int *)(a1 + 880);
    if ( (_DWORD)v18 != 32 )
      KeSetPriorityThread(KeGetCurrentThread(), v18);
    if ( (a3[38] & 0x20000000) != 0 )
    {
      LOBYTE(v18) = 1;
      PsBoostThreadIo((__int64)CurrentThread, v18);
      CcUpdateSharedCacheMapFlag(a3, 0x20000000LL, 0LL);
    }
    *(_QWORD *)(a1 + 864) = 0LL;
    *(_QWORD *)(a1 + 872) = 0LL;
    *(_DWORD *)(a1 + 884) = 5;
    *(_DWORD *)(a1 + 880) = 32;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    v28 = 0;
    v7 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
      v19 = MmGetSessionIdEx((__int64)v7->ApcState.Process);
    else
      v19 = -1;
    --v7->SpecialApcDisable;
    v20 = ++v7->AbAllocationRegionCount;
    v21 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v11 = !_BitScanReverse((unsigned int *)&v22, v21);
      if ( v11 )
        break;
      v23 = 1 << v22;
      v24 = v22;
      v25 = &v7->LockEntries[v24];
      v21 &= ~v23;
      if ( (v25->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v25->LockState.0 & 1) == 0
        && (*(_QWORD *)&v25->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
        && v25->LockState.SessionId == v19 )
      {
        v25->AcquiredByte &= ~1u;
        if ( v25->LockState.0 )
        {
          if ( v25 )
          {
            v25->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v25->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v7->LockEntries[v24].TreeNode);
            v28 = v25->BoostBitmap.AllFields & 0x1FFFF;
            v25->BoostBitmap.AllFields &= 0xFFFE0000;
            v25->ThreadLocalFlags &= ~1u;
            v25->LockState.0 = 0LL;
            v26 = ((char *)v25 - (char *)v7 - 800) / 96;
            if ( v20 == 1 )
              v7->AbEntrySummary |= 1 << v26;
            else
              _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v26);
            goto LABEL_46;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, v6, v19, 0LL);
LABEL_46:
    v17 = &v28;
  }
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, v6, v17);
  v11 = v7->SpecialApcDisable++ == -1;
  if ( v11 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery();
}
