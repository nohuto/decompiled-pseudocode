/*
 * XREFs of MiGetLeafVa @ 0x14005AA90
 * Callers:
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiFillSystemPtes @ 0x140030060 (MiFillSystemPtes.c)
 *     MiRevertValidPte @ 0x14004F990 (MiRevertValidPte.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     MiIsCfgBitMapPageShared @ 0x14005D3A0 (MiIsCfgBitMapPageShared.c)
 *     MiInPagePageTable @ 0x14005D7D0 (MiInPagePageTable.c)
 *     MiGetNextPageTable @ 0x14005E020 (MiGetNextPageTable.c)
 *     MiEvictPageTableLock @ 0x14005E204 (MiEvictPageTableLock.c)
 *     MiFlushDirtyBitsToPfn @ 0x140088BA8 (MiFlushDirtyBitsToPfn.c)
 *     MiInitializeSystemPageTable @ 0x14009641C (MiInitializeSystemPageTable.c)
 *     MiQueryAddressState @ 0x1400A6250 (MiQueryAddressState.c)
 *     MiCompletePrivateZeroFault @ 0x1400AD7E0 (MiCompletePrivateZeroFault.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MiPrefetchVirtualMemory @ 0x1400C7FA0 (MiPrefetchVirtualMemory.c)
 *     MiZeroAndFlushPtes @ 0x1400F52B8 (MiZeroAndFlushPtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x140116770 (MiDeleteNonPagedPoolPte.c)
 *     MiReplacePageTablePage @ 0x140122280 (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTable @ 0x1401235A0 (MiDeleteSystemPageTable.c)
 *     MiMakeVaRangeNoAccess @ 0x140131C14 (MiMakeVaRangeNoAccess.c)
 *     MiFlushValidPteFromTb @ 0x140174624 (MiFlushValidPteFromTb.c)
 *     MiReplicatePteChange @ 0x14017E930 (MiReplicatePteChange.c)
 *     MiGetNextNonGapPfnPage @ 0x140186558 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x14018673C (MiPfnRangeIsZero.c)
 *     MiDecommitLargePte @ 0x1402C9784 (MiDecommitLargePte.c)
 *     MiMakeLargePageTable @ 0x1402CA4A8 (MiMakeLargePageTable.c)
 *     MiDbgCopyMemoryTarget @ 0x1402D0910 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x1402D0D9C (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1402D1348 (MiDbgWriteCheck.c)
 *     MiProtectAweRegion @ 0x1402D6EE4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402D7B68 (MiWriteAwePtes.c)
 *     MiScrubLargeMappedPage @ 0x1402EC2C8 (MiScrubLargeMappedPage.c)
 *     MiMapUserLargePages @ 0x140899CBC (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafVa(unsigned __int64 a1)
{
  for ( ; a1 >= 0xFFFFF68000000000uLL; a1 = (__int64)(a1 << 25) >> 16 )
  {
    if ( a1 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  return a1;
}
