/*
 * XREFs of MmUnlockPages @ 0x140033580
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MiProbeAndLockComplete @ 0x1400935EC (MiProbeAndLockComplete.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     CcCopyBytesToUserBuffer @ 0x1400B1860 (CcCopyBytesToUserBuffer.c)
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     CcZeroDataInCache @ 0x1400E0844 (CcZeroDataInCache.c)
 *     CcMdlWriteComplete2 @ 0x1400E19A8 (CcMdlWriteComplete2.c)
 *     CcPrepareMdlWrite @ 0x1400E1AC0 (CcPrepareMdlWrite.c)
 *     ExUnlockUserBuffer @ 0x14011A788 (ExUnlockUserBuffer.c)
 *     CcLockSystemCacheBuffer @ 0x140269D14 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x14026B2B0 (CcMdlWriteAbort.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C8E0 (VslpUnlockPagesForTransfer.c)
 *     VslFinalizeSecureImageHash @ 0x14027CC00 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x14027D180 (VslValidateDynamicCodePages.c)
 *     KiOpPatchCode @ 0x14029C7D8 (KiOpPatchCode.c)
 *     MiGetWorkingSetInfo @ 0x1402BEEB4 (MiGetWorkingSetInfo.c)
 *     PspIumFreePartitionState @ 0x1402EBA54 (PspIumFreePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x1403094CC (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x14030BB70 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x14030BC10 (VmUnlockPages.c)
 *     ExpGetLookasideInformation @ 0x1403192B0 (ExpGetLookasideInformation.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405859A0 (WbMakeUserDataPagesKernelWritable.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     MmCopyVirtualMemory @ 0x1406457B0 (MmCopyVirtualMemory.c)
 *     CcMdlRead @ 0x140663D50 (CcMdlRead.c)
 *     CcMdlReadComplete2 @ 0x140664024 (CcMdlReadComplete2.c)
 *     MmRotatePhysicalView @ 0x14066CAD0 (MmRotatePhysicalView.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140691064 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_140691390 @ 0x140691390 (sub_140691390.c)
 *     sub_140692704 @ 0x140692704 (sub_140692704.c)
 *     MiAllocatePerSessionProtos @ 0x1406CA490 (MiAllocatePerSessionProtos.c)
 *     AlpcpInitializeCompletionList @ 0x1406D5E80 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1406D7C60 (AlpcpFreeCompletionList.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140707780 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     FsRtlpFreeMdlChain @ 0x140816AC4 (FsRtlpFreeMdlChain.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140817E60 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     VslCallEnclave @ 0x140818EFC (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x140819D74 (VslObtainHotPatchUndoTable.c)
 *     IopCleanupFileObjectIosbRange @ 0x14081AAB8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14081C21C (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x1408558E8 (MiApplyImageHotPatch.c)
 *     MiReleaseHotPatchResources @ 0x14085916C (MiReleaseHotPatchResources.c)
 *     MiCopyPagesIntoEnclave @ 0x14085A6EC (MiCopyPagesIntoEnclave.c)
 *     NtLoadEnclaveData @ 0x14085C210 (NtLoadEnclaveData.c)
 *     PspCreateSecureThread @ 0x14088BDAC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1408AC620 (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x1408DB360 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x1408DB6A0 (NtStartProfile.c)
 *     NtStopProfile @ 0x1408DB900 (NtStopProfile.c)
 * Callees:
 *     MiUnlockPageTableCharges @ 0x14001A320 (MiUnlockPageTableCharges.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiDereferenceControlAreaProbe @ 0x140094C2C (MiDereferenceControlAreaProbe.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x14010C990 (ExReleaseRundownProtectionCacheAware.c)
 *     MiDereferenceIoPages @ 0x140123704 (MiDereferenceIoPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiFreeMdlTracker @ 0x1402A8458 (MiFreeMdlTracker.c)
 *     MiRetardMdl @ 0x1402A85DC (MiRetardMdl.c)
 */

