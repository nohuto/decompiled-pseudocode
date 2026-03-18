/*
 * XREFs of MiInsertTbFlushEntry @ 0x140058D70
 * Callers:
 *     MiFlushTbAsNeeded @ 0x140022380 (MiFlushTbAsNeeded.c)
 *     MiWsleFlush @ 0x140025220 (MiWsleFlush.c)
 *     MiZeroPage @ 0x140029400 (MiZeroPage.c)
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     MiDeleteSystemPagableVm @ 0x14002D7F0 (MiDeleteSystemPagableVm.c)
 *     MiDeleteVa @ 0x14004B520 (MiDeleteVa.c)
 *     MiTerminateWsleCluster @ 0x14004E0A0 (MiTerminateWsleCluster.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     MiTrimPte @ 0x14005AAE0 (MiTrimPte.c)
 *     MiMakePteClean @ 0x14005C0F0 (MiMakePteClean.c)
 *     MmSetAddressRangeModifiedEx @ 0x14005E570 (MmSetAddressRangeModifiedEx.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MmMapViewInSystemCache @ 0x140074DD0 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x140076770 (MiObtainSystemCacheView.c)
 *     MiFlushDirtyBitsToPfn @ 0x140088BA8 (MiFlushDirtyBitsToPfn.c)
 *     NtUnlockVirtualMemory @ 0x1400A40B0 (NtUnlockVirtualMemory.c)
 *     MiWalkVaRange @ 0x1400BE0F4 (MiWalkVaRange.c)
 *     MiOutPageSingleKernelStack @ 0x1400BEC90 (MiOutPageSingleKernelStack.c)
 *     MiTrimSharedPageFromViews @ 0x1400C10E0 (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MiRevokeExecutePte @ 0x1400CA8C0 (MiRevokeExecutePte.c)
 *     MiReplenishBitMap @ 0x1400DAEE0 (MiReplenishBitMap.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 *     MiReplaceRotateWithDemandZero @ 0x1400F4884 (MiReplaceRotateWithDemandZero.c)
 *     MiZeroAndFlushPtes @ 0x1400F52B8 (MiZeroAndFlushPtes.c)
 *     MiZeroPageWorkMapping @ 0x1400F855C (MiZeroPageWorkMapping.c)
 *     MiInsertLargeTbFlushEntry @ 0x1400F86C0 (MiInsertLargeTbFlushEntry.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiSetPagingOfDriver @ 0x1400FA0BC (MiSetPagingOfDriver.c)
 *     MiSetSystemCodeProtection @ 0x1400FA778 (MiSetSystemCodeProtection.c)
 *     MiDeleteNonPagedPoolPte @ 0x140116770 (MiDeleteNonPagedPoolPte.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140116A54 (MiInsertRecursiveTbFlushEntries.c)
 *     MiReplacePageTablePage @ 0x140122280 (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTable @ 0x1401235A0 (MiDeleteSystemPageTable.c)
 *     MmSetPageProtection @ 0x14012EF20 (MmSetPageProtection.c)
 *     MiDeletePteWsleCluster @ 0x14012F8B0 (MiDeletePteWsleCluster.c)
 *     MiMakeVaRangeNoAccess @ 0x140131C14 (MiMakeVaRangeNoAccess.c)
 *     MiGetPteFromCopyList @ 0x140138004 (MiGetPteFromCopyList.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiEmptyWorkingSetHelper @ 0x140157348 (MiEmptyWorkingSetHelper.c)
 *     MiDeletePhysmemPte @ 0x14015B04C (MiDeletePhysmemPte.c)
 *     MmMapMemoryDumpMdlEx @ 0x14015F904 (MmMapMemoryDumpMdlEx.c)
 *     MiFlushHyperSpace @ 0x14017E888 (MiFlushHyperSpace.c)
 *     MiUnmapRetpolineStubs @ 0x14018065C (MiUnmapRetpolineStubs.c)
 *     MiClearSystemAccessBits @ 0x140186E14 (MiClearSystemAccessBits.c)
 *     MiMapMdlCommon @ 0x140198F04 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x1402C09C4 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1402C1310 (MmProtectMdlSystemAddress.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402C458C (MiDeprioritizeVirtualAddresses.c)
 *     MiSwitchToTransition @ 0x1402C7218 (MiSwitchToTransition.c)
 *     MiTrimPteWorker @ 0x1402C8EF4 (MiTrimPteWorker.c)
 *     MiDecommitLargePte @ 0x1402C9784 (MiDecommitLargePte.c)
 *     MiLargePageFault @ 0x1402D2A68 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3880 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x1402D4400 (MiFlushEnclaveTb.c)
 *     MiProtectEnclavePages @ 0x1402D4818 (MiProtectEnclavePages.c)
 *     MiDeleteAwePageTable @ 0x1402D56A8 (MiDeleteAwePageTable.c)
 *     MiFreePhysicalPages @ 0x1402D5D78 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x1402D6EE4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402D7B68 (MiWriteAwePtes.c)
 *     MiFlushKernelCfgBitmap @ 0x1402DD3D0 (MiFlushKernelCfgBitmap.c)
 *     MiDeleteLargeUserPde @ 0x1402E13AC (MiDeleteLargeUserPde.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     MiScrubLargeMappedPage @ 0x1402EC2C8 (MiScrubLargeMappedPage.c)
 *     MiEliminateZeroPages @ 0x1405ECDD0 (MiEliminateZeroPages.c)
 *     MiClearDriverHotPatchPtes @ 0x14088D598 (MiClearDriverHotPatchPtes.c)
 *     MmDeleteShadowMapping @ 0x140892398 (MmDeleteShadowMapping.c)
 *     MiMarkBootKernelStack @ 0x1409EE190 (MiMarkBootKernelStack.c)
 *     MiTradeBootImagePage @ 0x1409EF854 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x1409EFA54 (MiFreeBootDriverPages.c)
 *     MmFreeLoaderBlock @ 0x1409FDF14 (MmFreeLoaderBlock.c)
 *     MiInitializeTbFlush @ 0x140A0F8D0 (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140A229A0 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x140116650 (MiCompressTbFlushList.c)
 *     qsort @ 0x1401A11F0 (qsort.c)
 */

