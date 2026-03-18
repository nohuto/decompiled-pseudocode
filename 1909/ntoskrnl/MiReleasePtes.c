/*
 * XREFs of MiReleasePtes @ 0x14006B160
 * Callers:
 *     MiCopyToUserVa @ 0x140020C50 (MiCopyToUserVa.c)
 *     MiDeleteKernelStack @ 0x140024240 (MiDeleteKernelStack.c)
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14002FE40 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x14006AF70 (MmUnmapLockedPages.c)
 *     MiMakePageAvoidRead @ 0x14006C8C0 (MiMakePageAvoidRead.c)
 *     MmCopyToCachedPage @ 0x14006EAA0 (MmCopyToCachedPage.c)
 *     MiZeroPhysicalPage @ 0x14006F000 (MiZeroPhysicalPage.c)
 *     MiDeleteProcessShadow @ 0x14008EB30 (MiDeleteProcessShadow.c)
 *     MiCopyDataPageToImagePage @ 0x14009423C (MiCopyDataPageToImagePage.c)
 *     MiInsertInSystemSpace @ 0x140095820 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x140097494 (MiRemoveFromSystemSpace.c)
 *     MmCreateKernelStack @ 0x1400A3B60 (MmCreateKernelStack.c)
 *     MmCopyMemory @ 0x1400C7740 (MmCopyMemory.c)
 *     MmAllocateIndependentPagesEx @ 0x1400DD368 (MmAllocateIndependentPagesEx.c)
 *     MmUnmapIoSpace @ 0x1400F5130 (MmUnmapIoSpace.c)
 *     MiMapContiguousMemory @ 0x1400F6C14 (MiMapContiguousMemory.c)
 *     MiZeroInParallelWorker @ 0x1400F8EC0 (MiZeroInParallelWorker.c)
 *     MmFreeIndependentPages @ 0x14010D210 (MmFreeIndependentPages.c)
 *     MiPrivateFixup @ 0x140126D84 (MiPrivateFixup.c)
 *     MiZeroLargePage @ 0x140129B2C (MiZeroLargePage.c)
 *     MiReleasePteCopyList @ 0x1401322E8 (MiReleasePteCopyList.c)
 *     MiUnmapSinglePage @ 0x1401429B4 (MiUnmapSinglePage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140155AE8 (MiUpdateImagePfnImportRelocations.c)
 *     MiBuildReservationCluster @ 0x140162A00 (MiBuildReservationCluster.c)
 *     MmDeleteProcessor @ 0x1402BD60C (MmDeleteProcessor.c)
 *     MmMapMdl @ 0x1402C51C0 (MmMapMdl.c)
 *     MiExtendPagingFileMaximum @ 0x1402CDBA8 (MiExtendPagingFileMaximum.c)
 *     MiAddPagesToEnclave @ 0x1402D2F88 (MiAddPagesToEnclave.c)
 *     MiReleasePageHash @ 0x1402E6724 (MiReleasePageHash.c)
 *     MiScrubNodeLargePageList @ 0x1402E6B20 (MiScrubNodeLargePageList.c)
 *     MiReturnPteMappingPair @ 0x1402E8870 (MiReturnPteMappingPair.c)
 *     MiRelocateImagePfn @ 0x140607190 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x140641E24 (MiValidateImagePfn.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1406443CC (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MmCreateProcessAddressSpace @ 0x1406446B4 (MmCreateProcessAddressSpace.c)
 *     MiRelocateImageAgain @ 0x140648DF4 (MiRelocateImageAgain.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x1407107C0 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmReleaseDumpHibernateResources @ 0x14072B9F0 (MmReleaseDumpHibernateResources.c)
 *     MmFreeMappingAddress @ 0x140737FD0 (MmFreeMappingAddress.c)
 *     MiSessionCreateInternal @ 0x14074240C (MiSessionCreateInternal.c)
 *     MiCreatePfnBitMaps @ 0x1407510CC (MiCreatePfnBitMaps.c)
 *     MmFreeNonCachedMemory @ 0x140889010 (MmFreeNonCachedMemory.c)
 *     MiReleaseHotPatchResources @ 0x140891348 (MiReleaseHotPatchResources.c)
 *     MmFreeIsrStack @ 0x140892350 (MmFreeIsrStack.c)
 *     MiAllocateEnclaveVad @ 0x14089286C (MiAllocateEnclaveVad.c)
 *     MiDeleteEnclavePages @ 0x140893838 (MiDeleteEnclavePages.c)
 *     MiDeletePfnBitMaps @ 0x14089B570 (MiDeletePfnBitMaps.c)
 *     MiExpandPartitionIds @ 0x14089BDC8 (MiExpandPartitionIds.c)
 *     MiInitializePteInfo @ 0x1409EEE40 (MiInitializePteInfo.c)
 *     MiInitializeGapFrames @ 0x1409F44A0 (MiInitializeGapFrames.c)
 *     MiInitializeTbFlush @ 0x140A0F8D0 (MiInitializeTbFlush.c)
 *     MiCreateRetpolineBitmap @ 0x140A19C38 (MiCreateRetpolineBitmap.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A3C84C (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiInsertCachedPte @ 0x14006B510 (MiInsertCachedPte.c)
 *     MiInitializeTbFlushStamps @ 0x1400765E4 (MiInitializeTbFlushStamps.c)
 *     MiAttemptCoalesce @ 0x1400E62B0 (MiAttemptCoalesce.c)
 *     MiReturnSystemPtes @ 0x1400E63EC (MiReturnSystemPtes.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiCheckPteRelease @ 0x1402DD4B4 (MiCheckPteRelease.c)
 */

