/*
 * XREFs of MmUnmapLockedPages @ 0x140033F00
 * Callers:
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 *     MiUnlockFlushMdl @ 0x14001E3D8 (MiUnlockFlushMdl.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     MiValidateInPage @ 0x14002EC10 (MiValidateInPage.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     MiZeroPageWrite @ 0x140128508 (MiZeroPageWrite.c)
 *     SmKmUnlockMdl @ 0x14014B234 (SmKmUnlockMdl.c)
 *     SmFpFree @ 0x14014CB3C (SmFpFree.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014D8C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14014E210 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     MiMapPageFileHash @ 0x14014FDD8 (MiMapPageFileHash.c)
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4558 (MiMakeOutswappedPageResident.c)
 *     MiPfCompleteCoalescedIo @ 0x1402AEF7C (MiPfCompleteCoalescedIo.c)
 *     MiFlushComplete @ 0x1402B4B40 (MiFlushComplete.c)
 *     MiFlushFileOnlyMdl @ 0x1402B605C (MiFlushFileOnlyMdl.c)
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x1402EB83C (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x1402EBB1C (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x1403094CC (SmPrepareForFatalPageError.c)
 *     MiCreateImageFileMap @ 0x14061DEB8 (MiCreateImageFileMap.c)
 *     PopFreeHiberContext @ 0x1406E1240 (PopFreeHiberContext.c)
 *     MiZeroPageFileFirstPage @ 0x14074E06C (MiZeroPageFileFirstPage.c)
 *     IopCleanupFileObjectIosbRange @ 0x14081AAB8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14081C21C (IopSetFileObjectIosbRange.c)
 *     MiApplyImageHotPatch @ 0x1408558E8 (MiApplyImageHotPatch.c)
 *     ExpProfileDelete @ 0x1408DB360 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x1408DB900 (NtStopProfile.c)
 *     ViFreeMapRegisterFile @ 0x14092E524 (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x140946348 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiZeroAndFlushPtes @ 0x14012344C (MiZeroAndFlushPtes.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140139914 (MiUnmapLockedPagesInUserSpace.c)
 *     MiRetardMdl @ 0x1402A85DC (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x1402CDF00 (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapLockedPages(PVOID BaseAddress, PMDL MemoryDescriptorList)
{
  unsigned int v3; // ecx
  __int64 ByteOffset; // rdx
  __int64 Process; // r8
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r11
  int v11; // r10d
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+18h] [rbp-50h]
  __int64 v21; // [rsp+20h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]
  unsigned __int64 v23; // [rsp+30h] [rbp-38h]
  __int64 v24; // [rsp+38h] [rbp-30h]

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
    Process = 0x7FFFFFFFF8LL;
    v7 = (unsigned __int64)BaseAddress - v3;
    v8 = ((((_WORD)ByteOffset + (unsigned __int16)LODWORD(MemoryDescriptorList->StartVa)) & 0xFFF)
        + (unsigned __int64)MemoryDescriptorList->ByteCount
        + 4095) >> 12;
    MemoryDescriptorList->MdlFlags &= 0xFFDEu;
    v9 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
      MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + ByteOffset;
    v21 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v10 = v21;
    v11 = 4;
    v22 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v23 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v24 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = 4LL;
    do
    {
      v13 = *(&v20 + v12--);
      --v11;
      v14 = *(_QWORD *)v13;
      if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(Process + 640) != 1 )
        {
          if ( (v14 & 1) == 0 )
            break;
          if ( (v14 & 0x20) == 0 || (v14 & 0x42) == 0 )
          {
            Process = (__int64)KeGetCurrentThread()->ApcState.Process;
            v16 = *(_QWORD *)(Process + 1544);
            if ( v16 )
            {
              Process = v14 | 0x20;
              v17 = *(_QWORD *)(v16 + 8 * ((v13 >> 3) & 0x1FF));
              if ( (v17 & 0x20) == 0 )
                Process = v14;
              LOBYTE(v14) = Process;
              if ( (v17 & 0x42) != 0 )
                LOBYTE(v14) = Process | 0x42;
            }
          }
        }
      }
      if ( (v14 & 1) == 0 )
        break;
      if ( (v14 & 0x80u) != 0LL )
        goto LABEL_13;
    }
    while ( v12 != 1 );
    v11 = 0;
LABEL_13:
    if ( v11 )
    {
      Process = 0x7FFFFFFFF8LL;
      do
      {
        v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v11;
      }
      while ( v11 );
    }
    v15 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL
      && v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      v18 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v18 )
      {
        Process = v15 | 0x20;
        v19 = *(_QWORD *)(v18 + 8 * ((v10 >> 3) & 0x1FF));
        if ( (v19 & 0x20) == 0 )
          Process = *(_QWORD *)v10;
        LOWORD(v15) = Process;
        if ( (v19 & 0x42) != 0 )
          LOWORD(v15) = Process | 0x42;
      }
    }
    if ( (v15 & 0x200) != 0 )
      MiZeroAndFlushPtes(v7, v8, Process, v12, v21);
    if ( MmProtectFreedNonPagedPool == 1 )
      LODWORD(v8) = v8 + 1;
    if ( (dword_14054117C & 1) != 0 )
      MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
    MiReleasePtes(&qword_14043C060, v9, (unsigned int)v8);
  }
}
