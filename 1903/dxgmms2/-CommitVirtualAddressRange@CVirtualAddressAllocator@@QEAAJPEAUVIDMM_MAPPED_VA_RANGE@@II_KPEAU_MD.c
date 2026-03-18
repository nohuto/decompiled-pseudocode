/*
 * XREFs of ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006DB80
 * Callers:
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C005C3C4 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C005FB78 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006C900 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0070568 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00903D4 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B08C4 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B13C8 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00B2180 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B8890 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B8A8C (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001554 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C00027E8 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00028CC (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1C0014F0C (-DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C002557C (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0p @ 0x1C0025AA4 (McTemplateK0p.c)
 *     McTemplateK0pqxx @ 0x1C0027998 (McTemplateK0pqxx.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005C714 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D3F0 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006E2C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C0080BF0 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00B5C60 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B8A8C (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::CommitVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        char a3,
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
  unsigned int v24; // r12d
  __int64 v25; // r10
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ecx
  __int64 **VidMmAllocFromOwner; // rax
  __int64 v30; // r11
  int *v31; // r11
  struct _MDL *v32; // r10
  unsigned __int64 v33; // rdx
  int v34; // r8d
  int v35; // eax
  __int64 v36; // r15
  __int64 v37; // rcx
  int v38; // edi
  const GUID *v39; // r8
  int v40; // ecx
  __int64 result; // rax
  int v42; // eax
  __int64 v43; // rcx
  unsigned int v44; // r8d
  __int64 v45; // rax
  unsigned int RootPageTableSize; // eax
  UINT NumberOfPte; // ecx
  __int64 v48; // rdi
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v57; // rax
  int v58; // edi
  unsigned __int8 v59; // r9
  struct VIDMM_ALLOC **v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rax
  bool v63; // zf
  __int64 VidMmGlobalAllocFromOwner; // rax
  int v65; // eax
  char v66; // [rsp+50h] [rbp-B0h]
  unsigned int v67; // [rsp+54h] [rbp-ACh]
  int *v68; // [rsp+58h] [rbp-A8h]
  __int64 v69; // [rsp+68h] [rbp-98h]
  unsigned int v70; // [rsp+70h] [rbp-90h]
  UINT v71; // [rsp+74h] [rbp-8Ch]
  unsigned __int64 v72; // [rsp+78h] [rbp-88h]
  _DXGKARG_GETROOTPAGETABLESIZE v74; // [rsp+88h] [rbp-78h] BYREF
  __int64 v75; // [rsp+90h] [rbp-70h]
  __int64 v76; // [rsp+98h] [rbp-68h]
  struct VIDMM_ALLOC **v77; // [rsp+A0h] [rbp-60h]
  __int64 v78; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v79; // [rsp+B0h] [rbp-50h]
  _QWORD v80[3]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v81; // [rsp+D8h] [rbp-28h]
  struct _MDL *v82; // [rsp+E0h] [rbp-20h]
  __int64 v83; // [rsp+E8h] [rbp-18h]
  int v84; // [rsp+F0h] [rbp-10h]
  int v85; // [rsp+F4h] [rbp-Ch]
  __int64 v86; // [rsp+F8h] [rbp-8h]
  __int64 v87; // [rsp+100h] [rbp+0h]

  v77 = a8;
  *a8 = 0LL;
  v11 = *((_QWORD *)a2 + 12);
  v12 = (*((_QWORD *)a2 + 13) - v11) >> 12;
  v13 = ((unsigned __int64)*((unsigned int *)a2 + 16) >> 4) & 0x3F;
  v14 = (int)(*((_DWORD *)a2 + 16) << 28) >> 28;
  v15 = (const GUID *)((v11 >> 12) + v12);
  v76 = *((_QWORD *)a2 + 7);
  v16 = *((_QWORD *)a2 + 9);
  v67 = v13;
  v72 = v11;
  v79 = v16;
  if ( (unsigned __int64)v15 <= v11 >> 12 )
  {
    v51 = WdLogNewEntry5_WdAssertion(v16, a2);
    *(_QWORD *)(v51 + 24) = 2567LL;
    WdLogEvent5_WdAssertion(v51);
    return 3221225485LL;
  }
  else if ( (unsigned __int64)v15 > *((_QWORD *)this + 2) >> 12 )
  {
    v52 = WdLogNewEntry5_WdAssertion(v16, a2);
    *(_QWORD *)(v52 + 24) = 2572LL;
    WdLogEvent5_WdAssertion(v52);
    return 3221225485LL;
  }
  else
  {
    if ( (*((_BYTE *)a2 + 88) & 4) != 0 )
      a4 = -2;
    v17 = *((_QWORD *)this + 10);
    v18 = 32LL * v13;
    v19 = v18 + *((_QWORD *)this + 14);
    v78 = 1560LL * v13;
    v20 = *(_QWORD *)(v17 + 40184) + v78;
    v69 = v19;
    v75 = v20;
    v21 = *(VIDMM_PAGE_DIRECTORY **)v19;
    v68 = *(int **)(v20 + 440);
    if ( *(_QWORD *)v19 && (*(_DWORD *)v21 & 8) == 0 )
      goto LABEL_10;
    v18 = *(_QWORD *)(v20 + 48LL * *(unsigned int *)(v20 + 428) + 112);
    v22 = *(_DWORD *)(v19 + 16);
    v23 = (((unsigned __int64)&v15[-1].Data4[7] & *(_QWORD *)(v20 + 48LL * *(unsigned int *)(v20 + 428) + 104)) >> v18)
        + 1;
    v71 = v22;
    if ( v23 <= v22 && v21 )
    {
      v11 = v72;
LABEL_10:
      v24 = v13;
      goto LABEL_11;
    }
    v43 = *(unsigned int *)(v19 + 20);
    v44 = *(_DWORD *)(v19 + 20);
    v70 = v44;
    if ( *(_DWORD *)(*(_QWORD *)(v20 + 440) + 16LL) == 2 )
    {
      *(_DWORD *)(v19 + 16) = v23;
      v45 = *((_QWORD *)this + 10);
      v74.NumberOfPte = v23;
      v74.PhysicalAdapterIndex = v13;
      RootPageTableSize = ADAPTER_RENDER::DdiGetRootPageTableSize(*(ADAPTER_RENDER **)(v45 + 16), &v74);
      NumberOfPte = v74.NumberOfPte;
      v44 = RootPageTableSize;
      v20 = v75;
      v13 = v67;
      *(_DWORD *)(v69 + 16) = v74.NumberOfPte;
      *(_DWORD *)(v69 + 20) = RootPageTableSize;
      v22 = NumberOfPte;
      v43 = v70;
    }
    if ( v22 < v23 || v44 < (unsigned int)v43 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v43, v20);
      v48 = v69;
      *(_QWORD *)(v53 + 24) = *(unsigned int *)(v69 + 16);
      WdLogEvent5_WdAssertion(v53);
      v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v55, v54);
      v56[3] = 270LL;
      v56[4] = 48LL;
      v56[5] = this;
      v56[6] = 0LL;
      v56[7] = 0LL;
      WdLogEvent5_WdCriticalError(v56);
      v20 = v75;
      v13 = v67;
    }
    else
    {
      v48 = v69;
    }
    PageDirectory = CreatePageDirectory(this, v13, *(_DWORD *)(v20 + 428));
    *(_QWORD *)v48 = PageDirectory;
    if ( PageDirectory )
    {
      if ( v21 )
      {
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *((VIDMM_PROCESS **)this + 11),
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 24LL) + 208LL),
          1);
        v58 = *(_DWORD *)(v48 + 16);
        *(_DWORD *)(v69 + 16) = v71;
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v21, this, 0LL, v59);
        v24 = v67;
        v60 = v77;
        *(_DWORD *)(v69 + 16) = v58;
        v38 = CVirtualAddressAllocator::RecommitVirtualAddressRanges(this, 1LL << v67, v60);
        CVirtualAddressAllocator::FlushGpuVaTlb(this, v67, 0LL, 0LL);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 10), v67);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *((VIDMM_PROCESS **)this + 11),
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 24LL) + 208LL),
          0);
        if ( v38 < 0 )
        {
          v62 = WdLogNewEntry5_WdAssertion(v18, v61);
          *(_QWORD *)(v62 + 24) = 2662LL;
          WdLogEvent5_WdAssertion(v62);
          return (unsigned int)v38;
        }
        v11 = v72;
      }
      else
      {
        v11 = v72;
        v24 = v67;
      }
LABEL_11:
      v66 = 0;
      if ( *((struct _KTHREAD **)this + 8) != KeGetCurrentThread() )
      {
        DXGPUSHLOCK::AcquireExclusive((CVirtualAddressAllocator *)((char *)this + 56));
        v66 = 1;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        McTemplateK0pqxx(v18, &CommitVirtualAddressStart, v15, v76, v14, v11, v12);
      v25 = *((_QWORD *)a2 + 15);
      v80[1] = 0LL;
      v81 = 0LL;
      v86 = 0LL;
      v87 = 0LL;
      if ( v25 )
      {
        v81 = (a5 + *((_QWORD *)a2 + 14) - *((_QWORD *)a2 + 9)) >> 12;
        v87 = v25;
      }
      v26 = 1LL;
      v80[2] = *((_QWORD *)a2 + 10);
      v80[0] = 1LL;
      if ( a4 == -2 )
      {
        v80[0] = 3LL;
        if ( (_WORD)v11 || (v12 & 0xF) != 0 || (v63 = v68[3] == 0, LOBYTE(v86) = 1, v63) )
          LOBYTE(v86) = 0;
        VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(
                                      (int)(*((_DWORD *)a2 + 16) << 28) >> 28,
                                      *((_QWORD *)a2 + 7));
        if ( VidMmGlobalAllocFromOwner )
        {
          v65 = *(_DWORD *)(VidMmGlobalAllocFromOwner + 32);
          if ( !v65 || (_WORD)v65 )
            LOBYTE(v86) = 0;
        }
      }
      else
      {
        if ( a4 == -3 )
        {
          LOBYTE(v86) = 1;
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
              v27 = v30;
          }
          v31 = v68;
          if ( !(_WORD)v11 && v68[3] && (v25 & 0xF) == 0 && !*((_WORD *)a2 + 56) )
          {
            if ( a4 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 3712LL)
                                         + 8LL
                                         * (unsigned int)(a4
                                                        + *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 40184LL)
                                                                    + v78
                                                                    + 20)
                                                        - 1))
                             + 376LL) == 0x10000
                && (v12 & 0xF) == 0
                && (unsigned __int16)a5 == 0LL )
              {
                LOBYTE(v86) = 1;
              }
              if ( v27 )
              {
                v42 = *(_DWORD *)(v27 + 32);
                if ( !v42 || (_WORD)v42 )
                  LOBYTE(v86) = 0;
              }
            }
            else if ( !(_WORD)a5 && (*((_DWORD *)this + 34) & 4) == 0 && v27 && (*(_DWORD *)(v27 + 80) & 0x100) != 0 )
            {
              LOBYTE(v86) = 1;
            }
          }
          v32 = a6;
          v33 = v26 & 0xFFFFFFFFFFFE041FuLL | (32 * (a4 & 0x1F | ((unsigned __int64)(a3 & 0x3F) << 6)));
          v80[0] = v33;
          if ( a6
            || (v34 = *v68, (*v68 & 0x40) == 0)
            || v27 && (**(_DWORD **)(v27 + 504) & 0x80u) != 0
            || (*((_DWORD *)this + 34) & 4) != 0 )
          {
            v34 = *v68;
            BYTE3(v86) = 0;
          }
          else
          {
            BYTE3(v86) = 1;
          }
          if ( (v34 & 0x10) != 0 && (v14 == 2 || v14 == 7 || v27 && (**(_DWORD **)(v27 + 504) & 4) != 0) )
          {
            v33 |= 4uLL;
            v80[0] = v33;
          }
          if ( (v34 & 1) != 0 && (*((_BYTE *)a2 + 88) & 1) == 0 )
          {
            v33 |= 8uLL;
            v80[0] = v33;
          }
          if ( (v34 & 2) != 0 && (*((_BYTE *)a2 + 88) & 2) == 0 )
            v80[0] = v33 | 0x10;
          goto LABEL_34;
        }
        v31 = v68;
      }
      v32 = a6;
LABEL_34:
      v35 = *v31;
      v85 = a4;
      v36 = v76;
      v83 = v76;
      v82 = v32;
      v84 = v14;
      if ( (v35 & 0x80u) != 0 )
        *(_WORD *)((char *)&v86 + 1) = 257;
      v38 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
              *(VIDMM_PAGE_DIRECTORY **)v69,
              this,
              (const struct COMMIT_VA_STATE *)v80,
              v79,
              v11,
              v12,
              a5,
              0,
              v77);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        McTemplateK0p(v37, &CommitVirtualAddressEnd, v39, v36);
      if ( a7 )
        CVirtualAddressAllocator::FlushGpuVaTlb(this, v24, v72, v72 + (v12 << 12));
      if ( BYTE4(v86) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 10), v24);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *((VIDMM_PROCESS **)this + 11),
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 24LL) + 208LL),
          0);
      }
      if ( v38 < 0 )
        v40 = 2048;
      else
        v40 = 1024;
      *((_DWORD *)a2 + 16) |= v40;
      if ( v66 )
      {
        *((_QWORD *)this + 8) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 56, 0LL);
        KeLeaveCriticalRegion();
      }
      return (unsigned int)v38;
    }
    v57 = WdLogNewEntry5_WdAssertion(v18, v50);
    *(_QWORD *)(v57 + 24) = 2616LL;
    WdLogEvent5_WdAssertion(v57);
    *(_DWORD *)(v48 + 16) = v71;
    *(_DWORD *)(v48 + 20) = v70;
    result = 3221225495LL;
    *(_QWORD *)v48 = v21;
  }
  return result;
}
