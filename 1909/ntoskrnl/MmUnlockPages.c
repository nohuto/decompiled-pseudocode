/*
 * XREFs of MmUnlockPages @ 0x14006A600
 * Callers:
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     CcMapAndCopyInToCache @ 0x14006DAE0 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x1400B7C60 (CcCopyBytesToUserBuffer.c)
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 *     MiProbeAndLockComplete @ 0x1400DE630 (MiProbeAndLockComplete.c)
 *     ExUnlockUserBuffer @ 0x1400F4860 (ExUnlockUserBuffer.c)
 *     CcMdlWriteComplete2 @ 0x1400FE680 (CcMdlWriteComplete2.c)
 *     CcZeroDataInCache @ 0x1400FEBC4 (CcZeroDataInCache.c)
 *     MiGetWorkingSetInfoList @ 0x14011DB2C (MiGetWorkingSetInfoList.c)
 *     CcPrepareMdlWrite @ 0x140136D70 (CcPrepareMdlWrite.c)
 *     CcLockSystemCacheBuffer @ 0x14027D2C4 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x14027E890 (CcMdlWriteAbort.c)
 *     VslpLockPagesForTransfer @ 0x140290AEC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290CC8 (VslpUnlockPagesForTransfer.c)
 *     VslFinalizeSecureImageHash @ 0x140291040 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x1402916F0 (VslValidateDynamicCodePages.c)
 *     KiTpWriteSecureBreakpoint @ 0x1402AD8C4 (KiTpWriteSecureBreakpoint.c)
 *     KiOpPatchCode @ 0x1402B3650 (KiOpPatchCode.c)
 *     MiGetWorkingSetInfo @ 0x1402D8390 (MiGetWorkingSetInfo.c)
 *     PspIumFreePartitionState @ 0x140308E6C (PspIumFreePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x140326770 (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x1403290B0 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x140329150 (VmUnlockPages.c)
 *     ExpGetLookasideInformation @ 0x14033751C (ExpGetLookasideInformation.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405B4584 (WbMakeUserDataPagesKernelWritable.c)
 *     PspGetSetContextInternal @ 0x1405E87A0 (PspGetSetContextInternal.c)
 *     MmCopyVirtualMemory @ 0x1405FE630 (MmCopyVirtualMemory.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     CcMdlRead @ 0x140646CB0 (CcMdlRead.c)
 *     MmRotatePhysicalView @ 0x1406A4CA0 (MmRotatePhysicalView.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406AFD20 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1406B1434 @ 0x1406B1434 (sub_1406B1434.c)
 *     CcMdlReadComplete2 @ 0x1406B15A4 (CcMdlReadComplete2.c)
 *     AlpcpInitializeCompletionList @ 0x1406C2F48 (AlpcpInitializeCompletionList.c)
 *     MiAllocatePerSessionProtos @ 0x1406E9D44 (MiAllocatePerSessionProtos.c)
 *     AlpcpFreeCompletionList @ 0x1406F94F8 (AlpcpFreeCompletionList.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14072F0B0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     FsRtlpFreeMdlChain @ 0x14084EAD0 (FsRtlpFreeMdlChain.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14084FE80 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     VslCallEnclave @ 0x140850E4C (VslCallEnclave.c)
 *     VslObtainHotPatchUndoTable @ 0x140852258 (VslObtainHotPatchUndoTable.c)
 *     IopCleanupFileObjectIosbRange @ 0x140853224 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x1408546E4 (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x14088D364 (MiApplyImageHotPatch.c)
 *     MiReleaseHotPatchResources @ 0x140891348 (MiReleaseHotPatchResources.c)
 *     MiCopyPagesIntoEnclave @ 0x140892BA4 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140893BE0 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140893FA8 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x140894EE0 (NtLoadEnclaveData.c)
 *     PopReadPagesFromHiberFile @ 0x1408A795C (PopReadPagesFromHiberFile.c)
 *     PspCreateSecureThread @ 0x1408C8470 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1408E7F34 (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x140917890 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x140917BD0 (NtStartProfile.c)
 *     NtStopProfile @ 0x140917E30 (NtStopProfile.c)
 * Callees:
 *     MiUnlockPageTableCharges @ 0x140020F18 (MiUnlockPageTableCharges.c)
 *     MiPfnReferenceCountIsZero @ 0x1400265C0 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x140026F20 (MiPfnShareCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MmUnmapLockedPages @ 0x14006AF70 (MmUnmapLockedPages.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfnFileOnly @ 0x1400B9E30 (MiIsPfnFileOnly.c)
 *     MiDereferenceControlAreaProbe @ 0x1400BF650 (MiDereferenceControlAreaProbe.c)
 *     MiDereferenceIoPages @ 0x1400F55EC (MiDereferenceIoPages.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140105E50 (ExReleaseRundownProtectionCacheAware.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiFreeMdlTracker @ 0x1402BF848 (MiFreeMdlTracker.c)
 *     MiRetardMdl @ 0x1402BF9DC (MiRetardMdl.c)
 */

