/*
 * XREFs of MiReleasePtes @ 0x1400340E0
 * Callers:
 *     MmFreeIndependentPages @ 0x140001010 (MmFreeIndependentPages.c)
 *     MiRemoveFromSystemSpace @ 0x140026F90 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiZeroPhysicalPage @ 0x140032010 (MiZeroPhysicalPage.c)
 *     MmCopyToCachedPage @ 0x140033050 (MmCopyToCachedPage.c)
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiDeleteProcessShadow @ 0x1400686C0 (MiDeleteProcessShadow.c)
 *     MiDeleteKernelStack @ 0x14007A5A0 (MiDeleteKernelStack.c)
 *     MiCopyToUserVa @ 0x140084400 (MiCopyToUserVa.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MmCreateKernelStack @ 0x1400C9FF0 (MmCreateKernelStack.c)
 *     MiMapContiguousMemory @ 0x1400E5E24 (MiMapContiguousMemory.c)
 *     MmCopyMemory @ 0x1400EA8F0 (MmCopyMemory.c)
 *     MmAllocateIndependentPagesEx @ 0x14010903C (MmAllocateIndependentPagesEx.c)
 *     MiZeroLargePage @ 0x140118DEC (MiZeroLargePage.c)
 *     MiUnmapSinglePage @ 0x14012190C (MiUnmapSinglePage.c)
 *     MmUnmapIoSpace @ 0x1401232F0 (MmUnmapIoSpace.c)
 *     MiPrivateFixup @ 0x140125F10 (MiPrivateFixup.c)
 *     MiReleasePteCopyList @ 0x140131930 (MiReleasePteCopyList.c)
 *     MiZeroInParallelWorker @ 0x14013C7C0 (MiZeroInParallelWorker.c)
 *     MiBuildReservationCluster @ 0x1401501BC (MiBuildReservationCluster.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1401B52EC (MiUpdateImagePfnImportRelocations.c)
 *     MmDeleteProcessor @ 0x1402A6354 (MmDeleteProcessor.c)
 *     MmMapMdl @ 0x1402ADA50 (MmMapMdl.c)
 *     MiExtendPagingFileMaximum @ 0x1402B7BC0 (MiExtendPagingFileMaximum.c)
 *     MiAddPagesToEnclave @ 0x1402BCAD4 (MiAddPagesToEnclave.c)
 *     MiReleasePageHash @ 0x1402CC6AC (MiReleasePageHash.c)
 *     MiScrubNodeLargePageList @ 0x1402CCD80 (MiScrubNodeLargePageList.c)
 *     MiReturnPteMappingPair @ 0x1402CE3F8 (MiReturnPteMappingPair.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140583188 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiValidateImagePfn @ 0x1405A9854 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1405E0930 (MiRelocateImagePfn.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14060851C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiRelocateImageAgain @ 0x140650760 (MiRelocateImageAgain.c)
 *     MmCreateProcessAddressSpace @ 0x1406D2B38 (MmCreateProcessAddressSpace.c)
 *     MmReleaseDumpHibernateResources @ 0x1406E141C (MmReleaseDumpHibernateResources.c)
 *     MmFreeMappingAddress @ 0x1406FD750 (MmFreeMappingAddress.c)
 *     MiSessionCreateInternal @ 0x140716F08 (MiSessionCreateInternal.c)
 *     MiCreatePfnBitMaps @ 0x14072BAB0 (MiCreatePfnBitMaps.c)
 *     MmFreeNonCachedMemory @ 0x14084F080 (MmFreeNonCachedMemory.c)
 *     MiReleaseHotPatchResources @ 0x14085916C (MiReleaseHotPatchResources.c)
 *     MmFreeIsrStack @ 0x14085A0E4 (MmFreeIsrStack.c)
 *     MiAllocateEnclaveVad @ 0x14085A3B8 (MiAllocateEnclaveVad.c)
 *     MiDeleteEnclavePages @ 0x14085B328 (MiDeleteEnclavePages.c)
 *     MiDeletePfnBitMaps @ 0x140860770 (MiDeletePfnBitMaps.c)
 *     MiExpandPartitionIds @ 0x1408613C8 (MiExpandPartitionIds.c)
 *     MiInitializePteInfo @ 0x1409B84C8 (MiInitializePteInfo.c)
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 *     MiInitializeTbFlush @ 0x1409BAC04 (MiInitializeTbFlush.c)
 *     MiInitializeGapFrames @ 0x1409D3020 (MiInitializeGapFrames.c)
 *     MiCreateRetpolineBitmap @ 0x1409F8060 (MiCreateRetpolineBitmap.c)
 *     MiInitializeEnclaveMetadataPage @ 0x1409F82B8 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiInsertCachedPte @ 0x1400344D0 (MiInsertCachedPte.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiAttemptCoalesce @ 0x140100B80 (MiAttemptCoalesce.c)
 *     MiReturnSystemPtes @ 0x140100CB8 (MiReturnSystemPtes.c)
 *     MiInitializeTbFlushStamps @ 0x1401118EC (MiInitializeTbFlushStamps.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiCheckPteRelease @ 0x1402C36A4 (MiCheckPteRelease.c)
 */

