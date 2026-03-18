/*
 * XREFs of MmAccessFault @ 0x1400CA7B0
 * Callers:
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTablePte @ 0x14004A9F0 (MiGetNextPageTablePte.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x140054900 (MiCheckProtoPtePageState.c)
 *     MiInPagePageTable @ 0x14005D730 (MiInPagePageTable.c)
 *     MmCopyToCachedPage @ 0x14006E830 (MmCopyToCachedPage.c)
 *     MiProbeLeafPteAccess @ 0x14008F7B0 (MiProbeLeafPteAccess.c)
 *     MiInitializeImageProtos @ 0x1400A2264 (MiInitializeImageProtos.c)
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     MiDeleteSubsectionPages @ 0x1400DC990 (MiDeleteSubsectionPages.c)
 *     MiWalkVaRange @ 0x1400DE274 (MiWalkVaRange.c)
 *     MiSectionCreated @ 0x1400E05D0 (MiSectionCreated.c)
 *     MiInPageSingleKernelStack @ 0x1400E3774 (MiInPageSingleKernelStack.c)
 *     MiFaultInProbeAddress @ 0x1400EEE90 (MiFaultInProbeAddress.c)
 *     MiReleaseOutSwapReservations @ 0x1400F47D4 (MiReleaseOutSwapReservations.c)
 *     MiPrefetchVirtualMemory @ 0x1400F5100 (MiPrefetchVirtualMemory.c)
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400F7144 (MiMakeDriverPagesPrivate.c)
 *     MiMakeProtoAddressValid @ 0x14010265C (MiMakeProtoAddressValid.c)
 *     MmProtectPool @ 0x140124AE4 (MmProtectPool.c)
 *     MiMakeImageReadOnly @ 0x140128B78 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x140138800 (MiDeletePerSessionProtos.c)
 *     MiLockPagedAddress @ 0x140142C78 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14015520C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiPurgeImageSection @ 0x14015C138 (MiPurgeImageSection.c)
 *     KiPageFault @ 0x1401D1800 (KiPageFault.c)
 *     MiLockDriverPageRange @ 0x1402BD4B4 (MiLockDriverPageRange.c)
 *     MiInitializeDynamicPfns @ 0x1402BDEDC (MiInitializeDynamicPfns.c)
 *     MiEliminateStaleExtents @ 0x1402CB8E8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x1402CB9CC (MiEnableLargeSubsection.c)
 *     MiInitializeProtoPfn @ 0x1402DEA90 (MiInitializeProtoPfn.c)
 *     ExpSvmServicePageFault @ 0x14033E640 (ExpSvmServicePageFault.c)
 *     MiInitializePrototypePtes @ 0x140689274 (MiInitializePrototypePtes.c)
 *     MmVirtualAccessFault @ 0x140892F5C (MmVirtualAccessFault.c)
 * Callees:
 *     MiIssueHardFault @ 0x140007100 (MiIssueHardFault.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiSystemFault @ 0x140075120 (MiSystemFault.c)
 *     MiSufficientAvailablePages @ 0x14007D060 (MiSufficientAvailablePages.c)
 *     MiUnlockSystemVa @ 0x1400A15F4 (MiUnlockSystemVa.c)
 *     MiInitializePageFaultPacket @ 0x1400A48EC (MiInitializePageFaultPacket.c)
 *     MiGetProtoPteAddress @ 0x1400C7FF0 (MiGetProtoPteAddress.c)
 *     MiUserFault @ 0x1400CADF0 (MiUserFault.c)
 *     MiDispatchFault @ 0x1400CBFD0 (MiDispatchFault.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiIsRetryIoStatus @ 0x1400DFB50 (MiIsRetryIoStatus.c)
 *     MiGetPageTableLockBuffer @ 0x1400FE0EC (MiGetPageTableLockBuffer.c)
 *     KeInvalidAccessAllowed @ 0x1401154F0 (KeInvalidAccessAllowed.c)
 *     MiRaisedIrqlFault @ 0x140129040 (MiRaisedIrqlFault.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14012A24C (MiEmptyDeferredWorkingSetEntries.c)
 *     MiReleaseFaultCharges @ 0x14013318C (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x140133854 (MiRetainSubsection.c)
 *     MiDeprioritizeVad @ 0x14013B5DC (MiDeprioritizeVad.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiFaultGetFileExtents @ 0x1402D2608 (MiFaultGetFileExtents.c)
 *     MiReleaseFaultSynchronization @ 0x1402D3010 (MiReleaseFaultSynchronization.c)
 *     MiReplenishSlabAllocator @ 0x1402DCEC4 (MiReplenishSlabAllocator.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E575C (MiCopyOnWriteCheckConditions.c)
 *     MiWaitForFreePage @ 0x1402E5A00 (MiWaitForFreePage.c)
 *     MiFreeTransitionPageHeatList @ 0x1402EBBF8 (MiFreeTransitionPageHeatList.c)
 *     MiProcessTransitionHeatBatch @ 0x1402EBFE8 (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x1402EC248 (MiReplenishTransitionPageHeatList.c)
 *     EtwTracePageFault @ 0x14032DDBC (EtwTracePageFault.c)
 *     MiHandleEnclaveFault @ 0x140892F00 (MiHandleEnclaveFault.c)
 */

