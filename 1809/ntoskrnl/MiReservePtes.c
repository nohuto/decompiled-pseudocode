/*
 * XREFs of MiReservePtes @ 0x14005C890
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiZeroPhysicalPage @ 0x140032010 (MiZeroPhysicalPage.c)
 *     MmCopyToCachedPage @ 0x140033050 (MmCopyToCachedPage.c)
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiCopyToUserVa @ 0x140084400 (MiCopyToUserVa.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MmCreateKernelStack @ 0x1400C9FF0 (MmCreateKernelStack.c)
 *     MiMapContiguousMemory @ 0x1400E5E24 (MiMapContiguousMemory.c)
 *     MmCopyMemory @ 0x1400EA8F0 (MmCopyMemory.c)
 *     MmAllocateIndependentPagesEx @ 0x14010903C (MmAllocateIndependentPagesEx.c)
 *     MiZeroLargePage @ 0x140118DEC (MiZeroLargePage.c)
 *     MiMapSinglePage @ 0x14012194C (MiMapSinglePage.c)
 *     MiPrivateFixup @ 0x140125F10 (MiPrivateFixup.c)
 *     MiCreatePteCopyList @ 0x14012ECB0 (MiCreatePteCopyList.c)
 *     MiZeroInParallelWorker @ 0x14013C7C0 (MiZeroInParallelWorker.c)
 *     MiBuildReservationCluster @ 0x1401501BC (MiBuildReservationCluster.c)
 *     MiBuildDynamicRegion @ 0x14017EA20 (MiBuildDynamicRegion.c)
 *     MiReservePageHash @ 0x1401884E8 (MiReservePageHash.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1401B52EC (MiUpdateImagePfnImportRelocations.c)
 *     MmMapMdl @ 0x1402ADA50 (MmMapMdl.c)
 *     MiAddPagesToEnclave @ 0x1402BCAD4 (MiAddPagesToEnclave.c)
 *     MiScrubNodeLargePageList @ 0x1402CCD80 (MiScrubNodeLargePageList.c)
 *     MmInitializeProcessor @ 0x140573A74 (MmInitializeProcessor.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140583188 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiValidateImagePfn @ 0x1405A9854 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1405E0930 (MiRelocateImagePfn.c)
 *     MiRelocateImageAgain @ 0x140650760 (MiRelocateImageAgain.c)
 *     MmCreateProcessAddressSpace @ 0x1406D2B38 (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x1406D2D8C (MiAllocateProcessShadow.c)
 *     MmAllocateMappingAddress @ 0x1406FA580 (MmAllocateMappingAddress.c)
 *     MiSessionCreateInternal @ 0x140716F08 (MiSessionCreateInternal.c)
 *     MmAllocateDumpHibernateResources @ 0x140720238 (MmAllocateDumpHibernateResources.c)
 *     MiCreatePfnBitMaps @ 0x14072BAB0 (MiCreatePfnBitMaps.c)
 *     MmAllocateNonCachedMemory @ 0x14084EEA0 (MmAllocateNonCachedMemory.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408579C8 (MiMapHotPatchImageInSystemSpace.c)
 *     MiAllocateEnclaveVad @ 0x14085A3B8 (MiAllocateEnclaveVad.c)
 *     MiExpandPartitionIds @ 0x1408613C8 (MiExpandPartitionIds.c)
 *     MiBuildPagedPool @ 0x1409B7A44 (MiBuildPagedPool.c)
 *     MiInitializePteInfo @ 0x1409B84C8 (MiInitializePteInfo.c)
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 *     MiInitializeTbFlush @ 0x1409BAC04 (MiInitializeTbFlush.c)
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 *     MiInitializeMirroring @ 0x1409BDF88 (MiInitializeMirroring.c)
 *     MiInitializeNonPagedPool @ 0x1409BE0D4 (MiInitializeNonPagedPool.c)
 *     MiInitializeGapFrames @ 0x1409D3020 (MiInitializeGapFrames.c)
 *     MiMapDummyPages @ 0x1409DD7AC (MiMapDummyPages.c)
 *     MiInitializeRetpoline @ 0x1409DFFC8 (MiInitializeRetpoline.c)
 *     MiCreateRetpolineBitmap @ 0x1409F8060 (MiCreateRetpolineBitmap.c)
 *     MiInitializeEnclaveMetadataPage @ 0x1409F82B8 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiCheckProcessorPteCache @ 0x14005CFB0 (MiCheckProcessorPteCache.c)
 *     MiFlushTbAsNeeded @ 0x140097F10 (MiFlushTbAsNeeded.c)
 *     MiEmptyPteBins @ 0x1400EFC90 (MiEmptyPteBins.c)
 *     MiPteBinsNeedTrimming @ 0x1400F0480 (MiPteBinsNeedTrimming.c)
 *     MiExpandPtes @ 0x1400F6494 (MiExpandPtes.c)
 *     RtlInterlockedSetClearRunEx @ 0x140100D60 (RtlInterlockedSetClearRunEx.c)
 *     MiCheckPteReserve @ 0x1402C396C (MiCheckPteReserve.c)
 */

