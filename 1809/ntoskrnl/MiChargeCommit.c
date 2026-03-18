/*
 * XREFs of MiChargeCommit @ 0x14004CF20
 * Callers:
 *     MiObtainMdlCharges @ 0x140011B44 (MiObtainMdlCharges.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiObtainSystemCharges @ 0x140026DC8 (MiObtainSystemCharges.c)
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MiChargeForWriteInProgressPage @ 0x14002CEBC (MiChargeForWriteInProgressPage.c)
 *     MiChargeForLockedPage @ 0x14002DE70 (MiChargeForLockedPage.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x140030780 (MiCheckProtoPtePageState.c)
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MiDeletePteRun @ 0x140037620 (MiDeletePteRun.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiProbeLockFrame @ 0x140041950 (MiProbeLockFrame.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiObtainFaultCharges @ 0x140064D60 (MiObtainFaultCharges.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiCommitPoolMemory @ 0x140099590 (MiCommitPoolMemory.c)
 *     MiFindContiguousPages @ 0x14009A110 (MiFindContiguousPages.c)
 *     MmCheckCachedPageStates @ 0x1400B0290 (MmCheckCachedPageStates.c)
 *     MiCopyOnWrite @ 0x1400B45C0 (MiCopyOnWrite.c)
 *     MmCreateKernelStack @ 0x1400C9EF0 (MmCreateKernelStack.c)
 *     MmChargeResources @ 0x1400E3D2C (MmChargeResources.c)
 *     MiObtainPoolCharges @ 0x1401097C4 (MiObtainPoolCharges.c)
 *     MiAcquireNonPagedResources @ 0x14013DA0C (MiAcquireNonPagedResources.c)
 *     MiGetFileHashPage @ 0x14015171C (MiGetFileHashPage.c)
 *     MiExpandPagedPool @ 0x1401641CC (MiExpandPagedPool.c)
 *     MiSessionInsertImage @ 0x14017600C (MiSessionInsertImage.c)
 *     MiPurgeImageSection @ 0x140176600 (MiPurgeImageSection.c)
 *     MiStoreChargeReservedPages @ 0x14017F704 (MiStoreChargeReservedPages.c)
 *     MiInitializeCommitment @ 0x140187CE0 (MiInitializeCommitment.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402A4AD4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiAcquireNonPagedResourcesForce @ 0x1402A60F0 (MiAcquireNonPagedResourcesForce.c)
 *     MiSetPagesModified @ 0x1402AA6EC (MiSetPagesModified.c)
 *     MmAllocateSpecialPool @ 0x1402ACA64 (MmAllocateSpecialPool.c)
 *     MiAttemptPageFileReductionApc @ 0x1402B7360 (MiAttemptPageFileReductionApc.c)
 *     MiGetSubsectionCharges @ 0x1402C4994 (MiGetSubsectionCharges.c)
 *     MiBuildForkPte @ 0x1402C7AF0 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CA018 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x1402CA970 (MiReferenceCloneProto.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402CBE14 (MiGetCrossPartitionCombineCharges.c)
 *     MiMakePageBad @ 0x1402CF028 (MiMakePageBad.c)
 *     MiChargeFullProcessCommitment @ 0x1405E0510 (MiChargeFullProcessCommitment.c)
 *     MiCreateImageFileMap @ 0x14061CEB8 (MiCreateImageFileMap.c)
 *     MiChargeSegmentCommit @ 0x14061E0D0 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x14061EB18 (MiCreatePagingFileMap.c)
 *     MiRelocateImage @ 0x14064FEE4 (MiRelocateImage.c)
 *     MmRotatePhysicalView @ 0x14066B930 (MmRotatePhysicalView.c)
 *     MiChargeSystemImageCommitment @ 0x14068321C (MiChargeSystemImageCommitment.c)
 *     MiAllocatePerSessionProtos @ 0x1406C9210 (MiAllocatePerSessionProtos.c)
 *     MmCreateProcessAddressSpace @ 0x1406D18B8 (MmCreateProcessAddressSpace.c)
 *     MiSessionCreate @ 0x140715028 (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x140715C88 (MiSessionCreateInternal.c)
 *     MiCreatePagingFile @ 0x14074BFD8 (MiCreatePagingFile.c)
 *     MiMapUserLargePages @ 0x14085D578 (MiMapUserLargePages.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x1409B8BD8 (MiInitializeBootLoadedDriverPfns.c)
 *     MiAllocateDummyPage @ 0x1409B9930 (MiAllocateDummyPage.c)
 *     MiInitializeGapFrames @ 0x1409D2020 (MiInitializeGapFrames.c)
 * Callees:
 *     MiReplenishLocalCommit @ 0x140123B74 (MiReplenishLocalCommit.c)
 *     MiFreeExcessSegments @ 0x1401643B4 (MiFreeExcessSegments.c)
 *     MiSyncCommitSignals @ 0x140187FCC (MiSyncCommitSignals.c)
 *     MiIssuePageExtendRequest @ 0x1402B826C (MiIssuePageExtendRequest.c)
 *     MiApplyCommitDelay @ 0x1402BFF50 (MiApplyCommitDelay.c)
 *     MiCauseOverCommitPopup @ 0x1402C00E0 (MiCauseOverCommitPopup.c)
 *     MiPulseCommitSignal @ 0x1402C014C (MiPulseCommitSignal.c)
 */