void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  PMDL v1; // r15
  CSHORT MdlFlags; // r14
  unsigned __int64 v4; // r12
  struct _MDL *v5; // rdi
  int v6; // r11d
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r8
  unsigned __int8 CurrentIrql; // r12
  ULONG_PTR Next; // rsi
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // r8
  char v18; // al
  __int64 v19; // rdx
  bool v20; // zf
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // r14d
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
  unsigned __int64 v39; // r15
  __int64 v40; // rdi
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  struct _KPRCB *v43; // r8
  __int64 v44; // rdx
  signed __int32 v45; // eax
  unsigned __int8 v46; // dl
  __int64 v47; // rax
  char v48; // al
  unsigned __int8 v49; // dl
  __int64 v50; // rax
  __int64 v51; // r9
  struct _KPRCB *v52; // rcx
  struct _KPRCB *v53; // rcx
  __int64 v54; // [rsp+30h] [rbp-98h]
  int v55; // [rsp+38h] [rbp-90h]
  __int64 v56; // [rsp+40h] [rbp-88h]
  unsigned __int8 v57; // [rsp+48h] [rbp-80h]
  struct _MDL *v58; // [rsp+50h] [rbp-78h]
  __int64 v59; // [rsp+58h] [rbp-70h]
  struct _EPROCESS *Process; // [rsp+68h] [rbp-60h]
  unsigned __int64 v61; // [rsp+70h] [rbp-58h]
  CSHORT v62; // [rsp+D0h] [rbp+8h]
  unsigned int v63; // [rsp+D8h] [rbp+10h]
  int v64; // [rsp+E0h] [rbp+18h] BYREF
  int v65; // [rsp+E8h] [rbp+20h] BYREF

  v1 = MemoryDescriptorList + 1;
  MdlFlags = MemoryDescriptorList->MdlFlags;
  Process = MemoryDescriptorList->Process;
  v62 = MdlFlags;
  if ( (MdlFlags & 0x200) != 0 )
    MiRetardMdl(MemoryDescriptorList);
  v4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v61 = v4;
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  if ( (MmTrackLockedPages & 1) != 0 )
    MiFreeMdlTracker((ULONG_PTR)MemoryDescriptorList);
  v5 = (PMDL)((char *)v1 + 8 * v4);
  v6 = 0;
  v58 = v5;
  v7 = 0xFFFFFFFFFLL;
  v59 = 0LL;
  v8 = 0xFFFFFFFFFLL;
  v55 = 1;
  v56 = 0xFFFFFFFFFLL;
  v9 = 0LL;
  v10 = 1LL;
  v63 = 1;
  CurrentIrql = KeGetCurrentIrql();
  v57 = CurrentIrql;
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
    v13 = 48 * Next - 0x58000000000LL;
    if ( (MdlFlags & 0x100) != 0 )
    {
      v14 = *(_QWORD *)(v13 + 40);
      if ( ((v14 >> 54) & 7) != 1 && v8 != (v14 & 0xFFFFFFFFFLL) && (v14 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
      {
        if ( v8 != 0xFFFFFFFFFLL )
        {
          MiUnlockPageTableCharges(48 * v8 - 0x58000000000LL, v10);
          v14 = *(_QWORD *)(v13 + 40);
          v6 = 0;
          v7 = 0xFFFFFFFFFLL;
        }
        v56 = v14 & 0xFFFFFFFFFLL;
        v63 = 2 - ((v14 & 0x200000000000000LL) != 0);
      }
    }
    v64 = 0;
    v15 = 0LL;
    v16 = 0LL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v64);
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
      v6 = 0;
    }
    v17 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v13 + 40) >> 40) & 0x3FFLL));
    v18 = *(_BYTE *)(v13 + 34);
    v54 = v17;
    if ( (v18 & 0x20) != 0 && (v18 & 8) == 0 && (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    {
      v16 = *(_QWORD *)v13 - 32LL;
      _InterlockedDecrement64((volatile signed __int64 *)(v16 + 264));
    }
    if ( (MdlFlags & 0x80u) != 0 )
    {
      if ( !v16 )
      {
        v46 = *(_BYTE *)(v13 + 34);
        v7 = *(_QWORD *)(v13 + 16);
        if ( (((v7 & 0x400) == 0) & (unsigned __int8)~(v46 >> 3)) != 0 )
        {
          if ( (v7 & 4) != 0 )
          {
            v50 = MI_READ_PTE_LOCK_FREE(v13 + 16);
            v17 = v54;
            v7 = v51 & 0xFFFFFFFFFFFFFFFBuLL;
            *(_QWORD *)(v13 + 16) = v7;
            v46 = *(_BYTE *)(v13 + 34);
            v9 = v50 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          else
          {
            v9 = 0LL;
          }
        }
        *(_BYTE *)(v13 + 34) = v46 | 0x10;
      }
      if ( (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) != 0 )
      {
        v47 = *(_QWORD *)(v13 + 16);
        if ( (v47 & 0x400) != 0 )
        {
          if ( qword_140465800 && (v47 & 0x10) == 0 )
            v47 &= ~qword_140465800;
          v15 = *(_QWORD *)(v47 >> 16);
        }
      }
    }
    v19 = *(unsigned __int16 *)(v13 + 32);
    if ( !(_WORD)v19 )
      KeBugCheckEx(0x4Eu, 0x9AuLL, Next, *(_BYTE *)(v13 + 34) & 7, 0LL);
    v20 = (_WORD)v19 == 1;
    LOWORD(v19) = v19 - 1;
    *(_WORD *)(v13 + 32) = v19;
    if ( v20 && (unsigned int)MiIsPfnFileOnly(48 * Next - 0x58000000000LL, v19, v17, v7) )
      goto LABEL_104;
    v21 = *(_QWORD *)(v13 + 40);
    if ( (v21 & 0x10000000000000LL) == 0 )
    {
      v22 = *(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (_WORD)v19 )
      {
        if ( (_WORD)v19 == 1 )
        {
          if ( v22 || (*(_BYTE *)(v13 + 34) & 8) != 0 )
            goto LABEL_27;
LABEL_42:
          v17 = v54;
          goto LABEL_43;
        }
        if ( (_WORD)v19 != 2 || !v22 || (*(_BYTE *)(v13 + 34) & 8) == 0 )
          goto LABEL_42;
LABEL_27:
        v23 = v6;
      }
      else
      {
        v23 = 1;
      }
      v24 = *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL;
      if ( v24 > 0xFFFFF6BFFFFFFF78uLL || v24 < 0xFFFFF68000000000uLL )
      {
        v48 = *(_BYTE *)(v13 + 35);
        if ( (v48 & 0x20) != 0 )
        {
          *(_BYTE *)(v13 + 35) = v48 & 0xDF;
          goto LABEL_41;
        }
      }
      v25 = v6;
      if ( (v21 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v13 + 16) & 0x400LL) != 0
        || v24 <= 0xFFFFF6BFFFFFFF78uLL && v24 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v13 + 35) & 0x20) != 0
        || v23 == 1 && (*(_QWORD *)(v13 + 24) & 0x4000000000000000LL) != 0 )
      {
        v25 = 1;
      }
      v26 = (v21 >> 40) & 0x3FF;
      v27 = *(_QWORD *)(qword_140465E88 + 8 * v26);
      if ( v25 == 1 )
        MiReturnCommit(*(_QWORD *)(qword_140465E88 + 8 * v26), 1uLL);
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
              v20 = (_DWORD)CachedResidentAvailable == v31;
              LODWORD(CachedResidentAvailable) = v31;
              if ( v20 )
                break;
              if ( v31 == -1 || (unsigned __int64)(v31 + 1LL) > 0x100 )
                goto LABEL_108;
            }
