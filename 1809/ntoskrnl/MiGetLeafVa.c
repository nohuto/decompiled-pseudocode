/*
 * XREFs of MiGetLeafVa @ 0x140076410
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140026984 (MiInitializeSystemPageTable.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiCompletePrivateZeroFault @ 0x140047940 (MiCompletePrivateZeroFault.c)
 *     MiFillSystemPtes @ 0x14005C300 (MiFillSystemPtes.c)
 *     MiDecommitPages @ 0x140068950 (MiDecommitPages.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE80 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x140070680 (MiComputePxeWalkAction.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiIsCfgBitMapPageShared @ 0x140076150 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x140084240 (MiGetNextPageTable.c)
 *     MiEvictPageTableLock @ 0x1400983A0 (MiEvictPageTableLock.c)
 *     MiInPagePageTable @ 0x1400987E0 (MiInPagePageTable.c)
 *     MiRevertValidPte @ 0x1400B2360 (MiRevertValidPte.c)
 *     MiPrefetchVirtualMemory @ 0x1400EA140 (MiPrefetchVirtualMemory.c)
 *     MiStealPage @ 0x1400EBF44 (MiStealPage.c)
 *     MiMapPagesToZero @ 0x1400F90E0 (MiMapPagesToZero.c)
 *     MiDeleteNonPagedPoolPte @ 0x1401115B0 (MiDeleteNonPagedPoolPte.c)
 *     MiReplacePageTablePage @ 0x14011BE8C (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTable @ 0x14011F050 (MiDeleteSystemPageTable.c)
 *     MiZeroAndFlushPtes @ 0x14012337C (MiZeroAndFlushPtes.c)
 *     MiFlushDirtyBitsToPfn @ 0x14012C20C (MiFlushDirtyBitsToPfn.c)
 *     MiFlushValidPteFromTb @ 0x14016A7B0 (MiFlushValidPteFromTb.c)
 *     MiReplicatePteChange @ 0x140174F14 (MiReplicatePteChange.c)
 *     MiWriteAwePtes @ 0x1402B2278 (MiWriteAwePtes.c)
 *     MiMakeLargePageTable @ 0x1402B50E8 (MiMakeLargePageTable.c)
 *     MiDbgCopyMemoryTarget @ 0x1402BA990 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x1402BAE0C (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1402BB384 (MiDbgWriteCheck.c)
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
