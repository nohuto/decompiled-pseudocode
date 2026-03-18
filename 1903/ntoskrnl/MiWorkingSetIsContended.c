/*
 * XREFs of MiWorkingSetIsContended @ 0x140023050
 * Callers:
 *     MiProtectPrivateMemory @ 0x140020F60 (MiProtectPrivateMemory.c)
 *     MiCommitPoolMemory @ 0x140022A30 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x140023250 (MiFillPoolCommitPageTable.c)
 *     MiDeleteSystemPagableVm @ 0x14002D400 (MiDeleteSystemPagableVm.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052B60 (MiMoveDirtyBitsToPfns.c)
 *     MiRemoveMappedPtes @ 0x14005E850 (MiRemoveMappedPtes.c)
 *     MiProbePacketContended @ 0x14008DE30 (MiProbePacketContended.c)
 *     NtLockVirtualMemory @ 0x14008DF10 (NtLockVirtualMemory.c)
 *     MiQueryAddressSpan @ 0x1400B7C60 (MiQueryAddressSpan.c)
 *     NtUnlockVirtualMemory @ 0x1400C4230 (NtUnlockVirtualMemory.c)
 *     MiCheckProcessShadow @ 0x1400CCBA0 (MiCheckProcessShadow.c)
 *     MiGetPageChain @ 0x1400CF700 (MiGetPageChain.c)
 *     MiWalkVaRange @ 0x1400DE274 (MiWalkVaRange.c)
 *     MiGetWorkingSetInfoList @ 0x140101184 (MiGetWorkingSetInfoList.c)
 *     MiReplaceRotateWithDemandZero @ 0x140116764 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140118F14 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x140196F5C (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402BCF4C (MiUpdatePrivateDemandZeroView.c)
 *     MiSetGraphicsPtes @ 0x1402C3040 (MiSetGraphicsPtes.c)
 *     MiAddPagesToEnclave @ 0x1402D3228 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1402D3880 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3B20 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402D4AB8 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x1402D6018 (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x1402D7E08 (MiWriteAwePtes.c)
 *     MiCloneVads @ 0x1402E2EAC (MiCloneVads.c)
 *     MiScrubLargeMappedPage @ 0x1402EC568 (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiWorkingSetIsContended(__int64 a1)
{
  LONG *v1; // rcx

  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v1 = &dword_140467200;
  else
    v1 = (LONG *)(a1 + 192);
  return (*v1 & 0x40000000) != 0;
}
