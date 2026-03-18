/*
 * XREFs of ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C006E96C
 * Callers:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C006E8AC (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 * Callees:
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0059008 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00592E4 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C006CAE0 (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C006CBDC (-AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C006CD2C (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C006CE8C (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C006CFA0 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C006E300 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0071FF8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00735B0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00AB6B4 (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00B4CF0 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
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
  VIDMM_PROCESS *v8; // r12
  __int64 v11; // rcx
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rax
  bool v16; // zf
  int v17; // eax
  char v18; // cl
  char *v19; // rbx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **v20; // rax
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **i; // r15
  int v22; // edi
  int v23; // r14d
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **v24; // r12
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *j; // rcx
  __int64 v26; // r10
  struct VIDMM_VAD **v27; // rcx
  char *PoolWithTag; // rax
  __int64 v29; // r8
  __int64 v30; // rax
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *v36; // rcx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *v37; // rax
  unsigned int v38; // r12d
  unsigned int v39; // r14d
  unsigned int v40; // eax
  struct VIDMM_MAPPED_VA_RANGE *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  volatile signed __int32 *v44; // r13
  struct _MDL *v45; // rdi
  int v46; // eax
  bool v47; // r8
  __int64 v48; // rax
  int v49; // eax
  VIDMM_FENCE_STORAGE_PAGE *v50; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v51; // rax
  VIDMM_FENCE_STORAGE_PAGE **v52; // rdx
  CVirtualAddressAllocator *v53; // rax
  unsigned int v54; // [rsp+78h] [rbp-90h]
  struct _KTHREAD **VirtualAddressAllocator; // [rsp+80h] [rbp-88h]
  unsigned __int64 v56; // [rsp+90h] [rbp-78h] BYREF
  struct VIDMM_ALLOC *v57; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v58[20]; // [rsp+A8h] [rbp-60h] BYREF
  char v60; // [rsp+160h] [rbp+58h]

  v8 = a4;
  *a6 = 0LL;
  if ( (*((_BYTE *)a2 + 40872) & 2) == 0 )
    return 0LL;
  v11 = *((unsigned int *)a2 + 1748);
  if ( (unsigned int)v11 <= 1 )
  {
    v12 = 1;
  }
  else
  {
    v12 = a7;
    v13 = 1 << v11;
    if ( a7 )
    {
      if ( (-v13 & a7) != 0 )
      {
        v14 = WdLogNewEntry5_WdWarning(v11, a2);
        WdLogEvent5_WdWarning(v14);
        return 3221225485LL;
      }
    }
    else
    {
      v12 = v13 - 1;
    }
  }
  v54 = 0;
  if ( a8 )
  {
    v16 = !_BitScanForward((unsigned int *)&v17, v12);
    v18 = -1;
    if ( !v16 )
      v18 = v17;
    v54 = v18;
  }
  v19 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  v20 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)((char *)this + 56);
  for ( i = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)*((_QWORD *)this + 7);
        i != v20;
        i = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)*i )
  {
    if ( a2 == i[6] )
      goto LABEL_18;
  }
  i = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)VIDMM_FENCE_STORAGE_PAGE::AllocateStoragePageGpuData(this, a2);
  if ( !i )
  {
    v22 = -1073741801;
    LOBYTE(v23) = 0;
    goto LABEL_64;
  }
LABEL_18:
  v24 = i + 4;
  for ( j = i[4]; j != (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)v24; j = *(struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)j )
  {
    if ( a4 == *((struct VIDMM_PROCESS **)j - 1) && (!a8 || *((_DWORD *)j + 5) == v12) )
    {
      ++*((_DWORD *)j + 4);
      v19 = (char *)j - 32;
      break;
    }
  }
  VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                  a4,
                                                  *(_DWORD *)(*((_QWORD *)a2 + 3) + 208LL),
                                                  v54);
  v27 = VirtualAddressAllocator;
  if ( !VirtualAddressAllocator || (v60 = 1, *(_BYTE *)(v26 + 2459)) )
    v60 = 0;
  v23 = 0;
  if ( v19 )
  {
    v23 = *((_DWORD *)v19 + 13);
    *((_DWORD *)v19 + 13) = v12 | v23;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x65616956u);
    v19 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v22 = -1073741801;
      goto LABEL_63;
    }
    memset(PoolWithTag, 0, 0x38uLL);
    *((_QWORD *)v19 + 3) = a4;
    *((_DWORD *)v19 + 12) = 1;
    *((_QWORD *)v19 + 1) = i;
    *((_DWORD *)v19 + 13) = v12;
    ++*((_DWORD *)i + 16);
    if ( v60 )
    {
      v30 = *((_QWORD *)a2 + 3);
      if ( a8 )
      {
        v19[17] = 1;
        v31 = *((_QWORD *)a2 + 5110);
        v32 = *((_QWORD *)a2 + 5111);
      }
      else
      {
        v31 = *(_QWORD *)(v30 + 2376);
        v32 = *(_QWORD *)(v30 + 2384);
      }
      v56 = 0LL;
      v22 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
              VirtualAddressAllocator,
              0x1000uLL,
              v29,
              v31,
              v32,
              0x1000u,
              &v56);
      if ( v22 < 0 )
      {
LABEL_37:
        v35 = WdLogNewEntry5_WdWarning(v34, v33);
        WdLogEvent5_WdWarning(v35);
        goto LABEL_56;
      }
      *(_QWORD *)v19 = v56;
      v19[16] = 1;
      VIDMM_PROCESS::OpenAdapter((struct _KTHREAD **)a4, a2);
    }
    else
    {
      *(_QWORD *)v19 = *(_QWORD *)(*((_QWORD *)this + 14) + 48LL) << 12;
      v19[16] = 0;
    }
    v36 = i[5];
    v37 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)(v19 + 32);
    if ( *(struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***)v36 != v24 )
      goto LABEL_69;
    *((_QWORD *)v19 + 5) = v36;
    *(_QWORD *)v37 = v24;
    *(_QWORD *)v36 = v37;
    v27 = VirtualAddressAllocator;
    i[5] = v37;
  }
  if ( !v60 || (v38 = 0, (v39 = *((_DWORD *)v19 + 13) & ~v23) == 0) )
  {
LABEL_70:
    *a6 = *(_QWORD *)v19 + *((unsigned int *)a5 + 4);
    *((_QWORD *)this + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  while ( 1 )
  {
    v40 = v39;
    if ( (v39 & 1) == 0 )
      goto LABEL_53;
    v41 = (struct VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                            v27,
                                            (__int64)this + 112,
                                            0LL,
                                            2u,
                                            0x1000uLL,
                                            *(_QWORD *)v19,
                                            0LL,
                                            0LL,
                                            0x1000u,
                                            (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)17LL,
                                            0LL,
                                            v38,
                                            0LL,
                                            1);
    v44 = (volatile signed __int32 *)v41;
    if ( !v41 )
      break;
    if ( v19[17] )
    {
      v45 = (struct _MDL *)*((_QWORD *)this + 14);
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)a2 + 8LL) )
      {
        v46 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                (CVirtualAddressAllocator *)VirtualAddressAllocator,
                v41,
                v38,
                0,
                0LL,
                v45,
                0,
                &v57);
      }
      else
      {
        memset(v58, 0, 0x58uLL);
        v58[5] = VirtualAddressAllocator;
        LODWORD(v58[0]) = 113;
        v58[6] = v44;
        HIDWORD(v58[0]) = v38;
        v58[7] = v45;
        v46 = VIDMM_GLOBAL::QueueLazySystemCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v58, v47);
      }
    }
    else
    {
      v46 = VIDMM_GLOBAL::CommitVirtualAddressRange(
              a2,
              (struct CVirtualAddressAllocator *)VirtualAddressAllocator,
              (struct VIDMM_PAGING_QUEUE *)(*((_QWORD *)a3 + 9) + 176LL * v38),
              v41,
              0,
              *((struct _MDL **)this + 14),
              0LL,
              0LL);
    }
    v22 = v46;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v44, VirtualAddressAllocator);
    if ( v22 < 0 )
      goto LABEL_37;
    v40 = v39;
LABEL_53:
    v39 >>= 1;
    ++v38;
    if ( v40 < 2 )
      goto LABEL_70;
    v27 = VirtualAddressAllocator;
  }
  v48 = WdLogNewEntry5_WdWarning(v43, v42);
  WdLogEvent5_WdWarning(v48);
  v22 = -1073741823;
LABEL_56:
  v49 = *((_DWORD *)v19 + 12);
  LOBYTE(v23) = 0;
  if ( v49 != 1 )
    goto LABEL_62;
  v50 = (VIDMM_FENCE_STORAGE_PAGE *)(v19 + 32);
  LOBYTE(v23) = 1;
  v51 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)v19 + 4);
  if ( !v51 )
    goto LABEL_61;
  if ( v51[1] != v50 || (v52 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)v19 + 5), *v52 != v50) )
LABEL_69:
    __fastfail(3u);
  *v52 = (VIDMM_FENCE_STORAGE_PAGE *)v51;
  v51[1] = (VIDMM_FENCE_STORAGE_PAGE *)v52;
LABEL_61:
  VIDMM_FENCE_STORAGE_PAGE::ReleaseStoragePageGpuData(v50, (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***)i);
  v49 = *((_DWORD *)v19 + 12);
LABEL_62:
  *((_DWORD *)v19 + 12) = v49 - 1;
LABEL_63:
  v8 = a4;
LABEL_64:
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( (_BYTE)v23 )
  {
    if ( v19[16] )
    {
      v53 = VIDMM_PROCESS::GetVirtualAddressAllocator(v8, *(_DWORD *)(*((_QWORD *)a2 + 3) + 208LL), v54);
      CVirtualAddressAllocator::FreeVirtualAddressRange(v53, *(_QWORD *)v19);
      VIDMM_PROCESS::CloseAdapter((struct _KTHREAD **)v8, a2);
    }
    ExFreePoolWithTag(v19, 0);
  }
  return (unsigned int)v22;
}
