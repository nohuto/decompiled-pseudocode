/*
 * XREFs of MiVadPureReserve @ 0x140052A40
 * Callers:
 *     MiSplitPrivatePage @ 0x140020160 (MiSplitPrivatePage.c)
 *     MiSetReadOnlyOnSectionView @ 0x14002E6A0 (MiSetReadOnlyOnSectionView.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     MiInPagePageTable @ 0x14005D730 (MiInPagePageTable.c)
 *     NtLockVirtualMemory @ 0x14008DF10 (NtLockVirtualMemory.c)
 *     MiProbeAndLockPrepare @ 0x14008FB20 (MiProbeAndLockPrepare.c)
 *     MiQueryAddressState @ 0x1400C63D0 (MiQueryAddressState.c)
 *     MiCommitPageTablesForVad @ 0x140603C50 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x1406058B0 (MiReturnPageTablePageCommitment.c)
 *     MiReturnVadQuota @ 0x140606A50 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x14060A180 (MiInsertVadCharges.c)
 *     MiCommitPagefileBackedSection @ 0x14066EC04 (MiCommitPagefileBackedSection.c)
 *     MiAllocateChildVads @ 0x14089A8C0 (MiAllocateChildVads.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadPureReserve(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rcx

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x100000) != 0 )
  {
    if ( *(int *)(a1 + 52) < 0 || (v1 & 0x70) != 0 || (v1 & 0x400000) != 0 || (v1 & 0xC0000u) >= 0x80000 )
      return 0LL;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 48) & 0xF80) != 0xC00 )
      return 0LL;
    v3 = *(_QWORD *)(a1 + 72);
    if ( !v3
      || (v1 & 0x70) == 0x10
      || *(_QWORD *)(*(_QWORD *)v3 + 64LL)
      || (*(_DWORD *)(*(_QWORD *)v3 + 56LL) & 0x1000) == 0 )
    {
      return 0LL;
    }
  }
  return 1LL;
}