__int64 __fastcall MiReleasePtes(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  ULONG_PTR v3; // r13
  unsigned __int64 v6; // rdx
  __int64 v7; // r14
  ULONG_PTR BugCheckParameter4; // rbp
  unsigned __int64 v9; // rsi
  int v10; // r12d
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r11
  _QWORD *v14; // rbx
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // r10
  _QWORD *v18; // r8
  _QWORD *v19; // r9
  bool v20; // zf
  _QWORD *v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r11
  _QWORD *v25; // rbx
  __int64 v26; // rax
  ULONG_PTR v27; // r10
  unsigned __int64 v28; // r9
  volatile signed __int32 *v29; // r8
  unsigned __int64 v30; // rdx
  unsigned int v31; // eax
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // [rsp+30h] [rbp-118h] BYREF
  _QWORD v37[24]; // [rsp+40h] [rbp-108h] BYREF

  v3 = a3;
  memset(v37, 0, 0xB8uLL);
  if ( (__int64 *)a1 == &qword_1404666C0 && (dword_14057118C & 2) != 0 )
    MiCheckPteRelease(a2, v3);
  v7 = v3;
  BugCheckParameter4 = (__int64)(a2 - *(_QWORD *)(a1 + 16)) >> 3;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
    BugCheckParameter4 >>= 4;
  v9 = v3 >> 4;
  if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
    v9 = v3;
  if ( (unsigned int)v3 >= 0x200 && (__int64 *)a1 == &qword_1404666C0 )
  {
    v10 = 1;
    goto LABEL_13;
  }
  v10 = 0;
  v6 = BugCheckParameter4 + v9 - 1;
  if ( v6 >= *(_QWORD *)a1 )
    goto LABEL_74;
  if ( v9 > 1 )
  {
    v16 = *(_QWORD *)(a1 + 8);
    v17 = *(_QWORD *)(v16 + 8 * (BugCheckParameter4 >> 6));
    v18 = (_QWORD *)(v16 + 8 * (BugCheckParameter4 >> 6));
    v19 = (_QWORD *)(v16 + 8 * (v6 >> 6));
    if ( v18 == v19 )
    {
      v6 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << BugCheckParameter4;
      v20 = (v6 & v17) == v6;
    }
    else
    {
      if ( ((-1LL << BugCheckParameter4) & v17) != -1LL << BugCheckParameter4 )
        goto LABEL_74;
      v21 = v18 + 1;
      if ( v21 != v19 )
      {
        while ( *v21 == -1LL )
        {
          if ( ++v21 == v19 )
            goto LABEL_27;
        }
        goto LABEL_74;
      }
LABEL_27:
      v6 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v6;
      v20 = (v6 & *v21) == v6;
    }
    if ( v20 )
      goto LABEL_13;
LABEL_74:
    KeBugCheckEx(0xDAu, 0x302uLL, (__int64)(a2 << 25) >> 16, v3, BugCheckParameter4);
  }
  if ( v9 != 1 || !_bittest64(*(const signed __int64 **)(a1 + 8), BugCheckParameter4) )
    goto LABEL_74;
LABEL_13:
  v11 = 0x8000000000000000uLL;
  if ( (_DWORD)v3 )
  {
    do
    {
      if ( MiPteInShadowRange(a2) )
      {
        if ( (unsigned int)MiPteHasShadow(v12) )
        {
          if ( !HIBYTE(word_1404658EC) && (v6 & 1) != 0 )
            v6 |= v11;
          *(_QWORD *)a2 = v6;
          MiWritePteShadow(a2, v6);
          v11 = 0x8000000000000000uLL;
          goto LABEL_16;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v6 & 1) != 0 )
        {
          v6 |= v11;
        }
      }
      *(_QWORD *)a2 = v6;
LABEL_16:
      a2 += 8LL;
    }
    while ( v13 != 1 );
  }
  v14 = (_QWORD *)(a2 - 8 * v3);
  if ( v10 )
    goto LABEL_49;
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (result = MiInsertCachedPte(a1, v14, (unsigned int)v3), (_DWORD)result != 1) )
  {
    v36 = 0LL;
    MiInitializeTbFlushStamps(&v36, v6, v11);
    if ( (_DWORD)v3 )
    {
      while ( 1 )
      {
        if ( MiPteInShadowRange((unsigned __int64)v14) )
        {
          if ( (unsigned int)MiPteHasShadow(v23) )
          {
            if ( !HIBYTE(word_1404658EC) && (v22 & 1) != 0 )
              v22 |= 0x8000000000000000uLL;
            *v14 = v22;
            MiWritePteShadow(v14, v22);
            goto LABEL_31;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (v22 & 1) != 0 )
          {
            v22 |= 0x8000000000000000uLL;
          }
        }
        *v14 = v22;
LABEL_31:
        ++v14;
        if ( v24 == 1 )
        {
          v7 = v3;
          break;
        }
      }
    }
    v25 = &v14[-v3];
    v26 = v36;
    if ( qword_140465800 && (v36 & 0x10) == 0 )
      v26 = v36 & ~qword_140465800;
    if ( (v26 & 0xFFFFFFFF00000000uLL) == 0 )
    {
      v32 = ~(unsigned __int8)*(_DWORD *)(a1 + 24);
      v37[1] = 20LL;
      WORD2(v37[0]) = 0;
      LODWORD(v37[0]) = v32 & 2;
      v37[2] = 0LL;
      v37[3] = 0LL;
      MiInsertTbFlushEntry((__int64)v37, (__int64)((_QWORD)v25 << 25) >> 16, v7, 0);
      MiFlushTbList((int *)v37, v33, v34, v35);
    }
    v27 = BugCheckParameter4 & 0x1F;
    v28 = v9;
    v29 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
    if ( v9 + v27 <= 0x20 )
    {
      if ( v9 == 32 )
      {
        *v29 = 0;
LABEL_49:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v9);
        if ( v10 == 1 )
          return MiReturnSystemPtes(a1, BugCheckParameter4, ((_DWORD)v3 + 511) & 0xFFFFFE00, 1LL);
        else
          return MiAttemptCoalesce(a1, BugCheckParameter4, v9);
      }
      v31 = ~(((1 << v9) - 1) << v27);
    }
    else
    {
      if ( (BugCheckParameter4 & 0x1F) != 0 )
      {
        _InterlockedAnd(v29, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v27));
        v28 = v9 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
        ++v29;
      }
      if ( v28 >= 0x20 )
      {
        v30 = v28 >> 5;
        v28 += -32LL * (v28 >> 5);
        do
        {
          *v29++ = 0;
          --v30;
        }
        while ( v30 );
      }
      if ( !v28 )
        goto LABEL_49;
      v31 = -1 << v28;
    }
    _InterlockedAnd(v29, v31);
    goto LABEL_49;
  }
  return result;
}
