/*
 * XREFs of MmAccessFault @ 0x140043DA0
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x140030780 (MiCheckProtoPtePageState.c)
 *     MmCopyToCachedPage @ 0x140033050 (MmCopyToCachedPage.c)
 *     MiProbeLeafPteAccess @ 0x1400420D0 (MiProbeLeafPteAccess.c)
 *     MiPfPutPagesInTransition @ 0x140064E60 (MiPfPutPagesInTransition.c)
 *     MiGetNextPageTablePte @ 0x140070A20 (MiGetNextPageTablePte.c)
 *     MiCommitExistingVad @ 0x140071460 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiSectionCreated @ 0x140092660 (MiSectionCreated.c)
 *     MiInitializeImageProtos @ 0x1400930D8 (MiInitializeImageProtos.c)
 *     MiFaultInProbeAddress @ 0x14009363C (MiFaultInProbeAddress.c)
 *     MiWalkVaRange @ 0x140093BD0 (MiWalkVaRange.c)
 *     MiDeleteSubsectionPages @ 0x140094EC0 (MiDeleteSubsectionPages.c)
 *     MiMakeProtoAddressValid @ 0x1400958EC (MiMakeProtoAddressValid.c)
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MiInPagePageTable @ 0x140098720 (MiInPagePageTable.c)
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB490 (MiMakeDriverPagesPrivate.c)
 *     MiReleaseOutSwapReservations @ 0x1400E5C5C (MiReleaseOutSwapReservations.c)
 *     MiPrefetchVirtualMemory @ 0x1400EA1C0 (MiPrefetchVirtualMemory.c)
 *     MiMakeImageReadOnly @ 0x1401293E8 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x1401370A4 (MiDeletePerSessionProtos.c)
 *     MiInPageSingleKernelStack @ 0x14013D5A0 (MiInPageSingleKernelStack.c)
 *     MiLockPagedAddress @ 0x140140A10 (MiLockPagedAddress.c)
 *     MiPurgeImageSection @ 0x140176720 (MiPurgeImageSection.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1401B5594 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     KiPageFault @ 0x1401CB600 (KiPageFault.c)
 *     MiInitializeDynamicPfns @ 0x1402A68F4 (MiInitializeDynamicPfns.c)
 *     MiEliminateStaleExtents @ 0x1402B5DE0 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x1402B5EB4 (MiEnableLargeSubsection.c)
 *     MiLockHotPatchPageRange @ 0x1402B98A4 (MiLockHotPatchPageRange.c)
 *     MiInitializeProtoPfn @ 0x1402C4D4C (MiInitializeProtoPfn.c)
 *     ExpSvmServicePageFault @ 0x14031E860 (ExpSvmServicePageFault.c)
 *     MiInitializePrototypePtes @ 0x140620030 (MiInitializePrototypePtes.c)
 *     MmVirtualAccessFault @ 0x14085A2D4 (MmVirtualAccessFault.c)
 * Callees:
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     MiIsRetryIoStatus @ 0x140022E18 (MiIsRetryIoStatus.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiDispatchFault @ 0x140045FD0 (MiDispatchFault.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetPageTableLockBuffer @ 0x14006CE70 (MiGetPageTableLockBuffer.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiInitializePageFaultPacket @ 0x140096158 (MiInitializePageFaultPacket.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiUnlockSystemVa @ 0x1400ECE44 (MiUnlockSystemVa.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     KeInvalidAccessAllowed @ 0x140117D7C (KeInvalidAccessAllowed.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140128CC8 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiRaisedIrqlFault @ 0x1401291F8 (MiRaisedIrqlFault.c)
 *     MiReleaseFaultCharges @ 0x140131A24 (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x140131F58 (MiRetainSubsection.c)
 *     MiDeprioritizeVad @ 0x140136EBC (MiDeprioritizeVad.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1401B75C8 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiFaultGetFileExtents @ 0x1402BBFF4 (MiFaultGetFileExtents.c)
 *     MiReleaseFaultSynchronization @ 0x1402BC8BC (MiReleaseFaultSynchronization.c)
 *     MiReplenishSlabAllocator @ 0x1402C2EA4 (MiReplenishSlabAllocator.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402CB40C (MiCopyOnWriteCheckConditions.c)
 *     MiWaitForFreePage @ 0x1402CB694 (MiWaitForFreePage.c)
 *     MiFreeTransitionPageHeatList @ 0x1402CED80 (MiFreeTransitionPageHeatList.c)
 *     MiProcessTransitionHeatBatch @ 0x1402CF164 (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x1402CF2C0 (MiReplenishTransitionPageHeatList.c)
 *     EtwTracePageFault @ 0x1403102E0 (EtwTracePageFault.c)
 *     MiHandleEnclaveFault @ 0x14085A27C (MiHandleEnclaveFault.c)
 */

