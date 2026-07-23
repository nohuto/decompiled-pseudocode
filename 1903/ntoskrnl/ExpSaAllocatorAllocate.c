/*
 * XREFs of ExpSaAllocatorAllocate @ 0x14016D53C
 * Callers:
 *     ExSaAllocate @ 0x14016D4B0 (ExSaAllocate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x14009C760 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14016D9D4 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14016DD84 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorOptimizeList @ 0x14016EAEC (ExpSaAllocatorOptimizeList.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSaAllocatorAllocate(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3)
{
  unsigned int v3; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  char v6; // r15
  __int64 Memory; // rbx
  __int64 v8; // rax
  unsigned int v9; // r13d
  char v10; // cl
  __int64 v11; // rbp
  int SessionId; // eax
  __int64 v13; // rcx
  bool v14; // zf
  __int64 *v15; // r14
  __int64 *v16; // rsi
  struct _KTHREAD *v18; // rsi
  unsigned __int8 v19; // r14
  unsigned int v20; // edx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _KLOCK_ENTRY *v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // r12
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 *v32; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KTHREAD *v34; // rsi
  __int64 v35; // rax
  unsigned __int8 v36; // al
  char v37; // cl
  int v38; // eax
  __int64 v39; // rcx
  __int64 *v40; // rcx
  int v41; // [rsp+30h] [rbp-58h] BYREF
  int v42; // [rsp+34h] [rbp-54h]
  int v43; // [rsp+38h] [rbp-50h]
  int v44; // [rsp+3Ch] [rbp-4Ch]
  int v46; // [rsp+A0h] [rbp+18h] BYREF
  int v47; // [rsp+A8h] [rbp+20h] BYREF

  v46 = a3;
  v47 = 0;
  v3 = a2;
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  Memory = -1LL;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  LOBYTE(v8) = CurrentThread->AbEntrySummary;
  v9 = -1;
  if ( !(_BYTE)v8 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v11 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
      goto LABEL_55;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v8) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
  }
  v10 = v8;
  _BitScanForward((unsigned int *)&v8, (unsigned __int8)v8);
  v43 = v8;
  CurrentThread->AbEntrySummary = v10 & ~(1 << v8);
  v11 = (__int64)&CurrentThread->LockEntries[v8];
  if ( v11 )
  {
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
      && *((_BYTE *)&MiState[1488] + ((BugCheckParameter2 >> 39) & 0x1FF)) == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v11 + 40) = SessionId;
    *(_QWORD *)(v11 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_8;
  }
LABEL_55:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v47);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, (_RTL_BALANCED_NODE *)v11, BugCheckParameter2);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v15 = (__int64 *)(BugCheckParameter2 + 8);
  v16 = *(__int64 **)(BugCheckParameter2 + 8);
  while ( 1 )
  {
    while ( v16 != v15 )
    {
      Memory = ExpSaPageGroupAllocateMemory(v16, v3);
      if ( Memory != -1 )
      {
        if ( !*((_DWORD *)v16 + 9) )
          _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u);
        goto LABEL_20;
      }
      v16 = (__int64 *)*v16;
    }
    v27 = (__int64 *)*v15;
    v28 = 0LL;
    if ( !v6 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v41 = 0;
      v34 = KeGetCurrentThread();
      --v34->SpecialApcDisable;
      if ( ++v34->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v34, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
      LOBYTE(v35) = v34->AbEntrySummary;
      if ( !(_BYTE)v35 )
      {
        if ( !v34->AbOrphanedEntrySummary )
        {
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(v34, BugCheckParameter2);
          goto LABEL_74;
        }
        v36 = v34->AbOrphanedEntrySummary;
        v34->AbOrphanedEntrySummary = 0;
        LOBYTE(v35) = v34->AbEntrySummary | v36;
      }
      v37 = v35;
      _BitScanForward((unsigned int *)&v35, (unsigned __int8)v35);
      v44 = v35;
      v34->AbEntrySummary = v37 & ~(1 << v35);
      v28 = (__int64)&v34->LockEntries[v35];
      if ( v28 )
      {
        if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState[1488] + ((BugCheckParameter2 >> 39) & 0x1FF)) == 1 )
        {
          v38 = MmGetSessionIdEx((__int64)v34->ApcState.Process);
        }
        else
        {
          v38 = -1;
        }
        *(_DWORD *)(v28 + 40) = v38;
        *(_QWORD *)(v28 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_77;
      }
LABEL_74:
      _interlockedbittestandset((volatile signed __int32 *)&v34->116 + 1, 0x10u);
LABEL_77:
      --v34->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v34, BugCheckParameter2, &v41);
      v14 = v34->SpecialApcDisable++ == -1;
      if ( v14 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
        KiCheckForKernelApcDelivery(v39);
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)BugCheckParameter2,
          (_RTL_BALANCED_NODE *)v28,
          BugCheckParameter2);
      if ( v28 )
        *(_BYTE *)(v28 + 26) |= 1u;
    }
    v16 = (__int64 *)*v15;
    v6 = 1;
    if ( v27 == (__int64 *)*v15 )
      break;
    v3 = a2;
  }
  v29 = *(unsigned int *)(BugCheckParameter2 + 64);
  LOBYTE(v29) = v29 & 1;
  v30 = ExpSaPageGroupDescriptorAllocate(BugCheckParameter2, v29);
  v31 = v30;
  if ( v30 )
  {
    Memory = ExpSaPageGroupAllocateMemory(v30, a2);
    if ( *(_DWORD *)(v31 + 36) )
    {
      *(_DWORD *)(v31 + 40) = 0;
      v32 = (__int64 *)*v15;
      if ( *(__int64 **)(*v15 + 8) == v15 )
      {
        *(_QWORD *)v31 = v32;
        *(_QWORD *)(v31 + 8) = v15;
        v32[1] = v31;
        *v15 = v31;
        goto LABEL_20;
      }
LABEL_90:
      __fastfail(3u);
    }
    *(_DWORD *)(v31 + 40) = 1;
    v40 = *(__int64 **)(BugCheckParameter2 + 32);
    if ( *v40 != BugCheckParameter2 + 24 )
      goto LABEL_90;
    *(_QWORD *)v31 = BugCheckParameter2 + 24;
    *(_QWORD *)(v31 + 8) = v40;
    *v40 = v31;
    *(_QWORD *)(BugCheckParameter2 + 32) = v31;
LABEL_20:
    if ( (*(_DWORD *)(BugCheckParameter2 + 64) & 2) != 0 )
    {
      if ( v6 || _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) == 17 )
      {
        v6 = 1;
        ExpSaAllocatorOptimizeList(BugCheckParameter2);
        goto LABEL_21;
      }
LABEL_22:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      return Memory;
    }
LABEL_21:
    if ( !v6 )
      goto LABEL_22;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  v46 = 0;
  v18 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    v9 = MmGetSessionIdEx((__int64)v18->ApcState.Process);
  --v18->SpecialApcDisable;
  v19 = ++v18->AbAllocationRegionCount;
  v20 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
  v14 = !_BitScanReverse((unsigned int *)&v21, v20);
  v42 = v21;
  if ( v14 )
    goto LABEL_53;
  while ( 1 )
  {
    v22 = 1 << v21;
    v23 = v21;
    v24 = &v18->LockEntries[v23];
    v20 &= ~v22;
    if ( (v24->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v24->LockState.0 & 1) == 0
      && (*(_QWORD *)&v24->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v24->LockState.SessionId == v9 )
    {
      v24->AcquiredByte &= ~1u;
      if ( v24->LockState.0 )
        break;
    }
    v14 = !_BitScanReverse((unsigned int *)&v21, v20);
    v42 = v21;
    if ( v14 )
      goto LABEL_53;
  }
  if ( !v24 )
  {
LABEL_53:
    if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v18, BugCheckParameter2, v9, 0LL);
  }
  else
  {
    v24->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v24->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v18->LockEntries[v23].TreeNode);
    v46 = v24->BoostBitmap.AllFields & 0x1FFFF;
    v24->BoostBitmap.AllFields &= 0xFFFE0000;
    v24->ThreadLocalFlags &= ~1u;
    v24->LockState.0 = 0LL;
    v25 = ((char *)v24 - (char *)v18 - 800) / 96;
    if ( v19 == 1 )
      v18->AbEntrySummary |= 1 << v25;
    else
      _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v25);
  }
  --v18->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v18, BugCheckParameter2, &v46);
  v14 = v18->SpecialApcDisable++ == -1;
  if ( v14 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery(v26);
  return Memory;
}
