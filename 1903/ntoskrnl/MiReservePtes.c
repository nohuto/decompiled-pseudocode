/*
 * XREFs of MiReservePtes @ 0x140030210
 * Callers:
 *     MiCopyToUserVa @ 0x140020860 (MiCopyToUserVa.c)
 *     MiCopyPage @ 0x14002C5D0 (MiCopyPage.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     MiMakePageAvoidRead @ 0x14006C650 (MiMakePageAvoidRead.c)
 *     MmCopyToCachedPage @ 0x14006E830 (MmCopyToCachedPage.c)
 *     MiZeroPhysicalPage @ 0x14006ED90 (MiZeroPhysicalPage.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 *     MiInsertInSystemSpace @ 0x1400A82A0 (MiInsertInSystemSpace.c)
 *     MmCreateKernelStack @ 0x1400C3CE0 (MmCreateKernelStack.c)
 *     MmAllocateIndependentPagesEx @ 0x1400EFC58 (MmAllocateIndependentPagesEx.c)
 *     MmCopyMemory @ 0x1400F48A0 (MmCopyMemory.c)
 *     MiPrivateFixup @ 0x140101BD0 (MiPrivateFixup.c)
 *     MiMapContiguousMemory @ 0x140118AF4 (MiMapContiguousMemory.c)
 *     MiZeroInParallelWorker @ 0x140123300 (MiZeroInParallelWorker.c)
 *     MiZeroLargePage @ 0x14012910C (MiZeroLargePage.c)
 *     MiCreatePteCopyList @ 0x14012F194 (MiCreatePteCopyList.c)
 *     MiMapSinglePage @ 0x140154AD0 (MiMapSinglePage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140155448 (MiUpdateImagePfnImportRelocations.c)
 *     MiBuildReservationCluster @ 0x140162FB0 (MiBuildReservationCluster.c)
 *     MiBuildDynamicRegion @ 0x140187074 (MiBuildDynamicRegion.c)
 *     MiReservePageHash @ 0x140192FFC (MiReservePageHash.c)
 *     MmMapMdl @ 0x1402C5460 (MmMapMdl.c)
 *     MiAddPagesToEnclave @ 0x1402D3228 (MiAddPagesToEnclave.c)
 *     MiScrubNodeLargePageList @ 0x1402E6DC0 (MiScrubNodeLargePageList.c)
 *     MmInitializeProcessor @ 0x14059F6E4 (MmInitializeProcessor.c)
 *     MiRelocateImagePfn @ 0x140605680 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x14065C928 (MiValidateImagePfn.c)
 *     MiRelocateImageAgain @ 0x14066F490 (MiRelocateImageAgain.c)
 *     MmCreateProcessAddressSpace @ 0x14068D3A4 (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x14068D5F8 (MiAllocateProcessShadow.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14070E9E0 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmAllocateMappingAddress @ 0x1407343E0 (MmAllocateMappingAddress.c)
 *     MiSessionCreateInternal @ 0x14074050C (MiSessionCreateInternal.c)
 *     MmAllocateDumpHibernateResources @ 0x140747DD8 (MmAllocateDumpHibernateResources.c)
 *     MiCreatePfnBitMaps @ 0x14075063C (MiCreatePfnBitMaps.c)
 *     MmAllocateNonCachedMemory @ 0x140889610 (MmAllocateNonCachedMemory.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x14089008C (MiMapHotPatchImageInSystemSpace.c)
 *     MiAllocateEnclaveVad @ 0x14089304C (MiAllocateEnclaveVad.c)
 *     MiExpandPartitionIds @ 0x14089C5A8 (MiExpandPartitionIds.c)
 *     MiInitializeSystemPtes @ 0x1409EE400 (MiInitializeSystemPtes.c)
 *     MiInitializePteInfo @ 0x1409EEF28 (MiInitializePteInfo.c)
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 *     MiInitializeMirroring @ 0x1409F1724 (MiInitializeMirroring.c)
 *     MiInitNucleus @ 0x1409F3DB8 (MiInitNucleus.c)
 *     MiInitializeGapFrames @ 0x1409F4590 (MiInitializeGapFrames.c)
 *     MiInitializeTbFlush @ 0x140A0F138 (MiInitializeTbFlush.c)
 *     MiInitializeRetpoline @ 0x140A19958 (MiInitializeRetpoline.c)
 *     MiCreateRetpolineBitmap @ 0x140A19AA8 (MiCreateRetpolineBitmap.c)
 *     MiMapDummyPages @ 0x140A1FB40 (MiMapDummyPages.c)
 *     MiInitializeKernelCfg @ 0x140A22E18 (MiInitializeKernelCfg.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A3CA7C (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiFlushTbAsNeeded @ 0x140021F90 (MiFlushTbAsNeeded.c)
 *     RtlInterlockedSetClearRunEx @ 0x14002F870 (RtlInterlockedSetClearRunEx.c)
 *     MiCheckProcessorPteCache @ 0x140030930 (MiCheckProcessorPteCache.c)
 *     MiExpandPtes @ 0x1400AA84C (MiExpandPtes.c)
 *     MiEmptyPteBins @ 0x1400F27D0 (MiEmptyPteBins.c)
 *     MiPteBinsNeedTrimming @ 0x1400F2FC4 (MiPteBinsNeedTrimming.c)
 *     MiCheckPteReserve @ 0x1402DDA1C (MiCheckPteReserve.c)
 */