__int64 __fastcall MmAccessFault(
        ULONG_PTR BugCheckParameter2,
        signed __int64 a2,
        __int64 a3,
        ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v4; // r13
  char v5; // r14
  unsigned __int64 v6; // rdi
  ULONG_PTR v7; // rbx
  _BYTE *v8; // rax
  int v10; // ecx
  unsigned int v11; // r12d
  NTSTATUS v12; // eax
  NTSTATUS FileExtents; // esi
  __int64 v14; // r8
  ULONG_PTR v15; // rdx
  __int64 Address; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // r15
  char v20; // di
  volatile signed __int64 *v21; // r14
  char v22; // di
  struct _KPRCB *CurrentPrcb; // rcx
  char v24; // di
  __int64 v25; // rax
  volatile signed __int32 *PageTableLockBuffer; // r8
  int v27; // r9d
  signed __int32 v28; // eax
  volatile signed __int32 v29; // ett
  signed __int32 v30; // edx
  signed __int64 v31; // rdx
  unsigned __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r8
  signed __int64 v35; // rax
  signed __int64 v36; // rdx
  char v37; // al
  __int64 v38; // rcx
  __int64 v39; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int v41; // ecx
  __int64 v42; // rcx
  struct _KTHREAD *v43; // rcx
  __int64 v44; // rbx
  unsigned __int64 v45; // rdx
  int v46; // ecx
  __int64 v47; // r8
  char v48; // al
  _BYTE *v49; // r13
  __int64 v50; // rbx
  char v51; // [rsp+30h] [rbp-168h]
  int v52; // [rsp+34h] [rbp-164h] BYREF
  ULONG_PTR v53; // [rsp+38h] [rbp-160h] BYREF
  _QWORD v54[16]; // [rsp+40h] [rbp-158h] BYREF
  _QWORD v55[18]; // [rsp+C0h] [rbp-D8h] BYREF

  v51 = a3;
  v4 = BugCheckParameter4;
  v5 = a3;
  v6 = a2;
  v7 = BugCheckParameter2;
  if ( (BugCheckParameter2 & 9) == 9 )
    KeBugCheckEx(0x1Au, 0x61941uLL, a2, BugCheckParameter2, BugCheckParameter4);
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    if ( (_BYTE)a3 != 1 )
    {
      v8 = (_BYTE *)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (BugCheckParameter4 & 1) == 0 )
        goto LABEL_9;
      if ( *v8 == 1 )
        return 3221225477LL;
      if ( (BugCheckParameter4 & 1) == 0 )
      {
LABEL_9:
        if ( (unsigned __int8)KeInvalidAccessAllowed(BugCheckParameter4, a2, a3, BugCheckParameter4) == 1 )
          return 3221225477LL;
LABEL_161:
        KeBugCheckEx(0x50u, a2, v7, BugCheckParameter4, 4uLL);
      }
      if ( *v8 != 3 )
      {
        if ( (BugCheckParameter4 & 1) != 0 )
          goto LABEL_161;
        goto LABEL_9;
      }
    }
    return 3221225477LL;
  }
  if ( (BugCheckParameter2 & 0x8000) != 0 )
  {
    if ( (_BYTE)a3 == 1 )
      return MiHandleEnclaveFault(a2);
    else
      return 3221226658LL;
  }
  memset(v55, 0, 0x88uLL);
  v55[3] = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v55[4] = ((v55[3] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v55[5] = ((v55[4] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v55[6] = ((v55[5] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = v55[10];
  if ( (v7 & 0x40) != 0 )
  {
    v10 = LODWORD(v55[10]) | 0x20;
    v7 &= ~2uLL;
  }
  v55[1] = v7;
  v55[0] = v6;
  v55[2] = v4;
  LODWORD(v55[10]) = ((unsigned __int8)v10 ^ (unsigned __int8)(v5 << 6)) & 0x40 ^ v10;
  if ( KeGetCurrentIrql() > 1u )
    return MiRaisedIrqlFault(v55);
  while ( 1 )
  {
    v11 = 4096;
    if ( v6 < 0xFFFF800000000000uLL || (v12 = MiSystemFault(v55), FileExtents = v12, v12 == 192) )
    {
      FileExtents = MiUserFault(v55);
      if ( FileExtents != -1073741802 )
        goto LABEL_86;
    }
    else if ( v12 != -1073741802 )
    {
      goto LABEL_109;
    }
    FileExtents = MiDispatchFault(v55, &v53);
    if ( FileExtents != -1073741802 )
    {
      v15 = v53;
      if ( v53 )
      {
        v17 = *(_QWORD *)(v53 + 256);
        v11 = *(_DWORD *)(v53 + 312);
        if ( v17 )
          v11 = *(_DWORD *)(v17 + 40);
        if ( v5 == 1 )
          *(_DWORD *)(v53 + 192) |= 0x40000u;
        if ( (*(_DWORD *)(v15 + 192) & 1) != 0 )
        {
          FileExtents = MiFaultGetFileExtents(v55);
          v55[12] = 0LL;
          goto LABEL_86;
        }
        FileExtents = MiIssueHardFault((__int64)v55, v15);
      }
      v55[12] = 0LL;
      goto LABEL_44;
    }
    v15 = v55[0];
    if ( v55[0] >= 0xFFFF800000000000uLL || v55[12] == qword_14043B0B8 || qword_14043B0C0 && v55[12] == qword_14043B0C0 )
      goto LABEL_34;
    Address = v55[11];
    if ( !v55[11] )
    {
      Address = MiLocateAddress(v55[0]);
      v15 = v55[0];
      v55[11] = Address;
    }
    if ( MiGetProtoPteAddress(Address, v15 >> 12, 4, &v55[13]) )
    {
      MiRetainSubsection(v55[13]);
LABEL_34:
      FileExtents = 0;
LABEL_44:
      if ( (v55[10] & 0x10) != 0 )
      {
        memset(v54, 0, sizeof(v54));
        *(_OWORD *)&v54[3] = *(_OWORD *)&v55[7];
        v54[5] = v55[9];
        MiUnlockSystemVa(v54);
        LODWORD(v55[10]) &= ~0x10u;
      }
      else
      {
        v18 = v55[9];
        v19 = v55[7];
        if ( v55[9] )
        {
          if ( WORD1(v55[8]) )
          {
            MiEmptyDeferredWorkingSetEntries(&v55[7], v15, v14);
            v18 = v55[9];
          }
          v20 = *(_BYTE *)(v19 + 184);
          v21 = (volatile signed __int64 *)v18;
          if ( v18 == 0xFFFFF6FB7DBEDF68uLL )
          {
            v22 = v20 & 7;
            if ( v22 )
            {
              if ( v22 == 7 )
              {
                KxReleaseQueuedSpinLock(&KeGetCurrentPrcb()->SelfmapLockHandle[1]);
              }
              else
              {
                CurrentPrcb = KeGetCurrentPrcb();
                if ( v22 == 5 )
                  KxReleaseQueuedSpinLock(CurrentPrcb->SelfmapLockHandle);
                else
                  KxReleaseQueuedSpinLock(&CurrentPrcb->SelfmapLockHandle[3]);
              }
            }
            else
            {
              KxReleaseQueuedSpinLock(&KeGetCurrentPrcb()->SelfmapLockHandle[2]);
            }
          }
          else
          {
            v24 = v20 & 7;
            if ( v24
              || v18 < 0xFFFFF6FB7DBED000uLL
              || v18 > 0xFFFFF6FB7DBEDFFFuLL
              || (v25 = *(_QWORD *)(*(_QWORD *)(PsGetCurrentProcess(0xFFFFF6FB7DBED000uLL, 0xFFFFF6FB7DBEDFFFuLL) + 1296)
                                  + 552LL)) == 0 )
            {
              if ( v24 && v18 >= 0xFFFFF6FB7DBED000uLL && v18 <= 0xFFFFF6FB7DBEDFFFuLL )
              {
                PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(v19, v18, &v52);
                v27 = ~(3 << v52);
                v29 = *PageTableLockBuffer;
                v28 = _InterlockedCompareExchange(PageTableLockBuffer, v27 & *PageTableLockBuffer, *PageTableLockBuffer);
                if ( v29 != v28 )
                {
                  do
                  {
                    v30 = v28;
                    v28 = _InterlockedCompareExchange(PageTableLockBuffer, v27 & v28, v28);
                  }
                  while ( v28 != v30 );
                }
              }
              else
              {
                v31 = *(_QWORD *)v18;
                if ( v18 >= 0xFFFFF6FB7DBED000uLL
                  && v18 <= 0xFFFFF6FB7DBED7F8uLL
                  && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, v31)
                  && (v31 & 1) != 0
                  && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
                {
                  v18 = v55[9];
                  v32 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                  if ( v32 )
                  {
                    v33 = *(_QWORD *)(v32 + 8 * ((v55[9] >> 3) & 0x1FFLL));
                    v34 = v31 | 0x20;
                    if ( (v33 & 0x20) == 0 )
                      v34 = v31;
                    v31 = v34;
                    if ( (v33 & 0x42) != 0 )
                      v31 = v34 | 0x42;
                  }
                }
                v35 = _InterlockedCompareExchange64((volatile signed __int64 *)v18, v31 & 0xCFFFFFFFFFFFFFFFuLL, v31);
                if ( v31 != v35 )
                {
                  do
                  {
                    v36 = v35;
                    v35 = _InterlockedCompareExchange64(v21, v35 & 0xCFFFFFFFFFFFFFFFuLL, v35);
                  }
                  while ( v35 != v36 );
                }
              }
            }
            else
            {
              ExReleaseSpinLockRegardlessFromDpcLevel(v25 + 4 * ((v18 >> 3) & 0x1FF));
            }
          }
          v5 = v51;
          v37 = BYTE5(v55[8]) | 2;
          BYTE5(v55[8]) |= 2u;
          v55[9] = 0LL;
        }
        else
        {
          v37 = BYTE5(v55[8]);
        }
        if ( (v37 & 1) != 0 )
          MiUnlockWorkingSetExclusive(v19, BYTE4(v55[8]));
        else
          MiUnlockWorkingSetShared(v19, BYTE4(v55[8]));
      }
LABEL_86:
      if ( (v55[10] & 1) != 0 )
        MiDeprioritizeVad((PVOID)v55[11]);
      if ( v55[14] )
      {
        if ( v55[14] == -1LL )
        {
          MiReplenishTransitionPageHeatList();
        }
        else
        {
          MiProcessTransitionHeatBatch(v55[14]);
          MiFreeTransitionPageHeatList((PSLIST_ENTRY)v55[14]);
        }
        v55[14] = 0LL;
      }
      if ( v55[15] )
      {
        MiReplenishSlabAllocator(
          v55[15],
          *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)v55[13] + 60LL) & 0x3FF)),
          v55[16]);
        v55[15] = 0LL;
      }
      else if ( (v55[2] & 1) != 0 && *(_BYTE *)(v55[2] & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
      {
        v38 = *(_QWORD *)((v55[2] & 0xFFFFFFFFFFFFFFFEuLL) + 48);
        if ( v38 )
          MiReplenishSlabAllocator(v38, *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v55[7] + 174LL)), 1LL);
      }
      v39 = v55[7];
      if ( (*(_BYTE *)(v55[7] + 184LL) & 7) != 0 )
      {
        if ( (*(_DWORD *)(v55[7] + 4LL) & 0xFFF) != 0 )
          goto LABEL_109;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( CurrentThread->Priority < 16 )
          goto LABEL_109;
        v41 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
        if ( (v41 & 0xC) != 0 )
          goto LABEL_109;
        if ( (v41 & 2) != 0 )
          goto LABEL_109;
        v39 = v55[7];
        if ( (__int64)(*(_QWORD *)(v55[7] + 120LL) - *(_QWORD *)(v55[7] + 112LL)) <= 100 )
          goto LABEL_109;
      }
      v42 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v39 + 174));
      if ( v42 && !(unsigned int)MiSufficientAvailablePages(v42, 1056LL) )
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
LABEL_109:
      if ( !FileExtents )
        goto LABEL_147;
      if ( FileExtents == -1073740748 )
      {
        FileExtents = 0;
        goto LABEL_147;
      }
      if ( FileExtents >= 0 )
        goto LABEL_135;
      goto LABEL_113;
    }
    MiReleaseFaultSynchronization(v55);
    v55[12] = 0LL;
    FileExtents = -1073741819;
LABEL_113:
    if ( MiIsRetryIoStatus(FileExtents, v11) )
    {
      v43 = KeGetCurrentThread();
      if ( ((__int64)v43[1].Queue & 4) != 0 || (*((_DWORD *)&v43[1].SwapListEntry + 3) & 0xC) != 0 )
      {
        FileExtents = -1073741801;
      }
      else if ( (v55[2] & 1) != 0
             && *(_BYTE *)(v55[2] & 0xFFFFFFFFFFFFFFFEuLL) == 5
             && (*(_DWORD *)((v55[2] & 0xFFFFFFFFFFFFFFFEuLL) + 56) & 0xC) != 0 )
      {
        FileExtents = -1073741608;
      }
      else
      {
        v44 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v55[7] + 174LL));
        if ( !(unsigned int)MiSufficientAvailablePages(v44, 1056LL) || *(_QWORD *)(v44 + 7360) < 0x400uLL )
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        v45 = *(_QWORD *)(v44 + 7296);
        if ( v45 )
          --v45;
        if ( v45 < 0x9F )
        {
          v46 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
          if ( (v46 & 0xC) != 8
            && (v45 < 0x20 && (ULONG_PTR *)v44 == &MiSystemPartition
             || ((v46 & 2) == 0 || v45 < 0x21) && (*(_DWORD *)(v44 + 4) & 0x10) == 0) )
          {
            MiWaitForFreePage(v44);
          }
        }
        FileExtents = 0;
      }
      goto LABEL_147;
    }
