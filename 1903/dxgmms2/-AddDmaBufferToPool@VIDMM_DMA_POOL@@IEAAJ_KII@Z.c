/*
 * XREFs of ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C005C978
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C005A140 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C0085354 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 *     ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C00B64A8 (-ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pppxxxp @ 0x1C002756C (McTemplateK0pppxxxp.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C005CFFC (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005FF14 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C0063918 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006C358 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C006D3E0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0071350 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0071870 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0074330 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00749D0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0077180 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00909C4 (-AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::AddDmaBufferToPool(VIDMM_DMA_POOL *this, SIZE_T a2, int a3, unsigned int a4)
{
  unsigned __int64 v4; // rdi
  int OneAllocation; // r12d
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r14
  unsigned int v11; // r8d
  VIDMM_GLOBAL *v12; // r10
  int v13; // eax
  int v14; // edx
  __int64 v15; // rcx
  struct _VIDMM_MULTI_ALLOC **v16; // rsi
  __int64 v17; // rcx
  struct VIDMM_ALLOC *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  VIDMM_GLOBAL *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  VIDMM_GLOBAL *v24; // rcx
  unsigned int v25; // ecx
  SIZE_T v26; // rax
  PVOID v27; // rax
  __int64 v28; // rcx
  SIZE_T v29; // rax
  PVOID v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rsi
  SIZE_T v33; // rax
  PVOID v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // eax
  PVOID v37; // rax
  __int64 v38; // rcx
  SIZE_T v39; // rsi
  unsigned int v40; // r9d
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rdi
  int v42; // r8d
  __int64 v43; // r10
  __int64 v44; // r11
  struct VIDMM_MAPPED_VA_RANGE *v45; // rax
  _QWORD *v46; // r8
  __int64 v47; // rdi
  _QWORD *v48; // rax
  __int64 v49; // rdx
  struct _ERESOURCE *v50; // rcx
  __int64 v51; // rcx
  PVOID v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r8
  void *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  struct VIDMM_ALLOC *v65; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v66; // r8
  void *v67; // rcx
  unsigned __int64 v68; // [rsp+A8h] [rbp-9h] BYREF
  unsigned __int64 v69; // [rsp+B0h] [rbp-1h] BYREF
  struct _VIDMM_MULTI_ALLOC *v70; // [rsp+B8h] [rbp+7h] BYREF
  unsigned __int64 v71; // [rsp+C0h] [rbp+Fh] BYREF
  struct _VIDSCH_SYNC_OBJECT *v72; // [rsp+C8h] [rbp+17h] BYREF
  unsigned __int8 v73; // [rsp+118h] [rbp+67h] BYREF
  SIZE_T NumberOfBytes; // [rsp+120h] [rbp+6Fh]
  unsigned int v75; // [rsp+130h] [rbp+7Fh]

  v75 = a4;
  NumberOfBytes = a2;
  LODWORD(v4) = a3;
  OneAllocation = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  if ( *((_DWORD *)this + 23) > VIDMM_DMA_POOL::_NbDmaBufferLimitCompareWatermark )
  {
    v55 = *((_QWORD *)this + 2);
    if ( !v55
      || (v56 = *(_QWORD *)(v55 + 24), *(_DWORD *)(v56 + 328) != 2) && !*(_BYTE *)(*(_QWORD *)(v56 + 40) + 298LL) )
    {
      if ( VIDMM_DMA_POOL::_TotalDmaBufferBytes > VIDMM_DMA_POOL::_MaxDmaBufferBytes
        || VIDMM_DMA_POOL::_TotalAllocationListBytes > VIDMM_DMA_POOL::_MaxAllocationListBytes
        || VIDMM_DMA_POOL::_TotalPatchLocationListBytes > VIDMM_DMA_POOL::_MaxPatchLocationListBytes )
      {
        _InterlockedAdd(&dword_1C004E64C, 1u);
        v57 = WdLogNewEntry5_WdLowResource(this);
        *(_QWORD *)(v57 + 24) = 1100LL;
LABEL_65:
        WdLogEvent5_WdLowResource(v57);
        return 3221225495LL;
      }
    }
  }
  if ( (*((_BYTE *)this + 32) & 1) != 0 || (_DWORD)v4 )
  {
    v8 = operator new[](0xB8uLL, 0x32326956u, (POOL_TYPE)512);
    v10 = v8;
    if ( !v8 )
    {
      _InterlockedAdd(&dword_1C004E5B0, 1u);
      v57 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v57 + 24) = 1123LL;
      goto LABEL_65;
    }
    memset(v8, 0, 0xB8uLL);
    v11 = *((_DWORD *)this + 9);
    if ( !v11 )
    {
      v61 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 1848LL);
      *((_DWORD *)v10 + 20) = 2;
      v62 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))MmAllocateContiguousNodeMemory)(
                      a2,
                      (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                      v61,
                      (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                      1028,
                      0x80000000);
      v10[9] = v62;
      if ( !v62 )
      {
        _InterlockedAdd(&dword_1C004E5C4, 1u);
        v64 = WdLogNewEntry5_WdLowResource(v63);
        *(_QWORD *)(v64 + 24) = 1268LL;
        goto LABEL_82;
      }
      *((PHYSICAL_ADDRESS *)v10 + 11) = MmGetPhysicalAddress(v62);
LABEL_19:
      if ( (_DWORD)v4 )
      {
        v25 = 3;
        if ( (unsigned int)v4 > 3 )
          v25 = v4;
        v4 = v25;
        v26 = 8LL * v25;
        if ( !is_mul_ok(v25, 8uLL) )
          v26 = -1LL;
        v27 = operator new[](v26, 0x33326956u, (POOL_TYPE)512);
        v10[13] = v27;
        if ( !v27 )
        {
          _InterlockedAdd(&dword_1C004E5D0, 1u);
          v64 = WdLogNewEntry5_WdLowResource(v28);
          *(_QWORD *)(v64 + 24) = 1295LL;
          goto LABEL_82;
        }
        v29 = 24 * v4;
        if ( !is_mul_ok(v4, 0x18uLL) )
          v29 = -1LL;
        v30 = operator new[](v29, 0x34326956u, (POOL_TYPE)512);
        v10[14] = v30;
        if ( !v30 )
        {
          _InterlockedAdd(&dword_1C004E5C8, 1u);
          v64 = WdLogNewEntry5_WdLowResource(v31);
          *(_QWORD *)(v64 + 24) = 1308LL;
          goto LABEL_82;
        }
        memset(v30, 0, 24 * v4);
      }
      if ( v75 )
      {
        v32 = v75;
        v33 = 24LL * v75;
        if ( !is_mul_ok(v75, 0x18uLL) )
          v33 = -1LL;
        v34 = operator new[](v33, 0x35326956u, PagedPool);
        v10[15] = v34;
        if ( !v34 )
        {
          _InterlockedAdd(&dword_1C004E5CC, 1u);
          v64 = WdLogNewEntry5_WdLowResource(v35);
          *(_QWORD *)(v64 + 24) = 1325LL;
          goto LABEL_82;
        }
        memset(v34, 0, 24 * v32);
      }
      v36 = *((_DWORD *)this + 22);
      if ( !v36 )
      {
LABEL_37:
        if ( (*((_BYTE *)this + 32) & 1) == 0 )
          goto LABEL_38;
        v53 = operator new[](0x2000uLL, 0x37336956u, PagedPool);
        v10[22] = v53;
        if ( v53 )
        {
          memset(v53, 0, 0x2000uLL);
          v10[21] = 0LL;
LABEL_38:
          v39 = NumberOfBytes;
          v40 = v75;
          v10[5] = NumberOfBytes;
          *((_DWORD *)v10 + 12) = v4;
          *((_DWORD *)v10 + 13) = v40;
          v10[17] = this;
          v10[20] = 0LL;
          if ( (*((_DWORD *)this + 8) & 0x10) != 0 )
          {
            if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 447LL) )
            {
              VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                          *(VIDMM_PROCESS **)(*((_QWORD *)this + 2) + 8LL),
                                          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 208LL),
                                          *((_DWORD *)this + 2));
              if ( VirtualAddressAllocator )
              {
                v45 = (struct VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                                        VirtualAddressAllocator,
                                                        v10[8],
                                                        0LL,
                                                        1LL,
                                                        v39,
                                                        0LL,
                                                        *(_QWORD *)(v43 + 2400),
                                                        *(_QWORD *)(v43 + 2408),
                                                        4096,
                                                        (*(_DWORD *)(v44 + 32) < 0x6000u) | 0x12LL,
                                                        0LL,
                                                        v42,
                                                        0LL);
                if ( v45 )
                {
                  v10[12] = *((_QWORD *)v45 + 12);
                  OneAllocation = VIDMM_GLOBAL::CommitVirtualAddressRange(
                                    *(VIDMM_GLOBAL **)this,
                                    VirtualAddressAllocator,
                                    (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*(_QWORD *)(v10[8] + 8LL) + 72LL)
                                                                + 176LL * *((unsigned int *)this + 2)),
                                    v45,
                                    KeGetCurrentThread() == *(struct _KTHREAD **)(**(_QWORD **)this + 8LL),
                                    0LL,
                                    0LL,
                                    0LL);
                  if ( OneAllocation >= 0 )
                    goto LABEL_43;
                }
              }
              else
              {
                OneAllocation = -1073741801;
              }
LABEL_84:
              operator delete((void *)v10[22]);
              operator delete((void *)v10[16]);
              operator delete((void *)v10[15]);
              operator delete((void *)v10[14]);
              operator delete((void *)v10[13]);
              v65 = (struct VIDMM_ALLOC *)v10[8];
              if ( v65 )
                VIDMM_GLOBAL::CloseOneAllocation(*(VIDMM_GLOBAL **)this, v65, 0LL, 0, 0, 0LL);
              v66 = (struct _VIDMM_GLOBAL_ALLOC *)v10[7];
              if ( v66 )
                VIDMM_GLOBAL::DestroyOneAllocation(*(VIDMM_GLOBAL **)this, *((struct VIDMM_DEVICE **)this + 2), v66, 1);
              v67 = (void *)v10[9];
              if ( v67 )
                MmFreeContiguousMemorySpecifyCache(v67, v39, *((MEMORY_CACHING_TYPE *)v10 + 20));
              operator delete(v10);
              return (unsigned int)OneAllocation;
            }
            v10[12] = *(_QWORD *)(v10[8] + 144LL);
          }
LABEL_43:
          *((_DWORD *)this + 8) &= ~8u;
          *((_DWORD *)this + 32) += *((_DWORD *)v10 + 10);
          v46 = (_QWORD *)*((_QWORD *)this + 2);
          *((_DWORD *)this + 33) += 24 * *((_DWORD *)v10 + 12);
          *((_DWORD *)this + 34) += 24 * *((_DWORD *)v10 + 13);
          if ( v46 )
          {
            v47 = *(_QWORD *)(*(_QWORD *)(v46[1] + 16LL) + 8LL * *(unsigned int *)(*(_QWORD *)(*v46 + 24LL) + 208LL));
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v47 + 432, 0LL);
            *(_QWORD *)(v47 + 448) += v10[5];
            ++*(_DWORD *)(v47 + 440);
            *(_DWORD *)(v47 + 456) += 24 * *((_DWORD *)v10 + 12);
            *(_DWORD *)(v47 + 460) += 24 * *((_DWORD *)v10 + 13);
            ExReleasePushLockExclusiveEx(v47 + 432, 0LL);
            KeLeaveCriticalRegion();
          }
          _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalDmaBufferBytes, v10[5]);
          _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalAllocationListBytes, 24LL * *((unsigned int *)v10 + 12));
          _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalPatchLocationListBytes, 24LL * *((unsigned int *)v10 + 13));
          ++*((_DWORD *)this + 23);
          VIDMM_DMA_POOL::LockAllPoolForAddRemove(0);
          v48 = (_QWORD *)((char *)this + 96);
          v49 = *((_QWORD *)this + 12);
          if ( *(VIDMM_DMA_POOL **)(v49 + 8) != (VIDMM_DMA_POOL *)((char *)this + 96) )
            __fastfail(3u);
          v50 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
          *v10 = v49;
          v10[1] = v48;
          *(_QWORD *)(v49 + 8) = v10;
          *v48 = v10;
          ExReleaseResourceLite(v50);
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v51) + 24) = v10;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0pppxxxp(
                *((unsigned int *)v10 + 13),
                *((unsigned int *)v10 + 12),
                *(const GUID **)this,
                *((_QWORD *)this + 3),
                *(_QWORD *)(*(_QWORD *)this + 24LL),
                v10,
                v10[5],
                *((unsigned int *)v10 + 12),
                *((unsigned int *)v10 + 13),
                v10[7]);
          }
          return (unsigned int)OneAllocation;
        }
        _InterlockedAdd(&dword_1C004E5D4, 1u);
        v64 = WdLogNewEntry5_WdLowResource(v54);
        *(_QWORD *)(v64 + 24) = 1357LL;
        goto LABEL_82;
      }
      v37 = operator new[](v36, 0x32336956u, (POOL_TYPE)512);
      v10[16] = v37;
      if ( v37 )
      {
        memset(v37, 0, *((unsigned int *)this + 22));
        goto LABEL_37;
      }
      _InterlockedAdd(&dword_1C004E62C, 1u);
      v64 = WdLogNewEntry5_WdLowResource(v38);
      *(_QWORD *)(v64 + 24) = 1339LL;
LABEL_82:
      WdLogEvent5_WdLowResource(v64);
      OneAllocation = -1073741801;
      goto LABEL_83;
    }
    v12 = *(VIDMM_GLOBAL **)this;
    if ( (*((_BYTE *)this + 32) & 1) != 0 )
      v13 = ((~*(_BYTE *)(1560LL * *((unsigned int *)this + 2) + *((_QWORD *)v12 + 5023) + 436) & 4) << 13) | 0x10000040;
    else
      v13 = *(_BYTE *)(*((_QWORD *)this + 3) + 446LL) != 0 ? 72 : 32840;
    v14 = *(_DWORD *)(*((_QWORD *)v12 + 3) + 308LL);
    if ( (v14 & 8) != 0 || (v14 & 0x10) != 0 )
      v13 |= 4u;
    OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                      v12,
                      *((struct VIDMM_DEVICE **)this + 2),
                      *((_DWORD *)this + 2),
                      a2,
                      a2,
                      0,
                      v11,
                      0,
                      0,
                      (struct _DXGK_ALLOCATIONINFOFLAGS)v13,
                      0LL,
                      0LL,
                      0LL,
                      0xA0000000,
                      0,
                      0LL,
                      0,
                      0LL,
                      (struct _VIDMM_GLOBAL_ALLOC **)v10 + 7);
    if ( OneAllocation < 0 )
    {
      _InterlockedAdd(&dword_1C004E5B8, 1u);
      v59 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v59 + 24) = 1185LL;
    }
    else
    {
      v16 = (struct _VIDMM_MULTI_ALLOC **)(v10 + 8);
      OneAllocation = VIDMM_GLOBAL::OpenOneAllocation(
                        *(VIDMM_GLOBAL **)this,
                        *((struct VIDMM_DEVICE **)this + 2),
                        (struct _VIDMM_GLOBAL_ALLOC *)v10[7],
                        0LL,
                        0,
                        0LL,
                        (struct VIDMM_ALLOC **)v10 + 8,
                        &v73);
      if ( OneAllocation >= 0 )
      {
        v18 = *v16;
        if ( (*((_DWORD *)*v16 + 7) & 3) != 0 )
          goto LABEL_19;
        if ( (*((_BYTE *)this + 32) & 1) != 0 )
        {
          VIDMM_GLOBAL::AllocatePagingBufferResources(*(VIDMM_GLOBAL **)this, v18);
        }
        else
        {
          v19 = *((_QWORD *)v18 + 1);
          v20 = 176LL * *((unsigned int *)this + 2);
          v70 = *v16;
          v71 = *(_QWORD *)(v19 + 72) + v20;
          v21 = *(VIDMM_GLOBAL **)this;
          v68 = 0LL;
          v69 = 0LL;
          OneAllocation = VIDMM_GLOBAL::MakeResident(v21, (struct VIDMM_PAGING_QUEUE *)v71, &v70, 1uLL, 3u, &v68, &v69);
          if ( OneAllocation == 259 )
          {
            v24 = *(VIDMM_GLOBAL **)this;
            v72 = *(struct _VIDSCH_SYNC_OBJECT **)(v71 + 88);
            v71 = v68;
            VIDMM_GLOBAL::WaitForFences(v24, &v72, &v71, 1u, 0LL);
            OneAllocation = 0;
          }
        }
        if ( OneAllocation >= 0 )
          goto LABEL_19;
        v60 = WdLogNewEntry5_WdAssertion(v23, v22);
        *(_QWORD *)(v60 + 24) = *v16;
        WdLogEvent5_WdAssertion(v60);
LABEL_83:
        v39 = NumberOfBytes;
        goto LABEL_84;
      }
      _InterlockedAdd(&dword_1C004E5BC, 1u);
      v59 = WdLogNewEntry5_WdLowResource(v17);
      *(_QWORD *)(v59 + 24) = 1205LL;
    }
    WdLogEvent5_WdLowResource(v59);
    goto LABEL_83;
  }
  v58 = WdLogNewEntry5_WdAssertion(this, a2);
  *(_QWORD *)(v58 + 24) = 1111LL;
  WdLogEvent5_WdAssertion(v58);
  return 3221225485LL;
}