unsigned __int64 __fastcall MiInsertTbFlushEntry(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned int v8; // r8d
  int v9; // r10d
  unsigned __int64 result; // rax
  __int64 v11; // r11
  unsigned __int64 v12; // rbp
  __int64 v13; // rdx
  size_t v14; // rcx
  unsigned __int64 v15; // rdx
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax

  v6 = 4096LL << (9 * (unsigned __int8)a4);
  v7 = a2;
  if ( *(_DWORD *)a1 != 1 )
  {
    v16 = *(_BYTE *)(a1 + 4);
    if ( (v16 & 8) == 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_BYTE *)(a1 + 4) = v16 | 8;
  }
  v8 = *(_DWORD *)(a1 + 12);
  v9 = 1;
  if ( !v8 || (*(_BYTE *)(a1 + 4) & 4) != 0 )
  {
    result = 0LL;
  }
  else
  {
    result = *(_QWORD *)(a1 + 8LL * (v8 - 1) + 24);
    if ( ((result >> 10) & 3) != a4 )
      goto LABEL_5;
    result &= 0xFFFFFFFFFFFFF000uLL;
    v15 = *(_QWORD *)(a1 + 8LL * (v8 - 1) + 24) & 0x3FFLL;
    if ( result + v6 * (v15 + 1) != v7 )
      goto LABEL_5;
    result = v15 + a3;
    if ( v15 + a3 > 0x3FF || result <= v15 )
      goto LABEL_5;
    result = 1LL;
  }
  if ( (_DWORD)result )
  {
    v17 = a1 + 8LL * (v8 - 1);
    result = *(_QWORD *)(v17 + 24);
    *(_QWORD *)(a1 + 16) += a3;
    *(_QWORD *)(v17 + 24) = result ^ ((unsigned __int16)result ^ (unsigned __int16)(result + a3)) & 0x3FF;
    return result;
  }
LABEL_5:
  if ( !v8 || (*(_BYTE *)(a1 + 4) & 4) != 0 )
  {
    v9 = 0;
    v11 = v6 * a3;
  }
  else
  {
    result = *(_QWORD *)(a1 + 8LL * (v8 - 1) + 24);
    if ( ((result >> 10) & 3) != a4 )
      goto LABEL_8;
    v11 = a3 * v6;
    if ( (result & 0xFFFFFFFFFFFFF000uLL) != a3 * v6 + v7 )
      goto LABEL_8;
    result &= 0x3FFu;
    if ( result + a3 <= result || result + a3 > 0x3FF )
      goto LABEL_8;
  }
  if ( v9 )
  {
    v18 = a1 + 8LL * (v8 - 1);
    v19 = *(_QWORD *)(v18 + 24);
    *(_QWORD *)(a1 + 16) += a3;
    result = v19 - v11;
    *(_QWORD *)(v18 + 24) = result ^ ((unsigned __int16)result ^ (unsigned __int16)(result + a3)) & 0x3FF;
    return result;
  }
LABEL_8:
  if ( v8 >= *(_DWORD *)(a1 + 8) )
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