ULONG_PTR __fastcall MiReservePtes(__int64 a1, unsigned __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // r13
  unsigned __int64 v6; // rbp
  ULONG_PTR v7; // r14
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  int v11; // r14d
  unsigned __int64 v12; // r12
  unsigned __int64 *v13; // r9
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // r10
  unsigned int v28; // r11d
  unsigned __int64 *v29; // r13
  bool v30; // zf
  __int64 v31; // rax
  unsigned int v32; // r11d
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // rax
  __int64 v35; // r10
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  bool v41; // sf
  __int64 v42; // rcx
  unsigned int v43; // eax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // r11
  unsigned __int64 v48; // r9
  __int64 v49; // r8
  unsigned int v50; // ecx
  unsigned __int64 *v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v58; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v59; // [rsp+30h] [rbp-98h]
  unsigned __int64 *v60; // [rsp+38h] [rbp-90h]
  unsigned __int64 v61; // [rsp+40h] [rbp-88h]
  unsigned __int64 v62; // [rsp+60h] [rbp-68h]
  _QWORD v63[12]; // [rsp+68h] [rbp-60h] BYREF
  int v64; // [rsp+D8h] [rbp+10h]

  v2 = 0;
  v3 = (unsigned int)a2;
  v4 = (unsigned int)a2;
  v6 = (unsigned int)a2;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
  {
    v6 = (unsigned __int64)(unsigned int)a2 >> 4;
  }
  else if ( (__int64 *)a1 == &qword_14043C060 && (unsigned int)a2 <= 0x40uLL )
  {
    v7 = MiCheckProcessorPteCache((unsigned int)a2);
    if ( v7 )
    {
LABEL_5:
      if ( (*(_DWORD *)(a1 + 24) & 2) == 0 )
        goto LABEL_47;
      if ( (__int64 *)a1 == &qword_14043C060 && (dword_14054117C & 2) != 0 )
        MiCheckPteReserve(v7, v4);
      if ( (unsigned int)v3 > 0x10 )
        goto LABEL_47;
      if ( (_DWORD)v3 )
      {
        do
        {
          v8 = *(_QWORD *)(v7 + 8LL * v2);
          v9 = v7 + 8LL * v2;
          if ( v9 >= 0xFFFFF6FB7DBED000uLL
            && v9 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v8 & 1) != 0
            && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
          {
            v54 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v54 )
            {
              v55 = *(_QWORD *)(v54 + 8 * ((v9 >> 3) & 0x1FF));
              v56 = v8 | 0x20;
              if ( (v55 & 0x20) == 0 )
                v56 = *(_QWORD *)(v7 + 8LL * v2);
              v8 = v56;
              if ( (v55 & 0x42) != 0 )
                v8 = v56 | 0x42;
            }
          }
          if ( qword_14043B180 && (v8 & 0x10) == 0 )
            v8 &= ~qword_14043B180;
          if ( (v8 & 0xFFFFFFFF00000000uLL) != 0 )
            break;
          ++v2;
        }
        while ( v2 < (unsigned int)v3 );
      }
      if ( v2 != (_DWORD)v3 )
LABEL_47:
        MiFlushTbAsNeeded(v7);
      return v7;
    }
  }
  if ( (unsigned int)v3 < 0x200 )
    goto LABEL_22;
  v46 = MiExpandPtes(a1, v3);
  v7 = v46;
  if ( v46 )
  {
    if ( (__int64 *)a1 == &qword_14043C060 && (dword_14054117C & 2) != 0 )
      MiCheckPteReserve(v46, v3);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)v6);
    return v7;
  }
  if ( (__int64 *)a1 != &qword_14043C060 )
  {
LABEL_22:
    v11 = 0;
    v64 = 0;
    v12 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = (unsigned __int64 *)a1;
        v14 = *(_QWORD *)(a1 + 64);
        v57 = v14;
        v60 = (unsigned __int64 *)a1;
        if ( *(_QWORD *)a1 )
          break;
LABEL_69:
        if ( !v12 || v12 == *(_QWORD *)(a1 + 72) )
        {
          if ( (*(_DWORD *)(a1 + 24) & 1) == 0
            || ((v11 & 1) != 0 || (v11 |= 1u, v64 = v11, (unsigned int)MiEmptyPteBins(a1, 0LL, v14, v13) != 1))
            && ((v11 & 2) != 0
             || (v11 |= 2u, v64 = v11, (unsigned int)MiPteBinsNeedTrimming(a1, a2, v14, v13) != 1)
             || (unsigned int)MiEmptyPteBins(a1, 1LL, v36, v37) != 1) )
          {
            v7 = MiExpandPtes(a1, v4);
            if ( v7 )
              goto LABEL_46;
            if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (v64 & 4) != 0 )
              goto LABEL_78;
            v11 = v64 | 4;
            v64 |= 4u;
            MiEmptyPteBins(a1, 1LL, v38, v39);
          }
        }
      }
      v12 = *(_QWORD *)(a1 + 72);
      v61 = v12;
      if ( v12 )
      {
        a2 = (unsigned __int64 *)(*(_QWORD *)(a1 + 8) + 8 * (v12 >> 6));
        v15 = *(_QWORD *)a1;
        if ( *(_QWORD *)a1 < v12 )
        {
          v12 = 0LL;
          v61 = 0LL;
        }
        else
        {
          v63[1] = *(_QWORD *)(a1 + 8) + 8 * (v12 >> 6);
          v63[0] = v15 - v12;
          v13 = v63;
          v60 = v63;
          if ( v14 )
          {
            v14 -= v12;
            v57 = v14;
          }
        }
      }
      v16 = *v13;
      v17 = v14;
      v18 = v13[1];
      v58 = *v13;
      if ( v14 >= *v13 )
        v17 = 0LL;
      v59 = v13[1];
      v19 = v16 - 1;
      if ( v6 )
      {
        while ( v19 - v17 + 1 < v6 )
        {
          v23 = -1LL;
LABEL_53:
          if ( !v17 )
          {
LABEL_38:
            v12 = v61;
            v24 = v23;
            v13 = v60;
            v4 = v3;
            goto LABEL_39;
          }
          v27 = v14 + v6;
          if ( v14 + v6 > v16 )
            v27 = v16;
          v18 = v59;
          v19 = v27 - 1;
          v17 = 0LL;
        }
        v20 = v19 - v6 + 1;
        v62 = v20;
        v21 = v18 + 8 * (v20 >> 6);
        v14 = *(_QWORD *)(v18 + 8 * (v17 >> 6)) | ((1LL << (v17 & 0x3F)) - 1);
        a2 = (unsigned __int64 *)(v18 + 8 * (v17 >> 6));
        if ( v6 > 0x7F )
        {
          v47 = v21 + 8;
          if ( (v20 & 0x3F) == 0 )
            v47 = v21;
          if ( v14 )
          {
            if ( *++a2 )
            {
              v48 = v59;
              goto LABEL_116;
            }
            v30 = !_BitScanReverse64((unsigned __int64 *)&v53, v14);
            if ( v30 )
              v50 = 64;
            else
              v50 = 63 - v53;
            v48 = v59;
          }
          else
          {
            v48 = v59;
            v50 = 0;
          }
          while ( 1 )
          {
            v23 = ((__int64)((__int64)a2 - v48) >> 3 << 6) - v50;
            if ( v23 > v20 )
              break;
            v51 = &a2[(v6 - v50) >> 6];
            if ( ++a2 == v51 )
            {
LABEL_124:
              v14 = ((_BYTE)v6 - (_BYTE)v50) & 0x3F;
              if ( (((_BYTE)v6 - (_BYTE)v50) & 0x3F) != 0 )
              {
                v30 = !_BitScanForward64((unsigned __int64 *)&v52, *a2);
                if ( v30 )
                  LODWORD(v52) = 64;
                if ( (unsigned int)v52 < (unsigned int)v14 )
                  goto LABEL_116;
              }
              goto LABEL_37;
            }
            while ( !*a2 )
            {
              if ( ++a2 == v51 )
                goto LABEL_124;
            }
            do
            {
LABEL_116:
              if ( (unsigned __int64)a2 > v47 )
              {
LABEL_87:
                v23 = -1LL;
                goto LABEL_52;
              }
              ++a2;
            }
            while ( *a2 );
            v30 = !_BitScanReverse64((unsigned __int64 *)&v49, *(a2 - 1));
            if ( v30 )
              v50 = 64;
            else
              v50 = 63 - v49;
          }
        }
        else
        {
          if ( v6 >= 0x40 )
          {
            while ( 2 )
            {
              v41 = v14 < 0;
              while ( 1 )
              {
                if ( v41 )
                {
                  do
                  {
                    if ( (unsigned __int64)++a2 > v21 )
                      goto LABEL_51;
                    v14 = *a2;
                  }
                  while ( (*a2 & 0x8000000000000000uLL) != 0LL );
                }
                v30 = !_BitScanReverse64((unsigned __int64 *)&v42, v14);
                if ( v30 )
                  v43 = 64;
                else
                  v43 = 63 - v42;
                v14 = v43;
                v23 = ((((__int64)((__int64)a2 - v18) >> 3) + 1) << 6) - v43;
                if ( v23 > v20 )
                  goto LABEL_51;
                v44 = v6 - v43;
                if ( v6 == v43 )
                  goto LABEL_37;
                v14 = a2[1];
                ++a2;
                if ( v44 < 0x40 )
                  break;
                v41 = v14 < 0;
                if ( !v14 )
                {
                  v44 -= 64LL;
                  if ( !v44 )
                    goto LABEL_37;
                  v14 = a2[1];
                  ++a2;
                  break;
                }
              }
              v30 = !_BitScanForward64(&v45, v14);
              if ( v30 )
                v45 = 64LL;
              if ( v45 < v44 )
                continue;
              goto LABEL_37;
            }
          }
          if ( v6 > 1 )
          {
            v28 = 0;
            v29 = (unsigned __int64 *)(v59 + 8 * (v19 >> 6));
            while ( 1 )
            {
              if ( v14 == -1 )
              {
                while ( 1 )
                {
                  if ( (unsigned __int64)++a2 > v21 )
                    goto LABEL_87;
                  v14 = *a2;
                  if ( *a2 != -1LL )
                  {
                    v28 = 0;
                    break;
                  }
                }
              }
              v30 = !_BitScanForward64((unsigned __int64 *)&v31, v14);
              if ( v30 )
                LODWORD(v31) = 64;
              if ( v28 + (unsigned int)v31 >= v6 )
                break;
              v32 = v6;
              v33 = ~v14;
              while ( 1 )
              {
                v33 &= v33 >> (v32 >> 1);
                if ( !v33 )
                  break;
                v32 -= v32 >> 1;
                if ( v32 <= 1 )
                {
                  _BitScanForward64(&v34, v33);
                  v35 = (unsigned int)v34;
                  goto LABEL_66;
                }
              }
              if ( a2 == v29 )
                goto LABEL_87;
              v30 = !_BitScanReverse64((unsigned __int64 *)&v40, v14);
              if ( v30 )
                v28 = 64;
              else
                v28 = 63 - v40;
              v14 = a2[1];
              ++a2;
            }
            v35 = -(__int64)v28;
LABEL_66:
            a2 = (unsigned __int64 *)((__int64)((__int64)a2 - v59) >> 3 << 6);
            v23 = (unsigned __int64)a2 + v35;
            if ( v23 <= v62 )
              goto LABEL_37;
          }
          else
          {
            if ( v14 != -1 )
            {
LABEL_36:
              v14 = ~v14;
              _BitScanForward64(&v22, v14);
              v23 = v22 + ((__int64)((__int64)a2 - v18) >> 3 << 6);
              if ( v23 > v20 )
              {
                v23 = -1LL;
              }
              else
              {
LABEL_37:
                if ( v23 != -1LL )
                  goto LABEL_38;
              }
LABEL_52:
              v16 = v58;
              v14 = v57;
              goto LABEL_53;
            }
            while ( (unsigned __int64)++a2 <= v21 )
            {
              v14 = *a2;
              if ( *a2 != -1LL )
                goto LABEL_36;
            }
          }
        }
LABEL_51:
        v23 = -1LL;
        goto LABEL_52;
      }
      v24 = v17 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_39:
      if ( v24 == -1LL )
      {
        v11 = v64;
        goto LABEL_69;
      }
      if ( (unsigned int)RtlInterlockedSetClearRunEx(v13, v24, v6) )
      {
        v25 = v24 + v12;
        if ( v60 != v63 )
          v25 = v24;
        v26 = 16 * v25;
        *(_QWORD *)(a1 + 64) = v25 + v6;
        if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
          v26 = v25;
        v7 = *(_QWORD *)(a1 + 16) + 8 * v26;
LABEL_46:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)v6);
        goto LABEL_5;
      }
      v11 = v64;
    }
  }
LABEL_78:
  ++**(_DWORD **)(a1 + 32);
  return 0LL;
}
