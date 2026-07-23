/*
 * XREFs of MiInsertTbFlushEntry @ 0x1400B3A30
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 *     MiDeleteVa @ 0x1400696F0 (MiDeleteVa.c)
 *     MiProtectPrivateMemory @ 0x140070DB0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiTerminateWsleCluster @ 0x14007B958 (MiTerminateWsleCluster.c)
 *     MiOutPageSingleKernelStack @ 0x14007FAA0 (MiOutPageSingleKernelStack.c)
 *     MiConvertPrivateToProto @ 0x140082EA0 (MiConvertPrivateToProto.c)
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiSetSystemCodeProtection @ 0x1400862D0 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x140086770 (MmSetAddressRangeModifiedEx.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     MiTrimPte @ 0x140087BC0 (MiTrimPte.c)
 *     MiWalkVaRange @ 0x140093BD0 (MiWalkVaRange.c)
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MiFlushTbAsNeeded @ 0x140097F10 (MiFlushTbAsNeeded.c)
 *     MiObtainSystemCacheView @ 0x1400AD160 (MiObtainSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x1400AD870 (MmMapViewInSystemCache.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MiRevertValidPte @ 0x1400B22A0 (MiRevertValidPte.c)
 *     MiWsleFlush @ 0x1400B3250 (MiWsleFlush.c)
 *     NtUnlockVirtualMemory @ 0x1400B3CD0 (NtUnlockVirtualMemory.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiSetPagingOfDriver @ 0x1400DAE7C (MiSetPagingOfDriver.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiReplenishBitMap @ 0x1400EFE70 (MiReplenishBitMap.c)
 *     MiDeleteNonPagedPoolPte @ 0x140111620 (MiDeleteNonPagedPoolPte.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140111958 (MiInsertRecursiveTbFlushEntries.c)
 *     MiReplacePageTablePage @ 0x14011BEFC (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTable @ 0x14011F0C0 (MiDeleteSystemPageTable.c)
 *     MiRevokeExecutePte @ 0x14011FD50 (MiRevokeExecutePte.c)
 *     MiZeroPageWorkMapping @ 0x1401213F4 (MiZeroPageWorkMapping.c)
 *     MiInsertLargeTbFlushEntry @ 0x140121554 (MiInsertLargeTbFlushEntry.c)
 *     MiReplaceRotateWithDemandZero @ 0x140122AC0 (MiReplaceRotateWithDemandZero.c)
 *     MiZeroAndFlushPtes @ 0x14012344C (MiZeroAndFlushPtes.c)
 *     MiFlushDirtyBitsToPfn @ 0x14012C2DC (MiFlushDirtyBitsToPfn.c)
 *     MiGetPteFromCopyList @ 0x14012D8D8 (MiGetPteFromCopyList.c)
 *     MmSetPageProtection @ 0x140133650 (MmSetPageProtection.c)
 *     MiEmptyWorkingSetHelper @ 0x1401400E8 (MiEmptyWorkingSetHelper.c)
 *     MmMapMemoryDumpMdlEx @ 0x140144520 (MmMapMemoryDumpMdlEx.c)
 *     MiFlushHyperSpace @ 0x140176054 (MiFlushHyperSpace.c)
 *     MiClearSystemAccessBits @ 0x140184B5C (MiClearSystemAccessBits.c)
 *     MiMapMdlCommon @ 0x14018EC34 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x1402A9614 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1402A9E60 (MmProtectMdlSystemAddress.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402AB8AC (MiDeprioritizeVirtualAddresses.c)
 *     MmFreeSpecialPool @ 0x1402AD368 (MmFreeSpecialPool.c)
 *     MiSwitchToTransition @ 0x1402AF830 (MiSwitchToTransition.c)
 *     MiDeleteAwePageTable @ 0x1402B0424 (MiDeleteAwePageTable.c)
 *     MiFreePhysicalPages @ 0x1402B0AD0 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x1402B17AC (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402B2468 (MiWriteAwePtes.c)
 *     MiTrimPteWorker @ 0x1402B3F24 (MiTrimPteWorker.c)
 *     MiJoinBitmapPages @ 0x1402B50B0 (MiJoinBitmapPages.c)
 *     MiLargePageFault @ 0x1402BC5C8 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD3C4 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x1402BDEFC (MiFlushEnclaveTb.c)
 *     MiProtectEnclavePages @ 0x1402BE310 (MiProtectEnclavePages.c)
 *     MiFlushKernelCfgBitmap @ 0x1402C35D0 (MiFlushKernelCfgBitmap.c)
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 *     MiScrubLargeMappedPage @ 0x1402CF428 (MiScrubLargeMappedPage.c)
 *     MiEliminateZeroPages @ 0x14066D070 (MiEliminateZeroPages.c)
 *     MiUnmapRetpolineStubs @ 0x140855070 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x140855B60 (MiClearDriverHotPatchPtes.c)
 *     MmDeleteShadowMapping @ 0x14085A12C (MmDeleteShadowMapping.c)
 *     MiMarkBootKernelStack @ 0x1409B7464 (MiMarkBootKernelStack.c)
 *     MiFreeBootDriverPage @ 0x1409B93FC (MiFreeBootDriverPage.c)
 *     MiTradeBootImagePage @ 0x1409B96AC (MiTradeBootImagePage.c)
 *     MiInitializeTbFlush @ 0x1409BAC04 (MiInitializeTbFlush.c)
 *     MmFreeLoaderBlock @ 0x1409C6164 (MmFreeLoaderBlock.c)
 *     MiProtectSharedUserPage @ 0x1409E0218 (MiProtectSharedUserPage.c)
 *     MiReturnDriverLoadPages @ 0x1409F87A0 (MiReturnDriverLoadPages.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x140113B10 (MiCompressTbFlushList.c)
 *     qsort @ 0x140196420 (qsort.c)
 */

