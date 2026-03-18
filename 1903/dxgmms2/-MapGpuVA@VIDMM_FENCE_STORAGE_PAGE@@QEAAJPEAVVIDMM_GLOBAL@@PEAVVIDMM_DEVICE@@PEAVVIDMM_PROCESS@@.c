/*
 * XREFs of ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C005FB78
 * Callers:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C005FAB8 (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C005F704 (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C005F800 (-AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C005F950 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005FF14 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0062E5C (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0062F84 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006C358 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006DB80 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0074330 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00AEC94 (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00B81A4 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::MapGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_DEVICE *a3,
        struct VIDMM_PROCESS *a4,
        struct VIDMM_MONITORED_FENCE_STORAGE *a5,
        unsigned __int64 *a6,
        unsigned int a7,
        bool a8)
{
  VIDMM_PROCESS *v8; // r13
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  char *v14; // rbx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **v15; // rax
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **i; // r14
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **v17; // r15
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *j; // rcx
  __int64 v19; // r10
  CVirtualAddressAllocator *v20; // rcx
  bool v21; // r13
  int v22; // ebp
  unsigned int v23; // r15d
  unsigned int v24; // ebp
  char *PoolWithTag; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *v33; // rcx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *v34; // rax
  unsigned int v35; // r13d
  struct VIDMM_MAPPED_VA_RANGE *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v39; // rdi
  int v40; // eax
  __int64 v41; // rax
  bool v42; // zf
  int v43; // eax
  char v44; // cl
  int v45; // edi
  __int64 v46; // rax
  struct _MDL *v47; // r12
  bool v48; // r8
  __int64 v49; // rax
  int v50; // eax
  VIDMM_FENCE_STORAGE_PAGE *v51; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v52; // rax
  VIDMM_FENCE_STORAGE_PAGE **v53; // rdx
  CVirtualAddressAllocator *v54; // rax
  CVirtualAddressAllocator *VirtualAddressAllocator; // [rsp+70h] [rbp-C8h]
  unsigned __int64 v56; // [rsp+78h] [rbp-C0h] BYREF
  struct VIDMM_ALLOC *v57; // [rsp+80h] [rbp-B8h] BYREF
  _QWORD v58[21]; // [rsp+90h] [rbp-A8h] BYREF
  unsigned int v60; // [rsp+148h] [rbp+10h]

  v8 = a4;
  *a6 = 0LL;
  if ( (*((_BYTE *)a2 + 40872) & 2) == 0 )
    return 0LL;
  v11 = *((unsigned int *)a2 + 1748);
  v12 = 1;
  if ( (unsigned int)v11 > 1 && (v13 = a7, v12 = (1 << v11) - 1, a7) )
  {
    if ( (~v12 & a7) != 0 )
    {
      v41 = WdLogNewEntry5_WdWarning(v11, a2);
      WdLogEvent5_WdWarning(v41);
      return 3221225485LL;
    }
  }
  else
  {
    v13 = v12;
  }
  v60 = 0;
  if ( a8 )
  {
    v42 = !_BitScanForward((unsigned int *)&v43, v13);
    v44 = -1;
    if ( !v42 )
      v44 = v43;
    v60 = v44;
  }
  v14 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  v15 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)((char *)this + 56);
  for ( i = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)*((_QWORD *)this + 7);
        i != v15;
        i = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)*i )
  {
    if ( a2 == i[6] )
      goto LABEL_8;
  }
  i = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)VIDMM_FENCE_STORAGE_PAGE::AllocateStoragePageGpuData(this, a2);
  if ( !i )
  {
    v45 = -1073741801;
    LOBYTE(v22) = 0;
    goto LABEL_65;
  }
LABEL_8:
  v17 = i + 4;
  for ( j = i[4]; j != (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)v17; j = *(struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)j )
  {
    if ( v8 == *((VIDMM_PROCESS **)j - 1) && (!a8 || *((_DWORD *)j + 5) == v13) )
    {
      ++*((_DWORD *)j + 4);
      v14 = (char *)j - 32;
      break;
    }
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(v8, *(_DWORD *)(*((_QWORD *)a2 + 3) + 208LL), v60);
  v20 = VirtualAddressAllocator;
  v21 = VirtualAddressAllocator && !*(_BYTE *)(v19 + 2491);
  v22 = 0;
  if ( v14 )
  {
    v22 = *((_DWORD *)v14 + 13);
    *((_DWORD *)v14 + 13) = v13 | v22;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x65616956u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v45 = -1073741801;
      goto LABEL_64;
    }
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    *((_DWORD *)PoolWithTag + 12) = 1;
    *((_QWORD *)PoolWithTag + 3) = a4;
    *((_QWORD *)PoolWithTag + 1) = i;
    *((_DWORD *)PoolWithTag + 13) = v13;
    ++*((_DWORD *)i + 16);
    if ( v21 )
    {
      v28 = *((_QWORD *)a2 + 3);
      if ( a8 )
      {
        v14[17] = 1;
        v29 = *((_QWORD *)a2 + 5110);
        v30 = *((_QWORD *)a2 + 5111);
      }
      else
      {
        v29 = *(_QWORD *)(v28 + 2400);
        v30 = *(_QWORD *)(v28 + 2408);
      }
      v56 = 0LL;
      v45 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
              (struct _KTHREAD **)VirtualAddressAllocator,
              0x1000uLL,
              v27,
              v29,
              v30,
              0x1000u,
              &v56);
      if ( v45 < 0 )
      {
LABEL_52:
        v46 = WdLogNewEntry5_WdWarning(v32, v31);
        WdLogEvent5_WdWarning(v46);
        goto LABEL_57;
      }
      *(_QWORD *)v14 = v56;
      v14[16] = 1;
      VIDMM_PROCESS::OpenAdapter(a4, a2);
    }
    else
    {
      *(_QWORD *)PoolWithTag = *(_QWORD *)(*((_QWORD *)this + 14) + 48LL) << 12;
      PoolWithTag[16] = 0;
    }
    v33 = i[5];
    v34 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)(v14 + 32);
    if ( *(struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***)v33 != v17 )
      goto LABEL_70;
    *((_QWORD *)v14 + 5) = v33;
    *(_QWORD *)v34 = v17;
    *(_QWORD *)v33 = v34;
    v20 = VirtualAddressAllocator;
    i[5] = v34;
  }
  if ( !v21 || (v23 = 0, (v24 = *((_DWORD *)v14 + 13) & ~v22) == 0) )
  {
LABEL_20:
    *a6 = *(_QWORD *)v14 + *((unsigned int *)a5 + 4);
    *((_QWORD *)this + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  while ( 1 )
  {
    v35 = v24;
    if ( (v24 & 1) == 0 )
      goto LABEL_37;
    v36 = (struct VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                            v20,
                                            (char *)this + 112,
                                            0LL,
                                            2LL,
                                            4096LL,
                                            *(_QWORD *)v14,
                                            0LL,
                                            0LL,
                                            4096,
                                            17LL,
                                            0LL,
                                            v23,
                                            0LL);
    v39 = v36;
    if ( !v36 )
      break;
    if ( v14[17] )
    {
      v47 = (struct _MDL *)*((_QWORD *)this + 14);
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)a2 + 8LL) )
      {
        v40 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                VirtualAddressAllocator,
                v36,
                v23,
                0,
                0LL,
                v47,
                0,
                &v57);
      }
      else
      {
        memset(v58, 0, 0x58uLL);
        v58[5] = VirtualAddressAllocator;
        LODWORD(v58[0]) = 113;
        v58[6] = v39;
        HIDWORD(v58[0]) = v23;
        v58[7] = v47;
        v40 = VIDMM_GLOBAL::QueueLazySystemCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v58, v48);
      }
    }
    else
    {
      v40 = VIDMM_GLOBAL::CommitVirtualAddressRange(
              a2,
              VirtualAddressAllocator,
              (struct VIDMM_PAGING_QUEUE *)(*((_QWORD *)a3 + 9) + 176LL * v23),
              v36,
              0,
              *((struct _MDL **)this + 14),
              0LL,
              0LL);
    }
    v45 = v40;
    if ( v40 < 0 )
      goto LABEL_52;
LABEL_37:
    v24 >>= 1;
    ++v23;
    if ( v35 < 2 )
      goto LABEL_20;
    v20 = VirtualAddressAllocator;
  }
  v49 = WdLogNewEntry5_WdWarning(v38, v37);
  WdLogEvent5_WdWarning(v49);
  v45 = -1073741823;
LABEL_57:
  v50 = *((_DWORD *)v14 + 12);
  LOBYTE(v22) = 0;
  if ( v50 != 1 )
    goto LABEL_63;
  v51 = (VIDMM_FENCE_STORAGE_PAGE *)(v14 + 32);
  LOBYTE(v22) = 1;
  v52 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)v14 + 4);
  if ( !v52 )
    goto LABEL_62;
  if ( v52[1] != v51 || (v53 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)v14 + 5), *v53 != v51) )
LABEL_70:
    __fastfail(3u);
  *v53 = (VIDMM_FENCE_STORAGE_PAGE *)v52;
  v52[1] = (VIDMM_FENCE_STORAGE_PAGE *)v53;
LABEL_62:
  VIDMM_FENCE_STORAGE_PAGE::ReleaseStoragePageGpuData(v51, (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***)i);
  v50 = *((_DWORD *)v14 + 12);
LABEL_63:
  *((_DWORD *)v14 + 12) = v50 - 1;
LABEL_64:
  v8 = a4;
LABEL_65:
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( (_BYTE)v22 )
  {
    if ( v14[16] )
    {
      v54 = VIDMM_PROCESS::GetVirtualAddressAllocator(v8, *(_DWORD *)(*((_QWORD *)a2 + 3) + 208LL), v60);
      CVirtualAddressAllocator::FreeVirtualAddressRange(v54, *(_QWORD *)v14);
      VIDMM_PROCESS::CloseAdapter(v8, a2);
    }
    ExFreePoolWithTag(v14, 0);
  }
  return (unsigned int)v45;
}