LABEL_135:
    if ( !v55[12] && (PerfGlobalGroupMask & 0x1000) != 0 )
    {
      if ( (v55[2] & 1) != 0 && *(_BYTE *)(v55[2] & 0xFFFFFFFFFFFFFFFEuLL) == 1
        || (v55[2] & 1) != 0
        && (*(_BYTE *)(v55[2] & 0xFFFFFFFFFFFFFFFEuLL) == 2
         || (v55[2] & 1) != 0
         && (*(_BYTE *)(v55[2] & 0xFFFFFFFFFFFFFFFEuLL) == 4
          || (v55[2] & 1) != 0 && *(_BYTE *)(v55[2] & 0xFFFFFFFFFFFFFFFEuLL) == 3)) )
      {
        v55[2] = 0LL;
      }
      v47 = LODWORD(v55[10]) >> 6;
      LOBYTE(v47) = (v55[10] & 0x40) != 0;
      EtwTracePageFault((unsigned int)FileExtents, v55[0], v47, v55[2]);
    }
LABEL_147:
    if ( (v55[10] & 2) != 0 )
      MiCopyOnWriteCheckConditions(v55[7], 3221225495LL);
    if ( (v55[10] & 4) != 0 )
      MiCopyOnWriteCheckConditions(v55[7], 3221226548LL);
    if ( !v55[12] )
      break;
    v48 = v4;
    v49 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v48 & 1) != 0 && (*v49 == 1 || *v49 == 2) )
      v49[1] = 1;
    v50 = v55[13];
    MiInitializePageFaultPacket(2, v55[12], 0, 0, v55);
    LODWORD(v55[10]) |= 8u;
    v4 = 0LL;
    v6 = v55[0];
    v55[13] = v50;
  }
  if ( v55[13] )
    MiReleaseFaultCharges(v55[13]);
  return (unsigned int)FileExtents;
}
