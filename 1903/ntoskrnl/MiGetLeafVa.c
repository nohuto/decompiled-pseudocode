/*
 * XREFs of MiGetLeafVa @ 0x14005A9F0
 * Callers:
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiFillSystemPtes @ 0x14002FC70 (MiFillSystemPtes.c)
 *     MiRevertValidPte @ 0x14004F8F0 (MiRevertValidPte.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052B60 (MiMoveDirtyBitsToPfns.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     MiIsCfgBitMapPageShared @ 0x14005D300 (MiIsCfgBitMapPageShared.c)
 *     MiInPagePageTable @ 0x14005D730 (MiInPagePageTable.c)
 *     MiGetNextPageTable @ 0x14005DF80 (MiGetNextPageTable.c)
 *     MiEvictPageTableLock @ 0x14005E164 (MiEvictPageTableLock.c)
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiInitializeSystemPageTable @ 0x1400A35EC (MiInitializeSystemPageTable.c)
 *     MiQueryAddressState @ 0x1400C63D0 (MiQueryAddressState.c)
 *     MiCompletePrivateZeroFault @ 0x1400CD960 (MiCompletePrivateZeroFault.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400EC148 (MiFlushDirtyBitsToPfn.c)
 *     MiPrefetchVirtualMemory @ 0x1400F5100 (MiPrefetchVirtualMemory.c)
 *     MiDeleteNonPagedPoolPte @ 0x140115100 (MiDeleteNonPagedPoolPte.c)
 *     MiZeroAndFlushPtes @ 0x140117198 (MiZeroAndFlushPtes.c)
 *     MiReplacePageTablePage @ 0x140121430 (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTable @ 0x140122490 (MiDeleteSystemPageTable.c)
 *     MiMakeVaRangeNoAccess @ 0x140131404 (MiMakeVaRangeNoAccess.c)
 *     MiFlushValidPteFromTb @ 0x140173EF4 (MiFlushValidPteFromTb.c)
 *     MiReplicatePteChange @ 0x14017E240 (MiReplicatePteChange.c)
 *     MiGetNextNonGapPfnPage @ 0x140185FA8 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x14018618C (MiPfnRangeIsZero.c)
 *     MiDecommitLargePte @ 0x1402C9A24 (MiDecommitLargePte.c)
 *     MiMakeLargePageTable @ 0x1402CA748 (MiMakeLargePageTable.c)
 *     MiDbgCopyMemoryTarget @ 0x1402D0BB0 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x1402D103C (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1402D15E8 (MiDbgWriteCheck.c)
 *     MiProtectAweRegion @ 0x1402D7184 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402D7E08 (MiWriteAwePtes.c)
 *     MiScrubLargeMappedPage @ 0x1402EC568 (MiScrubLargeMappedPage.c)
 *     MiMapUserLargePages @ 0x14089A49C (MiMapUserLargePages.c)
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
