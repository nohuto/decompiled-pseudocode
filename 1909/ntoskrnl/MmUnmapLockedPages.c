/*
 * XREFs of MmUnmapLockedPages @ 0x14006AF70
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006C70 (MiWaitForInPageComplete.c)
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     MiUnlockFlushMdl @ 0x140074CF8 (MiUnlockFlushMdl.c)
 *     MiValidateInPage @ 0x14008D440 (MiValidateInPage.c)
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiSectionCreated @ 0x1400C0450 (MiSectionCreated.c)
 *     MiFreePagesFromMdl @ 0x1400DDE94 (MiFreePagesFromMdl.c)
 *     IoFreeMdl @ 0x1400FEF60 (IoFreeMdl.c)
 *     MiZeroPageWrite @ 0x1400FF184 (MiZeroPageWrite.c)
 *     SmKmUnlockMdl @ 0x140148E88 (SmKmUnlockMdl.c)
 *     SmFpFree @ 0x14014A504 (SmFpFree.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014B900 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14014C274 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     MiMapPageFileHash @ 0x14014D76C (MiMapPageFileHash.c)
 *     BgpFwFreeMemory @ 0x140178B9C (BgpFwFreeMemory.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB4A8 (MiMakeOutswappedPageResident.c)
 *     MiPfCompleteCoalescedIo @ 0x1402C693C (MiPfCompleteCoalescedIo.c)
 *     MiFlushComplete @ 0x1402C9DA0 (MiFlushComplete.c)
 *     MiFlushFileOnlyMdl @ 0x1402CBE58 (MiFlushFileOnlyMdl.c)
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x140308C48 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x140308F48 (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x140326770 (SmPrepareForFatalPageError.c)
 *     MiDeleteImageCreationMdls @ 0x1406B1484 (MiDeleteImageCreationMdls.c)
 *     PopFreeHiberContext @ 0x14072B814 (PopFreeHiberContext.c)
 *     MiZeroPageFileFirstPage @ 0x140774B20 (MiZeroPageFileFirstPage.c)
 *     IopCleanupFileObjectIosbRange @ 0x140853224 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x1408546E4 (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x14088D364 (MiApplyImageHotPatch.c)
 *     ExpProfileDelete @ 0x140917890 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x140917E30 (NtStopProfile.c)
 *     ViFreeMapRegisterFile @ 0x14096BD94 (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x140984D18 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MiZeroAndFlushPtes @ 0x1400F52B8 (MiZeroAndFlushPtes.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14015B85C (MiUnmapLockedPagesInUserSpace.c)
 *     MiRetardMdl @ 0x1402BF9DC (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x1402E7C98 (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapLockedPages(PVOID BaseAddress, PMDL MemoryDescriptorList)
{
  unsigned int v3; // ecx
  __int64 ByteOffset; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r11
  int v9; // r10d
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+20h] [rbp-48h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]
  unsigned __int64 v22; // [rsp+30h] [rbp-38h]
  __int64 v23; // [rsp+38h] [rbp-30h]

  v3 = 0;
  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    v3 = MiRetardMdl(MemoryDescriptorList);
  if ( (unsigned __int64)BaseAddress <= 0x7FFFFFFEFFFFLL )
  {
    MiUnmapLockedPagesInUserSpace(BaseAddress, MemoryDescriptorList);
  }
  else
  {
    ByteOffset = MemoryDescriptorList->ByteOffset;
    v6 = (unsigned __int64)BaseAddress - v3;
    v7 = ((((_WORD)ByteOffset + (unsigned __int16)LODWORD(MemoryDescriptorList->StartVa)) & 0xFFF)
        + (unsigned __int64)MemoryDescriptorList->ByteCount
        + 4095) >> 12;
    MemoryDescriptorList->MdlFlags &= 0xFFDEu;
    if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
      MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + ByteOffset;
    v20 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 = v20;
    v9 = 4;
    v21 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v22 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v23 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v10 = 4LL;
    v11 = 0xFFFFF6FB7DBED7F8uLL;
    do
    {
      v12 = *(&v19 + v10--);
      --v9;
      v13 = *(_QWORD *)v12;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v13 & 1) != 0
          && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
        {
          DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            v16 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v12 >> 3) & 0x1FF));
            v12 = v13 | 0x20;
            if ( (v16 & 0x20) == 0 )
              v12 = v13;
            LOBYTE(v13) = v12;
            if ( (v16 & 0x42) != 0 )
              LOBYTE(v13) = v12 | 0x42;
          }
        }
        v11 = 0xFFFFF6FB7DBED7F8uLL;
      }
      if ( (v13 & 1) == 0 )
        break;
      if ( (v13 & 0x80u) != 0LL )
        goto LABEL_12;
    }
    while ( v10 != 1 );
    v9 = 0;
LABEL_12:
    while ( v9 )
    {
      v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v9;
    }
    v14 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      v17 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v17 )
      {
        v11 = v14 | 0x20;
        v18 = *(_QWORD *)(v17 + 8 * ((v8 >> 3) & 0x1FF));
        if ( (v18 & 0x20) == 0 )
          v11 = *(_QWORD *)v8;
        LOWORD(v14) = v11;
        if ( (v18 & 0x42) != 0 )
          LOWORD(v14) = v11 | 0x42;
      }
    }
    if ( (v14 & 0x200) != 0 )
      MiZeroAndFlushPtes(v6, v7, v11, v12);
    if ( MmProtectFreedNonPagedPool == 1 )
      LODWORD(v7) = v7 + 1;
    if ( (dword_14057118C & 1) != 0 )
      MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
    MiReleasePtes(&qword_1404666C0, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v7);
  }
}