__int64 __fastcall MiChargeCommit(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 CachedCommit; // rdx
  signed __int32 v7; // eax
  int v9; // r13d
  unsigned int v10; // ebp
  __int64 v11; // rcx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r12
  signed __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  int v25; // eax
  bool v26; // cc
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rdx
  __int64 v30; // [rsp+50h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
    CachedCommit = CurrentPrcb->CachedCommit;
    if ( a2 <= CachedCommit )
    {
      do
      {
        v7 = _InterlockedCompareExchange(
               (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
               CachedCommit - a2,
               CachedCommit);
        if ( v7 == CachedCommit )
          return 1LL;
        CachedCommit = v7;
      }
      while ( a2 <= v7 );
    }
  }
  v9 = 0;
  v10 = a3 | 2;
  if ( (a3 & 4) == 0 )
    v10 = a3;
  if ( (v10 & 8) == 0 )
  {
    if ( (v10 & 7) != 0 )
      v11 = 0LL;
    else
      v11 = *(_QWORD *)(a1 + 6448);
    goto LABEL_11;
  }
  v10 |= 2u;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0
    && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    v10 |= 4u;
    v11 = 0LL;
LABEL_11:
    v30 = v11;
    goto LABEL_12;
  }
  v11 = 64LL;
  v30 = 64LL;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition && *(_QWORD *)(a1 + 7120) >> 6 < 0x40uLL )
  {
    v11 = *(_QWORD *)(a1 + 7120) >> 6;
    v30 = v11;
  }
  do
  {
    while ( 1 )
    {
LABEL_12:
      v12 = *(_QWORD *)(a1 + 7656);
      v13 = v12 + a2;
      if ( v12 + a2 <= v12 || v13 + v11 < v13 )
      {
        if ( (v10 & 4) == 0 )
        {
          if ( (v10 & 2) == 0 )
          {
            ++*(_DWORD *)(a1 + 7844);
            if ( (v10 & 1) == 0 )
              MiCauseOverCommitPopup(a1);
            MiPulseCommitSignal(a1);
          }
          return 0LL;
        }
        if ( !v11 )
          ++dword_14043A860;
        goto LABEL_60;
      }
      v14 = *(_QWORD *)(a1 + 7784);
      if ( v13 + v11 <= v14 )
      {
        if ( !v9 && v13 >= 95 * (v14 / 0x64) )
        {
          MiApplyCommitDelay(a1, v10, *(_QWORD *)(a1 + 7784));
          v11 = v30;
          v9 = 1;
        }
        goto LABEL_18;
      }
      v24 = *(_QWORD *)(a1 + 6432);
      if ( v13 >= v24 && v12 < v24 )
      {
        MiPulseCommitSignal(a1);
        v11 = v30;
      }
      if ( (v10 & 4) != 0 )
      {
        if ( !v11 )
          ++dword_14043A85C;
LABEL_60:
        if ( a2 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6464), a2);
          return 1LL;
        }
        goto LABEL_18;
      }
      if ( (v10 & 2) != 0 )
        return 0LL;
      if ( v14 == *(_QWORD *)(a1 + 6408) )
        break;
      if ( (v10 & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 7840);
        MiIssuePageExtendRequest(a1, 4096LL, 2LL, 0LL);
        return 0LL;
      }
      if ( !(unsigned int)MiIssuePageExtendRequest(a1, a2, 0LL, 255LL) )
      {
        ++*(_DWORD *)(a1 + 7832);
        MiCauseOverCommitPopup(a1);
        return 0LL;
      }
      v11 = v30;
    }
    ++*(_DWORD *)(a1 + 7836);
    if ( (ULONG_PTR *)a1 != &MiSystemPartition )
      return 0LL;
    v25 = MiIssuePageExtendRequest(a1, a2, 2 * (v10 & 1) + 8, 0LL);
    if ( (v10 & 1) != 0 )
      return 0LL;
    if ( !v25 )
    {
      MiCauseOverCommitPopup(a1);
      return 0LL;
    }
    v11 = v30;
