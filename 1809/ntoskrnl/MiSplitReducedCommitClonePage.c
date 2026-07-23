/*
 * XREFs of MiSplitReducedCommitClonePage @ 0x1402A8680
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1400420D0 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MiProcessCommitIntact @ 0x140001C74 (MiProcessCommitIntact.c)
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiLockProbePacketWorkingSet @ 0x14009374C (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140093794 (MiUnlockProbePacketWorkingSet.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402CB40C (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1405E1510 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1405F3998 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitReducedCommitClonePage(__int64 *a1)
{
  BOOL v3; // esi
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // r15d
  __int64 v8; // r14
  struct _KTHREAD *v9; // rbx
  __int64 v10; // rdx
  unsigned __int8 v11; // r12
  unsigned int v12; // r8d
  __int64 v13; // rsi
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  unsigned __int64 valid; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  _QWORD *CloneAddress; // rax
  __int64 v24; // rcx
  __int64 v25; // r14
  struct _KTHREAD *v26; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v28; // r12
  unsigned int v29; // r8d
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // [rsp+30h] [rbp-18h] BYREF
  __int64 v35; // [rsp+38h] [rbp-10h] BYREF
  int v36; // [rsp+90h] [rbp+48h] BYREF
  int v37; // [rsp+98h] [rbp+50h] BYREF
  int v38; // [rsp+A0h] [rbp+58h]
  int v39; // [rsp+A8h] [rbp+60h]

  if ( !MiProcessCommitIntact(*a1) )
    return 3221225477LL;
  MiUnlockProbePacketWorkingSet((__int64)a1);
  v3 = 1;
  CurrentThread = KeGetCurrentThread();
  v5 = (((unsigned __int64)*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = a1[10];
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v6 + 880, 0LL);
  v7 = MiChargeFullProcessCommitment(a1[10], 1LL);
  if ( v7 >= 0 )
  {
    MiLockProbePacketWorkingSet((__int64)a1);
    valid = MiLockLowestValidPageTable(a1[12], v5, &v34, v18);
    v20 = v34;
    a1[4] = valid;
    if ( v20 == v5 )
    {
      v35 = MI_READ_PTE_LOCK_FREE(v20);
      if ( (v35 & 1) != 0 )
      {
        v21 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v35) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        if ( (*(_QWORD *)(v21 + 40) & 0x200000000000000LL) != 0 )
        {
          v22 = *(_QWORD *)(v21 + 8);
          if ( v22 < 0 )
          {
            CloneAddress = MiLocateCloneAddress(a1[10], v22 | 0x8000000000000000uLL);
            if ( CloneAddress )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v24 + 1296) + 312LL) > CloneAddress[12] )
              {
                v7 = MiCopyOnWrite(*a1, v5, 0xFFFFFFFFFFFFFFFFuLL, 0);
                v3 = v7 < 0;
              }
            }
          }
        }
      }
    }
    MiUnlockProbePacketWorkingSet((__int64)a1);
    if ( v3 )
      MiReturnFullProcessCommitment(a1[10]);
    v25 = a1[10] + 880;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v25);
    v37 = 0;
    v26 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v25) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v26->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v26->SpecialApcDisable;
    v28 = ++v26->AbAllocationRegionCount;
    v29 = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v14 = !_BitScanReverse((unsigned int *)&v31, v29);
      v39 = v31;
      if ( v14 )
        goto LABEL_49;
      v30 = (__int64)&v26->LockEntries[v31];
      v29 &= ~(1 << v31);
      if ( (*(_BYTE *)(v30 + 26) & 1) != 0
        && (*(_DWORD *)(v30 + 32) & 1) == 0
        && (*(_QWORD *)(v30 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v25 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v30 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v30 + 26) &= ~1u;
        if ( *(_QWORD *)(v30 + 32) )
          break;
      }
    }
    if ( !v30 )
    {
LABEL_49:
      if ( (*((_DWORD *)&v26->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v26, v25, (unsigned int)SessionId, 0LL);
      goto LABEL_56;
    }
    *(_BYTE *)(v30 + 32) |= 2u;
    if ( *(__int64 *)(v30 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v30, SessionId);
    v37 = 0;
    v37 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
    *(_DWORD *)(v30 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v30 + 25) &= ~1u;
    *(_QWORD *)(v30 + 32) = 0LL;
    v32 = (v30 - (__int64)v26 - 800) / 96;
    if ( v28 == 1 )
      v26->AbEntrySummary |= 1 << v32;
    else
      _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, 1 << v32);
LABEL_56:
    --v26->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v26, v25, (__int64)&v37);
    v14 = v26->SpecialApcDisable++ == -1;
    if ( v14 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
      KiCheckForKernelApcDelivery(v33);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v7 < 0 )
      MiCopyOnWriteCheckConditions(a1[12], (unsigned int)v7);
    MiLockProbePacketWorkingSet((__int64)a1);
    return 0LL;
  }
  else
  {
    v8 = a1[10] + 880;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8);
    v36 = 0;
    v9 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
      v10 = (unsigned int)MmGetSessionIdEx((__int64)v9->ApcState.Process);
    else
      v10 = 0xFFFFFFFFLL;
    --v9->SpecialApcDisable;
    v11 = ++v9->AbAllocationRegionCount;
    v12 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v14 = !_BitScanReverse((unsigned int *)&v15, v12);
      v38 = v15;
      if ( v14 )
        goto LABEL_16;
      v13 = (__int64)&v9->LockEntries[v15];
      v12 &= ~(1 << v15);
      if ( (*(_BYTE *)(v13 + 26) & 1) != 0
        && (*(_DWORD *)(v13 + 32) & 1) == 0
        && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v13 + 40) == (_DWORD)v10 )
      {
        *(_BYTE *)(v13 + 26) &= ~1u;
        if ( *(_QWORD *)(v13 + 32) )
          break;
      }
    }
    if ( !v13 )
    {
LABEL_16:
      if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v9, v8, (unsigned int)v10, 0LL);
      goto LABEL_23;
    }
    *(_BYTE *)(v13 + 32) |= 2u;
    if ( *(__int64 *)(v13 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v13, v10);
    v36 = 0;
    v36 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
    *(_DWORD *)(v13 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v13 + 25) &= ~1u;
    *(_QWORD *)(v13 + 32) = 0LL;
    v16 = (v13 - (__int64)v9 - 800) / 96;
    if ( v11 == 1 )
      v9->AbEntrySummary |= 1 << v16;
    else
      _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v16);
LABEL_23:
    --v9->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v9, v8, (__int64)&v36);
    v14 = v9->SpecialApcDisable++ == -1;
    if ( v14 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
      KiCheckForKernelApcDelivery(v17);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MiLockProbePacketWorkingSet((__int64)a1);
    return (unsigned int)v7;
  }
}
