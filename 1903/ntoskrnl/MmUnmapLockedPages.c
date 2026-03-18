/*
 * XREFs of MmUnmapLockedPages @ 0x14006AD00
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006BE0 (MiWaitForInPageComplete.c)
 *     IopCompleteRequest @ 0x1400656B0 (IopCompleteRequest.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MiUnlockFlushMdl @ 0x140074A88 (MiUnlockFlushMdl.c)
 *     MiValidateInPage @ 0x140098340 (MiValidateInPage.c)
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     MiSectionCreated @ 0x1400E05D0 (MiSectionCreated.c)
 *     MiFreePagesFromMdl @ 0x1400F0784 (MiFreePagesFromMdl.c)
 *     IoFreeMdl @ 0x1400FCDD0 (IoFreeMdl.c)
 *     MiZeroPageWrite @ 0x1400FCFF4 (MiZeroPageWrite.c)
 *     SmKmUnlockMdl @ 0x1401487E8 (SmKmUnlockMdl.c)
 *     SmFpFree @ 0x140149E64 (SmFpFree.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014B260 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14014BBD4 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     MiMapPageFileHash @ 0x14014D0CC (MiMapPageFileHash.c)
 *     BgpFwFreeMemory @ 0x1401784AC (BgpFwFreeMemory.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB748 (MiMakeOutswappedPageResident.c)
 *     MiPfCompleteCoalescedIo @ 0x1402C6BDC (MiPfCompleteCoalescedIo.c)
 *     MiFlushComplete @ 0x1402CA040 (MiFlushComplete.c)
 *     MiFlushFileOnlyMdl @ 0x1402CC0F8 (MiFlushFileOnlyMdl.c)
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x140309198 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x140309498 (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x140326D20 (SmPrepareForFatalPageError.c)
 *     MiDeleteImageCreationMdls @ 0x1406AF554 (MiDeleteImageCreationMdls.c)
 *     PopFreeHiberContext @ 0x1407272AC (PopFreeHiberContext.c)
 *     MiZeroPageFileFirstPage @ 0x140771540 (MiZeroPageFileFirstPage.c)
 *     IopCleanupFileObjectIosbRange @ 0x140853B24 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140854FE4 (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x14088DB44 (MiApplyImageHotPatch.c)
 *     ExpProfileDelete @ 0x140917E30 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x1409183D0 (NtStopProfile.c)
 *     ViFreeMapRegisterFile @ 0x14096BD94 (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x140984D18 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiZeroAndFlushPtes @ 0x140117198 (MiZeroAndFlushPtes.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14015B1BC (MiUnmapLockedPagesInUserSpace.c)
 *     MiRetardMdl @ 0x1402BFC7C (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x1402E7F38 (MiRemovePteTracker.c)
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
    MiReleasePtes(&qword_1404669C0, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v7);
  }
}
