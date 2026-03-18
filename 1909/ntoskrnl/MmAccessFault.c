/*
 * XREFs of MmAccessFault @ 0x1400AA630
 * Callers:
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTablePte @ 0x14004AA90 (MiGetNextPageTablePte.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140050A40 (MiCommitExistingVad.c)
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x1400549A0 (MiCheckProtoPtePageState.c)
 *     MiInPagePageTable @ 0x14005D7D0 (MiInPagePageTable.c)
 *     MmCopyToCachedPage @ 0x14006EAA0 (MmCopyToCachedPage.c)
 *     MiInPageSingleKernelStack @ 0x14008F9F4 (MiInPageSingleKernelStack.c)
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiInitializeImageProtos @ 0x140097CDC (MiInitializeImageProtos.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     MiDeleteSubsectionPages @ 0x1400BC810 (MiDeleteSubsectionPages.c)
 *     MiWalkVaRange @ 0x1400BE0F4 (MiWalkVaRange.c)
 *     MiSectionCreated @ 0x1400C0450 (MiSectionCreated.c)
 *     MiPrefetchVirtualMemory @ 0x1400C7FA0 (MiPrefetchVirtualMemory.c)
 *     MiProbeLeafPteAccess @ 0x1400CCDA0 (MiProbeLeafPteAccess.c)
 *     MiReleaseOutSwapReservations @ 0x1400D9B68 (MiReleaseOutSwapReservations.c)
 *     MiFaultInProbeAddress @ 0x1400DE680 (MiFaultInProbeAddress.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400FABE4 (MiMakeDriverPagesPrivate.c)
 *     MiMakeProtoAddressValid @ 0x14011E6FC (MiMakeProtoAddressValid.c)
 *     MiMakeImageReadOnly @ 0x140129598 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x140138E9C (MiDeletePerSessionProtos.c)
 *     MiLockPagedAddress @ 0x1401431B8 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401558AC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiPurgeImageSection @ 0x14015C7D8 (MiPurgeImageSection.c)
 *     KiPageFault @ 0x1401D2400 (KiPageFault.c)
 *     MiLockDriverPageRange @ 0x1402BD214 (MiLockDriverPageRange.c)
 *     MiInitializeDynamicPfns @ 0x1402BDC3C (MiInitializeDynamicPfns.c)
 *     MiEliminateStaleExtents @ 0x1402CB648 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x1402CB72C (MiEnableLargeSubsection.c)
 *     MiInitializeProtoPfn @ 0x1402DE7F0 (MiInitializeProtoPfn.c)
 *     ExpSvmServicePageFault @ 0x14033E0A0 (ExpSvmServicePageFault.c)
 *     MiInitializePrototypePtes @ 0x14064F444 (MiInitializePrototypePtes.c)
 *     MmVirtualAccessFault @ 0x14089277C (MmVirtualAccessFault.c)
 * Callees:
 *     MiIssueHardFault @ 0x140007190 (MiIssueHardFault.c)
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateAddress @ 0x140073F60 (MiLocateAddress.c)
 *     MiSystemFault @ 0x140075390 (MiSystemFault.c)
 *     MiSufficientAvailablePages @ 0x14007D460 (MiSufficientAvailablePages.c)
 *     MiInitializePageFaultPacket @ 0x14009561C (MiInitializePageFaultPacket.c)
 *     MiGetProtoPteAddress @ 0x1400A7E70 (MiGetProtoPteAddress.c)
 *     MiUserFault @ 0x1400AAC70 (MiUserFault.c)
 *     MiDispatchFault @ 0x1400ABE50 (MiDispatchFault.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiIsRetryIoStatus @ 0x1400BF9D0 (MiIsRetryIoStatus.c)
 *     MiUnlockSystemVa @ 0x1400C46E8 (MiUnlockSystemVa.c)
 *     MiGetPageTableLockBuffer @ 0x14010027C (MiGetPageTableLockBuffer.c)
 *     KeInvalidAccessAllowed @ 0x140116B60 (KeInvalidAccessAllowed.c)
 *     MiRaisedIrqlFault @ 0x140129A60 (MiRaisedIrqlFault.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14012AC6C (MiEmptyDeferredWorkingSetEntries.c)
 *     MiReleaseFaultCharges @ 0x140133C7C (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x14013426C (MiRetainSubsection.c)
 *     MiDeprioritizeVad @ 0x14013BBFC (MiDeprioritizeVad.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiFaultGetFileExtents @ 0x1402D2368 (MiFaultGetFileExtents.c)
 *     MiReleaseFaultSynchronization @ 0x1402D2D70 (MiReleaseFaultSynchronization.c)
 *     MiReplenishSlabAllocator @ 0x1402DCC24 (MiReplenishSlabAllocator.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E54BC (MiCopyOnWriteCheckConditions.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
 *     MiFreeTransitionPageHeatList @ 0x1402EB958 (MiFreeTransitionPageHeatList.c)
 *     MiProcessTransitionHeatBatch @ 0x1402EBD48 (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x1402EBFA8 (MiReplenishTransitionPageHeatList.c)
 *     EtwTracePageFault @ 0x14032D81C (EtwTracePageFault.c)
 *     MiHandleEnclaveFault @ 0x140892720 (MiHandleEnclaveFault.c)
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
  struct _KPRCB *CurrentPrcb; // rcx
  int *v38; // rdx
  signed __int32 v39; // eax
  int v40; // edx
  signed __int32 v41; // ett
  __int64 v42; // rax
  __int64 v43; // rcx
  struct _KTHREAD *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rbx
  unsigned __int64 v47; // rdx
  int v48; // ecx
  __int64 v49; // r8
  int v50; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR v51; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v52[16]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v53[18]; // [rsp+C0h] [rbp-40h] BYREF

  memset(v53, 0, 0x88uLL);
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
  memset(&v53[7], 0, 0x50uLL);
  v53[3] = (((unsigned __int64)BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v53[4] = ((v53[3] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v53[5] = ((v53[4] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v53[6] = ((v53[5] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = v53[10];
  if ( (BugCheckParameter2 & 0x40) != 0 )
  {
    v8 = LODWORD(v53[10]) | 0x20;
    BugCheckParameter2 &= ~2uLL;
  }
  v53[1] = BugCheckParameter2;
  v53[0] = BugCheckParameter1;
  v53[2] = a4;
  LODWORD(v53[10]) = ((unsigned __int8)v8 ^ (unsigned __int8)(a3 << 6)) & 0x40 ^ v8;
  if ( KeGetCurrentIrql() > 1u )
    return MiRaisedIrqlFault(v53);
  while ( 1 )
  {
    v9 = 4096;
    if ( (unsigned __int64)BugCheckParameter1 < 0xFFFF800000000000uLL
      || (v24 = MiSystemFault(v53), FileExtents = v24, v24 == 192) )
    {
      FileExtents = MiUserFault(v53);
      if ( FileExtents != -1073741802 )
        goto LABEL_24;
    }
    else if ( v24 != -1073741802 )
    {
      goto LABEL_31;
    }
    FileExtents = MiDispatchFault(v53, &v51);
    if ( FileExtents == -1073741802 )
    {
      v29 = v53[0];
      if ( v53[0] < 0xFFFF800000000000uLL
        && v53[12] != qword_140465710
        && (!qword_140465718 || v53[12] != qword_140465718) )
      {
        Address = v53[11];
        if ( !v53[11] )
        {
          Address = MiLocateAddress(v53[0]);
          v29 = v53[0];
          v53[11] = Address;
        }
        v31 = 4;
        if ( (v53[10] & 0x100) != 0 )
          v31 = 2;
        ProtoPteAddress = MiGetProtoPteAddress(Address, v29 >> 12, v31, &v53[13]);
        if ( !ProtoPteAddress )
        {
          MiReleaseFaultSynchronization(v53);
          v53[12] = 0LL;
          FileExtents = -1073741819;
          goto LABEL_56;
        }
        if ( v53[12] != ProtoPteAddress )
          v53[12] = ProtoPteAddress;
        MiRetainSubsection(v53[13]);
      }
      LODWORD(v53[10]) &= ~0x100u;
      FileExtents = 0;
    }
    else
    {
      v13 = v51;
      if ( v51 )
      {
        v25 = *(_QWORD *)(v51 + 256);
        v9 = *(_DWORD *)(v51 + 312);
        if ( v25 )
          v9 = *(_DWORD *)(v25 + 40);
        if ( a3 == 1 )
          *(_DWORD *)(v51 + 192) |= 0x40000u;
        if ( (*(_DWORD *)(v13 + 192) & 1) != 0 && *(int *)(v13 + 80) >= 0 )
        {
          FileExtents = MiFaultGetFileExtents(v53);
          v53[12] = 0LL;
          goto LABEL_24;
        }
        FileExtents = MiIssueHardFault((__int64)v53, v13, DeepFreezeStartTime, (__int64)v12);
      }
      v53[12] = 0LL;
    }
    if ( (v53[10] & 0x10) != 0 )
    {
      memset(v52, 0, sizeof(v52));
      *(_OWORD *)&v52[3] = *(_OWORD *)&v53[7];
      v52[5] = v53[9];
      MiUnlockSystemVa(v52);
      LODWORD(v53[10]) &= ~0x10u;
      goto LABEL_24;
    }
    v14 = (signed __int64 *)v53[9];
    v15 = v53[7];
    if ( v53[9] )
    {
      if ( WORD1(v53[8]) )
      {
        MiEmptyDeferredWorkingSetEntries(&v53[7]);
        v14 = (signed __int64 *)v53[9];
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
              v38 = (int *)(v27 + 4 * ((v53[9] >> 3) & 0x1FF));
              if ( (*v38 & 0x3FFFFFFF) != 0 )
              {
                ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v27 + 4 * ((v53[9] >> 3) & 0x1FF)));
              }
              else
              {
                if ( *v38 >= 0 )
                  KeBugCheckEx(0x10u, (ULONG_PTR)v38, 0x100uLL, 0LL, 0LL);
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v27 + 4 * ((v53[9] >> 3) & 0x1FF)));
              }
              goto LABEL_21;
            }
            v14 = (signed __int64 *)v53[9];
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
              v42 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v53[9] >> 3) & 0x1FF));
              DeepFreezeStartTime = v17 | 0x20;
              if ( (v42 & 0x20) == 0 )
                DeepFreezeStartTime = *v14;
              v17 = DeepFreezeStartTime;
              if ( (v42 & 0x42) != 0 )
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
        DeepFreezeStartTime = MiGetPageTableLockBuffer(v15, v14, &v50);
        v39 = *(_DWORD *)DeepFreezeStartTime;
        v40 = ~(3 << v50);
        do
        {
          v41 = v39;
          v39 = _InterlockedCompareExchange((volatile signed __int32 *)DeepFreezeStartTime, v40 & v39, v39);
        }
        while ( v41 != v39 );
      }
LABEL_21:
      v20 = BYTE5(v53[8]) | 2;
      v53[9] = 0LL;
      BYTE5(v53[8]) |= 2u;
      goto LABEL_22;
    }
    v20 = BYTE5(v53[8]);
LABEL_22:
    if ( (v20 & 1) != 0 )
      MiUnlockWorkingSetExclusive(v15, BYTE4(v53[8]), DeepFreezeStartTime, (__int64)v12);
    else
      MiUnlockWorkingSetShared(v15, BYTE4(v53[8]));
LABEL_24:
    if ( (v53[10] & 1) != 0 )
      MiDeprioritizeVad((PVOID)v53[11]);
    if ( v53[14] )
    {
      if ( v53[14] == -1LL )
      {
        MiReplenishTransitionPageHeatList();
      }
      else
      {
        MiProcessTransitionHeatBatch(v53[14]);
        MiFreeTransitionPageHeatList((PSLIST_ENTRY)v53[14]);
      }
      v53[14] = 0LL;
    }
    if ( v53[15] )
    {
      MiReplenishSlabAllocator(
        v53[15],
        *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(*(_QWORD *)v53[13] + 60LL) & 0x3FF)),
        v53[16],
        (unsigned __int8)((v53[10] & 0x40) == 0) << 17);
      v53[15] = 0LL;
    }
    else if ( (v53[2] & 1) != 0 && *(_BYTE *)(v53[2] & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
    {
      v43 = *(_QWORD *)((v53[2] & 0xFFFFFFFFFFFFFFFEuLL) + 48);
      if ( v43 )
        MiReplenishSlabAllocator(
          v43,
          *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(v53[7] + 174)),
          1LL,
          0LL);
    }
    v21 = v53[7];
    if ( (*(_BYTE *)(v53[7] + 184) & 7) != 0 )
    {
      if ( (*(_DWORD *)(v53[7] + 4) & 0xFFF) != 0 )
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
      v21 = v53[7];
      if ( (__int64)(*(_QWORD *)(v53[7] + 120) - *(_QWORD *)(v53[7] + 112)) <= 100 )
        goto LABEL_31;
    }
    v26 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(v21 + 174));
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
      if ( !v53[12] && (PerfGlobalGroupMask & 0x1000) != 0 )
      {
        if ( (v53[2] & 1) != 0 && *(_BYTE *)(v53[2] & 0xFFFFFFFFFFFFFFFEuLL) == 1
          || (v53[2] & 1) != 0
          && (*(_BYTE *)(v53[2] & 0xFFFFFFFFFFFFFFFEuLL) == 2
           || (v53[2] & 1) != 0
           && (*(_BYTE *)(v53[2] & 0xFFFFFFFFFFFFFFFEuLL) == 4
            || (v53[2] & 1) != 0 && *(_BYTE *)(v53[2] & 0xFFFFFFFFFFFFFFFEuLL) == 3)) )
        {
          v53[2] = 0LL;
        }
        v49 = LODWORD(v53[10]) >> 6;
        LOBYTE(v49) = (v53[10] & 0x40) != 0;
        EtwTracePageFault(FileExtents, v53[0], v49, v53[2]);
      }
      goto LABEL_36;
    }
LABEL_56:
    if ( !(unsigned int)MiIsRetryIoStatus(FileExtents, v9) )
      goto LABEL_34;
    v44 = KeGetCurrentThread();
    if ( ((__int64)v44[1].Queue & 4) != 0 || (*((_DWORD *)&v44[1].SwapListEntry + 3) & 0xC) != 0 )
    {
      FileExtents = -1073741801;
    }
    else if ( (v53[2] & 1) != 0
           && *(_BYTE *)(v53[2] & 0xFFFFFFFFFFFFFFFEuLL) == 5
           && (*(_DWORD *)((v53[2] & 0xFFFFFFFFFFFFFFFEuLL) + 56) & 0xC) != 0 )
    {
      FileExtents = -1073741608;
    }
    else
    {
      v45 = *(unsigned __int16 *)(v53[7] + 174);
      v46 = *(_QWORD *)(qword_140465E88 + 8 * v45);
      if ( SLOBYTE(v53[10]) < 0
        || !(unsigned int)MiSufficientAvailablePages(*(_QWORD *)(qword_140465E88 + 8 * v45), 0x420uLL)
        || *(_QWORD *)(v46 + 8128) < 0x400uLL )
      {
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      }
      v47 = *(_QWORD *)(v46 + 8064);
      if ( v47 )
        --v47;
      if ( v47 < 0x9F )
      {
        v48 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
        if ( (v48 & 0xC) != 8
          && (v47 < 0x20 && (ULONG_PTR *)v46 == &MiSystemPartition
           || ((v48 & 2) == 0 || v47 < 0x21) && (*(_DWORD *)(v46 + 4) & 0x20) == 0) )
        {
          MiWaitForFreePage(v46);
        }
      }
      FileExtents = 0;
    }
LABEL_36:
    if ( (v53[10] & 2) != 0 )
      MiCopyOnWriteCheckConditions(v53[7], 3221225495LL);
    if ( (v53[10] & 4) != 0 )
      MiCopyOnWriteCheckConditions(v53[7], 3221226548LL);
    if ( !v53[12] )
      break;
    v33 = a4;
    v34 = (_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v33 & 1) != 0 && (*v34 == 1 || *v34 == 2) )
      v34[1] = 1;
    v35 = v53[13];
    MiInitializePageFaultPacket(2LL, v53[12], 0, 0LL, (__int64)v53);
    LODWORD(v53[10]) |= 8u;
    BugCheckParameter1 = v53[0];
    a4 = 0LL;
    v53[13] = v35;
  }
  if ( v53[13] )
    MiReleaseFaultCharges(v53[13]);
  return FileExtents;
}