LABEL_41:
            if ( v23 )
LABEL_104:
              MiPfnReferenceCountIsZero(48 * Next - 0x58000000000LL, Next);
            goto LABEL_42;
          }
LABEL_108:
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v29 = (int)CachedResidentAvailable - 192 + 1LL;
          }
        }
        _InterlockedExchangeAdd64(&qword_14046A180, v29);
        goto LABEL_41;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 8128), 1uLL);
      goto LABEL_41;
    }
LABEL_43:
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v9 )
    {
      MiReleasePageFileInfo(v54, v9, 1LL);
      v17 = v54;
      v9 = 0LL;
    }
    if ( v15 )
    {
      MiDereferenceControlAreaProbe(v15, 1LL);
      v17 = v54;
    }
    if ( (ULONG_PTR *)v17 != &MiSystemPartition )
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v17 + 2080));
    CurrentIrql = v57;
    v5 = v58;
    MdlFlags = v62;
LABEL_50:
    v1 = (PMDL)((char *)v1 + 8);
    if ( (++v59 & 0x3F) == 0 && CurrentIrql < 2u )
    {
      if ( v1 >= v5 )
      {
        v8 = v56;
        v10 = v63;
        v7 = 0xFFFFFFFFFLL;
        break;
      }
      if ( KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v52 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v52->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v52);
        }
        __writecr8(CurrentIrql);
        v49 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        CurrentIrql = v49;
        v57 = v49;
      }
    }
    v8 = v56;
    v6 = 0;
    v10 = v63;
    v7 = 0xFFFFFFFFFLL;
  }
  while ( v1 < v5 );
  if ( v8 != 0xFFFFFFFFFLL )
  {
    v32 = 48 * v8 - 0x58000000000LL;
    v33 = (__int64)((unsigned __int128)(48 * v8 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    if ( (v33 >> 63) + v33 != 0xFFFFFFFFFLL )
    {
      v34 = 0LL;
      if ( (_DWORD)v10 == 2 )
      {
        if ( (*(_BYTE *)(v32 + 34) & 7) != 6
          || (*(_QWORD *)(v32 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
          || (v35 = *(_QWORD *)(v32 + 8) | 0x8000000000000000uLL,
              v10 = 0xFFFFF68000000000uLL,
              v35 < 0xFFFFF68000000000uLL)
          || v35 > 0xFFFFF6FFFFFFFFFFuLL
          || (v36 = (__int64)(v35 << 25) >> 16, v36 < 0xFFFFF68000000000uLL)
          || v36 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v55 = 0;
        }
        v37 = 3;
        if ( v55 )
          goto LABEL_62;
        goto LABEL_160;
      }
      v37 = 1;
      if ( !(_DWORD)v10 )
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
        v65 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v65);
          while ( *(__int64 *)(v32 + 24) < 0 );
        }
        v41 = *(_QWORD *)(v32 + 24) ^ ((*(_QWORD *)(v32 + 24) - 0x10000LL) ^ *(_QWORD *)(v32 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v32 + 24) = v41;
        v42 = v41 & 0x3FFFFFFFFFFFFFFFLL;
        if ( v42 >= 0x10000 )
          break;
        if ( !v34 )
          v34 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v32 + 40) >> 40) & 0x3FFLL));
        ++v38;
        if ( !v42 && (unsigned int)MiPfnShareCountIsZero(v32, 0LL, v10, v7) != 3 )
          ++v39;
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !--v37 )
          goto LABEL_72;
        v32 = 48 * v40 - 0x58000000000LL;
        v7 = 0xFFFFFFFFFLL;
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
                v20 = (_DWORD)v44 == v45;
                LODWORD(v44) = v45;
                if ( v20 )
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
          _InterlockedExchangeAdd64(&qword_14046A180, v38);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 + 8128), v38);
        }
      }
LABEL_78:
      if ( v39 )
        MiReturnCommit(v34, v39);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v53 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v53->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v53);
  }
  __writecr8(CurrentIrql);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process->NumberOfLockedPages, -(__int64)v61);
  MemoryDescriptorList->MdlFlags &= 0xF6FDu;
}
