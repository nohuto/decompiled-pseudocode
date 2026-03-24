/*
 * XREFs of MiIncreaseUsedPtesCount @ 0x140110064
 * Callers:
 *     MiDecommitPages @ 0x140068950 (MiDecommitPages.c)
 *     MiProtectPrivateMemory @ 0x140070DC0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x140071470 (MiCommitExistingVad.c)
 *     MiReservePageFileSpaceForPage @ 0x140081800 (MiReservePageFileSpaceForPage.c)
 *     MiSplitPrivatePage @ 0x140083B70 (MiSplitPrivatePage.c)
 *     MiInPagePageTable @ 0x1400987E0 (MiInPagePageTable.c)
 *     MiUpdatePageTableUseCount @ 0x14010FBF8 (MiUpdatePageTableUseCount.c)
 *     MiInsertPhysicalPteMapping @ 0x14010FE80 (MiInsertPhysicalPteMapping.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402A5BB8 (MiUpdatePrivateDemandZeroView.c)
 *     MiUpdateAwePageTable @ 0x1402B2148 (MiUpdateAwePageTable.c)
 *     MiCommitHotPatchTable @ 0x1402B93A0 (MiCommitHotPatchTable.c)
 *     MiInsertLargeUserMapping @ 0x1402C57F0 (MiInsertLargeUserMapping.c)
 *     MiBuildForkPte @ 0x1402C7BF0 (MiBuildForkPte.c)
 *     MiUpdateForkMaps @ 0x1402CAC08 (MiUpdateForkMaps.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400685A0 (MiIsAddressValid.c)
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 */

char __fastcall MiIncreaseUsedPtesCount(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  char result; // al
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v4 = a2;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v6, a2, a3);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  result = -1;
  *(_QWORD *)(a1 + 16) ^= ((unsigned int)*(_QWORD *)(a1 + 16) ^ ((unsigned int)*(_QWORD *)(a1 + 16)
                                                               + ((unsigned __int16)v4 << 16))) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v4 <= 1 )
    return MiIsAddressValid(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  return result;
}
