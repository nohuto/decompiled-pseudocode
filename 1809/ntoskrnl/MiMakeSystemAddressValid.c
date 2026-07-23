/*
 * XREFs of MiMakeSystemAddressValid @ 0x140088170
 * Callers:
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiCaptureDeleteHierarchy @ 0x140026044 (MiCaptureDeleteHierarchy.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiProtectPrivateMemory @ 0x140070DB0 (MiProtectPrivateMemory.c)
 *     MiSplitPrivatePage @ 0x140083B60 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140084400 (MiCopyToUserVa.c)
 *     MiSetReadOnlyOnSectionView @ 0x140085AF0 (MiSetReadOnlyOnSectionView.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010FCB8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiFillHyperPtes @ 0x14011AEF4 (MiFillHyperPtes.c)
 *     MiMakeProtoLeafValid @ 0x14012743C (MiMakeProtoLeafValid.c)
 *     MiLockPagedAddress @ 0x140140A10 (MiLockPagedAddress.c)
 *     MiLockPageTableRange @ 0x140155FEC (MiLockPageTableRange.c)
 *     MiInsertViewOfPhysicalSection @ 0x14018CDD4 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402A5DA8 (MiUpdatePrivateDemandZeroView.c)
 *     MiWriteAwePtes @ 0x1402B2468 (MiWriteAwePtes.c)
 *     MiCommitHotPatchTable @ 0x1402B9590 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402B9B84 (MiPrepareImagePagesForHotPatch.c)
 *     MiAddPagesToEnclave @ 0x1402BCAD4 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1402BD124 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD3C4 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402BE310 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1402BEC18 (MiWriteEnclavePte.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1402BF4D4 (MiWorkingSetInfoCheckPageTable.c)
 *     MiInsertLargeUserMapping @ 0x1402C59E0 (MiInsertLargeUserMapping.c)
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CA308 (MiHandleForkTransitionPte.c)
 *     MiUpdateForkMaps @ 0x1402CADF8 (MiUpdateForkMaps.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiIsAddressValid @ 0x140068590 (MiIsAddressValid.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiUnlockPageTable @ 0x140192E68 (MiUnlockPageTable.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x1402AB1E0 (MiFlushAllFilesystemPages.c)
 */

char __fastcall MiMakeSystemAddressValid(ULONG_PTR a1, int *a2, unsigned int a3, __int64 a4, char a5)
{
  unsigned __int8 v5; // r13
  char v6; // si
  int *v7; // rdi
  _KPROCESS *Process; // rbp
  char *AnyMultiplexedVm; // r15
  unsigned __int64 v11; // rbx
  BOOL v12; // r14d
  int v13; // esi
  unsigned __int64 valid; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  ULONG_PTR v19; // rdi
  LONG *SharedVm; // rdi
  unsigned __int64 v21; // rdx
  unsigned __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  int *v24; // [rsp+78h] [rbp+10h]
  unsigned int v25; // [rsp+80h] [rbp+18h]

  v25 = a3;
  v24 = a2;
  v5 = a4;
  v6 = a5;
  v7 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a5 & 4) != 0 )
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  else
    AnyMultiplexedVm = (char *)&Process[1].IdealNode[12];
  v11 = (__int64)(a1 << 25) >> 16;
  v12 = v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL;
  v13 = v6 & 1;
  while ( v13 )
  {
    LOBYTE(valid) = MiIsAddressValid(a1);
    if ( (_BYTE)valid )
      return valid;
LABEL_17:
    if ( v7 )
      MiFlushTbList(v7, v15, v16, v17);
    if ( v13 )
      MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v5, v16, v17);
    else
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v5);
    v18 = MmAccessFault(((unsigned __int64)v25 << 57) | 0x100000000000002LL, a1, 0LL, 0LL);
    v19 = v18;
    if ( v18 < 0 )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 1uLL, v19, (ULONG_PTR)Process, a1);
    }
    if ( v13 )
    {
      SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
      ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
    }
    else
    {
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    }
    v7 = v24;
  }
  if ( v12 )
  {
    LODWORD(valid) = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v11, 0);
    if ( (_DWORD)valid )
    {
      if ( (_DWORD)valid == 1 )
        return valid;
      v21 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( (int)valid != 1LL )
        v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiUnlockPageTable(AnyMultiplexedVm, v21);
    }
  }
  valid = MiLockLowestValidPageTable((__int64)AnyMultiplexedVm, a1, &v23, a4);
  if ( valid != ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    MiUnlockPageTableInternal(AnyMultiplexedVm, valid);
    goto LABEL_17;
  }
  return valid;
}