__int64 __fastcall MmAccessFault(
        ULONG_PTR BugCheckParameter2,
        signed __int64 BugCheckParameter1,
        char a3,
        ULONG_PTR a4)
{
  int v8; // ecx
  unsigned int v9; // r15d
  unsigned int FileExtents; // ebx
  __int64 DeepFreezeStartTime; // r8
  volatile signed __int64 *v12; // r9
  ULONG_PTR v13; // rdx
  signed __int64 *v14; // rcx
  __int64 v15; // rdi
  char v16; // dl
  signed __int64 v17; // rdx
  bool v18; // zf
  signed __int64 v19; // rax
  char v20; // al
  unsigned __int64 v21; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 Address; // rax
  char v31; // r8
  __int64 ProtoPteAddress; // rax
  char v33; // al
  _BYTE *v34; // r14
  unsigned __int64 v35; // rbx
  _BYTE *v36; // rax
  __int64 v37; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  int *v39; // rdx
  signed __int32 v40; // eax
  int v41; // edx
  signed __int32 v42; // ett
  __int64 v43; // rax
  __int64 v44; // rcx
  struct _KTHREAD *v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rbx
  unsigned __int64 v48; // rdx
  int v49; // ecx
  __int64 v50; // r8
  int v51; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR v52; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v53[16]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v54[18]; // [rsp+C0h] [rbp-40h] BYREF

  memset(v54, 0, 0x88uLL);
  if ( (BugCheckParameter2 & 9) == 9 )
    KeBugCheckEx(0x1Au, 0x61941uLL, BugCheckParameter1, BugCheckParameter2, a4);
  if ( BugCheckParameter1 >> 47 != -1 && BugCheckParameter1 >> 47 != 0 )
  {
    if ( a3 == 1 )
      return 3221225477LL;
    v36 = (_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (a4 & 1) == 0 )
      goto LABEL_103;
    if ( *v36 == 1 )
      return 3221225477LL;
    if ( (a4 & 1) == 0 )
      goto LABEL_103;
    if ( *v36 == 3 )
      return 3221225477LL;
    if ( (a4 & 1) == 0 )
    {
LABEL_103:
      if ( (unsigned __int8)KeInvalidAccessAllowed(a4) == 1 )
        return 3221225477LL;
    }
    KeBugCheckEx(0x50u, BugCheckParameter1, BugCheckParameter2, a4, 4uLL);
  }
  if ( (BugCheckParameter2 & 0x8000) != 0 )
  {
    if ( a3 == 1 )
      return MiHandleEnclaveFault(BugCheckParameter1);
    else
      return 3221226658LL;
  }
  memset(&v54[7], 0, 0x50uLL);
  v54[3] = (((unsigned __int64)BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v54[4] = ((v54[3] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v54[5] = ((v54[4] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v54[6] = ((v54[5] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = v54[10];
  if ( (BugCheckParameter2 & 0x40) != 0 )
  {
    v8 = LODWORD(v54[10]) | 0x20;
    BugCheckParameter2 &= ~2uLL;
  }
  v54[1] = BugCheckParameter2;
  v54[0] = BugCheckParameter1;
  v54[2] = a4;
  LODWORD(v54[10]) = ((unsigned __int8)v8 ^ (unsigned __int8)(a3 << 6)) & 0x40 ^ v8;
  if ( KeGetCurrentIrql() > 1u )
    return MiRaisedIrqlFault(v54);
  while ( 1 )
  {
    v9 = 4096;
    if ( (unsigned __int64)BugCheckParameter1 < 0xFFFF800000000000uLL
      || (v24 = MiSystemFault(v54), FileExtents = v24, v24 == 192) )
    {
      FileExtents = MiUserFault(v54);
      if ( FileExtents != -1073741802 )
        goto LABEL_24;
    }
    else if ( v24 != -1073741802 )
    {
      goto LABEL_31;
    }
    FileExtents = MiDispatchFault(v54, &v52);
    if ( FileExtents == -1073741802 )
    {
      v29 = v54[0];
      if ( v54[0] < 0xFFFF800000000000uLL
        && v54[12] != qword_140465A10
        && (!qword_140465A18 || v54[12] != qword_140465A18) )
      {
        Address = v54[11];
        if ( !v54[11] )
        {
          Address = MiLocateAddress(v54[0]);
          v29 = v54[0];
          v54[11] = Address;
        }
        v31 = 4;
        if ( (v54[10] & 0x100) != 0 )
          v31 = 2;
        ProtoPteAddress = MiGetProtoPteAddress(Address, v29 >> 12, v31, &v54[13]);
        if ( !ProtoPteAddress )
        {
          MiReleaseFaultSynchronization(v54);
          v54[12] = 0LL;
          FileExtents = -1073741819;
          goto LABEL_56;
        }
        if ( v54[12] != ProtoPteAddress )
          v54[12] = ProtoPteAddress;
        MiRetainSubsection(v54[13]);
      }
      LODWORD(v54[10]) &= ~0x100u;
      FileExtents = 0;
    }
    else
    {
      v13 = v52;
      if ( v52 )
      {
        v25 = *(_QWORD *)(v52 + 256);
        v9 = *(_DWORD *)(v52 + 312);
        if ( v25 )
          v9 = *(_DWORD *)(v25 + 40);
        if ( a3 == 1 )
          *(_DWORD *)(v52 + 192) |= 0x40000u;
        if ( (*(_DWORD *)(v13 + 192) & 1) != 0 && *(int *)(v13 + 80) >= 0 )
        {
          FileExtents = MiFaultGetFileExtents(v54);
          v54[12] = 0LL;
          goto LABEL_24;
        }
        FileExtents = MiIssueHardFault((__int64)v54, v13, DeepFreezeStartTime, (__int64)v12);
      }
      v54[12] = 0LL;
    }
    if ( (v54[10] & 0x10) != 0 )
    {
      memset(v53, 0, sizeof(v53));
      *(_OWORD *)&v53[3] = *(_OWORD *)&v54[7];
      v53[5] = v54[9];
      MiUnlockSystemVa((__int64)v53, v37);
      LODWORD(v54[10]) &= ~0x10u;
      goto LABEL_24;
    }
    v14 = (signed __int64 *)v54[9];
    v15 = v54[7];
    if ( v54[9] )
    {
      if ( WORD1(v54[8]) )
      {
        MiEmptyDeferredWorkingSetEntries(&v54[7]);
        v14 = (signed __int64 *)v54[9];
      }
      v12 = v14;
      v16 = *(_BYTE *)(v15 + 184) & 7;
      if ( v14 == (signed __int64 *)0xFFFFF6FB7DBEDF68LL )
      {
        if ( v16 )
        {
          if ( v16 == 7 )
          {
            SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
          }
          else
          {
            CurrentPrcb = KeGetCurrentPrcb();
            if ( v16 == 5 )
              SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
            else
              SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
          }
        }
        else
        {
          SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(SelfmapLockHandle);
      }
      else
      {
        if ( !v16 )
        {
          if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v14 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v27 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL);
            if ( v27 )
            {
              v39 = (int *)(v27 + 4 * ((v54[9] >> 3) & 0x1FF));
              if ( (*v39 & 0x3FFFFFFF) != 0 )
              {
                ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v27 + 4 * ((v54[9] >> 3) & 0x1FF)));
              }
              else
              {
                if ( *v39 >= 0 )
                  KeBugCheckEx(0x10u, (ULONG_PTR)v39, 0x100uLL, 0LL, 0LL);
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v27 + 4 * ((v54[9] >> 3) & 0x1FF)));
              }
              goto LABEL_21;
            }
            v14 = (signed __int64 *)v54[9];
          }
          goto LABEL_19;
        }
        if ( (unsigned __int64)v14 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v14 > 0xFFFFF6FB7DBEDFFFuLL )
        {
LABEL_19:
          v17 = *v14;
          if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)v14 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v17 & 1) != 0
            && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
          {
            DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( DeepFreezeStartTime )
            {
              v43 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v54[9] >> 3) & 0x1FF));
              DeepFreezeStartTime = v17 | 0x20;
              if ( (v43 & 0x20) == 0 )
                DeepFreezeStartTime = *v14;
              v17 = DeepFreezeStartTime;
              if ( (v43 & 0x42) != 0 )
                v17 = DeepFreezeStartTime | 0x42;
            }
          }
          do
          {
            v19 = _InterlockedCompareExchange64(v12, v17 & 0xCFFFFFFFFFFFFFFFuLL, v17);
            v18 = v17 == v19;
            v17 = v19;
          }
          while ( !v18 );
          goto LABEL_21;
        }
        DeepFreezeStartTime = MiGetPageTableLockBuffer(v15, v14, &v51);
        v40 = *(_DWORD *)DeepFreezeStartTime;
        v41 = ~(3 << v51);
        do
        {
          v42 = v40;
          v40 = _InterlockedCompareExchange((volatile signed __int32 *)DeepFreezeStartTime, v41 & v40, v40);
        }
        while ( v42 != v40 );
      }
LABEL_21:
      v20 = BYTE5(v54[8]) | 2;
      v54[9] = 0LL;
      BYTE5(v54[8]) |= 2u;
      goto LABEL_22;
    }
    v20 = BYTE5(v54[8]);
