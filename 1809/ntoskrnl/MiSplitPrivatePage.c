/*
 * XREFs of MiSplitPrivatePage @ 0x140083B60
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1405F3A10 (MiCopyToCfgBitMap.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiVadPureReserve @ 0x140070D20 (MiVadPureReserve.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetNextPageTable @ 0x140084230 (MiGetNextPageTable.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiGetUsedPtesHandle @ 0x140098640 (MiGetUsedPtesHandle.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiIncreaseUsedPtesCount @ 0x1401100E4 (MiIncreaseUsedPtesCount.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiMakeProtoLeafValid @ 0x14012743C (MiMakeProtoLeafValid.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402CB40C (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1405E1510 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1405EDBB0 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x1405F3998 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitPrivatePage(ULONG_PTR a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  unsigned __int64 v5; // r14
  __int64 v6; // r9
  __int64 v7; // rbp
  int v8; // r12d
  unsigned __int8 v9; // r13
  ULONG_PTR v10; // rcx
  unsigned __int64 NextPageTable; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // r9
  __int64 UsedPtesHandle; // rax
  int v19; // r9d
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  unsigned int v29; // ebx
  int v30; // ebx
  unsigned __int64 v31; // rbp
  struct _KTHREAD *v32; // rbx
  ULONG_PTR SessionId; // r9
  BOOL v34; // esi
  __int64 v35; // rdx
  bool v36; // zf
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  _KLOCK_ENTRY *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int64 v43; // rbp
  int v44; // r13d
  __int64 v45; // rax
  struct _KTHREAD *v46; // rbx
  ULONG_PTR v47; // r9
  unsigned __int8 v48; // si
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rcx
  _KLOCK_ENTRY *v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rax
  int v58; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+38h] [rbp-A0h] BYREF
  int v60; // [rsp+40h] [rbp-98h]
  int v61; // [rsp+44h] [rbp-94h]
  _KPROCESS *Process; // [rsp+48h] [rbp-90h]
  int v63; // [rsp+50h] [rbp-88h]
  int v64; // [rsp+58h] [rbp-80h]
  unsigned __int64 ProtoPteAddress; // [rsp+60h] [rbp-78h]
  __int64 v66; // [rsp+68h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-68h]
  _BYTE v68[8]; // [rsp+78h] [rbp-60h] BYREF
  _QWORD v69[11]; // [rsp+80h] [rbp-58h] BYREF
  int v72; // [rsp+F0h] [rbp+18h]
  int v73; // [rsp+F8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  Process = CurrentThread->ApcState.Process;
  v4 = (__int64)&Process[1].IdealNode[12];
  v60 = MiVadPureReserve(a2);
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v69[0] = *(_QWORD *)(v3 + 72);
  v72 = MiChargeFullProcessCommitment(v6, 1LL);
  v7 = 0LL;
  v61 = 0;
  v8 = 0;
  v66 = v72;
  v9 = MiLockWorkingSetShared((__int64)&Process[1].IdealNode[12]);
  while ( 1 )
  {
    v10 = v5;
    if ( !v60 )
      goto LABEL_60;
    NextPageTable = MiGetNextPageTable(v5, v5, 0, v9, 0, (__int64)v68);
    if ( NextPageTable )
      v7 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v5 != NextPageTable )
      break;
LABEL_6:
    ProtoPteAddress = MiGetProtoPteAddress(v3, a1 >> 12, 0, v69);
    v59 = MI_READ_PTE_LOCK_FREE(v5);
    v14 = v59;
    if ( !v59 )
    {
      if ( v66 < 0 )
        goto LABEL_113;
      UsedPtesHandle = MiGetUsedPtesHandle(a1, v12, v13);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
      if ( v60 )
      {
        if ( !ProtoPteAddress )
          goto LABEL_19;
        v25 = MI_READ_PTE_LOCK_FREE(((ProtoPteAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v59 = v25;
        if ( (v25 & 1) == 0 && (v25 & 0x3E0) == 0 )
          goto LABEL_19;
      }
      v59 = MiSwizzleInvalidPte(-4294966240LL);
      v14 = v59;
      if ( MiPteInShadowRange(v5) )
      {
        if ( (unsigned int)MiPteHasShadow(v27, v26) )
        {
          if ( !HIBYTE(word_14043B26C) && (v14 & 1) != 0 )
            v26 |= 0x8000000000000000uLL;
          *(_QWORD *)v5 = v26;
          MiWritePteShadow(v5);
          goto LABEL_7;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v14 & 1) != 0 )
        {
          v26 |= 0x8000000000000000uLL;
        }
        v14 = v59;
      }
      *(_QWORD *)v5 = v26;
    }
LABEL_7:
    if ( (v14 & 1) != 0 )
    {
      v15 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v59) >> 12) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
      if ( (*(_QWORD *)(v15 + 40) & 0x200000000000000LL) == 0 || (*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) != v16 )
        goto LABEL_9;
      if ( v66 < 0 )
      {
LABEL_113:
        if ( v7 )
          MiUnlockPageTableInternal(v4, v7);
        v29 = v72;
LABEL_116:
        MiUnlockWorkingSetShared(v4, v9);
        return v29;
      }
      v30 = MiCopyOnWrite(a1);
      if ( v30 >= 0 )
      {
        v19 = 0;
        goto LABEL_20;
      }
      if ( v7 )
      {
        MiUnlockPageTableInternal(v4, v7);
        v7 = 0LL;
      }
      MiUnlockWorkingSetShared(v4, v9);
      MiCopyOnWriteCheckConditions(v4, (unsigned int)v30);
      MiLockWorkingSetShared(v4);
      v3 = a2;
    }
    else
    {
      if ( (v14 & 0x400) == 0 )
        goto LABEL_9;
      if ( !MiIsPrototypePteVadLookup(v14) )
      {
        v45 = v14;
        if ( qword_14043B180 && (v14 & 0x10) == 0 )
          v45 = v14 & ~qword_14043B180;
        if ( v45 >> 16 != v28 )
          goto LABEL_9;
      }
      if ( (int)MiMakeProtoLeafValid(v5) < 0 && v14 == MI_READ_PTE_LOCK_FREE(v5) )
      {
        v29 = v72;
        if ( v72 < 0 )
        {
          if ( v7 )
            MiUnlockPageTableInternal(v4, v7);
          goto LABEL_116;
        }
LABEL_19:
        v19 = 1;
LABEL_20:
        v8 = 1;
        v20 = *(unsigned int *)(a2 + 52);
        LODWORD(v20) = v20 & 0x7FFFFFFF;
        v21 = (((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | v20) + 1;
        *(_DWORD *)(a2 + 52) ^= (v21 ^ *(_DWORD *)(a2 + 52)) & 0x7FFFFFFF;
        *(_BYTE *)(a2 + 34) = v21 >> 31;
        if ( v19 == 1 )
        {
          v59 = MiSwizzleInvalidPte(32LL);
          if ( !MiPteInShadowRange(v5) )
            goto LABEL_22;
          if ( (unsigned int)MiPteHasShadow(v23, v22) )
          {
            v57 = v56;
            if ( !HIBYTE(word_14043B26C) && (v56 & 1) != 0 )
              v57 = v56 | 0x8000000000000000uLL;
            *(_QWORD *)v5 = v57;
            MiWritePteShadow(v5);
          }
          else
          {
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
              && (v56 & 1) != 0 )
            {
              v24 |= 0x8000000000000000uLL;
            }
LABEL_22:
            *(_QWORD *)v5 = v24;
          }
        }
LABEL_9:
        if ( v7 )
          MiUnlockPageTableInternal(v4, v7);
        MiUnlockWorkingSetShared(v4, v9);
        if ( v61 == 1 )
        {
          v31 = (unsigned __int64)&Process[1].Affinity.Bitmap[8];
          if ( (_InterlockedExchangeAdd64(
                  (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8],
                  0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v31);
          v58 = 0;
          v32 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v31) == 1 )
            SessionId = (unsigned int)MmGetSessionIdEx((__int64)v32->ApcState.Process);
          else
            SessionId = 0xFFFFFFFFLL;
          --v32->SpecialApcDisable;
          v34 = ++v32->AbAllocationRegionCount == 1;
          LODWORD(v35) = ((char)v32->AbEntrySummary | (char)v32->AbOrphanedEntrySummary) ^ 0x3F;
          v36 = !_BitScanReverse((unsigned int *)&v37, v35);
          v64 = v37;
          if ( v36 )
            goto LABEL_67;
          while ( 1 )
          {
            v38 = 1 << v37;
            v39 = v37;
            v40 = &v32->LockEntries[v39];
            v35 = ~v38 & (unsigned int)v35;
            if ( (v40->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v40->LockState.0 & 1) == 0
              && (*(_QWORD *)&v40->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v31 & 0x7FFFFFFFFFFFFFFCLL)
              && v40->LockState.SessionId == (_DWORD)SessionId )
            {
              v40->AcquiredByte &= ~1u;
              if ( v40->LockState.0 )
                break;
            }
            v36 = !_BitScanReverse((unsigned int *)&v37, v35);
            v64 = v37;
            if ( v36 )
              goto LABEL_67;
          }
          if ( !v40 )
          {
LABEL_67:
            if ( (*((_DWORD *)&v32->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v32, v31, SessionId, 0LL);
          }
          else
          {
            v40->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v40->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v32->LockEntries[v39].TreeNode, v35);
            v58 = 0;
            v58 = v40->BoostBitmap.AllFields & 0x1FFFF;
            v40->BoostBitmap.AllFields &= 0xFFFE0000;
            v40->ThreadLocalFlags &= ~1u;
            v40->LockState.0 = 0LL;
            v41 = ((char *)v40 - (char *)v32 - 800) / 96;
            if ( v34 )
              v32->AbEntrySummary |= 1 << v41;
            else
              _InterlockedOr8((volatile signed __int8 *)&v32->AbOrphanedEntrySummary, 1 << v41);
          }
          --v32->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v32, v31, (__int64)&v58);
          v36 = v32->SpecialApcDisable++ == -1;
          if ( v36 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v32->ApcState.ApcListHead[0].Flink != &v32->152 )
            KiCheckForKernelApcDelivery(v42);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        if ( !v8 && v72 >= 0 )
          MiReturnFullProcessCommitment(Process);
        return 0LL;
      }
      v3 = a2;
      if ( v7 )
      {
        MiUnlockPageTableInternal(v4, v7);
        v7 = 0LL;
      }
    }
  }
  if ( v7 )
    MiUnlockPageTableInternal(v4, v7);
  MiUnlockWorkingSetShared(v4, v9);
  if ( v66 < 0 )
    return (unsigned int)v72;
  v61 = 1;
  --CurrentThread->SpecialApcDisable;
  v43 = (unsigned __int64)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  v44 = MiCommitPageTablesForVad(v3, a1, a1);
  if ( v44 >= 0 )
  {
    v7 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 = MiLockWorkingSetShared(v4);
    v10 = v5;
LABEL_60:
    MiMakeSystemAddressValid(v10, 0);
    goto LABEL_6;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v43, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v43);
  v73 = 0;
  v46 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v43) == 1 )
    v47 = (unsigned int)MmGetSessionIdEx((__int64)v46->ApcState.Process);
  else
    v47 = 0xFFFFFFFFLL;
  --v46->SpecialApcDisable;
  v48 = ++v46->AbAllocationRegionCount;
  LODWORD(v49) = ((char)v46->AbEntrySummary | (char)v46->AbOrphanedEntrySummary) ^ 0x3F;
  v36 = !_BitScanReverse((unsigned int *)&v50, v49);
  v63 = v50;
  if ( v36 )
    goto LABEL_109;
  while ( 1 )
  {
    v51 = 1 << v50;
    v52 = v50;
    v53 = &v46->LockEntries[v52];
    v49 = ~v51 & (unsigned int)v49;
    if ( (v53->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v53->LockState.0 & 1) == 0
      && (*(_QWORD *)&v53->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v43 & 0x7FFFFFFFFFFFFFFCLL)
      && v53->LockState.SessionId == (_DWORD)v47 )
    {
      v53->AcquiredByte &= ~1u;
      if ( v53->LockState.0 )
        break;
    }
    v36 = !_BitScanReverse((unsigned int *)&v50, v49);
    v63 = v50;
    if ( v36 )
      goto LABEL_109;
  }
  if ( !v53 )
  {
LABEL_109:
    if ( (*((_DWORD *)&v46->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v46, v43, v47, 0LL);
  }
  else
  {
    v53->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v53->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v46->LockEntries[v52].TreeNode, v49);
    v73 = 0;
    v73 = v53->BoostBitmap.AllFields & 0x1FFFF;
    v53->BoostBitmap.AllFields &= 0xFFFE0000;
    v53->ThreadLocalFlags &= ~1u;
    v53->LockState.0 = 0LL;
    v54 = ((char *)v53 - (char *)v46 - 800) / 96;
    if ( v48 == 1 )
      v46->AbEntrySummary |= 1 << v54;
    else
      _InterlockedOr8((volatile signed __int8 *)&v46->AbOrphanedEntrySummary, 1 << v54);
  }
  --v46->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v46, v43, (__int64)&v73);
  v36 = v46->SpecialApcDisable++ == -1;
  if ( v36 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v46->ApcState.ApcListHead[0].Flink != &v46->152 )
    KiCheckForKernelApcDelivery(v55);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v72 >= 0 )
    MiReturnFullProcessCommitment(Process);
  return (unsigned int)v44;
}
