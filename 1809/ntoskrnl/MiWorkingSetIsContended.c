/*
 * XREFs of MiWorkingSetIsContended @ 0x1400992A0
 * Callers:
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiCheckProcessShadow @ 0x140046A70 (MiCheckProcessShadow.c)
 *     MiGetPageChain @ 0x140049670 (MiGetPageChain.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A40 (MiMoveDirtyBitsToPfns.c)
 *     MiQueryAddressSpan @ 0x140075EA0 (MiQueryAddressSpan.c)
 *     MiDeleteSystemPagableVm @ 0x140079F10 (MiDeleteSystemPagableVm.c)
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     MiRemoveMappedPtes @ 0x1400855D0 (MiRemoveMappedPtes.c)
 *     MiWalkVaRange @ 0x140093C90 (MiWalkVaRange.c)
 *     MiProbePacketContended @ 0x14009659C (MiProbePacketContended.c)
 *     MiGetWorkingSetInfoList @ 0x1400965F0 (MiGetWorkingSetInfoList.c)
 *     MiCommitPoolMemory @ 0x140099590 (MiCommitPoolMemory.c)
 *     NtUnlockVirtualMemory @ 0x1400B3D90 (NtUnlockVirtualMemory.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010FC38 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReplaceRotateWithDemandZero @ 0x1401229F0 (MiReplaceRotateWithDemandZero.c)
 *     MiInsertViewOfPhysicalSection @ 0x14018CC94 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402A5BB8 (MiUpdatePrivateDemandZeroView.c)
 *     MiDeleteSessionPoolRange @ 0x1402AC224 (MiDeleteSessionPoolRange.c)
 *     MiFreePhysicalPages @ 0x1402B08E0 (MiFreePhysicalPages.c)
 *     MiSetGraphicsPtes @ 0x1402B1EA4 (MiSetGraphicsPtes.c)
 *     MiWriteAwePtes @ 0x1402B2278 (MiWriteAwePtes.c)
 *     MiAddPagesToEnclave @ 0x1402BC8E4 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1402BCF34 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD1D4 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402BE120 (MiProtectEnclavePages.c)
 *     MiCloneVads @ 0x1402C8B68 (MiCloneVads.c)
 *     MiScrubLargeMappedPage @ 0x1402CF238 (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiWorkingSetIsContended(__int64 a1)
{
  LONG *v1; // rcx

  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v1 = &dword_14043B700;
  else
    v1 = (LONG *)(a1 + 192);
  return (*v1 & 0x40000000) != 0;
}