LABEL_22:
    if ( (v20 & 1) != 0 )
      MiUnlockWorkingSetExclusive(v15, BYTE4(v54[8]), DeepFreezeStartTime, (__int64)v12);
    else
      MiUnlockWorkingSetShared(v15, BYTE4(v54[8]));
LABEL_24:
    if ( (v54[10] & 1) != 0 )
      MiDeprioritizeVad((PVOID)v54[11]);
    if ( v54[14] )
    {
      if ( v54[14] == -1LL )
      {
        MiReplenishTransitionPageHeatList();
      }
      else
      {
        MiProcessTransitionHeatBatch(v54[14]);
        MiFreeTransitionPageHeatList((PSLIST_ENTRY)v54[14]);
      }
      v54[14] = 0LL;
    }
    if ( v54[15] )
    {
      MiReplenishSlabAllocator(
        v54[15],
        *(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(*(_QWORD *)v54[13] + 60LL) & 0x3FF)),
        v54[16],
        (unsigned __int8)((v54[10] & 0x40) == 0) << 17);
      v54[15] = 0LL;
    }
    else if ( (v54[2] & 1) != 0 && *(_BYTE *)(v54[2] & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
    {
      v44 = *(_QWORD *)((v54[2] & 0xFFFFFFFFFFFFFFFEuLL) + 48);
      if ( v44 )
        MiReplenishSlabAllocator(
          v44,
          *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(v54[7] + 174)),
          1LL,
          0LL);
    }
    v21 = v54[7];
    if ( (*(_BYTE *)(v54[7] + 184) & 7) != 0 )
    {
      if ( (*(_DWORD *)(v54[7] + 4) & 0xFFF) != 0 )
        goto LABEL_31;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread->Priority < 16 )
        goto LABEL_31;
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) != 0
        || (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 )
      {
        goto LABEL_31;
      }
      v21 = v54[7];
      if ( (__int64)(*(_QWORD *)(v54[7] + 120) - *(_QWORD *)(v54[7] + 112)) <= 100 )
        goto LABEL_31;
    }
    v26 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(v21 + 174));
    if ( v26 && !(unsigned int)MiSufficientAvailablePages(v26, 0x420uLL) )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
