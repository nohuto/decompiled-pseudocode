/*
 * XREFs of MiIncreaseUsedPtesCount @ 0x14001F4A0
 * Callers:
 *     MiSplitPrivatePage @ 0x140020160 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x140020F60 (MiProtectPrivateMemory.c)
 *     MiReservePageFileSpaceForPage @ 0x14002CE60 (MiReservePageFileSpaceForPage.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     MiInPagePageTable @ 0x14005D730 (MiInPagePageTable.c)
 *     MiInsertPhysicalPteMapping @ 0x14011915C (MiInsertPhysicalPteMapping.c)
 *     MiUpdatePageTableUseCount @ 0x140138218 (MiUpdatePageTableUseCount.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402BCF4C (MiUpdatePrivateDemandZeroView.c)
 *     MiCommitHotPatchTable @ 0x1402CF880 (MiCommitHotPatchTable.c)
 *     MiUpdateAwePageTable @ 0x1402D7CD8 (MiUpdateAwePageTable.c)
 *     MiInsertLargeUserMapping @ 0x1402DFE84 (MiInsertLargeUserMapping.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 *     MiUpdateForkMaps @ 0x1402E5060 (MiUpdateForkMaps.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14001F520 (MmIsAddressValidEx.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiIncreaseUsedPtesCount(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v5);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 16) ^= ((unsigned int)*(_QWORD *)(a1 + 16) ^ ((unsigned int)*(_QWORD *)(a1 + 16)
                                                               + ((unsigned __int16)a2 << 16))) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a2 <= 1 )
    return MmIsAddressValidEx(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  return result;
}