__int64 __fastcall MiReleasePtes(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  ULONG_PTR v3; // r15
  unsigned __int64 v4; // rbx
  ULONG_PTR v6; // r12
  ULONG_PTR BugCheckParameter4; // rbp
  unsigned __int64 v8; // rsi
  int v9; // r13d
  unsigned __int64 v10; // r8
  ULONG_PTR v11; // r11
  __int64 v12; // r14
  unsigned __int64 *v13; // rbx
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // r10
  _QWORD *v17; // r8
  _QWORD *v18; // r9
  bool v19; // zf
  _QWORD *v20; // r8
  _KPROCESS *Process; // rcx
  ULONG_PTR v22; // r11
  unsigned __int64 v23; // rdx
  char *v24; // rbx
  __int64 v25; // rax
  ULONG_PTR v26; // r10
  unsigned __int64 v27; // r9
  volatile signed __int32 *v28; // r8
  unsigned __int64 v29; // rdx
  unsigned int v30; // eax
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-120h]
  __int64 v37; // [rsp+40h] [rbp-118h]
  int v38; // [rsp+50h] [rbp-108h] BYREF
  __int16 v39; // [rsp+54h] [rbp-104h]
  __int64 v40; // [rsp+58h] [rbp-100h]
  __int64 v41; // [rsp+60h] [rbp-F8h]
  __int64 v42; // [rsp+68h] [rbp-F0h]

  v3 = a3;
  v4 = a2;
  if ( (__int64 *)a1 == &qword_14043C060 && (dword_14054117C & 2) != 0 )
    MiCheckPteRelease(a2, a3);
  v6 = v3;
  BugCheckParameter4 = (__int64)(v4 - *(_QWORD *)(a1 + 16)) >> 3;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
    BugCheckParameter4 >>= 4;
  v8 = v3 >> 4;
  if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
    v8 = v3;
  v36 = v8;
  if ( (unsigned int)v3 >= 0x200 && (__int64 *)a1 == &qword_14043C060 )
  {
    v9 = 1;
    goto LABEL_13;
  }
  v9 = 0;
  a2 = BugCheckParameter4 + v8 - 1;
  if ( a2 >= *(_QWORD *)a1 )
LABEL_79:
    KeBugCheckEx(0xDAu, 0x302uLL, (__int64)(v4 << 25) >> 16, v3, BugCheckParameter4);
  if ( v8 <= 1 )
  {
    if ( v8 == 1 && _bittest64(*(const signed __int64 **)(a1 + 8), BugCheckParameter4) )
      goto LABEL_13;
    goto LABEL_79;
  }
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(_QWORD *)(v15 + 8 * (BugCheckParameter4 >> 6));
  v17 = (_QWORD *)(v15 + 8 * (BugCheckParameter4 >> 6));
  v18 = (_QWORD *)(v15 + 8 * (a2 >> 6));
  if ( v17 == v18 )
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << BugCheckParameter4;
    v19 = (a2 & v16) == a2;
  }
  else
  {
    if ( ((-1LL << BugCheckParameter4) & v16) != -1LL << BugCheckParameter4 )
      goto LABEL_79;
    v20 = v17 + 1;
    if ( v20 != v18 )
    {
      while ( *v20 == -1LL )
      {
        if ( ++v20 == v18 )
          goto LABEL_30;
      }
      goto LABEL_79;
    }
LABEL_30:
    a2 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)a2;
    v19 = (a2 & *v20) == a2;
  }
  if ( !v19 )
    goto LABEL_79;