LABEL_31:
    if ( !FileExtents )
      goto LABEL_36;
    if ( FileExtents == -1073740748 )
    {
      FileExtents = 0;
      goto LABEL_36;
    }
    if ( (FileExtents & 0x80000000) == 0 )
    {
LABEL_34:
      if ( !v54[12] && (PerfGlobalGroupMask & 0x1000) != 0 )
      {
        if ( (v54[2] & 1) != 0 && *(_BYTE *)(v54[2] & 0xFFFFFFFFFFFFFFFEuLL) == 1
          || (v54[2] & 1) != 0
          && (*(_BYTE *)(v54[2] & 0xFFFFFFFFFFFFFFFEuLL) == 2
           || (v54[2] & 1) != 0
           && (*(_BYTE *)(v54[2] & 0xFFFFFFFFFFFFFFFEuLL) == 4
            || (v54[2] & 1) != 0 && *(_BYTE *)(v54[2] & 0xFFFFFFFFFFFFFFFEuLL) == 3)) )
        {
          v54[2] = 0LL;
        }
        v50 = LODWORD(v54[10]) >> 6;
        LOBYTE(v50) = (v54[10] & 0x40) != 0;
        EtwTracePageFault(FileExtents, v54[0], v50, v54[2]);
      }
      goto LABEL_36;
    }
