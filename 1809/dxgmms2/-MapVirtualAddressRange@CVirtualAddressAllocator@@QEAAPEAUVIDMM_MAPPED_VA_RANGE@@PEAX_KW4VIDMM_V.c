/*
 * XREFs of ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0059008
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C003AFD4 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C00604D4 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C006ACA0 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C006E96C (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C007132C (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C007DA00 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C008CB40 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00AED4C (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B560C (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00023E8 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C0061330 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333@Z @ 0x1C00634A4 (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0066880 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@@Z @ 0x1C007CEF0 (-InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUV.c)
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C007EDAC (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::MapVirtualAddressRange(
        struct VIDMM_VAD **a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a10,
        __int64 a11,
        unsigned int a12,
        void **a13,
        char a14)
{
  struct _RTL_AVL_TREE *v15; // rdx
  unsigned __int64 v16; // r12
  __int64 v17; // rdi
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA v18; // rbx
  __int64 v19; // r15
  struct VIDMM_VAD *v20; // rsi
  unsigned __int64 v21; // r14
  int v22; // eax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  _QWORD *v28; // rax
  int v29; // eax
  void **v30; // r14
  PVOID v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  char *v37; // rsi
  char **v38; // rdx
  char *v39; // rax
  struct VIDMM_VAD *v41; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v42[32]; // [rsp+58h] [rbp-20h] BYREF
  char v43; // [rsp+C0h] [rbp+48h]

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v42, a1 + 7);
  v16 = a6;
  v17 = 0LL;
  v18 = a10.0;
  v19 = 0LL;
  v41 = 0LL;
  v43 = 0;
  if ( !a6 )
    goto LABEL_15;
  v20 = a1[6];
  v21 = a6 + a5;
  if ( !v20 )
    goto LABEL_15;
  do
  {
    v22 = CompareVadAddressInsideAvl(&a6, (struct _RTL_BALANCED_NODE *)v20);
    if ( v22 >= 0 )
    {
      if ( v22 <= 0 )
        break;
      v20 = (struct VIDMM_VAD *)*((_QWORD *)v20 + 1);
    }
    else
    {
      v20 = *(struct VIDMM_VAD **)v20;
    }
  }
  while ( v20 );
  if ( v20 )
  {
    v23 = *((_QWORD *)v20 + 4);
    v24 = *((unsigned int *)v20 + 18);
    v25 = v23 - 4096;
    if ( (v24 & 0x1000) == 0 )
      v25 = *((_QWORD *)v20 + 4);
    if ( v25 < v21 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v24);
      v28[3] = a6;
      v28[4] = v21;
      v28[5] = v20;
      WdLogEvent5_WdWarning(v28);
      goto LABEL_39;
    }
    v26 = v24 >> 7;
    LOBYTE(v26) = *(_BYTE *)&v18 ^ v26;
    v41 = v20;
    if ( (v26 & 0x10) != 0 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v23, v26);
      *(_QWORD *)(v27 + 24) = 1332LL;
      WdLogEvent5_WdAssertion(v27);
      goto LABEL_39;
    }
  }
  else
  {
LABEL_15:
    v29 = CVirtualAddressAllocator::AllocateVirtualAddressRange(
            (CVirtualAddressAllocator *)a1,
            v15,
            a5,
            v16,
            a7,
            a8,
            a9,
            &v41,
            1u);
    v20 = v41;
    if ( v29 >= 0 )
    {
      v43 = 1;
      CVirtualAddressAllocator::InsertVadToReservedListForNewVaRange(
        (CVirtualAddressAllocator *)a1,
        v41,
        (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)v18);
    }
  }
  if ( !v20 )
    goto LABEL_38;
  v30 = a13;
  if ( a13 )
  {
    v31 = operator new[](0x18uLL, 0x39346956u, PagedPool);
    *v30 = v31;
    if ( !v31 )
      goto LABEL_28;
  }
  if ( (*((_BYTE *)v20 + 72) & 0xF) != 3 || (*(_BYTE *)&v18 & 8) == 0 && (*(_BYTE *)&v18 & 4) == 0 )
  {
    if ( v43 )
      v16 = *((_QWORD *)v20 + 3);
    v33 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))CVirtualAddressAllocator::MapVadVaRange)(
            a1,
            v20,
            a12,
            a4,
            a2,
            a3,
            v18,
            a11,
            v16,
            a5);
    v19 = v33;
    if ( !v33 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v35, v34);
      *(_QWORD *)(v36 + 24) = 1375LL;
      WdLogEvent5_WdAssertion(v36);
      goto LABEL_28;
    }
    if ( v30 )
    {
      v37 = (char *)v20 + 80;
      *((_QWORD *)*v30 + 2) = v33;
      v38 = (char **)*((_QWORD *)v37 + 1);
      v39 = (char *)*v30;
      if ( *v38 != v37 )
        __fastfail(3u);
      *(_QWORD *)v39 = v37;
      *((_QWORD *)v39 + 1) = v38;
      *v38 = v39;
      *((_QWORD *)v37 + 1) = v39;
    }
    if ( a14 )
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 128));
LABEL_38:
    v17 = v19;
    goto LABEL_39;
  }
  v32 = WdLogNewEntry5_WdWarning(v23, v26);
  WdLogEvent5_WdWarning(v32);
LABEL_28:
  if ( v43 )
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a1, v20);
  if ( v30 )
  {
    operator delete(*v30);
    *v30 = 0LL;
  }
LABEL_39:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
  return v17;
}