ULONG_PTR __fastcall MiReservePtes(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // edi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbp
  ULONG_PTR v7; // r14
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  int v11; // r14d
  unsigned __int64 v12; // r13
  unsigned __int64 *v13; // r9
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // r8d
  unsigned __int64 v28; // r10
  unsigned int v29; // r11d
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
  __int64 v41; // rax
  unsigned __int64 v42; // r11
  unsigned __int64 v43; // r9
  __int64 v44; // r8
  unsigned int v45; // ecx
  unsigned __int64 *v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rax
  bool v49; // sf
  __int64 v50; // rcx
  unsigned int v51; // eax
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rax
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v58; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v59; // [rsp+30h] [rbp-98h]
  unsigned __int64 *v60; // [rsp+38h] [rbp-90h]
  unsigned __int64 v61; // [rsp+40h] [rbp-88h]
  unsigned __int64 v62; // [rsp+48h] [rbp-80h] BYREF
  __int64 v63; // [rsp+50h] [rbp-78h]
  unsigned int v64; // [rsp+58h] [rbp-70h]
  int v65; // [rsp+5Ch] [rbp-6Ch]
  unsigned int v66; // [rsp+60h] [rbp-68h]
  int v67; // [rsp+64h] [rbp-64h]
  unsigned int v68; // [rsp+68h] [rbp-60h]
  unsigned __int64 *v69; // [rsp+70h] [rbp-58h]
  int v70; // [rsp+D8h] [rbp+10h]

  v2 = (unsigned int)a2;
  v62 = 0LL;
  v63 = 0LL;
  v3 = 0;
  v5 = (unsigned int)a2;
  v6 = (unsigned int)a2;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
  {
    v6 = (unsigned __int64)(unsigned int)a2 >> 4;
  }
  else if ( (__int64 *)a1 == &qword_1404669C0 && (unsigned int)a2 <= 0x40uLL )
  {
    v7 = MiCheckProcessorPteCache((unsigned int)a2);
    if ( v7 )
      goto LABEL_5;
  }
  if ( (unsigned int)v2 < 0x200 )
    goto LABEL_23;
  v41 = MiExpandPtes(a1, v2);
  v7 = v41;
  if ( v41 )
  {
    if ( (__int64 *)a1 == &qword_1404669C0 && (dword_14057118C & 2) != 0 )
      MiCheckPteReserve(v41, v2);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)v6);
    return v7;
  }
  if ( (__int64 *)a1 != &qword_1404669C0 )
  {
LABEL_23:
    v11 = 0;
    v70 = 0;
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
LABEL_72:
        if ( !v12 || v12 == *(_QWORD *)(a1 + 72) )
        {
          if ( (*(_DWORD *)(a1 + 24) & 1) == 0
            || ((v11 & 1) != 0 || (v11 |= 1u, v70 = v11, (unsigned int)MiEmptyPteBins(a1, 0LL, v14, v13) != 1))
            && ((v11 & 2) != 0
             || (v11 |= 2u, v70 = v11, (unsigned int)MiPteBinsNeedTrimming(a1, a2, v14, v13) != 1)
             || (unsigned int)MiEmptyPteBins(a1, 1LL, v36, v37) != 1) )
          {
            v7 = MiExpandPtes(a1, v5);
            if ( v7 )
              goto LABEL_48;
            if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (v70 & 4) != 0 )
              goto LABEL_82;
            v11 = v70 | 4;
            v70 |= 4u;
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
          v63 = *(_QWORD *)(a1 + 8) + 8 * (v12 >> 6);
          v62 = v15 - v12;
          v13 = &v62;
          v60 = &v62;
          if ( v14 )
          {
            v14 -= v12;
            v57 = v14;
          }
        }
      }
      v16 = *v13;
      v17 = v14;
      v58 = *v13;
      if ( v14 >= *v13 )
        v17 = 0LL;
      v18 = v16 - 1;
      if ( v6 )
      {
        v19 = v13[1];
        while ( v18 - v17 + 1 < v6 )
        {
          v23 = -1LL;
LABEL_56:
          if ( !v17 )
          {
LABEL_40:
            v12 = v61;
            v24 = v23;
            v13 = v60;
            v5 = v2;
            goto LABEL_41;
          }
          v28 = v14 + v6;
          if ( v14 + v6 > v16 )
            v28 = v16;
          v18 = v28 - 1;
          v17 = 0LL;
        }
        v20 = v18 - v6 + 1;
        v59 = v20;
        v21 = v19 + 8 * (v20 >> 6);
        v14 = *(_QWORD *)(v19 + 8 * (v17 >> 6)) | ((1LL << (v17 & 0x3F)) - 1);
        a2 = (unsigned __int64 *)(v19 + 8 * (v17 >> 6));
        if ( v6 > 0x7F )
        {
          v30 = (v20 & 0x3F) == 0;
          v42 = v21 + 8;
          if ( v30 )
            v42 = v19 + 8 * ((v18 - v6 + 1) >> 6);
          if ( v14 )
          {
            if ( *++a2 )
            {
              v43 = v18 - v6 + 1;
              goto LABEL_101;
            }
            v30 = !_BitScanReverse64((unsigned __int64 *)&v48, v14);
            if ( v30 )
              v45 = 64;
            else
              v45 = 63 - v48;
            v43 = v18 - v6 + 1;
          }
          else
          {
            v43 = v18 - v6 + 1;
            v45 = 0;
          }
          while ( 1 )
          {
            v23 = ((__int64)((__int64)a2 - v19) >> 3 << 6) - v45;
            if ( v23 > v43 )
              break;
            v46 = &a2[(v6 - v45) >> 6];
            if ( ++a2 == v46 )
            {
LABEL_110:
              v14 = ((_BYTE)v6 - (_BYTE)v45) & 0x3F;
              if ( (((_BYTE)v6 - (_BYTE)v45) & 0x3F) != 0 )
              {
                v30 = !_BitScanForward64((unsigned __int64 *)&v47, *a2);
                if ( v30 )
                  LODWORD(v47) = 64;
                v65 = v47;
                if ( (unsigned int)v47 < (unsigned int)v14 )
                  goto LABEL_101;
              }
              goto LABEL_39;
            }
            while ( !*a2 )
            {
              if ( ++a2 == v46 )
                goto LABEL_110;
            }
            do
            {
LABEL_101:
              if ( (unsigned __int64)a2 > v42 )
              {
LABEL_54:
                v23 = -1LL;
                goto LABEL_55;
              }
              ++a2;
            }
            while ( *a2 );
            v30 = !_BitScanReverse64((unsigned __int64 *)&v44, *(a2 - 1));
            if ( v30 )
              v45 = 64;
            else
              v45 = 63 - v44;
            v64 = v45;
          }
        }
        else
        {
          if ( v6 >= 0x40 )
          {
            while ( 2 )
            {
              v49 = v14 < 0;
              while ( 1 )
              {
                if ( v49 )
                {
                  do
                  {
                    if ( (unsigned __int64)++a2 > v21 )
                      goto LABEL_70;
                    v14 = *a2;
                  }
                  while ( (*a2 & 0x8000000000000000uLL) != 0LL );
                }
                v30 = !_BitScanReverse64((unsigned __int64 *)&v50, v14);
                if ( v30 )
                  v51 = 64;
                else
                  v51 = 63 - v50;
                v14 = v51;
                v66 = v51;
                v23 = ((((__int64)((__int64)a2 - v19) >> 3) + 1) << 6) - v51;
                if ( v23 > v20 )
                  goto LABEL_70;
                v52 = v6 - v51;
                if ( v6 == v51 )
                  goto LABEL_39;
                v14 = a2[1];
                ++a2;
                if ( v52 < 0x40 )
                  break;
                v49 = v14 < 0;
                if ( !v14 )
                {
                  v52 -= 64LL;
                  if ( !v52 )
                    goto LABEL_39;
                  v14 = a2[1];
                  ++a2;
                  break;
                }
              }
              v30 = !_BitScanForward64(&v53, v14);
              if ( v30 )
                v53 = 64LL;
              v67 = v53;
              if ( v53 < v52 )
                continue;
              goto LABEL_39;
            }
          }
          if ( v6 > 1 )
          {
            v29 = 0;
            v69 = (unsigned __int64 *)(v19 + 8 * (v18 >> 6));
            while ( 1 )
            {
              if ( v14 == -1 )
              {
                while ( 1 )
                {
                  if ( (unsigned __int64)++a2 > v21 )
                    goto LABEL_54;
                  v14 = *a2;
                  if ( *a2 != -1LL )
                  {
                    v29 = 0;
                    break;
                  }
                }
              }
              v30 = !_BitScanForward64((unsigned __int64 *)&v31, v14);
              if ( v30 )
                LODWORD(v31) = 64;
              if ( v29 + (unsigned int)v31 >= v6 )
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
                  goto LABEL_69;
                }
              }
              if ( a2 == v69 )
                goto LABEL_54;
              v30 = !_BitScanReverse64((unsigned __int64 *)&v40, v14);
              if ( v30 )
                v29 = 64;
              else
                v29 = 63 - v40;
              v14 = a2[1];
              ++a2;
              v68 = v29;
            }
            v35 = -(__int64)v29;
LABEL_69:
            a2 = (unsigned __int64 *)((__int64)((__int64)a2 - v19) >> 3 << 6);
            v23 = (unsigned __int64)a2 + v35;
            if ( v23 <= v59 )
              goto LABEL_39;
          }
          else
          {
            if ( v14 != -1 )
            {
LABEL_38:
              v14 = ~v14;
              _BitScanForward64(&v22, v14);
              v23 = v22 + ((__int64)((__int64)a2 - v19) >> 3 << 6);
              if ( v23 > v20 )
              {
                v23 = -1LL;
              }
              else
              {
LABEL_39:
                if ( v23 != -1LL )
                  goto LABEL_40;
              }
LABEL_55:
              v16 = v58;
              v14 = v57;
              goto LABEL_56;
            }
            while ( (unsigned __int64)++a2 <= v21 )
            {
              v14 = *a2;
              if ( *a2 != -1LL )
                goto LABEL_38;
            }
          }
        }
