/*
 * XREFs of MiInsertPageInFreeOrZeroedList @ 0x1400387F0
 * Callers:
 *     MiWriteCompletePfn @ 0x14001E770 (MiWriteCompletePfn.c)
 *     MiReturnPhysicalPoolPages @ 0x140025380 (MiReturnPhysicalPoolPages.c)
 *     MiFreeLargePageMemory @ 0x140026200 (MiFreeLargePageMemory.c)
 *     MiFreeSmallPageFromMdl @ 0x140029F10 (MiFreeSmallPageFromMdl.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140036320 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiDemoteLocalLargePage @ 0x140064050 (MiDemoteLocalLargePage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080930 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteClusterSection @ 0x140081EF0 (MiDeleteClusterSection.c)
 *     MiReturnFreeZeroPage @ 0x14008228C (MiReturnFreeZeroPage.c)
 *     MiDeleteTransitionPte @ 0x140095370 (MiDeleteTransitionPte.c)
 *     MiWsleFree @ 0x1400B2BB0 (MiWsleFree.c)
 *     MmPurgeSection @ 0x1400E7D80 (MmPurgeSection.c)
 *     MiFreePageFileHashPfns @ 0x1400F0578 (MiFreePageFileHashPfns.c)
 *     MiRelinkStandbyPage @ 0x1400F0AB8 (MiRelinkStandbyPage.c)
 *     MiDrainZeroLookasides @ 0x14011AD10 (MiDrainZeroLookasides.c)
 *     MiMapPageFileHash @ 0x14014FDD8 (MiMapPageFileHash.c)
 *     MiPurgeZeroList @ 0x140151ABC (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x140151F1C (MiPurgePartitionStandby.c)
 *     MiDiscardTransitionPte @ 0x14015839C (MiDiscardTransitionPte.c)
 *     MiPurgeImageSection @ 0x140176720 (MiPurgeImageSection.c)
 *     MiReturnPfnList @ 0x140185D7C (MiReturnPfnList.c)
 *     MiLockAndInsertPageInFreeList @ 0x140188D5C (MiLockAndInsertPageInFreeList.c)
 *     MiPurgeSubsection @ 0x1402A2E18 (MiPurgeSubsection.c)
 *     MiEnableNewPfns @ 0x1402A6418 (MiEnableNewPfns.c)
 *     MiUnlinkBadPages @ 0x1402A7278 (MiUnlinkBadPages.c)
 *     MmFreeNonChargedSecurePages @ 0x1402AA6A8 (MmFreeNonChargedSecurePages.c)
 *     MiDeleteEnclavePage @ 0x1402BDD44 (MiDeleteEnclavePage.c)
 *     MiReturnEnclavePage @ 0x1402BEAD0 (MiReturnEnclavePage.c)
 *     MiPruneStandbyPages @ 0x1402C0C84 (MiPruneStandbyPages.c)
 *     MiDeleteDirectMapFixupPfn @ 0x1402C3EB0 (MiDeleteDirectMapFixupPfn.c)
 *     MiDeleteClusterPage @ 0x1402C641C (MiDeleteClusterPage.c)
 *     MiScrubNode @ 0x1402CF8B8 (MiScrubNode.c)
 *     MiTransferPartitionPageRun @ 0x1402D28E8 (MiTransferPartitionPageRun.c)
 *     MiCreateEnclaveRegions @ 0x1409BB34C (MiCreateEnclaveRegions.c)
 *     MxCreateFreePfns @ 0x1409BBD10 (MxCreateFreePfns.c)
 *     MiComputeOptimalZeroPath @ 0x1409BD284 (MiComputeOptimalZeroPath.c)
 *     MxSwapPages @ 0x1409C14C8 (MxSwapPages.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     MiCoalesceFreePages @ 0x1400390D0 (MiCoalesceFreePages.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     MiClearPfnImageVerified @ 0x140082944 (MiClearPfnImageVerified.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     MiGetPagePrivilege @ 0x1400B29B0 (MiGetPagePrivilege.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiUpdateAvailableEvents @ 0x14017F964 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     KeSetPagePrivilege @ 0x14028DE10 (KeSetPagePrivilege.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiClearFileOnlyPfn @ 0x1402B5954 (MiClearFileOnlyPfn.c)
 *     MiArePageContentsZero @ 0x1402BF958 (MiArePageContentsZero.c)
 *     MiFreeSlabPage @ 0x1402C27BC (MiFreeSlabPage.c)
 */