void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  PMDL v1; // r14
  CSHORT MdlFlags; // r15
  unsigned __int64 v4; // r12
  struct _MDL *v5; // rdi
  int v6; // r11d
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  int v9; // r8d
  unsigned __int8 CurrentIrql; // r12
  ULONG_PTR Next; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // rbp
  struct _KEVENT *v16; // r8
  char v17; // al
  __int16 v18; // dx
  bool v19; // zf
  __int16 v20; // dx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // r15d
  unsigned __int64 v24; // rdx
  int v25; // r10d
  __int64 v26; // rcx
  __int64 v27; // rbp
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v29; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v31; // eax
  ULONG_PTR v32; // rbx
  unsigned __int64 v33; // rdx
  __int64 v34; // rbp
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  int v37; // r14d
  unsigned __int64 v38; // rsi
  __int64 v39; // r15
  __int64 v40; // rdi
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  struct _KPRCB *v43; // r8
  __int64 v44; // rdx
  signed __int32 v45; // eax
  unsigned __int8 v46; // al
  __int64 v47; // r9
  __int64 v48; // rax
  char v49; // al
  unsigned __int8 v50; // dl
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // rbx
  struct _KPRCB *v54; // rcx
  struct _KPRCB *v55; // rcx
  struct _KEVENT *v56; // [rsp+30h] [rbp-98h]
  int v57; // [rsp+38h] [rbp-90h]
  __int64 v58; // [rsp+40h] [rbp-88h]
  unsigned __int8 v59; // [rsp+48h] [rbp-80h]
  struct _MDL *v60; // [rsp+50h] [rbp-78h]
  __int64 v61; // [rsp+58h] [rbp-70h]
  struct _EPROCESS *Process; // [rsp+68h] [rbp-60h]
  unsigned __int64 v63; // [rsp+70h] [rbp-58h]
  CSHORT v64; // [rsp+D0h] [rbp+8h]
  int v65; // [rsp+D8h] [rbp+10h]
  int v66; // [rsp+E0h] [rbp+18h] BYREF
  int v67; // [rsp+E8h] [rbp+20h] BYREF

  v1 = MemoryDescriptorList + 1;
  MdlFlags = MemoryDescriptorList->MdlFlags;
  Process = MemoryDescriptorList->Process;
  v64 = MdlFlags;
  if ( (MdlFlags & 0x200) != 0 )
    MiRetardMdl(MemoryDescriptorList);
  v4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v63 = v4;
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  if ( (MmTrackLockedPages & 1) != 0 )
    MiFreeMdlTracker((ULONG_PTR)MemoryDescriptorList);
  v5 = (PMDL)((char *)v1 + 8 * v4);
  v6 = 0;
  v60 = v5;
  v61 = 0LL;
  v7 = 0xFFFFFFFFFLL;
  v57 = 1;
  v58 = 0xFFFFFFFFFLL;
  v8 = 0LL;
  v9 = 1;
  v65 = 1;
  CurrentIrql = KeGetCurrentIrql();
  v59 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  do
  {
    Next = (ULONG_PTR)v1->Next;
    if ( v1->Next == (struct _MDL *)-1LL )
      break;
    if ( Next > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * Next - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    {
      MiDereferenceIoPages(0LL, v1->Next, 1LL);
      goto LABEL_50;
    }
    v12 = 48 * Next - 0x58000000000LL;
    if ( (MdlFlags & 0x100) != 0 )
    {
      v13 = *(_QWORD *)(v12 + 40);
      if ( ((v13 >> 54) & 7) != 1 && v7 != (v13 & 0xFFFFFFFFFLL) && (v13 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
      {
        if ( v7 != 0xFFFFFFFFFLL )
        {
          MiUnlockPageTableCharges(48 * v7 - 0x58000000000LL, v9);
          v13 = *(_QWORD *)(v12 + 40);
          v6 = 0;
        }
        v58 = v13 & 0xFFFFFFFFFLL;
        v65 = 2 - ((v13 & 0x200000000000000LL) != 0);
      }
    }
    v66 = 0;
    v14 = 0LL;
    v15 = 0LL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v66);
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) );
      v6 = 0;
    }
    v16 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v12 + 40) >> 40) & 0x3FFLL));
    v17 = *(_BYTE *)(v12 + 34);
    v56 = v16;
    if ( (v17 & 0x20) != 0 && (v17 & 8) == 0 && (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    {
      v15 = *(_QWORD *)v12 - 32LL;
      _InterlockedDecrement64((volatile signed __int64 *)(v15 + 264));
    }
    if ( (MdlFlags & 0x80u) != 0 )
    {
      if ( !v15 )
      {
        v46 = *(_BYTE *)(v12 + 34);
        v47 = *(_QWORD *)(v12 + 16);
        if ( (((v47 & 0x400) == 0) & (unsigned __int8)~(v46 >> 3)) != 0 )
        {
          if ( (v47 & 4) != 0 )
          {
            v51 = MI_READ_PTE_LOCK_FREE(v12 + 16);
            v16 = v56;
            v53 = v51;
            *(_QWORD *)(v12 + 16) = v52 & 0xFFFFFFFFFFFFFFFBuLL;
            v46 = *(_BYTE *)(v12 + 34);
            v8 = v53 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          else
          {
            v8 = 0LL;
          }
        }
        *(_BYTE *)(v12 + 34) = v46 | 0x10;
      }
      if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) != 0 )
      {
        v48 = *(_QWORD *)(v12 + 16);
        if ( (v48 & 0x400) != 0 )
        {
          if ( qword_14043B180 && (v48 & 0x10) == 0 )
            v48 &= ~qword_14043B180;
          v14 = *(_QWORD *)(v48 >> 16);
        }
      }
    }
    v18 = *(_WORD *)(v12 + 32);
    if ( !v18 )
      KeBugCheckEx(0x4Eu, 0x9AuLL, Next, *(_BYTE *)(v12 + 34) & 7, 0LL);
    v19 = v18 == 1;
    v20 = v18 - 1;
    *(_WORD *)(v12 + 32) = v20;
    if ( v19 && (unsigned int)MiIsPfnFileOnly(48 * Next - 0x58000000000LL) )
      goto LABEL_104;
    v21 = *(_QWORD *)(v12 + 40);
    if ( (v21 & 0x10000000000000LL) == 0 )
    {
      v22 = *(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v20 )
      {
        if ( v20 == 1 )
        {
          if ( v22 || (*(_BYTE *)(v12 + 34) & 8) != 0 )
            goto LABEL_27;
LABEL_42:
          v16 = v56;
          goto LABEL_43;
        }
        if ( v20 != 2 || !v22 || (*(_BYTE *)(v12 + 34) & 8) == 0 )
          goto LABEL_42;
LABEL_27:
        v23 = v6;
      }
      else
      {
        v23 = 1;
      }
      v24 = *(_QWORD *)(v12 + 8) | 0x8000000000000000uLL;
      if ( v24 > 0xFFFFF6BFFFFFFF78uLL || v24 < 0xFFFFF68000000000uLL )
      {
        v49 = *(_BYTE *)(v12 + 35);
        if ( (v49 & 0x20) != 0 )
        {
          *(_BYTE *)(v12 + 35) = v49 & 0xDF;
          goto LABEL_41;
        }
      }
      v25 = v6;
      if ( (v21 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v12 + 16) & 0x400LL) != 0
        || v24 <= 0xFFFFF6BFFFFFFF78uLL && v24 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v12 + 35) & 0x20) != 0
        || v23 == 1 && (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) != 0 )
      {
        v25 = 1;
      }
      v26 = (v21 >> 40) & 0x3FF;
      v27 = *(_QWORD *)(qword_14043B808 + 8 * v26);
      if ( v25 == 1 )
        MiReturnCommit(*(_QWORD *)(qword_14043B808 + 8 * v26), 1LL);
      if ( (ULONG_PTR *)v27 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v29 = 1LL;
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            while ( 1 )
            {
              v31 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v19 = (_DWORD)CachedResidentAvailable == v31;
              LODWORD(CachedResidentAvailable) = v31;
              if ( v19 )
                break;
              if ( v31 == -1 || (unsigned __int64)(v31 + 1LL) > 0x100 )
                goto LABEL_114;
            }
LABEL_41:
            if ( v23 )
LABEL_104:
              MiPfnReferenceCountIsZero(48 * Next - 0x58000000000LL, Next);
            goto LABEL_42;
          }