unsigned __int64 __fastcall MiInsertTbFlushEntry(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned int v8; // r8d
  int v9; // r10d
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  size_t v14; // rcx
  __int64 v15; // rdx
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rax

  v6 = 4096LL << (9 * (unsigned __int8)a4);
  v7 = a2;
  if ( *(_DWORD *)a1 != 1 )
  {
    v16 = *(_BYTE *)(a1 + 4);
    if ( (v16 & 8) == 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_BYTE *)(a1 + 4) = v16 | 8;
  }
  v8 = *(_DWORD *)(a1 + 12);
  v9 = 0;
  if ( !v8 || (*(_BYTE *)(a1 + 4) & 4) != 0 )
  {
    result = 0LL;
  }
  else
  {
    result = *(_QWORD *)(a1 + 8LL * (v8 - 1) + 24);
    if ( ((result >> 10) & 3) != a4 )
      goto LABEL_11;
    result &= 0xFFFFFFFFFFFFF000uLL;
    v11 = *(_QWORD *)(a1 + 8LL * (v8 - 1) + 24) & 0x3FFLL;
    if ( result + v6 * (v11 + 1) != v7 )
      goto LABEL_11;
    result = v11 + a3;
    if ( v11 + a3 > 0x3FF || result <= v11 )
      goto LABEL_11;
    result = 1LL;
  }
  if ( (_DWORD)result )
  {
    v15 = a1 + 8LL * (v8 - 1);
    result = *(_QWORD *)(v15 + 24);
    *(_QWORD *)(a1 + 16) += a3;
    *(_QWORD *)(v15 + 24) = result ^ ((unsigned __int16)result ^ (unsigned __int16)(result + a3)) & 0x3FF;
    return result;
  }
LABEL_11:
  if ( v8 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 4) == 0 )
    {
      result = *(_QWORD *)(a1 + 8LL * (v8 - 1) + 24);
      if ( ((result >> 10) & 3) == a4 && (result & 0xFFFFFFFFFFFFF000uLL) == v7 + a3 * v6 )
      {
        result &= 0x3FFu;
        if ( result + a3 > result && result + a3 <= 0x3FF )
          v9 = 1;
      }
    }
  }
  if ( v9 )
  {
    v17 = a1 + 8LL * (v8 - 1);
    v18 = *(_QWORD *)(v17 + 24);
    *(_QWORD *)(a1 + 16) += a3;
    result = v18 - a3 * v6;
    *(_QWORD *)(v17 + 24) = result ^ ((unsigned __int16)result ^ (unsigned __int16)(result + a3)) & 0x3FF;
  }
  else if ( v8 >= *(_DWORD *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 5) = 1;
  }
  else if ( a3 )
  {
    v12 = (unsigned __int64)(a4 & 3) << 10;
    while ( 1 )
    {
      v13 = 1024LL;
      if ( (unsigned __int64)(a3 - 1) <= 0x3FF )
        v13 = a3;
      a3 -= v13;
      result = v12 | v7 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v13 - 1) & 0x3FF;
      v7 += v6 * v13;
      *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 12))++ + 24) = result;
      v14 = *(unsigned int *)(a1 + 12);
      *(_QWORD *)(a1 + 16) += v13;
      if ( (_DWORD)v14 == *(_DWORD *)(a1 + 8) && (*(_BYTE *)(a1 + 4) & 4) == 0 )
      {
        qsort((void *)(a1 + 24), v14, 8uLL, MiTbFlushSort);
        MiCompressTbFlushList(a1);
        result = *(unsigned int *)(a1 + 12);
        if ( (_DWORD)result == *(_DWORD *)(a1 + 8) )
          break;
      }
      if ( !a3 )
        return result;
    }
    if ( a3 )
    {
      *(_BYTE *)(a1 + 5) = 1;
      *(_QWORD *)(a1 + 16) = result;
    }
  }
  return result;
}