__int64 __fastcall MiInsertPageInFreeOrZeroedList(ULONG_PTR BugCheckParameter2, __int16 a2)
{
  ULONG_PTR v4; // rdi
  unsigned __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v12; // al
  bool v13; // zf
  __int64 v14; // r8
  unsigned __int64 v15; // r11
  char v16; // al
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  _QWORD *v20; // rdx
  unsigned __int16 v21; // r10
  __int64 v22; // r12
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // r11
  __int64 v26; // r8
  __int64 v27; // r14
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // rcx
  char v33; // cl
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 result; // rax
  unsigned __int64 v37; // rbp
  unsigned __int64 v38; // rbp
  unsigned __int64 v39; // r8
  int v40; // r12d
  __int64 v41; // rcx
  unsigned __int64 v42; // r8
  __int64 v43; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v46; // rax
  unsigned int v47; // ebp
  volatile signed __int64 *v48; // rdi
  unsigned __int64 v49; // r8
  struct _KPRCB *v50; // rcx
  _DWORD *v51; // rdx
  __int64 v52; // r9
  __int64 v53; // rdx
  signed __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned __int16 **v57; // r10
  __int64 v58; // r11
  unsigned __int16 *v59; // rdx
  unsigned int v60; // r8d
  signed __int64 v61; // rcx
  struct _KEVENT *v62; // rsi
  int v63; // eax
  signed __int32 v64[8]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v65; // [rsp+30h] [rbp-98h] BYREF
  volatile signed __int64 *v66; // [rsp+38h] [rbp-90h]
  __int64 v67; // [rsp+48h] [rbp-80h]
  _QWORD *v68; // [rsp+50h] [rbp-78h]
  unsigned __int64 v69; // [rsp+58h] [rbp-70h]
  volatile signed __int64 *v70; // [rsp+60h] [rbp-68h]
  _QWORD v71[3]; // [rsp+68h] [rbp-60h] BYREF
  char v72[16]; // [rsp+80h] [rbp-48h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+0h]
  unsigned int v74; // [rsp+D0h] [rbp+8h]
  unsigned __int64 v75; // [rsp+D0h] [rbp+8h]
  int v76; // [rsp+E0h] [rbp+18h]
  unsigned __int64 v77; // [rsp+E8h] [rbp+20h]

  v4 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v5 = *(_QWORD *)(v4 + 40);
  if ( (v5 & 0x10000000000000LL) != 0 )
  {
    MiClearPfnImageVerified(48 * BugCheckParameter2 - 0x58000000000LL);
    return MiClearFileOnlyPfn(v4);
  }
  v6 = 0;
  v7 = *(_QWORD *)(qword_14043B808 + 8 * ((v5 >> 40) & 0x3FF));
  if ( (a2 & 1) != 0 )
  {
    if ( (MiFlags & 0x80u) != 0 && (++dword_14043B92C & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(BugCheckParameter2);
      v5 = *(_QWORD *)(v4 + 40);
    }
    v9 = 0;
    v74 = 0;
    v8 = 2176LL;
  }
  else
  {
    if ( (a2 & 0x100) != 0 )
    {
      *(_QWORD *)(v4 + 24) &= ~0x4000000000000000uLL;
      *(_BYTE *)(v4 + 34) = *(_BYTE *)(v4 + 34) & 0xF8 | 5;
      *(_BYTE *)(v4 + 35) |= 0x10u;
      return MiInsertPageInList(48 * BugCheckParameter2 - 0x58000000000LL);
    }
    v8 = 2240LL;
    v9 = 1;
    v74 = 1;
  }
  v70 = (volatile signed __int64 *)(v7 + v8);
  if ( ((v5 >> 54) & 7) == 3 )
  {
    if ( (unsigned int)MiGetPagePrivilege(v4) && (int)KeSetPagePrivilege(BugCheckParameter2, v72, 16LL) < 0 )
      KeBugCheckEx(0x1Au, 0x5150BuLL, BugCheckParameter2, 0LL, 0LL);
    v9 = v74;
    *(_QWORD *)(v4 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  }
  *(_QWORD *)(v4 + 24) &= ~0x4000000000000000uLL;
  _InterlockedOr(v64, 0);
  v10 = (unsigned int)KiTbFlushTimeStamp;
  *(_BYTE *)(v4 + 35) &= 0xF8u;
  v11 = (*(_QWORD *)(v4 + 24) ^ (v10 << 56)) & 0xF00000000000000LL;
  *(_QWORD *)(v4 + 8) |= 0x8000000000000000uLL;
  *(_QWORD *)(v4 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
  v12 = *(_BYTE *)(v4 + 34);
  *(_QWORD *)(v4 + 24) ^= v11;
  *(_BYTE *)(v4 + 34) = v12 & 0xC7;
  v13 = byte_14043EC9E == 0;
  *(_BYTE *)(v4 + 35) &= ~0x20u;
  if ( !v13 && _bittest64((const signed __int64 *)qword_14043F2D8, BugCheckParameter2 >> 9) )
    return MiFreeSlabPage(v4);
  if ( (*(_BYTE *)(v4 + 35) & 0x40) != 0 )
    return MiInsertPageInList(v4);
  v14 = dword_14043B148 & (unsigned int)BugCheckParameter2 | (((*(_QWORD *)(v4 + 40) >> 36) & 3) << byte_14043B10A) | ((unsigned int)(*(_QWORD *)(v4 + 40) >> 58) << byte_14043B109);
  v15 = (unsigned int)v14;
  v69 = *(_QWORD *)(v7 + 16) + 1984 * ((unsigned __int64)(unsigned int)v14 >> byte_14043B109);
  v16 = *(_BYTE *)(v4 + 34);
  v67 = v14;
  v77 = (unsigned int)v14;
  *(_BYTE *)(v4 + 34) = v9 | v16 & 0xF8;
  v76 = a2 & 0x400;
  if ( (a2 & 0x400) != 0 )
    v17 = 0xFFFFFFFD00000000uLL;
  else
    v17 = 0LL;
  v18 = *(_QWORD *)(v4 + 16);
  if ( v18 )
  {
    if ( qword_14043B180 )
    {
      if ( (v18 & 0x10) != 0 )
        LODWORD(v18) = v18 & 0xFFFFFFEF;
      else
        LODWORD(v18) = ~(_DWORD)qword_14043B180 & v18;
    }
  }
  else
  {
    LODWORD(v18) = 0;
  }
  v19 = v17 | (unsigned int)v18;
  if ( qword_14043B180 )
  {
    if ( (v19 & qword_14043B180) != 0 )
      v19 |= 0x10uLL;
    else
      v19 |= qword_14043B180;
  }
  *(_QWORD *)(v4 + 16) = v19;
  if ( (a2 & 0x40) != 0 )
    goto LABEL_47;
  if ( (a2 & 0x200) == 0 )
  {
    result = MiCoalesceFreePages(BugCheckParameter2);
    if ( (_DWORD)result == 1 )
      return result;
    LODWORD(v14) = v67;
    v9 = v74;
    v15 = v77;
  }
  if ( (a2 & 0x400) != 0 )
    goto LABEL_47;
  v20 = (_QWORD *)(*(_QWORD *)(v7 + 16) + 1984 * (v15 >> byte_14043B109));
  v21 = (unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)((unsigned int)v14 >> byte_14043B10A);
  v22 = 16 * v15;
  v23 = *(_QWORD *)(v7 + 4136 + 8LL * v9);
  v68 = (_QWORD *)(v7 + 4136 + 8LL * v9);
  if ( *(unsigned __int16 *)(16 * v15 + v23) >= *(int *)(v7 + 6556) )
    goto LABEL_47;
  v24 = 0LL;
  v25 = 0LL;
  do
  {
    if ( (unsigned int)MmNumberOfChannels > 1 )
      v26 = v20[2 * v21 + 228 + v25];
    else
      v26 = v20[v25 + 220];
    v27 = v24 + v26;
    if ( v21 == 4 )
    {
      if ( v25 == 2 )
      {
        v28 = *v20 + v20[1];
        v29 = v20[34] + v20[35];
      }
      else
      {
        v28 = v20[v25];
        v29 = v20[v25 + 34];
      }
    }
    else
    {
      v28 = v20[4 * v25 + 2 + v21] + v20[4 * v25 + 10 + v21];
      v29 = v20[4 * v25 + 36 + v21] + v20[4 * v25 + 44 + v21];
    }
    v30 = (v29 + (v28 << 9)) << 9;
    if ( v21 == 4 )
    {
      if ( v25 == 2 )
        v31 = v20[68] + v20[69];
      else
        v31 = v20[v25 + 68];
    }
    else
    {
      v31 = v20[4 * v25 + 70 + v21] + v20[4 * v25 + 78 + v21];
    }
    ++v25;
    v24 = v27 + 16 * v31 + v30;
  }
  while ( v25 <= ((~(2 * (v9 ^ 1) + 4096) >> 1) & 1) );
  if ( v24 <= 0x40 )
  {
LABEL_47:
    v37 = _InterlockedIncrement64((volatile signed __int64 *)(v7 + 7296));
    if ( v37 > 0x420 )
    {
LABEL_48:
      v38 = v37 - 1;
      if ( v38 == *(_QWORD *)(v7 + 6120) || v38 == *(_QWORD *)(v7 + 6128) )
        MiUpdateAvailableEvents(v7);
      v39 = v69;
      _InterlockedIncrement64((volatile signed __int64 *)(v69 + 8LL * v74 + 1760));
      v40 = v67;
      if ( (unsigned int)MmNumberOfChannels > 1 )
        _InterlockedIncrement64((volatile signed __int64 *)(v39
                                                          + 8
                                                          * (v74
                                                           + 2LL
                                                           * ((unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)((unsigned int)v67 >> byte_14043B10A)))
                                                          + 1824));
      v41 = *(_QWORD *)(v7 + 8LL * v74 + 2112);
      v42 = v77;
      v65 = 0LL;
      v43 = v41 + 40 * v77;
      v66 = (volatile signed __int64 *)(v43 + 32);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v63 = SchedulerAssist[5];
          SchedulerAssist[5] = v63 + 1;
          if ( v63 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v42 = v77;
          }
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v65, v43 + 32);
      }
      else
      {
        if ( !_InterlockedExchange64((volatile __int64 *)(v43 + 32), (__int64)&v65) )
          goto LABEL_55;
        KxWaitForLockOwnerShip(&v65);
      }
      v42 = v77;
LABEL_55:
      v46 = *(_QWORD *)(v43 + 16);
      v47 = v74;
      if ( v46 == 0xFFFFFFFFFLL )
      {
        _InterlockedOr(
          (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v7 + 16)
                                                + 1984 * (v42 >> byte_14043B109)
                                                + 16 * (v74 + 104LL)
                                                + 8)
                                    + 4 * ((unsigned __int64)(v40 & (unsigned int)dword_14043B148) >> 5)),
          1 << (v40 & dword_14043B148 & 0x1F));
        *(_QWORD *)(v4 + 24) |= 0xFFFFFFFFFuLL;
        *(_QWORD *)v4 |= 0xFFFFFFFFFuLL;
        *(_QWORD *)(v43 + 16) = BugCheckParameter2;
        *(_QWORD *)(v43 + 24) = BugCheckParameter2;
      }
      else if ( v74 == 1 || v76 )
      {
        v55 = 48LL * *(_QWORD *)(v43 + 24);
        *(_QWORD *)(v4 + 24) ^= (*(_QWORD *)(v4 + 24) ^ (v55 / 48)) & 0xFFFFFFFFFLL;
        *(_QWORD *)(v55 - 0x58000000000LL) ^= (BugCheckParameter2 ^ *(_QWORD *)(v55 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
        *(_QWORD *)(v43 + 24) = BugCheckParameter2;
        *(_QWORD *)v4 |= 0xFFFFFFFFFuLL;
      }
      else
      {
        v52 = 48 * v46;
        *(_QWORD *)(v4 + 24) |= 0xFFFFFFFFFuLL;
        v53 = *(_QWORD *)(48 * v46 - 0x58000000000LL + 24);
        v54 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v52 - 0x58000000000LL + 24),
                BugCheckParameter2 & 0xFFFFFFFFFLL | v53 & 0xFFFFFFF000000000uLL,
                *(_QWORD *)(v52 - 0x58000000000LL + 24));
        if ( v53 != v54 )
        {
          do
          {
            v61 = v54;
            v54 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v52 - 0x58000000000LL + 24),
                    BugCheckParameter2 & 0xFFFFFFFFFLL | v54 & 0xFFFFFFF000000000uLL,
                    v54);
          }
          while ( v61 != v54 );
        }
        *(_QWORD *)(v43 + 16) = BugCheckParameter2;
        *(_QWORD *)v4 ^= (*(_QWORD *)v4 ^ (v52 / 48)) & 0xFFFFFFFFFLL;
      }
      ++*(_QWORD *)v43;
      v48 = v70;
      v49 = _InterlockedIncrement64(v70);
      v75 = v49;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        result = KiReleaseQueuedSpinLockInstrumented(&v65, retaddr);
        v49 = v75;
      }
      else
      {
        _m_prefetchw(&v65);
        result = v65;
        if ( !v65 )
        {
          result = _InterlockedCompareExchange64(v66, 0LL, (signed __int64)&v65);
          if ( (__int64 *)result == &v65 )
            goto LABEL_60;
          result = KxWaitForLockChainValid(&v65);
          v49 = v75;
        }
        v65 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
      }
