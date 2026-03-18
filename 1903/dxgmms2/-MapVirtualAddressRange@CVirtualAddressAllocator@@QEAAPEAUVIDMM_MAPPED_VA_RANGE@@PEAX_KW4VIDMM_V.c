/*
 * XREFs of ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0074330
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C003B9B4 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C005C3C4 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C005C978 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C005FB78 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0062BBC (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C006419C (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00903D4 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00B2180 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B8890 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C00024B4 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00028CC (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     McTemplateK0pqxx @ 0x1C0027998 (McTemplateK0pqxx.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00747AC (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C007647C (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00776B0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C007E908 (-CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0081680 (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct VIDMM_MAPPED_VA_RANGE *__fastcall CVirtualAddressAllocator::MapVirtualAddressRange(
        struct VIDMM_VAD **a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12,
        void **a13)
{
  struct VIDMM_VAD **v13; // r15
  struct _RTL_AVL_TREE *v15; // rdx
  __int64 v16; // rcx
  const GUID *v17; // r8
  struct VIDMM_MAPPED_VA_RANGE *v18; // r14
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rbp
  int v21; // eax
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  struct VIDMM_VAD *v24; // rsi
  struct _RTL_BALANCED_NODE *v25; // rdi
  struct _RTL_BALANCED_NODE *v26; // rax
  const GUID *v27; // r8
  PVOID v28; // rax
  __int64 **VidMmAllocFromOwner; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rbp
  char *v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rcx
  char *v38; // rsi
  char **v39; // rcx
  char *v40; // rax
  int v42; // r9d
  unsigned __int64 v43; // rdi
  int v44; // eax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  struct VIDMM_MAPPED_VA_RANGE *v55; // [rsp+20h] [rbp-88h]
  struct VIDMM_VAD *v56; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v57; // [rsp+58h] [rbp-50h] BYREF
  char v58; // [rsp+B0h] [rbp+8h]

  v13 = a1 + 7;
  if ( a1 != (struct VIDMM_VAD **)-56LL && a1[8] == KeGetCurrentThread() )
  {
    v46 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v46 + 24) = 1448LL;
    WdLogEvent5_WdAssertion(v46);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v13, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v42 = *((_DWORD *)v13 + 4);
      if ( v42 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v16, (const EVENT_DESCRIPTOR *)"g", v17, v42);
    }
    ExAcquirePushLockExclusiveEx(v13, 0LL);
  }
  v18 = 0LL;
  v19 = a6;
  v20 = a5;
  v13[1] = KeGetCurrentThread();
  v56 = 0LL;
  v58 = 0;
  if ( a6 )
  {
    v24 = a1[6];
    v43 = a6 + a5;
    v57 = a6;
    while ( v24 )
    {
      v44 = CompareVadAddressInsideAvl(&v57, (struct _RTL_BALANCED_NODE *)v24);
      if ( v44 >= 0 )
      {
        if ( v44 <= 0 )
        {
          v45 = *((unsigned int *)v24 + 18);
          v22 = *((_QWORD *)v24 + 4);
          if ( (v45 & 0x1000) != 0 )
            v22 -= 4096LL;
          if ( v22 < v43 )
          {
            v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v15);
            v48[3] = v57;
            v48[4] = v43;
            v48[5] = v24;
            WdLogEvent5_WdWarning(v48);
          }
          else
          {
            v56 = v24;
            if ( (((unsigned __int8)a10 ^ (unsigned __int8)(v45 >> 7)) & 0x10) == 0 )
              goto LABEL_22;
            v47 = WdLogNewEntry5_WdAssertion(v22, v15);
            *(_QWORD *)(v47 + 24) = 1331LL;
            WdLogEvent5_WdAssertion(v47);
          }
          goto LABEL_44;
        }
        v24 = (struct VIDMM_VAD *)*((_QWORD *)v24 + 1);
      }
      else
      {
        v24 = *(struct VIDMM_VAD **)v24;
      }
    }
  }
  v21 = CVirtualAddressAllocator::AllocateVirtualAddressRange(
          (CVirtualAddressAllocator *)a1,
          v15,
          a5,
          a6,
          a7,
          a8,
          a9,
          &v56,
          1u);
  v24 = v56;
  if ( v21 < 0 )
    goto LABEL_22;
  v25 = (struct _RTL_BALANCED_NODE *)a1[6];
  LOBYTE(v23) = 0;
  v58 = 1;
  if ( !v25 )
    goto LABEL_14;
  while ( (int)CompareVadRangeAvl(v24, v25) < 0 )
  {
    v26 = v25->Children[0];
    if ( !v25->Children[0] )
    {
      LOBYTE(v23) = 0;
      goto LABEL_14;
    }
LABEL_10:
    v25 = v26;
  }
  v26 = v25->Children[1];
  if ( v26 )
    goto LABEL_10;
  LOBYTE(v23) = 1;
LABEL_14:
  RtlAvlInsertNodeEx(a1 + 6, v25, v23, v24);
  if ( (a10 & 0x10) != 0 )
    *((_DWORD *)v24 + 18) |= 0x800u;
  if ( (a10 & 8) != 0 || (a10 & 4) != 0 )
    v22 = *((_DWORD *)v24 + 18) & 0xFFFFFFF0 | 2;
  else
    v22 = *((_DWORD *)v24 + 18) & 0xFFFFFFF0 | 3;
  *((_DWORD *)v24 + 18) = v22;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    LODWORD(v55) = v22;
    McTemplateK0pqxx(v22, &CreateGpuVirtualAddressRange, v27, a1, v55, *((_QWORD *)v24 + 3), *((_QWORD *)v24 + 4));
  }
  v20 = a5;
LABEL_22:
  if ( v24 )
  {
    if ( !a13 || (v28 = operator new[](0x18uLL, 0x39346956u, PagedPool), (*a13 = v28) != 0LL) )
    {
      if ( (*((_BYTE *)v24 + 72) & 0xF) == 3 && ((a10 & 8) != 0 || (a10 & 4) != 0) )
      {
        v49 = WdLogNewEntry5_WdWarning(v22, v15);
        WdLogEvent5_WdWarning(v49);
      }
      else
      {
        if ( v58 )
          v19 = *((_QWORD *)v24 + 3);
        if ( a4 == 3 )
        {
          v30 = a2;
          goto LABEL_33;
        }
        VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner(a4, a2);
        if ( VidMmAllocFromOwner )
        {
          v30 = **VidMmAllocFromOwner;
LABEL_33:
          if ( v30 )
            v20 = *(_QWORD *)(v30 + 16);
        }
        v31 = v20 - a3;
        v32 = (char *)operator new[](0x88uLL, 0x39346956u, PagedPool);
        v18 = (struct VIDMM_MAPPED_VA_RANGE *)v32;
        if ( v32 )
        {
          v34 = 0LL;
          *((_DWORD *)v32 + 16) = 0;
          *((_QWORD *)v32 + 11) = a10;
          if ( v31 < a5 )
            v34 = v31 >> 12;
          *((_QWORD *)v32 + 7) = a2;
          *((_QWORD *)v32 + 10) = a11;
          *((_QWORD *)v32 + 15) = v34;
          *((_QWORD *)v32 + 13) = v19 + a5;
          v35 = *((_DWORD *)v32 + 16) & 0xFFFFFC00 | (16 * (a12 & 0x3F));
          *(_QWORD *)v32 = v24;
          *((_QWORD *)v32 + 9) = a3;
          *((_QWORD *)v32 + 12) = v19;
          *((_QWORD *)v32 + 14) = a3;
          *((_DWORD *)v32 + 32) = 1;
          *((_DWORD *)v32 + 16) = a4 & 0xF | v35;
          if ( a4 == 6 )
            *((_QWORD *)v32 + 11) |= 4uLL;
          memset(v32 + 8, 0, 0x30uLL);
          if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                      (CVirtualAddressAllocator *)a1,
                      v24,
                      a12,
                      0LL,
                      v18) >= 0 )
          {
            if ( a13 )
            {
              v38 = (char *)v24 + 80;
              *((_QWORD *)*a13 + 2) = v18;
              v39 = (char **)*((_QWORD *)v38 + 1);
              v40 = (char *)*a13;
              if ( *v39 != v38 )
                __fastfail(3u);
              *(_QWORD *)v40 = v38;
              *((_QWORD *)v40 + 1) = v39;
              *v39 = v40;
              *((_QWORD *)v38 + 1) = v40;
            }
            goto LABEL_44;
          }
          v50 = WdLogNewEntry5_WdWarning(v37, v36);
          WdLogEvent5_WdWarning(v50);
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v18);
        }
        else
        {
          _InterlockedIncrement(&dword_1C004E6B4);
          v53 = WdLogNewEntry5_WdLowResource(v33);
          *(_QWORD *)(v53 + 24) = 1860LL;
          WdLogEvent5_WdLowResource(v53);
          v24 = v56;
        }
        v54 = WdLogNewEntry5_WdAssertion(v52, v51);
        *(_QWORD *)(v54 + 24) = 1374LL;
        WdLogEvent5_WdAssertion(v54);
      }
    }
    if ( v58 )
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a1, v24);
    if ( a13 )
    {
      operator delete(*a13);
      *a13 = 0LL;
    }
    v18 = 0LL;
  }
LABEL_44:
  v13[1] = 0LL;
  ExReleasePushLockExclusiveEx(v13, 0LL);
  KeLeaveCriticalRegion();
  return v18;
}
