/*
 * XREFs of ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00735B0
 * Callers:
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C006E96C (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C007132C (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00728D0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007335C (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C008CB40 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AD464 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00ADFA8 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00AED4C (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B560C (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B580C (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0001E40 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0010914 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00109F4 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0010A40 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1C0015B38 (-DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     McTemplateK0p @ 0x1C0026308 (McTemplateK0p.c)
 *     McTemplateK0pqxx @ 0x1C0027E94 (McTemplateK0pqxx.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C006A5EC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C006BA84 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0074100 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C007E5B0 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00B2800 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B580C (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::CommitVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        struct _MDL *a6,
        unsigned __int8 a7,
        struct VIDMM_ALLOC **a8)
{
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r13
  UINT v13; // r10d
  int v14; // esi
  const GUID *v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r11
  __int64 v20; // rdx
  VIDMM_PAGE_DIRECTORY *v21; // r12
  UINT v22; // eax
  UINT v23; // edi
  __int64 v24; // r11
  __int64 v25; // r10
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ecx
  __int64 **VidMmAllocFromOwner; // rax
  unsigned __int64 v30; // r12
  int *v31; // rcx
  int v32; // eax
  struct _MDL *v33; // r10
  unsigned __int64 v34; // rdx
  int v35; // r8d
  bool v36; // zf
  int *v37; // r8
  int v38; // eax
  __int64 v39; // r15
  __int64 v40; // rcx
  int v41; // edi
  const GUID *v42; // r8
  int v43; // ecx
  __int64 result; // rax
  __int64 v45; // rcx
  unsigned int v46; // r8d
  __int64 v47; // rax
  unsigned int RootPageTableSize; // eax
  UINT NumberOfPte; // ecx
  __int64 v50; // rdi
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rax
  int v60; // edi
  unsigned __int8 v61; // r9
  struct VIDMM_ALLOC **v62; // r8
  int v63; // r12d
  __int64 v64; // rdx
  __int64 v65; // rax
  unsigned __int64 v66; // rcx
  __int64 VidMmGlobalAllocFromOwner; // rax
  int v68; // eax
  char v69; // [rsp+50h] [rbp-B0h]
  int *v70; // [rsp+58h] [rbp-A8h]
  unsigned int v71; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v72; // [rsp+68h] [rbp-98h]
  __int64 v73; // [rsp+78h] [rbp-88h]
  unsigned int v74; // [rsp+80h] [rbp-80h]
  UINT v75; // [rsp+84h] [rbp-7Ch]
  _DXGKARG_GETROOTPAGETABLESIZE v76; // [rsp+88h] [rbp-78h] BYREF
  int v77; // [rsp+90h] [rbp-70h]
  __int64 v78; // [rsp+98h] [rbp-68h]
  __int64 v79; // [rsp+A0h] [rbp-60h]
  struct VIDMM_ALLOC **v80; // [rsp+A8h] [rbp-58h]
  __int64 v81; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v82; // [rsp+B8h] [rbp-48h]
  _QWORD v83[10]; // [rsp+C0h] [rbp-40h] BYREF

  v80 = a8;
  v77 = a3;
  *a8 = 0LL;
  v11 = *((_QWORD *)a2 + 12);
  v12 = (*((_QWORD *)a2 + 13) - v11) >> 12;
  v13 = ((unsigned __int64)*((unsigned int *)a2 + 16) >> 4) & 0x3F;
  v14 = (int)(*((_DWORD *)a2 + 16) << 28) >> 28;
  v15 = (const GUID *)((v11 >> 12) + v12);
  v79 = *((_QWORD *)a2 + 7);
  v16 = *((_QWORD *)a2 + 9);
  v71 = v13;
  v72 = v11;
  v82 = v16;
  if ( (unsigned __int64)v15 <= v11 >> 12 )
  {
    v53 = WdLogNewEntry5_WdAssertion(v16, a2);
    *(_QWORD *)(v53 + 24) = 2573LL;
    WdLogEvent5_WdAssertion(v53);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v15 > *((_QWORD *)this + 2) >> 12 )
  {
    v54 = WdLogNewEntry5_WdAssertion(v16, a2);
    *(_QWORD *)(v54 + 24) = 2578LL;
    WdLogEvent5_WdAssertion(v54);
    return 3221225485LL;
  }
  if ( (*((_BYTE *)a2 + 88) & 4) != 0 )
    a4 = -2;
  v17 = *((_QWORD *)this + 10);
  v18 = 32LL * v13;
  v19 = v18 + *((_QWORD *)this + 14);
  v81 = 1560LL * v13;
  v20 = *(_QWORD *)(v17 + 40184) + v81;
  v73 = v19;
  v78 = v20;
  v21 = *(VIDMM_PAGE_DIRECTORY **)v19;
  v70 = *(int **)(v20 + 440);
  if ( !*(_QWORD *)v19 || (*(_DWORD *)v21 & 8) != 0 )
  {
    v18 = *(_QWORD *)(v20 + 48LL * *(unsigned int *)(v20 + 428) + 112);
    v22 = *(_DWORD *)(v19 + 16);
    v23 = (((unsigned __int64)&v15[-1].Data4[7] & *(_QWORD *)(v20 + 48LL * *(unsigned int *)(v20 + 428) + 104)) >> v18)
        + 1;
    v75 = v22;
    if ( v23 > v22 || !v21 )
    {
      v45 = *(unsigned int *)(v19 + 20);
      v46 = *(_DWORD *)(v19 + 20);
      v74 = v46;
      if ( *(_DWORD *)(*(_QWORD *)(v20 + 440) + 16LL) == 2 )
      {
        *(_DWORD *)(v19 + 16) = v23;
        v76 = 0LL;
        v47 = *((_QWORD *)this + 10);
        v76.NumberOfPte = v23;
        v76.PhysicalAdapterIndex = v13;
        RootPageTableSize = ADAPTER_RENDER::DdiGetRootPageTableSize(*(ADAPTER_RENDER **)(v47 + 16), &v76);
        NumberOfPte = v76.NumberOfPte;
        v46 = RootPageTableSize;
        v20 = v78;
        v13 = v71;
        *(_DWORD *)(v73 + 16) = v76.NumberOfPte;
        *(_DWORD *)(v73 + 20) = RootPageTableSize;
        v22 = NumberOfPte;
        v45 = v74;
      }
      if ( v22 < v23 || v46 < (unsigned int)v45 )
      {
        v55 = WdLogNewEntry5_WdAssertion(v45, v20);
        v50 = v73;
        *(_QWORD *)(v55 + 24) = *(unsigned int *)(v73 + 16);
        WdLogEvent5_WdAssertion(v55);
        v58 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v57, v56);
        v58[3] = 270LL;
        v58[4] = 48LL;
        v58[5] = this;
        v58[6] = 0LL;
        v58[7] = 0LL;
        WdLogEvent5_WdCriticalError(v58);
        v20 = v78;
        v13 = v71;
      }
      else
      {
        v50 = v73;
      }
      PageDirectory = CreatePageDirectory(this, v13, *(_DWORD *)(v20 + 428));
      *(_QWORD *)v50 = PageDirectory;
      if ( !PageDirectory )
      {
        v59 = WdLogNewEntry5_WdAssertion(v18, v52);
        *(_QWORD *)(v59 + 24) = 2622LL;
        WdLogEvent5_WdAssertion(v59);
        *(_DWORD *)(v50 + 16) = v75;
        *(_DWORD *)(v50 + 20) = v74;
        result = 3221225495LL;
        *(_QWORD *)v50 = v21;
        return result;
      }
      if ( v21 )
      {
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *((VIDMM_PROCESS **)this + 11),
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 24LL) + 208LL),
          1);
        v60 = *(_DWORD *)(v50 + 16);
        *(_DWORD *)(v73 + 16) = v75;
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v21, this, 0LL, v61);
        v62 = v80;
        *(_DWORD *)(v73 + 16) = v60;
        v63 = CVirtualAddressAllocator::RecommitVirtualAddressRanges(this, 1LL << v71, v62);
        CVirtualAddressAllocator::FlushGpuVaTlb(this, v71, 0LL, 0LL);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 10), v71);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *((VIDMM_PROCESS **)this + 11),
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 24LL) + 208LL),
          0);
        if ( v63 < 0 )
        {
          v65 = WdLogNewEntry5_WdAssertion(v18, v64);
          *(_QWORD *)(v65 + 24) = 2668LL;
          WdLogEvent5_WdAssertion(v65);
          return (unsigned int)v63;
        }
      }
    }
    v11 = v72;
  }
  v69 = 0;
  if ( *((struct _KTHREAD **)this + 8) != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((CVirtualAddressAllocator *)((char *)this + 56));
    v69 = 1;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    McTemplateK0pqxx(v18, &CommitVirtualAddressStart, v15, v79, v14, v11, v12);
  memset(v83, 0, 0x48uLL);
  v24 = *((_QWORD *)a2 + 15);
  if ( v24 )
  {
    v66 = a5 + *((_QWORD *)a2 + 14) - *((_QWORD *)a2 + 9);
    v83[8] = *((_QWORD *)a2 + 15);
    v83[3] = v66 >> 12;
  }
  v25 = *((_QWORD *)a2 + 10);
  v26 = v83[0] | 1LL;
  v83[2] = v25;
  v83[0] |= 1uLL;
  if ( a4 == -2 )
  {
    v30 = v72;
    v83[0] = v26 | 2;
    if ( (_WORD)v72 || (v12 & 0xF) != 0 || (v36 = v70[3] == 0, LOBYTE(v83[7]) = 1, v36) )
      LOBYTE(v83[7]) = 0;
    VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(
                                  (int)(*((_DWORD *)a2 + 16) << 28) >> 28,
                                  *((_QWORD *)a2 + 7));
    if ( VidMmGlobalAllocFromOwner )
    {
      v68 = *(_DWORD *)(VidMmGlobalAllocFromOwner + 32);
      if ( !v68 || (_WORD)v68 )
        LOBYTE(v83[7]) = 0;
    }
  }
  else
  {
    if ( a4 == -3 )
    {
      LOBYTE(v83[7]) = 1;
    }
    else if ( a4 != -1 )
    {
      v27 = *((_QWORD *)a2 + 7);
      v28 = (int)(*((_DWORD *)a2 + 16) << 28) >> 28;
      if ( v28 != 3 )
      {
        VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner(v28, *((_QWORD *)a2 + 7));
        if ( VidMmAllocFromOwner )
          v27 = **VidMmAllocFromOwner;
        else
          v27 = 0LL;
      }
      v30 = v72;
      v31 = v70;
      if ( !(_WORD)v72 && v70[3] && (v24 & 0xF) == 0 && !*((_WORD *)a2 + 56) )
      {
        if ( a4 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 3712LL)
                                     + 8LL
                                     * (unsigned int)(a4
                                                    + *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 40184LL)
                                                                + v81
                                                                + 20)
                                                    - 1))
                         + 376LL) == 0x10000
            && (v12 & 0xF) == 0
            && (_WORD)a5 == 0 )
          {
            LOBYTE(v83[7]) = 1;
          }
          if ( v27 )
          {
            v32 = *(_DWORD *)(v27 + 32);
            if ( !v32 || (_WORD)v32 )
              LOBYTE(v83[7]) = 0;
          }
          v31 = v70;
        }
        else if ( !(_WORD)a5 && (*((_DWORD *)this + 34) & 4) == 0 && v27 && (*(_DWORD *)(v27 + 80) & 0x100) != 0 )
        {
          LOBYTE(v83[7]) = 1;
        }
      }
      v83[2] = v25;
      v33 = a6;
      v34 = v26 & 0xFFFFFFFFFFFE041FuLL | (32 * (a4 & 0x1F | ((unsigned __int64)(v77 & 0x3F) << 6)));
      v83[0] = v34;
      if ( a6
        || (v35 = *v31, (*v31 & 0x40) == 0)
        || v27 && (v31 = v70, (**(_DWORD **)(v27 + 504) & 0x80u) != 0)
        || (*((_DWORD *)this + 34) & 4) != 0 )
      {
        v35 = *v31;
        BYTE3(v83[7]) = 0;
      }
      else
      {
        BYTE3(v83[7]) = 1;
      }
      if ( (v35 & 0x10) != 0 && (v14 == 2 || v14 == 7 || v27 && (**(_DWORD **)(v27 + 504) & 4) != 0) )
      {
        v34 |= 4uLL;
        v83[0] = v34;
      }
      if ( (v35 & 1) != 0 && (*((_BYTE *)a2 + 88) & 1) == 0 )
      {
        v34 |= 8uLL;
        v83[0] = v34;
      }
      v36 = (v35 & 2) == 0;
      v37 = v70;
      if ( !v36 && (*((_BYTE *)a2 + 88) & 2) == 0 )
        v83[0] = v34 | 0x10;
      goto LABEL_45;
    }
    v30 = v72;
    v37 = v70;
  }
  v33 = a6;
LABEL_45:
  v38 = *v37;
  HIDWORD(v83[6]) = a4;
  v39 = v79;
  v83[5] = v79;
  v83[4] = v33;
  LODWORD(v83[6]) = v14;
  if ( (v38 & 0x80u) != 0 )
    *(_WORD *)((char *)&v83[7] + 1) = 257;
  v41 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
          *(VIDMM_PAGE_DIRECTORY **)v73,
          this,
          (const struct COMMIT_VA_STATE *)v83,
          v82,
          v30,
          v12,
          a5,
          0,
          v80);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    McTemplateK0p(v40, &CommitVirtualAddressEnd, v42, v39);
  if ( a7 )
    CVirtualAddressAllocator::FlushGpuVaTlb(this, v71, v30, v30 + (v12 << 12));
  if ( BYTE4(v83[7]) )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 10), v71);
    VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
      *((VIDMM_PROCESS **)this + 11),
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 24LL) + 208LL),
      0);
  }
  if ( v41 < 0 )
    v43 = 2048;
  else
    v43 = 1024;
  *((_DWORD *)a2 + 16) |= v43;
  if ( v69 )
  {
    *((_QWORD *)this + 8) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 56, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v41;
}