LABEL_56:
    if ( !(unsigned int)MiIsRetryIoStatus(FileExtents, v9) )
      goto LABEL_34;
    v45 = KeGetCurrentThread();
    if ( ((__int64)v45[1].Queue & 4) != 0 || (*((_DWORD *)&v45[1].SwapListEntry + 3) & 0xC) != 0 )
    {
      FileExtents = -1073741801;
    }
    else if ( (v54[2] & 1) != 0
           && *(_BYTE *)(v54[2] & 0xFFFFFFFFFFFFFFFEuLL) == 5
           && (*(_DWORD *)((v54[2] & 0xFFFFFFFFFFFFFFFEuLL) + 56) & 0xC) != 0 )
    {
      FileExtents = -1073741608;
    }
    else
    {
      v46 = *(unsigned __int16 *)(v54[7] + 174);
      v47 = *(_QWORD *)(qword_140466188 + 8 * v46);
      if ( SLOBYTE(v54[10]) < 0
        || !(unsigned int)MiSufficientAvailablePages(*(_QWORD *)(qword_140466188 + 8 * v46), 0x420uLL)
        || *(_QWORD *)(v47 + 8128) < 0x400uLL )
      {
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      }
      v48 = *(_QWORD *)(v47 + 8064);
      if ( v48 )
        --v48;
      if ( v48 < 0x9F )
      {
        v49 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
        if ( (v49 & 0xC) != 8
          && (v48 < 0x20 && (ULONG_PTR *)v47 == &MiSystemPartition
           || ((v49 & 2) == 0 || v48 < 0x21) && (*(_DWORD *)(v47 + 4) & 0x20) == 0) )
        {
          MiWaitForFreePage(v47);
        }
      }
      FileExtents = 0;
    }
LABEL_36:
    if ( (v54[10] & 2) != 0 )
      MiCopyOnWriteCheckConditions(v54[7], 3221225495LL);
    if ( (v54[10] & 4) != 0 )
      MiCopyOnWriteCheckConditions(v54[7], 3221226548LL);
    if ( !v54[12] )
      break;
    v33 = a4;
    v34 = (_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v33 & 1) != 0 && (*v34 == 1 || *v34 == 2) )
      v34[1] = 1;
    v35 = v54[13];
    MiInitializePageFaultPacket(2LL, v54[12], 0, 0LL, (__int64)v54);
    LODWORD(v54[10]) |= 8u;
    BugCheckParameter1 = v54[0];
    a4 = 0LL;
    v54[13] = v35;
  }
  if ( v54[13] )
    MiReleaseFaultCharges(v54[13]);
  return FileExtents;
}
