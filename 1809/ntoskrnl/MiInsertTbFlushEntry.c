/*
 * XREFs of MiInsertTbFlushEntry @ 0x1400B3AF0
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 *     MiDeleteVa @ 0x140069700 (MiDeleteVa.c)
 *     MiProtectPrivateMemory @ 0x140070DC0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiDeleteSystemPagableVm @ 0x140079F10 (MiDeleteSystemPagableVm.c)
 *     MiTerminateWsleCluster @ 0x14007B968 (MiTerminateWsleCluster.c)
 *     MiOutPageSingleKernelStack @ 0x14007FAB0 (MiOutPageSingleKernelStack.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     MiSetSystemCodeProtection @ 0x1400862E0 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x140086780 (MmSetAddressRangeModifiedEx.c)
 *     NtGetWriteWatch @ 0x140086AD0 (NtGetWriteWatch.c)
 *     MiTrimPte @ 0x140087BD0 (MiTrimPte.c)
 *     MiWalkVaRange @ 0x140093C90 (MiWalkVaRange.c)
 *     MiLockCode @ 0x1400975A0 (MiLockCode.c)
 *     MiFlushTbAsNeeded @ 0x140097FD0 (MiFlushTbAsNeeded.c)
 *     MiObtainSystemCacheView @ 0x1400AD220 (MiObtainSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x1400AD930 (MmMapViewInSystemCache.c)
 *     MiCopyPage @ 0x1400B1C50 (MiCopyPage.c)
 *     MiRevertValidPte @ 0x1400B2360 (MiRevertValidPte.c)
 *     MiWsleFlush @ 0x1400B3310 (MiWsleFlush.c)
 *     NtUnlockVirtualMemory @ 0x1400B3D90 (NtUnlockVirtualMemory.c)
 *     MiCopyOnWrite @ 0x1400B45E0 (MiCopyOnWrite.c)
 *     MiSetPagingOfDriver @ 0x1400DADFC (MiSetPagingOfDriver.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB40C (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x1400EBF44 (MiStealPage.c)
 *     MiReplenishBitMap @ 0x1400EFDF0 (MiReplenishBitMap.c)
 *     MiDeleteNonPagedPoolPte @ 0x1401115B0 (MiDeleteNonPagedPoolPte.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1401118E8 (MiInsertRecursiveTbFlushEntries.c)
 *     MiReplacePageTablePage @ 0x14011BE8C (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTable @ 0x14011F050 (MiDeleteSystemPageTable.c)
 *     MiRevokeExecutePte @ 0x14011FCE0 (MiRevokeExecutePte.c)
 *     MiZeroPageWorkMapping @ 0x140121324 (MiZeroPageWorkMapping.c)
 *     MiInsertLargeTbFlushEntry @ 0x140121484 (MiInsertLargeTbFlushEntry.c)
 *     MiReplaceRotateWithDemandZero @ 0x1401229F0 (MiReplaceRotateWithDemandZero.c)
 *     MiZeroAndFlushPtes @ 0x14012337C (MiZeroAndFlushPtes.c)
 *     MiFlushDirtyBitsToPfn @ 0x14012C20C (MiFlushDirtyBitsToPfn.c)
 *     MiGetPteFromCopyList @ 0x14012D808 (MiGetPteFromCopyList.c)
 *     MmSetPageProtection @ 0x140133580 (MmSetPageProtection.c)
 *     MiEmptyWorkingSetHelper @ 0x14013FFE8 (MiEmptyWorkingSetHelper.c)
 *     MmMapMemoryDumpMdlEx @ 0x140144420 (MmMapMemoryDumpMdlEx.c)
 *     MiFlushHyperSpace @ 0x140175F54 (MiFlushHyperSpace.c)
 *     MiClearSystemAccessBits @ 0x140184A1C (MiClearSystemAccessBits.c)
 *     MiMapMdlCommon @ 0x14018EAF4 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x1402A9424 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1402A9C70 (MmProtectMdlSystemAddress.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402AB6BC (MiDeprioritizeVirtualAddresses.c)
 *     MmFreeSpecialPool @ 0x1402AD178 (MmFreeSpecialPool.c)
 *     MiSwitchToTransition @ 0x1402AF640 (MiSwitchToTransition.c)
 *     MiDeleteAwePageTable @ 0x1402B0234 (MiDeleteAwePageTable.c)
 *     MiFreePhysicalPages @ 0x1402B08E0 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x1402B15BC (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1402B2278 (MiWriteAwePtes.c)
 *     MiTrimPteWorker @ 0x1402B3D34 (MiTrimPteWorker.c)
 *     MiJoinBitmapPages @ 0x1402B4EC0 (MiJoinBitmapPages.c)
 *     MiLargePageFault @ 0x1402BC3D8 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402BD1D4 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x1402BDD0C (MiFlushEnclaveTb.c)
 *     MiProtectEnclavePages @ 0x1402BE120 (MiProtectEnclavePages.c)
 *     MiFlushKernelCfgBitmap @ 0x1402C33E0 (MiFlushKernelCfgBitmap.c)
 *     MiBuildForkPte @ 0x1402C7BF0 (MiBuildForkPte.c)
 *     MiScrubLargeMappedPage @ 0x1402CF238 (MiScrubLargeMappedPage.c)
 *     MiEliminateZeroPages @ 0x14066BEB0 (MiEliminateZeroPages.c)
 *     MiUnmapRetpolineStubs @ 0x140853E10 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x140854900 (MiClearDriverHotPatchPtes.c)
 *     MmDeleteShadowMapping @ 0x140858ECC (MmDeleteShadowMapping.c)
 *     MiMarkBootKernelStack @ 0x1409B6464 (MiMarkBootKernelStack.c)
 *     MiFreeBootDriverPage @ 0x1409B83FC (MiFreeBootDriverPage.c)
 *     MiTradeBootImagePage @ 0x1409B86AC (MiTradeBootImagePage.c)
 *     MiInitializeTbFlush @ 0x1409B9C04 (MiInitializeTbFlush.c)
 *     MmFreeLoaderBlock @ 0x1409C5164 (MmFreeLoaderBlock.c)
 *     MiProtectSharedUserPage @ 0x1409DF218 (MiProtectSharedUserPage.c)
 *     MiReturnDriverLoadPages @ 0x1409F77A0 (MiReturnDriverLoadPages.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x140113AA0 (MiCompressTbFlushList.c)
 *     qsort @ 0x1401962E0 (qsort.c)
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
