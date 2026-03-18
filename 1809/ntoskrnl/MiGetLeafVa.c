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
 *     MiRevertValidPte @ 0x1400B2340 (MiRevertValidPte.c)
 *     MiPrefetchVirtualMemory @ 0x1400EA120 (MiPrefetchVirtualMemory.c)
 *     MiStealPage @ 0x1400EBF24 (MiStealPage.c)
 *     MiMapPagesToZero @ 0x1400F90C0 (MiMapPagesToZero.c)
 *     MiDeleteNonPagedPoolPte @ 0x140111590 (MiDeleteNonPagedPoolPte.c)
 *     MiReplacePageTablePage @ 0x14011BE6C (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTable @ 0x14011F030 (MiDeleteSystemPageTable.c)
 *     MiZeroAndFlushPtes @ 0x14012335C (MiZeroAndFlushPtes.c)
 *     MiFlushDirtyBitsToPfn @ 0x14012C1EC (MiFlushDirtyBitsToPfn.c)
 *     MiFlushValidPteFromTb @ 0x14016A790 (MiFlushValidPteFromTb.c)
 *     MiReplicatePteChange @ 0x140174EF4 (MiReplicatePteChange.c)
 *     MiWriteAwePtes @ 0x1402B2178 (MiWriteAwePtes.c)
 *     MiMakeLargePageTable @ 0x1402B4FE8 (MiMakeLargePageTable.c)
 *     MiDbgCopyMemoryTarget @ 0x1402BA890 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x1402BAD0C (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1402BB284 (MiDbgWriteCheck.c)
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
