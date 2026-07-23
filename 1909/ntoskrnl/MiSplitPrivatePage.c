/*
 * XREFs of MiSplitPrivatePage @ 0x140020550
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1405ED100 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x14001F890 (MiIncreaseUsedPtesCount.c)
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x14002DEA0 (MiGetUsedPtesHandle.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     MiVadPureReserve @ 0x140052AE0 (MiVadPureReserve.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiGetNextPageTable @ 0x14005E020 (MiGetNextPageTable.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1400A7E70 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MiIsPrototypePteVadLookup @ 0x1400CBD20 (MiIsPrototypePteVadLookup.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiMakeProtoLeafValid @ 0x140128F14 (MiMakeProtoLeafValid.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E54BC (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCommitment @ 0x1405ECF80 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x140605690 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x140605760 (MiCommitPageTablesForVad.c)
 */

__int64 __fastcall MiSplitPrivatePage(ULONG_PTR a1, __int64 a2)
{
  unsigned __int16 *v4; // r12
  ULONG_PTR v5; // r15
  __int64 v6; // r9
  __int64 v7; // r14
  int v8; // r13d
  unsigned __int8 v9; // bl
  ULONG_PTR v10; // rcx
  unsigned __int64 NextPageTable; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 UsedPtesHandle; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  int v26; // eax
  unsigned __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r9
  unsigned int v35; // ebx
  ULONG_PTR v36; // rsi
  struct _KTHREAD *v37; // rdi
  ULONG_PTR SessionId; // r9
  unsigned __int8 v39; // bp
  unsigned int v40; // edx
  bool v41; // zf
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  _KLOCK_ENTRY *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  ULONG_PTR v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // r14d
  __int64 v55; // rax
  struct _KTHREAD *v56; // rdi
  ULONG_PTR v57; // r9
  unsigned __int8 v58; // bp
  unsigned int v59; // edx
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  _KLOCK_ENTRY *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rax
  __int64 v70; // [rsp+30h] [rbp-A8h] BYREF
  int v71; // [rsp+38h] [rbp-A0h]
  int v72; // [rsp+3Ch] [rbp-9Ch] BYREF
  int v73; // [rsp+40h] [rbp-98h]
  int v74; // [rsp+44h] [rbp-94h] BYREF
  unsigned __int64 ProtoPteAddress; // [rsp+48h] [rbp-90h]
  _KPROCESS *Process; // [rsp+50h] [rbp-88h]
  int v77; // [rsp+58h] [rbp-80h]
  int v78; // [rsp+60h] [rbp-78h]
  __int64 v79; // [rsp+68h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-68h]
  char v81[8]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v82[11]; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int8 v85; // [rsp+F0h] [rbp+18h]
  int v86; // [rsp+F8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v4 = &Process[1].IdealNode[6];
  v71 = MiVadPureReserve(a2);
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v82[0] = *(_QWORD *)(a2 + 72);
  v7 = 0LL;
  v86 = MiChargeFullProcessCommitment(v6, 1LL);
  v8 = 0;
  v73 = 0;
  v79 = v86;
  v9 = MiLockWorkingSetShared(&Process[1].IdealNode[6]);
  v85 = v9;
  while ( 1 )
  {
    v10 = v5;
    if ( !v71 )
      goto LABEL_60;
    NextPageTable = MiGetNextPageTable(v5, v5, 0, v9, 0, (__int64)v81);
    if ( NextPageTable )
      v7 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v5 != NextPageTable )
      break;
LABEL_6:
    ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 0LL, v82);
    v70 = MI_READ_PTE_LOCK_FREE(v5);
    v12 = v70;
    if ( !v70 )
    {
      if ( v79 < 0 )
        goto LABEL_113;
      UsedPtesHandle = MiGetUsedPtesHandle(a1);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
      v22 = ProtoPteAddress;
      if ( v71 )
      {
        if ( !ProtoPteAddress )
          goto LABEL_19;
        v30 = MI_READ_PTE_LOCK_FREE(((ProtoPteAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v70 = v30;
        if ( (v30 & 1) == 0 && (v30 & 0x3E0) == 0 )
          goto LABEL_19;
      }
      v70 = MiSwizzleInvalidPte(-4294966240LL, v20, v21, v22);
      v12 = v70;
      if ( (unsigned int)MiPteInShadowRange(v5, v70, v31, v32) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_1404658EC) && (v12 & 1) != 0 )
            v33 |= 0x8000000000000000uLL;
          *(_QWORD *)v5 = v33;
          MiWritePteShadow(v5, v33);
          goto LABEL_7;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        {
          *(_QWORD *)v5 = v12;
          v12 = v70;
          goto LABEL_7;
        }
        v41 = (v12 & 1) == 0;
        v12 = v70;
        if ( !v41 )
          v33 |= 0x8000000000000000uLL;
      }
      *(_QWORD *)v5 = v33;
    }
LABEL_7:
    if ( (v12 & 1) != 0 )
    {
      v13 = MI_READ_PTE_LOCK_FREE(&v70);
      if ( (*(_QWORD *)(48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0x200000000000000LL) == 0
        || (*(_QWORD *)(48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 8) | 0x8000000000000000uLL) != v14 )
      {
        goto LABEL_9;
      }
      if ( v79 < 0 )
      {
LABEL_113:
        if ( v7 )
          MiUnlockPageTableInternal(v4);
        v35 = v86;
LABEL_116:
        MiUnlockWorkingSetShared(v4, v85);
        return v35;
      }
      LODWORD(ProtoPteAddress) = MiCopyOnWrite(a1);
      if ( (ProtoPteAddress & 0x80000000) == 0LL )
      {
        v23 = 0LL;
        goto LABEL_20;
      }
      if ( v7 )
      {
        MiUnlockPageTableInternal(v4);
        v7 = 0LL;
      }
      v9 = v85;
      MiUnlockWorkingSetShared(v4, v85);
      MiCopyOnWriteCheckConditions(v4, (unsigned int)ProtoPteAddress);
      MiLockWorkingSetShared(v4);
    }
    else
    {
      if ( (v12 & 0x400) == 0 )
        goto LABEL_9;
      if ( !(unsigned int)MiIsPrototypePteVadLookup(v12) )
      {
        v55 = v12;
        if ( qword_140465800 && (v12 & 0x10) == 0 )
          v55 = v12 & ~qword_140465800;
        if ( v55 >> 16 != v34 )
          goto LABEL_9;
      }
      if ( (int)MiMakeProtoLeafValid(v5) < 0 && v12 == MI_READ_PTE_LOCK_FREE(v5) )
      {
        v35 = v86;
        if ( v86 < 0 )
        {
          if ( v7 )
            MiUnlockPageTableInternal(v4);
          goto LABEL_116;
        }
LABEL_19:
        v23 = 1LL;
LABEL_20:
        v8 = 1;
        v24 = *(unsigned int *)(a2 + 52);
        LODWORD(v24) = v24 & 0x7FFFFFFF;
        v25 = (((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | v24) + 1;
        v26 = v25 ^ *(_DWORD *)(a2 + 52);
        v27 = v25 >> 31;
        *(_DWORD *)(a2 + 52) ^= v26 & 0x7FFFFFFF;
        *(_BYTE *)(a2 + 34) = v27;
        if ( (_DWORD)v23 == 1 )
        {
          v70 = MiSwizzleInvalidPte(32LL, v27, a2, v23);
          if ( !(unsigned int)MiPteInShadowRange(v5, v70, v70, v28) )
            goto LABEL_22;
          if ( (unsigned int)MiPteHasShadow() )
          {
            v69 = v68;
            if ( !HIBYTE(word_1404658EC) && (v68 & 1) != 0 )
              v69 = v68 | 0x8000000000000000uLL;
            *(_QWORD *)v5 = v69;
            MiWritePteShadow(v5, v69);
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
            if ( (v68 & 1) != 0 )
              v29 |= 0x8000000000000000uLL;
LABEL_22:
            *(_QWORD *)v5 = v29;
          }
          else
          {
            *(_QWORD *)v5 = v68;
          }
        }
LABEL_9:
        if ( v7 )
          MiUnlockPageTableInternal(v4);
        MiUnlockWorkingSetShared(v4, v85);
        if ( v73 == 1 )
        {
          v36 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
          if ( (_InterlockedExchangeAdd64(
                  (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8],
                  0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v36);
          v74 = 0;
          v37 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v36, v15, v16, v17) == 1 )
            SessionId = (unsigned int)MmGetSessionIdEx(v37->ApcState.Process);
          else
            SessionId = 0xFFFFFFFFLL;
          --v37->SpecialApcDisable;
          v39 = ++v37->AbAllocationRegionCount;
          v40 = ((char)v37->AbEntrySummary | (char)v37->AbOrphanedEntrySummary) ^ 0x3F;
          v41 = !_BitScanReverse((unsigned int *)&v42, v40);
          v78 = v42;
          if ( v41 )
            goto LABEL_67;
          while ( 1 )
          {
            v43 = 1 << v42;
            v44 = v42;
            v45 = &v37->LockEntries[v44];
            v40 &= ~v43;
            if ( (v45->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v45->LockState.0 & 1) == 0
              && (*(_QWORD *)&v45->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v36 & 0x7FFFFFFFFFFFFFFCLL)
              && v45->LockState.SessionId == (_DWORD)SessionId )
            {
              v45->AcquiredByte &= ~1u;
              if ( v45->LockState.0 )
                break;
            }
            v41 = !_BitScanReverse((unsigned int *)&v42, v40);
            v78 = v42;
            if ( v41 )
              goto LABEL_67;
          }
          if ( !v45 )
          {
LABEL_67:
            if ( (*((_DWORD *)&v37->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v37, v36, SessionId, 0LL);
          }
          else
          {
            v45->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v45->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v37->LockEntries[v44].TreeNode);
            v74 = v45->BoostBitmap.AllFields & 0x1FFFF;
            v45->BoostBitmap.AllFields &= 0xFFFE0000;
            v45->ThreadLocalFlags &= ~1u;
            v45->LockState.0 = 0LL;
            v46 = ((char *)v45 - (char *)v37 - 800) / 96;
            if ( v39 == 1 )
              v37->AbEntrySummary |= 1 << v46;
            else
              _InterlockedOr8((volatile signed __int8 *)&v37->AbOrphanedEntrySummary, 1 << v46);
          }
          --v37->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(v37, v36, &v74);
          v41 = v37->SpecialApcDisable++ == -1;
          if ( v41 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
            KiCheckForKernelApcDelivery();
          KiLeaveGuardedRegionUnsafe(CurrentThread, v47, v48, v49);
        }
        if ( !v8 && v86 >= 0 )
          MiReturnFullProcessCommitment(Process, 1LL);
        return 0LL;
      }
      v9 = v85;
      if ( v7 )
      {
        MiUnlockPageTableInternal(v4);
        v7 = 0LL;
      }
    }
  }
  if ( v7 )
    MiUnlockPageTableInternal(v4);
  MiUnlockWorkingSetShared(v4, v9);
  if ( v79 < 0 )
    return (unsigned int)v86;
  v73 = 1;
  --CurrentThread->SpecialApcDisable;
  v50 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  v54 = MiCommitPageTablesForVad(a2, a1);
  if ( v54 >= 0 )
  {
    v7 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v85 = MiLockWorkingSetShared(v4);
    v10 = v5;
LABEL_60:
    MiMakeSystemAddressValid(v10, 0);
    goto LABEL_6;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v50, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v50);
  v72 = 0;
  v56 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v50, v51, v52, v53) == 1 )
    v57 = (unsigned int)MmGetSessionIdEx(v56->ApcState.Process);
  else
    v57 = 0xFFFFFFFFLL;
  --v56->SpecialApcDisable;
  v58 = ++v56->AbAllocationRegionCount;
  v59 = ((char)v56->AbEntrySummary | (char)v56->AbOrphanedEntrySummary) ^ 0x3F;
  v41 = !_BitScanReverse((unsigned int *)&v60, v59);
  v77 = v60;
  if ( v41 )
    goto LABEL_109;
  while ( 1 )
  {
    v61 = 1 << v60;
    v62 = v60;
    v63 = &v56->LockEntries[v62];
    v59 &= ~v61;
    if ( (v63->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v63->LockState.0 & 1) == 0
      && (*(_QWORD *)&v63->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v50 & 0x7FFFFFFFFFFFFFFCLL)
      && v63->LockState.SessionId == (_DWORD)v57 )
    {
      v63->AcquiredByte &= ~1u;
      if ( v63->LockState.0 )
        break;
    }
    v41 = !_BitScanReverse((unsigned int *)&v60, v59);
    v77 = v60;
    if ( v41 )
      goto LABEL_109;
  }
  if ( !v63 )
  {
LABEL_109:
    if ( (*((_DWORD *)&v56->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v56, v50, v57, 0LL);
  }
  else
  {
    v63->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v63->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v56->LockEntries[v62].TreeNode);
    v72 = v63->BoostBitmap.AllFields & 0x1FFFF;
    v63->BoostBitmap.AllFields &= 0xFFFE0000;
    v63->ThreadLocalFlags &= ~1u;
    v63->LockState.0 = 0LL;
    v64 = ((char *)v63 - (char *)v56 - 800) / 96;
    if ( v58 == 1 )
      v56->AbEntrySummary |= 1 << v64;
    else
      _InterlockedOr8((volatile signed __int8 *)&v56->AbOrphanedEntrySummary, 1 << v64);
  }
  --v56->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v56, v50, &v72);
  v41 = v56->SpecialApcDisable++ == -1;
  if ( v41 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v56->ApcState.ApcListHead[0].Flink != &v56->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(CurrentThread, v65, v66, v67);
  if ( v86 >= 0 )
    MiReturnFullProcessCommitment(Process, 1LL);
  return (unsigned int)v54;
}
