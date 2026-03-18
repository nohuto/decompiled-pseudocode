/*
 * XREFs of ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C008CB40
 * Callers:
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C0025CFC (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0071660 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C008C9C4 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00ABD78 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C00107D4 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0015E04 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0025C04 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     VidSchCreateHwQueue @ 0x1C0036AB0 (VidSchCreateHwQueue.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0059008 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C006CD2C (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C006E8AC (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006FCE8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00735B0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C007EA1C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?MapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAJI@Z @ 0x1C00B02AC (-MapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAJI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00B4CF0 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x1C00B4DD4 (-GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B560C (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1C00C966C (VidSchSetPagingNodePageDirectory.c)
 *     VidSchSetHwQueueProgressFenceObject @ 0x1C00CA3E0 (VidSchSetHwQueueProgressFenceObject.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitPagingProcessVaSpace(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  VIDMM_GLOBAL *v4; // rdi
  __int64 v5; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // r10
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rsi
  __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  unsigned __int64 *v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  bool v29; // zf
  unsigned __int64 v30; // rsi
  __int64 v31; // rsi
  int HwQueue; // esi
  PVOID v33; // rax
  struct VIDMM_MAPPED_VA_RANGE *v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned int v42; // edx
  unsigned __int64 v43; // r8
  int v44; // ecx
  __int64 *v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rbx
  struct _MDL *FullMDL; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // [rsp+70h] [rbp-90h]
  struct VIDMM_ALLOC *v56; // [rsp+78h] [rbp-88h] BYREF
  __int64 v57; // [rsp+80h] [rbp-80h]
  unsigned __int64 v58; // [rsp+88h] [rbp-78h] BYREF
  struct VIDMM_ALLOC *v59; // [rsp+90h] [rbp-70h] BYREF
  struct VIDMM_ALLOC *v60; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v61; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v62[24]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v63[96]; // [rsp+110h] [rbp+10h] BYREF
  PVOID P; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v65; // [rsp+188h] [rbp+88h]
  unsigned int v66; // [rsp+198h] [rbp+98h] BYREF

  v3 = (unsigned int)a2;
  v4 = this;
  v5 = *((_QWORD *)this + 5023) + 1560LL * (unsigned int)a2;
  v55 = v5;
  LOBYTE(this) = *(_BYTE *)(v5 + 436);
  if ( ((unsigned __int8)this & 0xC) != 0xC
    && (!*(_BYTE *)(*((_QWORD *)v4 + 3) + 2456LL) || ((unsigned __int8)this & 1) == 0)
    && *(_DWORD *)(v5 + 424) != 1
    || ((unsigned __int8)this & 0x20) == 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)(dword_1C004D328 - 1) > 0x3D )
  {
    v24 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v24 + 24) = 6913LL;
    goto LABEL_32;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)v4 + 8LL) )
  {
    memset(v62, 0, 0x58uLL);
    v62[0] = 118;
    v62[1] = v3;
    v9 = VIDMM_GLOBAL::QueueSystemCommandAndWait(v4, (struct _VIDMM_SYSTEM_COMMAND *)v62, 1);
    if ( v9 < 0 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v10 + 24) = 6928LL;
      WdLogEvent5_WdAssertion(v10);
      return (unsigned int)v9;
    }
    return 0LL;
  }
  *((_BYTE *)v4 + 40872) |= 0x10u;
  v12 = *((_QWORD *)v4 + (unsigned int)a2 + 5044);
  if ( (_BYTE)a3 )
    CVirtualAddressAllocator::EvictRootPageTable(*((CVirtualAddressAllocator **)v4 + (unsigned int)a2 + 5044), a2, 0);
  if ( !*((_QWORD *)v4 + 5111) )
  {
    v13 = (unsigned int)dword_1C004D328;
    LOBYTE(a3) = 0;
    v14 = *((_DWORD *)v4 + 926);
    v15 = 1LL << dword_1C004D328;
    v16 = 0LL;
    LOBYTE(v65) = 0;
    if ( v14 )
    {
      v13 = *((_QWORD *)v4 + 464);
      v17 = v14;
      do
      {
        v18 = *(_QWORD *)v13;
        if ( (*(_DWORD *)(*(_QWORD *)v13 + 80LL) & 0x1001) == 0 )
        {
          v19 = *(_QWORD *)(v18 + 48);
          if ( v19 <= v16 )
            v19 = v16;
          v16 = v19;
          if ( *(_DWORD *)(v18 + 376) == 0x10000 )
            LOBYTE(a3) = 1;
        }
        v13 += 8LL;
        --v17;
      }
      while ( v17 );
      LOBYTE(v65) = a3;
    }
    v20 = v16 >> 2;
    if ( v15 < v20 )
      v20 = 1LL << dword_1C004D328;
    v21 = v20;
    if ( (_BYTE)a3 )
    {
      v22 = (*(_QWORD *)(*((_QWORD *)v4 + 5023) + 176LL) << 12) - 1LL;
      v23 = v20 + v22;
      v13 = ~v22;
      v21 = v13 & v23;
      v20 = 2 * v21;
    }
    if ( v20 > *(_QWORD *)(v12 + 16) )
    {
      *((_BYTE *)v4 + 40872) &= ~0x10u;
      v24 = WdLogNewEntry5_WdAssertion(v13, v15);
      *(_QWORD *)(v24 + 24) = v20;
      *(_QWORD *)(v24 + 32) = 6998LL;
LABEL_32:
      WdLogEvent5_WdAssertion(v24);
      return 3221225485LL;
    }
    v25 = (unsigned __int64 *)((char *)v4 + 40880);
    v9 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
           (struct _KTHREAD **)v12,
           v20,
           a3,
           0LL,
           0LL,
           (_BYTE)a3 != 0 ? 0x10000 : 4096,
           (unsigned __int64 *)v4 + 5110);
    if ( v9 < 0 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v27, v26);
      *(_QWORD *)(v11 + 24) = v21;
      WdLogEvent5_WdAssertion(v11);
      *((_BYTE *)v4 + 40872) &= ~0x10u;
      return (unsigned int)v9;
    }
    CVirtualAddressAllocator::FreeVirtualAddressRange((CVirtualAddressAllocator *)v12, *v25);
    v28 = v21 + *v25;
    v29 = (_BYTE)v65 == 0;
    *((_QWORD *)v4 + 5111) = v28;
    if ( !v29 )
    {
      *((_QWORD *)v4 + 5112) = v28;
      *((_QWORD *)v4 + 5113) = v28 + v21;
    }
    v5 = v55;
    v30 = v21 >> 2;
    if ( v30 > 0xFFFEFFFF )
      LODWORD(v30) = -65537;
    *((_DWORD *)v4 + 10228) = (v30 + 0xFFFF) & 0xFFFF0000;
  }
  v31 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 528LL);
  v57 = v31;
  if ( *(_BYTE *)(v31 + 55) )
  {
    memset(v63, 0, 0x30uLL);
    HwQueue = VidSchCreateHwQueue(
                0LL,
                *(_QWORD *)(*(_QWORD *)(v31 + 256) + 8 * v3),
                (__int64)v63,
                (char **)(*(_QWORD *)(v31 + 264) + 8 * v3));
    if ( HwQueue < 0 )
    {
      v34 = (struct VIDMM_MAPPED_VA_RANGE *)P;
      goto LABEL_72;
    }
    VidSchSetHwQueueProgressFenceObject(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 528LL) + 264LL) + 8 * v3),
      *((_QWORD *)v4 + v3 + 746),
      0LL);
  }
  LOBYTE(v65) = *(_BYTE *)(v5 + 437) & 2;
  v33 = operator new[](0x88uLL, 0x35356956u, PagedPool);
  if ( v33 )
    v34 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                            (__int64)v33,
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
    v34 = 0LL;
  HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
              (CVirtualAddressAllocator *)v12,
              v34,
              v3,
              -1,
              0LL,
              0LL,
              0,
              &v59);
  if ( HwQueue >= 0 )
  {
    if ( (_BYTE)v65
      && (*((_QWORD *)v34 + 12) = *((_QWORD *)v4 + 5112),
          *((_QWORD *)v34 + 13) = *((_QWORD *)v4 + 5113),
          HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                      (CVirtualAddressAllocator *)v12,
                      v34,
                      v3,
                      -3,
                      0LL,
                      0LL,
                      0,
                      &v56),
          HwQueue < 0) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v39, v38);
      *(_QWORD *)(v37 + 24) = 7114LL;
    }
    else
    {
      HwQueue = VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
                  *(VIDMM_PAGE_DIRECTORY **)(32 * v3 + *(_QWORD *)(v12 + 112)),
                  (struct CVirtualAddressAllocator *)v12);
      if ( HwQueue >= 0 )
      {
        v42 = 0;
        v43 = (unsigned __int64)*((unsigned int *)v4 + v3 + 29) >> 12;
        v56 = (struct VIDMM_ALLOC *)v43;
        v65 = 0;
        while ( 1 )
        {
          v44 = 0;
          v45 = (__int64 *)(*((_QWORD *)v4 + v3 + 79) + 96LL);
          v46 = *v45;
          while ( (__int64 *)v46 != v45 )
          {
            if ( v42 == v44 )
              goto LABEL_59;
            v46 = *(_QWORD *)v46;
            ++v44;
          }
          v46 = 0LL;
LABEL_59:
          v47 = *(_QWORD *)(v46 + 64);
          if ( !*(_QWORD *)(v46 + 96) )
          {
            v48 = CVirtualAddressAllocator::MapVirtualAddressRange(
                    (struct VIDMM_VAD **)v12,
                    v46,
                    0LL,
                    4u,
                    v43 << 12,
                    0LL,
                    *((_QWORD *)v4 + 5110),
                    *((_QWORD *)v4 + 5111),
                    0x1000u,
                    (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)((*((_DWORD *)v4 + 8) < 0x6000u) + 2LL),
                    0LL,
                    v3,
                    0LL,
                    0);
            if ( !v48 )
            {
              HwQueue = -1073741823;
              v37 = WdLogNewEntry5_WdAssertion(v50, v49);
              *(_QWORD *)(v37 + 24) = 7174LL;
              goto LABEL_71;
            }
            *(_QWORD *)(v46 + 96) = *(_QWORD *)(v48 + 96);
          }
          v51 = *(_QWORD *)(v47 + 128);
          FullMDL = VidMmGetFullMDL(*(struct _VIDMM_GLOBAL_ALLOC **)(v46 + 56), 0LL);
          HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                      (CVirtualAddressAllocator *)v12,
                      (struct VIDMM_MAPPED_VA_RANGE *)(v51 - 24),
                      v3,
                      0,
                      0LL,
                      FullMDL,
                      0,
                      &v60);
          if ( HwQueue < 0 )
          {
            v37 = WdLogNewEntry5_WdAssertion(v54, v53);
            *(_QWORD *)(v37 + 24) = 7194LL;
            goto LABEL_71;
          }
          v42 = v65 + 1;
          v65 = v42;
          if ( v42 >= 2 )
            break;
          v43 = (unsigned __int64)v56;
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
          CVirtualAddressAllocator::GetPageDirectoryData(
            (CVirtualAddressAllocator *)v12,
            v3,
            &v61,
            &v66,
            (unsigned int *)&P,
            &v58);
          VidSchSetPagingNodePageDirectory(*(_QWORD *)(*((_QWORD *)v4 + 2) + 528LL), v3, v66, (_DWORD)P, v58);
          *(_BYTE *)(v55 + 436) &= 0x9Fu;
        }
        goto LABEL_72;
      }
      v37 = WdLogNewEntry5_WdAssertion(v41, v40);
      *(_QWORD *)(v37 + 24) = 7124LL;
    }
  }
  else
  {
    v37 = WdLogNewEntry5_WdAssertion(v36, v35);
    *(_QWORD *)(v37 + 24) = 7094LL;
  }
LABEL_71:
  WdLogEvent5_WdAssertion(v37);
LABEL_72:
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((char *)v34);
  *((_BYTE *)v4 + 40872) &= ~0x10u;
  return (unsigned int)HwQueue;
}
