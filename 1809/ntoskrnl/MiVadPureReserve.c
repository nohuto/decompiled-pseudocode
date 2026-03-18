/*
 * XREFs of MiVadPureReserve @ 0x140070D30
 * Callers:
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiProbeAndLockPrepare @ 0x140040790 (MiProbeAndLockPrepare.c)
 *     MiDecommitPages @ 0x140068950 (MiDecommitPages.c)
 *     MiSplitPrivatePage @ 0x140083B70 (MiSplitPrivatePage.c)
 *     MiSetReadOnlyOnSectionView @ 0x140085B00 (MiSetReadOnlyOnSectionView.c)
 *     MiInPagePageTable @ 0x1400987E0 (MiInPagePageTable.c)
 *     MiReturnPageTablePageCommitment @ 0x1405EC380 (MiReturnPageTablePageCommitment.c)
 *     MiReturnVadQuota @ 0x1405ECB00 (MiReturnVadQuota.c)
 *     MiCommitPageTablesForVad @ 0x1405ECBB0 (MiCommitPageTablesForVad.c)
 *     MiInsertVadCharges @ 0x1405F1E60 (MiInsertVadCharges.c)
 *     MiCommitPagefileBackedSection @ 0x14061DFB0 (MiCommitPagefileBackedSection.c)
 *     MiAllocateChildVads @ 0x14085DA18 (MiAllocateChildVads.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadPureReserve(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rcx

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x4000) != 0 )
  {
    if ( *(int *)(a1 + 52) < 0 || (v1 & 7) != 0 )
      return 0LL;
  }
  else
  {
    if ( (v1 & 0xF8) != 0xC0 )
      return 0LL;
    v3 = *(_QWORD *)(a1 + 72);
    if ( !v3 || (v1 & 7) == 1 || *(_QWORD *)(*(_QWORD *)v3 + 64LL) || (*(_DWORD *)(*(_QWORD *)v3 + 56LL) & 0x1000) == 0 )
      return 0LL;
  }
  return 1LL;
}