LABEL_13:
  v10 = 0x8000000000000000uLL;
  if ( !(_DWORD)v3 )
    goto LABEL_20;
  v11 = v3;
  do
  {
    a2 = ZeroPte;
    if ( v4 < 0xFFFFF6FB7DBED000uLL || v4 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_17;
    if ( !(unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, ZeroPte) )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (a2 & 1) != 0 )
      {
        a2 |= v10;
      }
LABEL_17:
      *(_QWORD *)v4 = a2;
      goto LABEL_18;
    }
    if ( !HIBYTE(word_14043B26C) && (a2 & 1) != 0 )
      a2 |= v10;
    *(_QWORD *)v4 = a2;
    MiWritePteShadow(v4);
    v10 = 0x8000000000000000uLL;
LABEL_18:
    v4 += 8LL;
    --v11;
  }
  while ( v11 );
  v6 = v3;
LABEL_20:
  v12 = 8 * v6;
  v13 = (unsigned __int64 *)(v4 - 8 * v6);
  v37 = 8 * v6;
  if ( v9 )
    goto LABEL_54;
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (result = MiInsertCachedPte(a1, v13, (unsigned int)v3), (_DWORD)result != 1) )
  {
    v35 = 0LL;
    MiInitializeTbFlushStamps(&v35, a2, v10);
    if ( (_DWORD)v3 )
    {
      v22 = v6;
      while ( 1 )
      {
        v23 = v35;
        if ( (unsigned __int64)v13 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v13 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(Process, v35) )
          {
            if ( !HIBYTE(word_14043B26C) && (v23 & 1) != 0 )
              v23 |= 0x8000000000000000uLL;
            *v13 = v23;
            MiWritePteShadow(v13);
            goto LABEL_36;
          }
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 && (v23 & 1) != 0 )
            v23 = v35 | 0x8000000000000000uLL;
        }
        *v13 = v23;
LABEL_36:
        ++v13;
        if ( !--v22 )
        {
          v8 = v36;
          v6 = v3;
          v12 = v37;
          break;
        }
      }
    }
    v24 = (char *)v13 - v12;
    v25 = v35;
    if ( qword_14043B180 && (v35 & 0x10) == 0 )
      v25 = v35 & ~qword_14043B180;
    if ( (v25 & 0xFFFFFFFF00000000uLL) == 0 )
    {
      v31 = ~(unsigned __int8)*(_DWORD *)(a1 + 24);
      v40 = 20LL;
      v39 = 0;
      v38 = v31 & 2;
      v41 = 0LL;
      v42 = 0LL;
      MiInsertTbFlushEntry(&v38, (__int64)((_QWORD)v24 << 25) >> 16, v6);
      MiFlushTbList(&v38, v32, v33, v34);
    }
    v26 = BugCheckParameter4 & 0x1F;
    v27 = v8;
    v28 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
    if ( v8 + v26 <= 0x20 )
    {
      if ( v8 == 32 )
      {
        *v28 = 0;
LABEL_54:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v8);
        if ( v9 == 1 )
          return MiReturnSystemPtes(a1, BugCheckParameter4, ((_DWORD)v3 + 511) & 0xFFFFFE00, 1LL);
        else
          return MiAttemptCoalesce(a1, BugCheckParameter4, v8);
      }
      v30 = ~(((1 << v8) - 1) << v26);
    }
    else
    {
      if ( (BugCheckParameter4 & 0x1F) != 0 )
      {
        _InterlockedAnd(v28, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v26));
        v27 = v8 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
        ++v28;
      }
      if ( v27 >= 0x20 )
      {
        v29 = v27 >> 5;
        v27 += -32LL * (v27 >> 5);
        do
        {
          *v28++ = 0;
          --v29;
        }
        while ( v29 );
      }
      if ( !v27 )
        goto LABEL_54;
      v30 = -1 << v27;
    }
    _InterlockedAnd(v28, v30);
    goto LABEL_54;
  }
  return result;
}
