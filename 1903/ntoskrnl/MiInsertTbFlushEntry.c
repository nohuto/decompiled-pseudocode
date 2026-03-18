/*
 * XREFs of MiInsertTbFlushEntry @ 0x140058CD0
 * Callers:
 *     MiFlushTbAsNeeded @ 0x140021F90 (MiFlushTbAsNeeded.c)
 *     MiWsleFlush @ 0x140024E30 (MiWsleFlush.c)
 *     MiZeroPage @ 0x140029010 (MiZeroPage.c)
 *     MiCopyPage @ 0x14002C5D0 (MiCopyPage.c)
 *     MiDeleteSystemPagableVm @ 0x14002D400 (MiDeleteSystemPagableVm.c)
 *     MiDeleteVa @ 0x14004B480 (MiDeleteVa.c)
 *     MiTerminateWsleCluster @ 0x14004E000 (MiTerminateWsleCluster.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MiTrimPte @ 0x14005AA40 (MiTrimPte.c)
 *     MiMakePteClean @ 0x14005C050 (MiMakePteClean.c)
 *     MmSetAddressRangeModifiedEx @ 0x14005E4D0 (MmSetAddressRangeModifiedEx.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MmMapViewInSystemCache @ 0x140074B60 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x140076500 (MiObtainSystemCacheView.c)
 *     MiRevokeExecutePte @ 0x14008D910 (MiRevokeExecutePte.c)
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     NtUnlockVirtualMemory @ 0x1400C4230 (NtUnlockVirtualMemory.c)
 *     MiWalkVaRange @ 0x1400DE274 (MiWalkVaRange.c)
 *     MiOutPageSingleKernelStack @ 0x1400DEE10 (MiOutPageSingleKernelStack.c)
 *     MiTrimSharedPageFromViews @ 0x1400E1260 (MiTrimSharedPageFromViews.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400EC148 (MiFlushDirtyBitsToPfn.c)
 *     MiReplenishBitMap @ 0x1400F29A0 (MiReplenishBitMap.c)
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 *     MiSetPagingOfDriver @ 0x1400F661C (MiSetPagingOfDriver.c)
 *     MiSetSystemCodeProtection @ 0x1400F6CD8 (MiSetSystemCodeProtection.c)
 *     MiDeleteNonPagedPoolPte @ 0x140115100 (MiDeleteNonPagedPoolPte.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1401153E4 (MiInsertRecursiveTbFlushEntries.c)
 *     MiReplaceRotateWithDemandZero @ 0x140116764 (MiReplaceRotateWithDemandZero.c)
 *     MiZeroAndFlushPtes @ 0x140117198 (MiZeroAndFlushPtes.c)
 *     MiZeroPageWorkMapping @ 0x140119504 (MiZeroPageWorkMapping.c)
 *     MiInsertLargeTbFlushEntry @ 0x140119668 (MiInsertLargeTbFlushEntry.c)
 *     MiReplacePageTablePage @ 0x140121430 (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTable @ 0x140122490 (MiDeleteSystemPageTable.c)
 *     MmProtectPool @ 0x140124AE4 (MmProtectPool.c)
 *     MmSetPageProtection @ 0x14012E5D0 (MmSetPageProtection.c)
 *     MiDeletePteWsleCluster @ 0x14012EFA0 (MiDeletePteWsleCluster.c)
 *     MiMakeVaRangeNoAccess @ 0x140131404 (MiMakeVaRangeNoAccess.c)
 *     MiGetPteFromCopyList @ 0x1401379BC (MiGetPteFromCopyList.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 *     MiEmptyWorkingSetHelper @ 0x140156CA8 (MiEmptyWorkingSetHelper.c)
 *     MiDeletePhysmemPte @ 0x14015A9AC (MiDeletePhysmemPte.c)
 *     MmMapMemoryDumpMdlEx @ 0x14015F264 (MmMapMemoryDumpMdlEx.c)
 *     MiFlushHyperSpace @ 0x14017E198 (MiFlushHyperSpace.c)
 *     MiUnmapRetpolineStubs @ 0x14017FF6C (MiUnmapRetpolineStubs.c)
 *     MiClearSystemAccessBits @ 0x140186864 (MiClearSystemAccessBits.c)
 *     MiMapMdlCommon @ 0x1401988A4 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x1402C0C64 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1402C15B0 (MmProtectMdlSystemAddress.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402C482C (MiDeprioritizeVirtualAddresses.c)
 *     MiSwitchToTransition @ 0x1402C74B8 (MiSwitchToTransition.c)
 *     MiTrimPteWorker @ 0x1402C9194 (MiTrimPteWorker.c)
 *     MiDecommitLargePte @ 0x1402C9A24 (MiDecommitLargePte.c)
 *     MiLargePageFault @ 0x1402D2D08 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3B20 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x1402D46A0 (MiFlushEnclaveTb.c)
 *     MiProtectEnclavePages @ 0x1402D4AB8 (MiProtectEnclavePages.c)
 *     MiDeleteAwePageTable @ 0x1402D5948 (MiDeleteAwePageTable.c)
 *     MiFreePhysicalPages @ 0x1402D6018 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x1402D7184 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402D7E08 (MiWriteAwePtes.c)
 *     MiFlushKernelCfgBitmap @ 0x1402DD670 (MiFlushKernelCfgBitmap.c)
 *     MiDeleteLargeUserPde @ 0x1402E164C (MiDeleteLargeUserPde.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 *     MiScrubLargeMappedPage @ 0x1402EC568 (MiScrubLargeMappedPage.c)
 *     MiEliminateZeroPages @ 0x1405EC600 (MiEliminateZeroPages.c)
 *     MiClearDriverHotPatchPtes @ 0x14088DD78 (MiClearDriverHotPatchPtes.c)
 *     MmDeleteShadowMapping @ 0x140892B78 (MmDeleteShadowMapping.c)
 *     MiMarkBootKernelStack @ 0x1409EE278 (MiMarkBootKernelStack.c)
 *     MiTradeBootImagePage @ 0x1409EF93C (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x1409EFB3C (MiFreeBootDriverPages.c)
 *     MmFreeLoaderBlock @ 0x1409FD9F8 (MmFreeLoaderBlock.c)
 *     MiInitializeTbFlush @ 0x140A0F138 (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140A228C0 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x140114FE0 (MiCompressTbFlushList.c)
 *     qsort @ 0x1401A0AD0 (qsort.c)
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
