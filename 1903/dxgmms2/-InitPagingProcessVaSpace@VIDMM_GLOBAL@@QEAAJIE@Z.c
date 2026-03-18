/*
 * XREFs of ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00903D4
 * Callers:
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00255A8 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B8F0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0090248 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AF354 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C00024B4 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0017744 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0025484 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     VidSchCreateHwQueue @ 0x1C00374F0 (VidSchCreateHwQueue.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C005F950 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C005FAB8 (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006C398 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006DB80 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0074330 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00813B8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?MapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAJI@Z @ 0x1C00B36AC (-MapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAJI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00B81A4 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x1C00B8288 (-GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B8890 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1C00CC470 (VidSchSetPagingNodePageDirectory.c)
 *     VidSchSetHwQueueProgressFenceObject @ 0x1C00CD1E0 (VidSchSetHwQueueProgressFenceObject.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitPagingProcessVaSpace(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  VIDMM_GLOBAL *v4; // rsi
  __int64 v5; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  int HwQueue; // edi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned int v13; // eax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r14
  __int64 v22; // rcx
  unsigned __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r14
  int v29; // eax
  __int64 v30; // rdi
  char v31; // r14
  PVOID v32; // rax
  struct VIDMM_MAPPED_VA_RANGE *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned int v41; // edx
  unsigned __int64 v42; // r8
  int v43; // ecx
  __int64 *v44; // rax
  __int64 v45; // r14
  __int64 v46; // rdi
  struct VIDMM_MAPPED_VA_RANGE *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdi
  struct _MDL *FullMDL; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  struct VIDMM_MAPPED_VA_RANGE *P; // [rsp+70h] [rbp-90h]
  __int64 v55; // [rsp+78h] [rbp-88h]
  struct VIDMM_ALLOC *v56; // [rsp+80h] [rbp-80h] BYREF
  __int64 v57; // [rsp+88h] [rbp-78h]
  unsigned __int64 v58; // [rsp+90h] [rbp-70h] BYREF
  struct VIDMM_ALLOC *v59; // [rsp+98h] [rbp-68h] BYREF
  struct VIDMM_ALLOC *v60; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v61; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v62[24]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v63[96]; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v64; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v65; // [rsp+188h] [rbp+88h]
  unsigned int v66; // [rsp+198h] [rbp+98h] BYREF

  v3 = (unsigned int)a2;
  v4 = this;
  v5 = *((_QWORD *)this + 5023) + 1560LL * (unsigned int)a2;
  v55 = v5;
  LOBYTE(this) = *(_BYTE *)(v5 + 436);
  if ( ((unsigned __int8)this & 0xC) != 0xC
    && (!*(_BYTE *)(*((_QWORD *)v4 + 3) + 2488LL) || ((unsigned __int8)this & 1) == 0)
    && *(_DWORD *)(v5 + 424) != 1
    || ((unsigned __int8)this & 0x20) == 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)(dword_1C004E328 - 1) > 0x3D )
  {
    v24 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v24 + 24) = 6926LL;
    goto LABEL_33;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)v4 + 8LL) )
  {
    memset(&v62[2], 0, 0x50uLL);
    v62[0] = 118;
    v62[1] = v3;
    HwQueue = VIDMM_GLOBAL::QueueSystemCommandAndWait(v4, (struct _VIDMM_SYSTEM_COMMAND *)v62, 1);
    if ( HwQueue < 0 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v10 + 24) = 6941LL;
      WdLogEvent5_WdAssertion(v10);
      return (unsigned int)HwQueue;
    }
    return 0LL;
  }
  *((_BYTE *)v4 + 40872) |= 0x10u;
  v12 = *((_QWORD *)v4 + (unsigned int)a2 + 5044);
  if ( (_BYTE)a3 )
    CVirtualAddressAllocator::EvictRootPageTable(*((CVirtualAddressAllocator **)v4 + (unsigned int)a2 + 5044), a2, 0);
  if ( *((_QWORD *)v4 + 5111) )
    goto LABEL_40;
  v16 = (unsigned int)dword_1C004E328;
  v13 = *((_DWORD *)v4 + 926);
  v14 = 0LL;
  v15 = 1LL << dword_1C004E328;
  LOBYTE(v16) = 0;
  LOBYTE(v65) = 0;
  if ( v13 )
  {
    a3 = *((_QWORD *)v4 + 464);
    v17 = v13;
    do
    {
      v18 = *(_QWORD *)a3;
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 80LL) & 0x1001) == 0 )
      {
        v19 = *(_QWORD *)(v18 + 48);
        if ( v19 <= v14 )
          v19 = v14;
        v14 = v19;
        if ( *(_DWORD *)(v18 + 376) == 0x10000 )
          LOBYTE(v16) = 1;
      }
      a3 += 8LL;
      --v17;
    }
    while ( v17 );
    LOBYTE(v65) = v16;
  }
  v20 = v14 >> 2;
  if ( v15 < v20 )
    v20 = 1LL << dword_1C004E328;
  v21 = v20;
  if ( (_BYTE)v16 )
  {
    v22 = (*(_QWORD *)(*((_QWORD *)v4 + 5023) + 176LL) << 12) - 1LL;
    v23 = v20 + v22;
    v16 = ~v22;
    v21 = v16 & v23;
    LOBYTE(v16) = v65;
    v20 = 2 * v21;
  }
  if ( v20 <= *(_QWORD *)(v12 + 16) )
  {
    HwQueue = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
                (struct _KTHREAD **)v12,
                v20,
                a3,
                0LL,
                0LL,
                (_BYTE)v16 != 0 ? 0x10000 : 4096,
                (unsigned __int64 *)v4 + 5110);
    if ( HwQueue < 0 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v26, v25);
      *(_QWORD *)(v11 + 24) = v21;
      WdLogEvent5_WdAssertion(v11);
LABEL_12:
      *((_BYTE *)v4 + 40872) &= ~0x10u;
      return (unsigned int)HwQueue;
    }
    CVirtualAddressAllocator::FreeVirtualAddressRange((CVirtualAddressAllocator *)v12, *((_QWORD *)v4 + 5110));
    v27 = v21 + *((_QWORD *)v4 + 5110);
    *((_QWORD *)v4 + 5111) = v27;
    if ( (_BYTE)v65 )
    {
      *((_QWORD *)v4 + 5112) = v27;
      *((_QWORD *)v4 + 5113) = v27 + v21;
    }
    v28 = v21 >> 2;
    if ( v28 > 0xFFFEFFFF )
      LODWORD(v28) = -65537;
    v29 = v28 + 0xFFFF;
    v5 = v55;
    *((_DWORD *)v4 + 10228) = v29 & 0xFFFF0000;
LABEL_40:
    v30 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 528LL);
    v57 = v30;
    if ( *(_BYTE *)(v30 + 55) )
    {
      memset(v63, 0, 0x30uLL);
      HwQueue = VidSchCreateHwQueue(
                  0LL,
                  *(_QWORD *)(*(_QWORD *)(v30 + 256) + 8 * v3),
                  (__int64)v63,
                  (char **)(*(_QWORD *)(v30 + 264) + 8 * v3));
      if ( HwQueue < 0 )
        goto LABEL_72;
      VidSchSetHwQueueProgressFenceObject(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 528LL) + 264LL) + 8 * v3),
        *((_QWORD *)v4 + v3 + 746),
        0LL);
    }
    v31 = *(_BYTE *)(v5 + 437) & 2;
    v32 = operator new[](0x88uLL, 0x35356956u, PagedPool);
    if ( v32 )
      v33 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                              (__int64)v32,
                                              0LL,
                                              *((_QWORD *)v4 + 5110),
                                              *((_QWORD *)v4 + 5111),
                                              v3,
                                              0LL,
                                              0LL,
                                              0,
                                              0LL,
                                              0LL,
                                              0LL,
                                              0LL);
    else
      v33 = 0LL;
    P = v33;
    HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                (CVirtualAddressAllocator *)v12,
                v33,
                v3,
                -1,
                0LL,
                0LL,
                0,
                &v59);
    if ( HwQueue >= 0 )
    {
      if ( v31
        && (*((_QWORD *)P + 12) = *((_QWORD *)v4 + 5112),
            *((_QWORD *)P + 13) = *((_QWORD *)v4 + 5113),
            HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                        (CVirtualAddressAllocator *)v12,
                        P,
                        v3,
                        -3,
                        0LL,
                        0LL,
                        0,
                        &v56),
            HwQueue < 0) )
      {
        v36 = WdLogNewEntry5_WdAssertion(v38, v37);
        *(_QWORD *)(v36 + 24) = 7127LL;
      }
      else
      {
        HwQueue = VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
                    *(VIDMM_PAGE_DIRECTORY **)(32 * v3 + *(_QWORD *)(v12 + 112)),
                    (struct CVirtualAddressAllocator *)v12);
        if ( HwQueue >= 0 )
        {
          v41 = 0;
          v42 = (unsigned __int64)*((unsigned int *)v4 + v3 + 29) >> 12;
          v56 = (struct VIDMM_ALLOC *)v42;
          v65 = 0;
          while ( 1 )
          {
            v43 = 0;
            v44 = (__int64 *)(*((_QWORD *)v4 + v3 + 79) + 96LL);
            v45 = *v44;
            while ( (__int64 *)v45 != v44 )
            {
              if ( v41 == v43 )
                goto LABEL_59;
              v45 = *(_QWORD *)v45;
              ++v43;
            }
            v45 = 0LL;
LABEL_59:
            v46 = *(_QWORD *)(v45 + 64);
            if ( !*(_QWORD *)(v45 + 96) )
            {
              v47 = CVirtualAddressAllocator::MapVirtualAddressRange(
                      (struct VIDMM_VAD **)v12,
                      v45,
                      0LL,
                      4,
                      v42 << 12,
                      0LL,
                      *((_QWORD *)v4 + 5110),
                      *((_QWORD *)v4 + 5111),
                      0x1000u,
                      (*((_DWORD *)v4 + 8) < 0x6000u) | 2LL,
                      0LL,
                      v3,
                      0LL);
              if ( !v47 )
              {
                HwQueue = -1073741823;
                v36 = WdLogNewEntry5_WdAssertion(v49, v48);
                *(_QWORD *)(v36 + 24) = 7187LL;
                goto LABEL_71;
              }
              *(_QWORD *)(v45 + 96) = *((_QWORD *)v47 + 12);
            }
            v50 = *(_QWORD *)(v46 + 128);
            FullMDL = VidMmGetFullMDL(*(struct _VIDMM_GLOBAL_ALLOC **)(v45 + 56), 0LL);
            HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                        (CVirtualAddressAllocator *)v12,
                        (struct VIDMM_MAPPED_VA_RANGE *)(v50 - 24),
                        v3,
                        0,
                        0LL,
                        FullMDL,
                        0,
                        &v60);
            if ( HwQueue < 0 )
            {
              v36 = WdLogNewEntry5_WdAssertion(v53, v52);
              *(_QWORD *)(v36 + 24) = 7207LL;
              goto LABEL_71;
            }
            v41 = v65 + 1;
            v65 = v41;
            if ( v41 >= 2 )
              break;
            v42 = (unsigned __int64)v56;
          }
          if ( !*(_BYTE *)(v57 + 55)
            || (HwQueue = VIDMM_GLOBAL::MapGpuVA(
                            (struct VIDMM_DEVICE **)v4,
                            *((struct VIDMM_DEVICE **)v4 + 5041),
                            0LL,
                            (VIDMM_FENCE_STORAGE_PAGE **)(*((_QWORD *)v4 + v3 + 746) + 56LL),
                            (unsigned __int64 *)v4 + v3 + 810,
                            1 << v3,
                            1),
                HwQueue >= 0)
            && (HwQueue = VIDMM_DEVICE::MapPagingQueueGpuVAs(*((VIDMM_DEVICE **)v4 + 5041), v3), HwQueue >= 0) )
          {
            CVirtualAddressAllocator::GetPageDirectoryData((CVirtualAddressAllocator *)v12, v3, &v61, &v66, &v64, &v58);
            VidSchSetPagingNodePageDirectory(*(_QWORD *)(*((_QWORD *)v4 + 2) + 528LL), v3, v66, v64, v58);
            *(_BYTE *)(v55 + 436) &= 0x9Fu;
          }
          goto LABEL_72;
        }
        v36 = WdLogNewEntry5_WdAssertion(v40, v39);
        *(_QWORD *)(v36 + 24) = 7137LL;
      }
    }
    else
    {
      v36 = WdLogNewEntry5_WdAssertion(v35, v34);
      *(_QWORD *)(v36 + 24) = 7107LL;
    }
LABEL_71:
    WdLogEvent5_WdAssertion(v36);
LABEL_72:
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)P);
    goto LABEL_12;
  }
  *((_BYTE *)v4 + 40872) &= ~0x10u;
  v24 = WdLogNewEntry5_WdAssertion(v16, v15);
  *(_QWORD *)(v24 + 24) = v20;
  *(_QWORD *)(v24 + 32) = 7011LL;
LABEL_33:
  WdLogEvent5_WdAssertion(v24);
  return 3221225485LL;
}
