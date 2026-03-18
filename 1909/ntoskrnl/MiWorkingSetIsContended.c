/*
 * XREFs of MiWorkingSetIsContended @ 0x140023440
 * Callers:
 *     MiProtectPrivateMemory @ 0x140021350 (MiProtectPrivateMemory.c)
 *     MiCommitPoolMemory @ 0x140022E20 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x140023640 (MiFillPoolCommitPageTable.c)
 *     MiDeleteSystemPagableVm @ 0x14002D7F0 (MiDeleteSystemPagableVm.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     MiRemoveMappedPtes @ 0x14005E8F0 (MiRemoveMappedPtes.c)
 *     NtUnlockVirtualMemory @ 0x1400A40B0 (NtUnlockVirtualMemory.c)
 *     MiCheckProcessShadow @ 0x1400ACA20 (MiCheckProcessShadow.c)
 *     MiGetPageChain @ 0x1400AF580 (MiGetPageChain.c)
 *     MiWalkVaRange @ 0x1400BE0F4 (MiWalkVaRange.c)
 *     MiProbePacketContended @ 0x1400CB040 (MiProbePacketContended.c)
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     MiReplaceRotateWithDemandZero @ 0x1400F4884 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1400F7034 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiQueryAddressSpan @ 0x140104A80 (MiQueryAddressSpan.c)
 *     MiGetWorkingSetInfoList @ 0x14011DB2C (MiGetWorkingSetInfoList.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x14019773C (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402BCCAC (MiUpdatePrivateDemandZeroView.c)
 *     MiSetGraphicsPtes @ 0x1402C2DA0 (MiSetGraphicsPtes.c)
 *     MiAddPagesToEnclave @ 0x1402D2F88 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1402D35E0 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3880 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402D4818 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x1402D5D78 (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x1402D7B68 (MiWriteAwePtes.c)
 *     MiCloneVads @ 0x1402E2C0C (MiCloneVads.c)
 *     MiScrubLargeMappedPage @ 0x1402EC2C8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiWorkingSetIsContended(__int64 a1)
{
  LONG *v1; // rcx

  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v1 = &dword_140466F00;
  else
    v1 = (LONG *)(a1 + 192);
  return (*v1 & 0x40000000) != 0;
}
