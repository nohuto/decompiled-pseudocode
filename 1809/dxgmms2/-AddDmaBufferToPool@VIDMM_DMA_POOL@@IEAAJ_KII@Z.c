/*
 * XREFs of ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C006ACA0
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C006A150 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C0081BF0 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 *     ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C00B3080 (-ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     McTemplateK0pppxxxp @ 0x1C0027A68 (McTemplateK0pppxxxp.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0059008 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00592E4 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C005FB98 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FE90 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00621D0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00626E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00637F0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C00663F0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C006B6A4 (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C006CE8C (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0071FF8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C008D50C (-AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::AddDmaBufferToPool(VIDMM_DMA_POOL *this, SIZE_T a2, int a3, unsigned int a4)
{
  int OneAllocation; // r15d
  unsigned int v5; // r13d
  unsigned __int64 v6; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // rax
  char *v14; // rax
  __int64 v15; // rcx
  char *v16; // rsi
  int v17; // r8d
  VIDMM_GLOBAL *v18; // r10
  int v19; // eax
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  struct VIDMM_ALLOC **v23; // rdi
  __int64 v24; // rcx
  struct VIDMM_ALLOC *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // rax
  struct _VIDSCH_SYNC_OBJECT **v31; // r13
  VIDMM_GLOBAL *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r8
  void *v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // ecx
  SIZE_T v38; // rax
  PVOID v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  SIZE_T v42; // rax
  PVOID v43; // rax
  __int64 v44; // rcx
  SIZE_T v45; // rax
  PVOID v46; // rax
  __int64 v47; // rcx
  unsigned int v48; // eax
  PVOID v49; // rax
  __int64 v50; // rcx
  PVOID v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // eax
  SIZE_T v54; // r13
  struct VIDMM_VAD **VirtualAddressAllocator; // rbx
  unsigned int v56; // r8d
  __int64 v57; // r10
  __int64 v58; // r11
  __int64 v59; // rdx
  struct VIDMM_MAPPED_VA_RANGE *v60; // rdi
  _QWORD *v61; // r8
  __int64 v62; // rbx
  char **v63; // rax
  __int64 v64; // rdx
  struct _ERESOURCE *v65; // rcx
  __int64 v66; // rcx
  struct _KEVENT *v67; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v68; // r8
  void *v69; // rcx
  struct VIDMM_ALLOC **v70; // [rsp+38h] [rbp-89h]
  struct VIDMM_VAD_PENDING_OPERATION *v71; // [rsp+40h] [rbp-81h]
  unsigned __int64 v72; // [rsp+B0h] [rbp-11h] BYREF
  unsigned __int64 v73; // [rsp+B8h] [rbp-9h] BYREF
  struct _VIDMM_MULTI_ALLOC *v74; // [rsp+C0h] [rbp-1h] BYREF
  unsigned __int64 v75; // [rsp+C8h] [rbp+7h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v76; // [rsp+D0h] [rbp+Fh] BYREF
  _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE v77; // [rsp+D8h] [rbp+17h]
  unsigned __int8 v78; // [rsp+128h] [rbp+67h] BYREF
  SIZE_T NumberOfBytes; // [rsp+130h] [rbp+6Fh]
  unsigned int v80; // [rsp+140h] [rbp+7Fh]

  v80 = a4;
  NumberOfBytes = a2;
  OneAllocation = 0;
  v5 = a4;
  LODWORD(v6) = a3;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  if ( *((_DWORD *)this + 23) > VIDMM_DMA_POOL::_NbDmaBufferLimitCompareWatermark )
  {
    v9 = *((_QWORD *)this + 2);
    if ( !v9 || (v10 = *(_QWORD *)(v9 + 24), *(_DWORD *)(v10 + 328) != 2) && !*(_BYTE *)(*(_QWORD *)(v10 + 40) + 322LL) )
    {
      if ( VIDMM_DMA_POOL::_TotalDmaBufferBytes > VIDMM_DMA_POOL::_MaxDmaBufferBytes
        || VIDMM_DMA_POOL::_TotalAllocationListBytes > VIDMM_DMA_POOL::_MaxAllocationListBytes
        || VIDMM_DMA_POOL::_TotalPatchLocationListBytes > VIDMM_DMA_POOL::_MaxPatchLocationListBytes )
      {
        _InterlockedAdd(&dword_1C004D66C, 1u);
        v11 = WdLogNewEntry5_WdLowResource(this);
        *(_QWORD *)(v11 + 24) = 1100LL;
LABEL_11:
        WdLogEvent5_WdLowResource(v11);
        return 3221225495LL;
      }
    }
  }
  if ( (*((_BYTE *)this + 32) & 1) == 0 && !(_DWORD)v6 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v13 + 24) = 1111LL;
    WdLogEvent5_WdAssertion(v13);
    return 3221225485LL;
  }
  v14 = (char *)operator new[](0xB8uLL, 0x32326956u, (POOL_TYPE)512);
  v16 = v14;
  if ( !v14 )
  {
    _InterlockedAdd(&dword_1C004D5D0, 1u);
    v11 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v11 + 24) = 1123LL;
    goto LABEL_11;
  }
  memset(v14, 0, 0xB8uLL);
  v17 = *((_DWORD *)this + 9);
  if ( v17 )
  {
    v18 = *(VIDMM_GLOBAL **)this;
    if ( (*((_BYTE *)this + 32) & 1) != 0 )
      v19 = ((~*(_BYTE *)(1560LL * *((unsigned int *)this + 2) + *((_QWORD *)v18 + 5023) + 436) & 4) << 13) | 0x10000040;
    else
      v19 = *(_BYTE *)(*((_QWORD *)this + 3) + 430LL) != 0 ? 72 : 32840;
    v20 = *(_DWORD *)(*((_QWORD *)v18 + 3) + 308LL);
    if ( (v20 & 8) != 0 || (v20 & 0x10) != 0 )
      v19 |= 4u;
    OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                      v18,
                      *((struct VIDMM_DEVICE **)this + 2),
                      *((_DWORD *)this + 2),
                      a2,
                      a2,
                      0,
                      v17,
                      0,
                      0,
                      (struct _DXGK_ALLOCATIONINFOFLAGS)v19,
                      0LL,
                      0LL,
                      0LL,
                      0xA0000000,
                      0,
                      0LL,
                      0,
                      0LL,
                      (struct _D3DDDI_SEGMENTPREFERENCE **)v16 + 7);
    if ( OneAllocation < 0 )
    {
      _InterlockedAdd(&dword_1C004D5D8, 1u);
      v22 = WdLogNewEntry5_WdLowResource(v21);
      *(_QWORD *)(v22 + 24) = 1185LL;
LABEL_26:
      WdLogEvent5_WdLowResource(v22);
LABEL_83:
      v54 = NumberOfBytes;
      goto LABEL_84;
    }
    v23 = (struct VIDMM_ALLOC **)(v16 + 64);
    OneAllocation = VIDMM_GLOBAL::OpenOneAllocation(
                      *(DXGADAPTER ***)this,
                      *((struct VIDMM_DEVICE **)this + 2),
                      *((struct _VIDMM_GLOBAL_ALLOC **)v16 + 7),
                      0LL,
                      0,
                      0LL,
                      (struct VIDMM_ALLOC **)v16 + 8,
                      &v78);
    if ( OneAllocation < 0 )
    {
      _InterlockedAdd(&dword_1C004D5DC, 1u);
      v22 = WdLogNewEntry5_WdLowResource(v24);
      *(_QWORD *)(v22 + 24) = 1205LL;
      goto LABEL_26;
    }
    v25 = *v23;
    if ( (*((_DWORD *)*v23 + 7) & 3) == 0 )
    {
      if ( (*((_BYTE *)this + 32) & 1) != 0 )
      {
        VIDMM_GLOBAL::AllocatePagingBufferResources(*(VIDMM_GLOBAL **)this, *v23);
      }
      else
      {
        v28 = *((unsigned int *)this + 2);
        v72 = 0LL;
        v73 = 0LL;
        v29 = 176 * v28;
        v30 = *((_QWORD *)v25 + 1);
        v74 = v25;
        v31 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(v30 + 72) + v29);
        OneAllocation = VIDMM_GLOBAL::MakeResident(
                          *(VIDMM_GLOBAL **)this,
                          (struct VIDMM_PAGING_QUEUE *)v31,
                          &v74,
                          1uLL,
                          3,
                          &v72,
                          &v73);
        if ( OneAllocation == 259 )
        {
          v32 = *(VIDMM_GLOBAL **)this;
          v76 = v31[11];
          v75 = v72;
          VIDMM_GLOBAL::WaitForFences(v32, &v76, (char *)&v75, 1u, 0LL);
          OneAllocation = 0;
        }
      }
      if ( OneAllocation < 0 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v27, v26);
        *(_QWORD *)(v33 + 24) = *v23;
        WdLogEvent5_WdAssertion(v33);
        goto LABEL_83;
      }
    }
    v5 = v80;
  }
  else
  {
    v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 1824LL);
    *((_DWORD *)v16 + 20) = 2;
    v35 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))MmAllocateContiguousNodeMemory)(
                    a2,
                    (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                    v34,
                    (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                    1028,
                    0x80000000);
    *((_QWORD *)v16 + 9) = v35;
    if ( !v35 )
    {
      _InterlockedAdd(&dword_1C004D5E4, 1u);
      v41 = WdLogNewEntry5_WdLowResource(v36);
      *(_QWORD *)(v41 + 24) = 1268LL;
      goto LABEL_82;
    }
    *((PHYSICAL_ADDRESS *)v16 + 11) = MmGetPhysicalAddress(v35);
  }
  if ( (_DWORD)v6 )
  {
    v37 = 3;
    if ( (unsigned int)v6 > 3 )
      v37 = v6;
    v6 = v37;
    v38 = 8LL * v37;
    if ( !is_mul_ok(v37, 8uLL) )
      v38 = -1LL;
    v39 = operator new[](v38, 0x33326956u, (POOL_TYPE)512);
    *((_QWORD *)v16 + 13) = v39;
    if ( !v39 )
    {
      _InterlockedAdd(&dword_1C004D5F0, 1u);
      v41 = WdLogNewEntry5_WdLowResource(v40);
      *(_QWORD *)(v41 + 24) = 1295LL;
LABEL_82:
      WdLogEvent5_WdLowResource(v41);
      OneAllocation = -1073741801;
      goto LABEL_83;
    }
    v42 = 24 * v6;
    if ( !is_mul_ok(v6, 0x18uLL) )
      v42 = -1LL;
    v43 = operator new[](v42, 0x34326956u, (POOL_TYPE)512);
    *((_QWORD *)v16 + 14) = v43;
    if ( !v43 )
    {
      _InterlockedAdd(&dword_1C004D5E8, 1u);
      v41 = WdLogNewEntry5_WdLowResource(v44);
      *(_QWORD *)(v41 + 24) = 1308LL;
      goto LABEL_82;
    }
    memset(v43, 0, 24 * v6);
  }
  if ( v5 )
  {
    v45 = 24LL * v5;
    if ( !is_mul_ok(v5, 0x18uLL) )
      v45 = -1LL;
    v46 = operator new[](v45, 0x35326956u, PagedPool);
    *((_QWORD *)v16 + 15) = v46;
    if ( !v46 )
    {
      _InterlockedAdd(&dword_1C004D5EC, 1u);
      v41 = WdLogNewEntry5_WdLowResource(v47);
      *(_QWORD *)(v41 + 24) = 1325LL;
      goto LABEL_82;
    }
    memset(v46, 0, 24LL * v5);
  }
  v48 = *((_DWORD *)this + 22);
  if ( v48 )
  {
    v49 = operator new[](v48, 0x32336956u, (POOL_TYPE)512);
    *((_QWORD *)v16 + 16) = v49;
    if ( !v49 )
    {
      _InterlockedAdd(&dword_1C004D64C, 1u);
      v41 = WdLogNewEntry5_WdLowResource(v50);
      *(_QWORD *)(v41 + 24) = 1339LL;
      goto LABEL_82;
    }
    memset(v49, 0, *((unsigned int *)this + 22));
  }
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
  {
    v51 = operator new[](0x2000uLL, 0x37336956u, PagedPool);
    *((_QWORD *)v16 + 22) = v51;
    if ( !v51 )
    {
      _InterlockedAdd(&dword_1C004D5F4, 1u);
      v41 = WdLogNewEntry5_WdLowResource(v52);
      *(_QWORD *)(v41 + 24) = 1357LL;
      goto LABEL_82;
    }
    memset(v51, 0, 0x2000uLL);
    *((_DWORD *)v16 + 42) = 0;
    *((_DWORD *)v16 + 43) = 0;
  }
  v53 = v80;
  *((_QWORD *)v16 + 20) = 0LL;
  v54 = NumberOfBytes;
  *((_QWORD *)v16 + 5) = NumberOfBytes;
  *((_DWORD *)v16 + 12) = v6;
  *((_DWORD *)v16 + 13) = v53;
  *((_QWORD *)v16 + 17) = this;
  if ( (*((_DWORD *)this + 8) & 0x10) == 0 )
  {
LABEL_72:
    *((_DWORD *)this + 8) &= ~8u;
    *((_DWORD *)this + 32) += *((_DWORD *)v16 + 10);
    v61 = (_QWORD *)*((_QWORD *)this + 2);
    *((_DWORD *)this + 33) += 24 * *((_DWORD *)v16 + 12);
    *((_DWORD *)this + 34) += 24 * *((_DWORD *)v16 + 13);
    if ( v61 )
    {
      v62 = *(_QWORD *)(*(_QWORD *)(v61[1] + 16LL) + 8LL * *(unsigned int *)(*(_QWORD *)(*v61 + 24LL) + 208LL));
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v62 + 432, 0LL);
      *(_QWORD *)(v62 + 448) += *((_QWORD *)v16 + 5);
      ++*(_DWORD *)(v62 + 440);
      *(_DWORD *)(v62 + 456) += 24 * *((_DWORD *)v16 + 12);
      *(_DWORD *)(v62 + 460) += 24 * *((_DWORD *)v16 + 13);
      ExReleasePushLockExclusiveEx(v62 + 432, 0LL);
      KeLeaveCriticalRegion();
    }
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalDmaBufferBytes, *((_QWORD *)v16 + 5));
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalAllocationListBytes, 24LL * *((unsigned int *)v16 + 12));
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalPatchLocationListBytes, 24LL * *((unsigned int *)v16 + 13));
    ++*((_DWORD *)this + 23);
    VIDMM_DMA_POOL::LockAllPoolForAddRemove(0);
    v63 = (char **)((char *)this + 96);
    v64 = *((_QWORD *)this + 12);
    if ( *(VIDMM_DMA_POOL **)(v64 + 8) != (VIDMM_DMA_POOL *)((char *)this + 96) )
      __fastfail(3u);
    v65 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
    *(_QWORD *)v16 = v64;
    *((_QWORD *)v16 + 1) = v63;
    *(_QWORD *)(v64 + 8) = v16;
    *v63 = v16;
    ExReleaseResourceLite(v65);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v66) + 24) = v16;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pppxxxp(
        *((unsigned int *)v16 + 13),
        *((unsigned int *)v16 + 12),
        *(const GUID **)this,
        *((_QWORD *)this + 3),
        *(_QWORD *)(*(_QWORD *)this + 24LL),
        v16,
        *((_QWORD *)v16 + 5),
        *((unsigned int *)v16 + 12),
        *((unsigned int *)v16 + 13),
        *((_QWORD *)v16 + 7));
    return (unsigned int)OneAllocation;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 3) + 431LL) )
  {
    *((_QWORD *)v16 + 12) = *(_QWORD *)(*((_QWORD *)v16 + 8) + 144LL);
    goto LABEL_72;
  }
  VirtualAddressAllocator = (struct VIDMM_VAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                   *(VIDMM_PROCESS **)(*((_QWORD *)this + 2) + 8LL),
                                                   *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 208LL),
                                                   *((_DWORD *)this + 2));
  if ( VirtualAddressAllocator )
  {
    v71 = *(struct VIDMM_VAD_PENDING_OPERATION **)(v57 + 2384);
    v70 = *(struct VIDMM_ALLOC ***)(v57 + 2376);
    v59 = *((_QWORD *)v16 + 8);
    v77.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)((*(_DWORD *)(v58 + 32) < 0x6000u) + 18LL);
    v60 = (struct VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                            VirtualAddressAllocator,
                                            v59,
                                            0LL,
                                            1u,
                                            v54,
                                            0LL,
                                            (unsigned __int64)v70,
                                            (unsigned __int64)v71,
                                            0x1000u,
                                            v77,
                                            0LL,
                                            v56,
                                            0LL,
                                            1);
    if ( !v60 )
      goto LABEL_84;
    *((_QWORD *)v16 + 12) = *((_QWORD *)v60 + 12);
    OneAllocation = VIDMM_GLOBAL::CommitVirtualAddressRange(
                      *(VIDMM_GLOBAL **)this,
                      (struct CVirtualAddressAllocator *)VirtualAddressAllocator,
                      (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 8) + 8LL) + 72LL)
                                                  + 176LL * *((unsigned int *)this + 2)),
                      v60,
                      KeGetCurrentThread() == *(struct _KTHREAD **)(**(_QWORD **)this + 8LL),
                      0LL,
                      0LL,
                      0LL);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((volatile signed __int32 *)v60, VirtualAddressAllocator);
    if ( OneAllocation < 0 )
      goto LABEL_84;
    goto LABEL_72;
  }
  OneAllocation = -1073741801;
LABEL_84:
  operator delete(*((void **)v16 + 22));
  operator delete(*((void **)v16 + 16));
  operator delete(*((void **)v16 + 15));
  operator delete(*((void **)v16 + 14));
  operator delete(*((void **)v16 + 13));
  v67 = (struct _KEVENT *)*((_QWORD *)v16 + 8);
  if ( v67 )
    VIDMM_GLOBAL::CloseOneAllocation(*(VIDMM_GLOBAL **)this, v67, 0LL, 0, 0, 0LL);
  v68 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v16 + 7);
  if ( v68 )
    VIDMM_GLOBAL::DestroyOneAllocation(*(struct _KTHREAD ***)this, *((struct VIDMM_DEVICE **)this + 2), v68, 1);
  v69 = (void *)*((_QWORD *)v16 + 9);
  if ( v69 )
    MmFreeContiguousMemorySpecifyCache(v69, v54, *((MEMORY_CACHING_TYPE *)v16 + 20));
  operator delete(v16);
  return (unsigned int)OneAllocation;
}