LABEL_70:
        v23 = -1LL;
        goto LABEL_55;
      }
      v24 = v17 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_41:
      if ( v24 == -1LL )
      {
        v11 = v70;
        goto LABEL_72;
      }
      if ( (unsigned int)RtlInterlockedSetClearRunEx((__int64)v13, v24, v6) )
      {
        v25 = v24 + v12;
        if ( v60 != &v62 )
          v25 = v24;
        v26 = 16 * v25;
        *(_QWORD *)(a1 + 64) = v25 + v6;
        if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
          v26 = v25;
        v7 = *(_QWORD *)(a1 + 16) + 8 * v26;
LABEL_48:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)v6);
LABEL_5:
        if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
        {
          if ( (__int64 *)a1 == &qword_1404669C0 && (dword_14057118C & 2) != 0 )
            MiCheckPteReserve(v7, v5);
          if ( (unsigned int)v2 <= 0x10 )
          {
            if ( (_DWORD)v2 )
            {
              do
              {
                v8 = *(_QWORD *)(v7 + 8LL * v3);
                v9 = v7 + 8LL * v3;
                if ( v9 >= 0xFFFFF6FB7DBED000uLL
                  && v9 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v8 & 1) != 0
                  && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
                {
                  DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                  if ( DeepFreezeStartTime )
                  {
                    v55 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v9 >> 3) & 0x1FF));
                    v56 = v8 | 0x20;
                    if ( (v55 & 0x20) == 0 )
                      v56 = *(_QWORD *)(v7 + 8LL * v3);
                    v8 = v56;
                    if ( (v55 & 0x42) != 0 )
                      v8 = v56 | 0x42;
                  }
                }
                if ( qword_140465B00 && (v8 & 0x10) == 0 )
                  v8 &= ~qword_140465B00;
                if ( (v8 & 0xFFFFFFFF00000000uLL) != 0 )
                  break;
                ++v3;
              }
              while ( v3 < (unsigned int)v2 );
            }
            if ( v3 == (_DWORD)v2 )
              return v7;
          }
          v27 = 0;
        }
        else
        {
          v27 = 2;
        }
        MiFlushTbAsNeeded(v7, v5, v27, 0);
        return v7;
      }
      v11 = v70;
    }
  }
LABEL_82:
  ++**(_DWORD **)(a1 + 32);
  return 0LL;
}