LABEL_18:
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 7656), v13, v12);
  }
  while ( v12 != v15 );
  v16 = *(_QWORD *)(a1 + 6432);
  v17 = a2 + v15;
  if ( v17 >= v16 && v12 < v16 || (v18 = *(_QWORD *)(a1 + 6424), v17 >= v18) && v12 < v18 )
  {
    MiSyncCommitSignals(a1, 0LL);
    v11 = v30;
  }
  if ( v17 > *(_QWORD *)(a1 + 6400) )
    *(_QWORD *)(a1 + 6400) = v17;
  if ( (v10 & 2) == 0 )
  {
    v19 = *(_QWORD *)(a1 + 7784);
    v20 = v19 / 0xA;
    if ( v17 < 9 * (v19 / 0xA) )
      goto LABEL_25;
    v26 = v17 <= v19;
    if ( v17 >= v19 )
    {
LABEL_72:
      if ( v26 )
      {
        v27 = *(_QWORD *)(a1 + 6408);
        if ( v19 < v27 && v17 < v27 )
        {
          if ( v20 > 0x40000 )
            v20 = 0x40000LL;
          v28 = v27 - v19;
          v29 = v20 - v17;
          if ( v29 + v19 <= v28 )
            v28 = v29 + v19;
          MiIssuePageExtendRequest(a1, v28, 2LL, 0LL);
          v11 = v30;
        }
      }
      goto LABEL_25;
    }
    if ( v19 - v17 < 0x400000 )
    {
      v26 = v17 <= v19;
      goto LABEL_72;
    }
LABEL_25:
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    {
      if ( (v10 & 1) == 0 && v17 >= *(_QWORD *)(a1 + 6432) && v19 == *(_QWORD *)(a1 + 6408) )
      {
        MiFreeExcessSegments(v11);
        v11 = v30;
      }
      v21 = CurrentPrcb->CachedCommit;
      if ( v21 < 0x80 )
      {
        v22 = 256 - v21 + v17;
        if ( v22 > v17 )
        {
          v23 = v11 + v22;
          if ( v23 > v17 && v23 <= v19 )
          {
            MiReplenishLocalCommit(a1, CurrentPrcb, v17);
            return 1LL;
          }
        }
      }
    }
  }
  return 1LL;
}