LABEL_60:
      v50 = KeGetCurrentPrcb();
      v51 = v50->SchedulerAssist;
      if ( v51 )
      {
        if ( v50->NestingLevel <= 1u )
        {
          result = (unsigned int)(v51[5] - 1);
          v51[5] = result;
          if ( !(_DWORD)result )
          {
            result = KiRemoveSystemWorkPriorityKick(v50);
            v49 = v75;
          }
        }
      }
      if ( v47 == 1 && !*(_BYTE *)(v7 + 6552) && v49 >= 8 )
      {
        result = MiSufficientAvailablePages(v7, 160LL);
        if ( (_DWORD)result )
        {
          v65 = 0LL;
          v66 = (volatile signed __int64 *)(v7 + 4864);
          KxAcquireQueuedSpinLock(&v65);
          if ( !*(_BYTE *)(v7 + 6552) && *v48 >= 8uLL )
          {
            *(_BYTE *)(v7 + 6552) = 1;
            KeSetEvent((PRKEVENT)(v7 + 6528), 0, 0);
          }
          return KxReleaseQueuedSpinLock(&v65);
        }
      }
      return result;
    }
    switch ( v37 )
    {
      case 0xA0uLL:
        v56 = 4904LL;
        break;
      case 0x420uLL:
        v56 = 4936LL;
        break;
      case 0x22uLL:
        v56 = 4872LL;
        break;
      default:
        goto LABEL_48;
    }
    v71[0] = 0LL;
    v71[1] = v7 + 4864;
    v62 = (struct _KEVENT *)(v7 + v56);
    KxAcquireQueuedSpinLock(v71);
    KeSetEvent(v62, 0, 0);
    ++v62[1].Header.LockNV;
    KxReleaseQueuedSpinLock(v71);
    goto LABEL_48;
  }
  v32 = *(_QWORD *)(v7 + 7296);
  if ( v32 < 0x420 )
  {
    v57 = (unsigned __int16 **)(v7 + 4136);
    v58 = 0LL;
    while ( 1 )
    {
      v59 = *v57;
      v60 = 0;
      if ( dword_14043B14C )
        break;
LABEL_88:
      ++v58;
      ++v57;
      if ( v58 > 1 )
        goto LABEL_47;
    }
    while ( 1 )
    {
      v32 += *v59;
      if ( v32 >= 0x420 )
        break;
      ++v60;
      v59 += 8;
      if ( v60 >= dword_14043B14C )
        goto LABEL_88;
    }
  }
  v33 = *(_BYTE *)(v4 + 34);
  if ( (v33 & 7) != 5 )
    *(_BYTE *)(v4 + 34) = v33 & 0xF8 | 5;
  v34 = ((unsigned __int64)v9 << 12) | *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFF0FFFuLL;
  *(_QWORD *)(v4 + 16) = v34;
  if ( v34 )
  {
    v6 = v34;
    if ( qword_14043B180 )
    {
      if ( (v34 & 0x10) != 0 )
        v6 = v34 & 0xFFFFFFEF;
      else
        v6 = v34 & ~(_DWORD)qword_14043B180;
    }
  }
  v35 = v6 | 0xFFFFFFFE00000000uLL;
  if ( qword_14043B180 )
  {
    if ( (qword_14043B180 & v35) != 0 )
      v35 = v6 | 0xFFFFFFFE00000010uLL;
    else
      v35 |= qword_14043B180;
  }
  *(_QWORD *)(v4 + 16) = v35;
  return (__int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v22 + *v68), (PSLIST_ENTRY)v4);
}
