/*
 * XREFs of MiVadPureReserve @ 0x140052AE0
 * Callers:
 *     MiSplitPrivatePage @ 0x140020550 (MiSplitPrivatePage.c)
 *     MiSetReadOnlyOnSectionView @ 0x14002EA90 (MiSetReadOnlyOnSectionView.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     MiInPagePageTable @ 0x14005D7D0 (MiInPagePageTable.c)
 *     MiQueryAddressState @ 0x1400A6250 (MiQueryAddressState.c)
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     MiProbeAndLockPrepare @ 0x1400CD110 (MiProbeAndLockPrepare.c)
 *     MiCommitPageTablesForVad @ 0x140605760 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x1406073C0 (MiReturnPageTablePageCommitment.c)
 *     MiReturnVadQuota @ 0x140608560 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x14060BC90 (MiInsertVadCharges.c)
 *     MiCommitPagefileBackedSection @ 0x140648664 (MiCommitPagefileBackedSection.c)
 *     MiAllocateChildVads @ 0x14089A0E0 (MiAllocateChildVads.c)
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