LABEL_114:
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v29 = (int)CachedResidentAvailable - 192 + 1LL;
          }
        }
        _InterlockedExchangeAdd64(&qword_14043F6C0, v29);
        goto LABEL_41;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 7360), 1uLL);
      goto LABEL_41;
    }
LABEL_43:
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v8 )
    {
      MiReleasePageFileInfo(v56, v8, 1);
      v16 = v56;
      v8 = 0LL;
    }
    if ( v14 )
    {
      MiDereferenceControlAreaProbe(v14, 1LL);
      v16 = v56;
    }
    if ( v16 != (struct _KEVENT *)&MiSystemPartition )
      ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v16[86].Header.WaitListHead.Blink);
    CurrentIrql = v59;
    v5 = v60;
    MdlFlags = v64;
LABEL_50:
    v1 = (PMDL)((char *)v1 + 8);
    if ( (++v61 & 0x3F) == 0 && CurrentIrql < 2u )
    {
      if ( v1 >= v5 )
      {
        v7 = v58;
        v9 = v65;
        break;
      }
      if ( KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v54 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v54->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v54);
        }
        __writecr8(CurrentIrql);
        v50 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v50 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        CurrentIrql = v50;
        v59 = v50;
      }
    }
    v7 = v58;
    v6 = 0;
    v9 = v65;
  }
  while ( v1 < v5 );
  if ( v7 != 0xFFFFFFFFFLL )
  {
    v32 = 48 * v7 - 0x58000000000LL;
    v33 = (__int64)((unsigned __int128)(48 * v7 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    if ( (v33 >> 63) + v33 != 0xFFFFFFFFFLL )
    {
      v34 = 0LL;
      if ( v9 == 2 )
      {
        if ( (*(_BYTE *)(v32 + 34) & 7) != 6
          || (*(_QWORD *)(v32 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
          || (v35 = *(_QWORD *)(v32 + 8) | 0x8000000000000000uLL, v35 < 0xFFFFF68000000000uLL)
          || v35 > 0xFFFFF6FFFFFFFFFFuLL
          || (v36 = (__int64)(v35 << 25) >> 16, v36 < 0xFFFFF68000000000uLL)
          || v36 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v57 = 0;
        }
        v37 = 3;
        if ( v57 )
          goto LABEL_62;
        goto LABEL_160;
      }
      v37 = 1;
      if ( !v9 )
        v37 = 4;
LABEL_62:
      if ( (*(_QWORD *)(v32 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_160:
        KeBugCheckEx(
          0x1Au,
          0x41791uLL,
          v32,
          *(_QWORD *)(v32 + 8) | 0x8000000000000000uLL,
          *(_QWORD *)(v32 + 24) & 0x3FFFFFFFFFFFFFFFLL);
      v38 = 0LL;
      v39 = 0LL;
      while ( 1 )
      {
        v40 = *(_QWORD *)(v32 + 40) & 0xFFFFFFFFFLL;
        v67 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v67);
          while ( *(__int64 *)(v32 + 24) < 0 );
        }
        v41 = *(_QWORD *)(v32 + 24) ^ ((*(_QWORD *)(v32 + 24) - 0x10000LL) ^ *(_QWORD *)(v32 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v32 + 24) = v41;
        v42 = v41 & 0x3FFFFFFFFFFFFFFFLL;
        if ( v42 >= 0x10000 )
          break;
        if ( !v34 )
          v34 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v32 + 40) >> 40) & 0x3FFLL));
        ++v38;
        if ( !v42 && (unsigned int)MiPfnShareCountIsZero(v32) != 3 )
          ++v39;
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !--v37 )
          goto LABEL_72;
        v32 = 48 * v40 - 0x58000000000LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_72:
      if ( v38 )
      {
        if ( (ULONG_PTR *)v34 == &MiSystemPartition )
        {
          v43 = KeGetCurrentPrcb();
          v44 = (int)v43->CachedResidentAvailable;
          if ( (_DWORD)v44 != -1 )
          {
            if ( v38 + v44 <= 0x100 )
            {
              do
              {
                if ( v38 >= 0x80000 )
                  break;
                v45 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&v43->CachedResidentAvailable,
                        v38 + v44,
                        v44);
                v19 = (_DWORD)v44 == v45;
                LODWORD(v44) = v45;
                if ( v19 )
                  goto LABEL_78;
              }
              while ( v45 != -1 && v38 + v45 <= 0x100 );
            }
            if ( (int)v44 > 192
              && (_DWORD)v44 == _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&v43->CachedResidentAvailable,
                                  192,
                                  v44) )
            {
              v38 += (int)v44 - 192;
            }
          }
          _InterlockedExchangeAdd64(&qword_14043F6C0, v38);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 + 7360), v38);
        }
      }
LABEL_78:
      if ( v39 )
        MiReturnCommit(v34, v39);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v55 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v55->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v55);
  }
  __writecr8(CurrentIrql);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process->NumberOfLockedPages, -(__int64)v63);
  MemoryDescriptorList->MdlFlags &= 0xF6FDu;
}
