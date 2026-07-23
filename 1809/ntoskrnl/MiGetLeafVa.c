/*
 * XREFs of MiGetLeafVa @ 0x140076400
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140026984 (MiInitializeSystemPageTable.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiCompletePrivateZeroFault @ 0x140047940 (MiCompletePrivateZeroFault.c)
 *     MiFillSystemPtes @ 0x14005C300 (MiFillSystemPtes.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE70 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x140070670 (MiComputePxeWalkAction.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiIsCfgBitMapPageShared @ 0x140076140 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x140084230 (MiGetNextPageTable.c)
 *     MiEvictPageTableLock @ 0x1400982E0 (MiEvictPageTableLock.c)
 *     MiInPagePageTable @ 0x140098720 (MiInPagePageTable.c)
 *     MiRevertValidPte @ 0x1400B22A0 (MiRevertValidPte.c)
 *     MiPrefetchVirtualMemory @ 0x1400EA1C0 (MiPrefetchVirtualMemory.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiMapPagesToZero @ 0x1400F9160 (MiMapPagesToZero.c)
 *     MiDeleteNonPagedPoolPte @ 0x140111620 (MiDeleteNonPagedPoolPte.c)
 *     MiReplacePageTablePage @ 0x14011BEFC (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTable @ 0x14011F0C0 (MiDeleteSystemPageTable.c)
 *     MiZeroAndFlushPtes @ 0x14012344C (MiZeroAndFlushPtes.c)
 *     MiFlushDirtyBitsToPfn @ 0x14012C2DC (MiFlushDirtyBitsToPfn.c)
 *     MiFlushValidPteFromTb @ 0x14016A8B0 (MiFlushValidPteFromTb.c)
 *     MiReplicatePteChange @ 0x140175014 (MiReplicatePteChange.c)
 *     MiWriteAwePtes @ 0x1402B2468 (MiWriteAwePtes.c)
 *     MiMakeLargePageTable @ 0x1402B52D8 (MiMakeLargePageTable.c)
 *     MiDbgCopyMemoryTarget @ 0x1402BAB80 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x1402BAFFC (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1402BB574 (MiDbgWriteCheck.c)
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
