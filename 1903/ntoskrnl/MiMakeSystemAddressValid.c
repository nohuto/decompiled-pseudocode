/*
 * XREFs of MiMakeSystemAddressValid @ 0x140021630
 * Callers:
 *     MiFillHyperPtes @ 0x14001F650 (MiFillHyperPtes.c)
 *     MiSplitPrivatePage @ 0x140020160 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140020860 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x140020F60 (MiProtectPrivateMemory.c)
 *     MiSetReadOnlyOnSectionView @ 0x14002E6A0 (MiSetReadOnlyOnSectionView.c)
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     NtLockVirtualMemory @ 0x14008DF10 (NtLockVirtualMemory.c)
 *     MiCaptureDeleteHierarchy @ 0x1400AC9BC (MiCaptureDeleteHierarchy.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140118F14 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiMakeProtoLeafValid @ 0x1401284F4 (MiMakeProtoLeafValid.c)
 *     MiLockPagedAddress @ 0x140142C78 (MiLockPagedAddress.c)
 *     MiLockPageTableRange @ 0x140159028 (MiLockPageTableRange.c)
 *     MiInsertViewOfPhysicalSection @ 0x140196F5C (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402BCF4C (MiUpdatePrivateDemandZeroView.c)
 *     MiCommitHotPatchTable @ 0x1402CF880 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402CFB90 (MiPrepareImagePagesForHotPatch.c)
 *     MiAddPagesToEnclave @ 0x1402D3228 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1402D3880 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3B20 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402D4AB8 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1402D5428 (MiWriteEnclavePte.c)
 *     MiWriteAwePtes @ 0x1402D7E08 (MiWriteAwePtes.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1402D8CA4 (MiWorkingSetInfoCheckPageTable.c)
 *     MiInsertLargeUserMapping @ 0x1402DFE84 (MiInsertLargeUserMapping.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402E4458 (MiHandleForkTransitionPte.c)
 *     MiUpdateForkMaps @ 0x1402E5060 (MiUpdateForkMaps.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14001F520 (MmIsAddressValidEx.c)
 *     MiLockLowestValidPageTable @ 0x14004AD90 (MiLockLowestValidPageTable.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x1400CB770 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiUnlockPageTable @ 0x14019D098 (MiUnlockPageTable.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x1402C3C00 (MiFlushAllFilesystemPages.c)
 */

char __fastcall MiMakeSystemAddressValid(
        ULONG_PTR BugCheckParameter4,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        char a5)
{
  __int64 v5; // rsi
  char v6; // bp
  __int64 v8; // rbx
  _KPROCESS *Process; // r14
  __int64 AnyMultiplexedVm; // r12
  unsigned __int64 v11; // rdi
  BOOL v12; // r15d
  int v13; // ebp
  __int64 valid; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  ULONG_PTR v20; // rsi
  unsigned __int64 v21; // rdx
  __int64 SharedVm; // rsi
  char v24; // [rsp+70h] [rbp+8h] BYREF
  __int64 v25; // [rsp+78h] [rbp+10h]
  unsigned __int8 v26; // [rsp+88h] [rbp+20h]

  v26 = a4;
  v25 = a2;
  v5 = a2;
  v6 = a5;
  v8 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a5 & 4) != 0 )
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
  else
    AnyMultiplexedVm = (__int64)&Process[1].IdealNode[6];
  v11 = (__int64)(BugCheckParameter4 << 25) >> 16;
  v12 = v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL;
  v13 = v6 & 1;
  while ( v13 )
  {
    LOBYTE(valid) = MmIsAddressValidEx(BugCheckParameter4);
    if ( (_BYTE)valid )
      return valid;
LABEL_13:
    if ( v5 )
      MiFlushTbList(v5, v15, v16, v17);
    if ( v13 )
      MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v26);
    else
      MiUnlockWorkingSetShared(AnyMultiplexedVm, v26);
    v18 = MmAccessFault((v8 << 57) | 0x100000000000002LL, BugCheckParameter4);
    v20 = v18;
    if ( v18 < 0 )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 1uLL, v20, (ULONG_PTR)Process, BugCheckParameter4);
    }
    if ( v13 )
    {
      SharedVm = MiGetSharedVm(AnyMultiplexedVm, v19);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
    }
    else
    {
      MiLockWorkingSetShared(AnyMultiplexedVm);
    }
    v5 = v25;
  }
  if ( v12 )
  {
    LODWORD(valid) = MiFastLockLeafPageTable(AnyMultiplexedVm, v11, 0LL);
    if ( (_DWORD)valid )
    {
      if ( (_DWORD)valid == 1 )
        return valid;
      v21 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( (int)valid != 1LL )
        v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiUnlockPageTable(AnyMultiplexedVm, v21);
    }
  }
  valid = MiLockLowestValidPageTable(AnyMultiplexedVm, BugCheckParameter4, &v24);
  if ( valid != ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    MiUnlockPageTableInternal(AnyMultiplexedVm);
    goto LABEL_13;
  }
  return valid;
}
