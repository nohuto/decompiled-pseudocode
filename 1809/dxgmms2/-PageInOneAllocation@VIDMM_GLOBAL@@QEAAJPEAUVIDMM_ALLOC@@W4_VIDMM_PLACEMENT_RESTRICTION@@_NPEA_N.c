/*
 * XREFs of ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00728D0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006B6DC (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C006B8C0 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C006E49C (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0071660 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00789C4 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0079DE8 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00A9D10 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0010914 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00182D8 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqx @ 0x1C00269DC (McTemplateK0pqx.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006FCE8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0072E9C (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C0072EDC (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0073008 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00735B0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C0075E14 (-VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C0075E3C (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_N@Z @ 0x1C0075E94 (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C0075F44 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0076034 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00A73A8 (-CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00AC89C (-TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C00B4134 (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00BDBB8 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInOneAllocation(
        __int64 a1,
        __int64 **a2,
        int a3,
        unsigned __int8 a4,
        _BYTE *a5,
        struct VIDMM_ALLOC **a6)
{
  unsigned int v6; // esi
  _BYTE *v7; // r13
  __int64 **v10; // rbx
  __int64 *v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r13
  unsigned int *v20; // r14
  VIDMM_GLOBAL *v21; // rcx
  VIDMM_GLOBAL *v22; // rcx
  unsigned __int8 v23; // r8
  VIDMM_GLOBAL *v24; // rcx
  unsigned __int8 v25; // r8
  int v26; // eax
  __int64 v27; // rcx
  int v28; // ecx
  char v29; // al
  __int64 v30; // rdx
  int v31; // ecx
  __int64 *v32; // rax
  __int64 v33; // r8
  _QWORD *v34; // rdx
  struct _KTHREAD **v35; // r10
  struct _KTHREAD **v36; // r15
  char v37; // cl
  __int64 v38; // rcx
  const GUID *v39; // r8
  char v40; // r13
  __int64 **v41; // r12
  unsigned int v42; // edi
  __int64 **v43; // r13
  __int64 v44; // rdx
  __int64 v45; // rcx
  CVirtualAddressAllocator *v46; // r13
  unsigned __int64 v47; // rbp
  unsigned __int64 v48; // rbx
  unsigned int v49; // r15d
  const GUID *v50; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // r9d
  __int64 *v55; // rcx
  _QWORD *v56; // rax
  __int64 *v57; // rdx
  __int64 v58; // rcx
  unsigned int v59; // ebp
  __int64 v60; // rax
  __int64 v61; // rcx
  VIDMM_CPU_HOST_APERTURE **v62; // rcx
  VIDMM_GLOBAL *v63; // rcx
  VIDMM_GLOBAL *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 *v69; // r15
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  void *v75; // [rsp+20h] [rbp-E8h]
  char v76; // [rsp+40h] [rbp-C8h]
  unsigned __int8 v77; // [rsp+41h] [rbp-C7h] BYREF
  char v78; // [rsp+42h] [rbp-C6h]
  unsigned int v79; // [rsp+44h] [rbp-C4h]
  _BYTE *v80; // [rsp+48h] [rbp-C0h]
  CVirtualAddressAllocator *v81; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v82; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v83; // [rsp+60h] [rbp-A8h]
  struct VIDMM_ALLOC **v84; // [rsp+68h] [rbp-A0h]
  __int64 v85; // [rsp+70h] [rbp-98h]
  struct _MDL *FullMDL; // [rsp+78h] [rbp-90h]
  __int64 v87; // [rsp+80h] [rbp-88h]
  __int64 **v88; // [rsp+88h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-78h] BYREF

  v6 = 0;
  v7 = a5;
  v84 = a6;
  v10 = a2;
  v88 = a2;
  *a6 = 0LL;
  v80 = a5;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
  if ( (*((_DWORD *)v10 + 7) & 3) == 1 )
  {
    v55 = v10[7];
    v56 = v10 + 7;
    if ( (__int64 **)v55[1] != v10 + 7 || (v57 = v10[8], (_QWORD *)*v57 != v56) )
      __fastfail(3u);
    *v57 = (__int64)v55;
    v55[1] = (__int64)v57;
    *((_DWORD *)v10 + 7) &= 0xFFFFFFFC;
    v10[8] = 0LL;
    *v56 = 0LL;
  }
  v12 = *v10;
  v77 = 0;
  v13 = *v12;
  v87 = *v12;
  LODWORD(v15) = VIDMM_GLOBAL::ReferenceAllocationForPreparation((VIDMM_GLOBAL *)a1, (struct VIDMM_ALLOC *)v10, &v77);
  if ( (int)v15 >= 0 )
    goto LABEL_20;
  v16 = v13 + 480;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v16, 0LL);
    if ( !*(_QWORD *)(v13 + 224) )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v17);
      VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL *)a1, a3 != 0, *(_DWORD *)(v13 + 76) & 0x3F);
      if ( *v84 )
        VIDMM_GLOBAL::EvictTemporaryAllocations(
          (VIDMM_GLOBAL *)a1,
          a3 != 0,
          *(_DWORD *)(**(_QWORD **)*v84 + 76LL) & 0x3F);
      LODWORD(v15) = VIDMM_GLOBAL::FindResourcesForOneAllocation(a1, v10, (unsigned int)a3, a4);
      if ( (int)v15 < 0 )
      {
        if ( !g_IsInternalReleaseOrDbg )
          goto LABEL_95;
        WdLogNewEntry5_WdTrace(v18);
        goto LABEL_92;
      }
    }
    v19 = **v10;
    v20 = *(unsigned int **)(v19 + 224);
    VIDMM_SEGMENT::TrimResidentBytes((VIDMM_SEGMENT *)v20, *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v19 + 488));
    if ( !VIDMM_GLOBAL::VerifyGlobalResidentLimit(v21, *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v19 + 488))
      && *(_DWORD *)(a1 + 3704) )
    {
      v59 = 0;
      do
        VIDMM_SEGMENT::TrimResidentBytes(
          *(VIDMM_SEGMENT **)(*(_QWORD *)(a1 + 3712) + 8LL * v59++),
          *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v19 + 488));
      while ( v59 < *(_DWORD *)(a1 + 3704) );
      v13 = v87;
    }
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v22);
    VIDMM_GLOBAL::EvictAllAllocationInList(v22, (struct _LIST_ENTRY *)(a1 + 3736), v23);
    VIDMM_GLOBAL::EvictAllAllocationInList(v24, (struct _LIST_ENTRY *)(a1 + 3752), v25);
    if ( (*(_DWORD *)(352LL * v20[95] + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 2416LL) + 16) & 4) != 0 )
      VIDMM_SEGMENT::ProcessPendingMoves((VIDMM_SEGMENT *)v20);
    v26 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v19 + 224) + 40LL))(*(_QWORD *)(v19 + 224), v19);
    v15 = v26;
    if ( v26 >= 0 )
      break;
    if ( !g_IsInternalReleaseOrDbg )
    {
      v16 = v13 + 480;
      goto LABEL_95;
    }
    v60 = WdLogNewEntry5_WdTrace(v27);
    *(_QWORD *)(v60 + 24) = v19;
    *(_QWORD *)(v60 + 32) = v15;
    WdLogNewEntry5_WdTrace(v61);
    v16 = v13 + 480;
LABEL_92:
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v58) + 24) = v10;
LABEL_95:
    v62 = *(VIDMM_CPU_HOST_APERTURE ***)(v13 + 224);
    if ( v62 )
    {
      if ( *(_DWORD *)(v13 + 472) != -1 )
      {
        VIDMM_CPU_HOST_APERTURE::ReleaseRange(v62[61], (struct _VIDMM_GLOBAL_ALLOC *)v13);
        v62 = *(VIDMM_CPU_HOST_APERTURE ***)(v13 + 224);
      }
      (*((void (__fastcall **)(VIDMM_CPU_HOST_APERTURE **, __int64, _QWORD, _QWORD))*v62 + 3))(
        v62,
        v13,
        *(_QWORD *)(v13 + 208),
        *(_QWORD *)(v13 + 16));
      *(_QWORD *)(v13 + 224) = 0LL;
      *(_QWORD *)(v13 + 208) = 0LL;
    }
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
    VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v63, (struct _LIST_ENTRY *)(a1 + 3736));
    VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v64, (struct _LIST_ENTRY *)(a1 + 3752));
    v67 = WdLogNewEntry5_WdWarning(v66, v65);
    *(_QWORD *)(v67 + 32) = a3;
    *(_QWORD *)(v67 + 24) = v10;
    WdLogEvent5_WdWarning(v67);
    if ( a3 || (*(_DWORD *)(v13 + 76) & 0x40) == 0 || a4 )
      goto LABEL_19;
    a3 = 2;
    VIDMM_GLOBAL::TrimMarkedForEvictionAllocations(
      (VIDMM_GLOBAL *)a1,
      *(_QWORD *)(v13 + 16) + (*(_QWORD *)(v13 + 16) >> 2));
  }
  VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)a1, *(_DWORD *)(v19 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
  v77 = 1;
  LODWORD(v15) = 0;
  ExReleasePushLockExclusiveEx(v13 + 480, 0LL);
  KeLeaveCriticalRegion();
LABEL_19:
  v7 = v80;
LABEL_20:
  if ( (*(_DWORD *)(v13 + 76) & 0x100000) != 0 )
  {
    LODWORD(v15) = -1071775466;
    *v7 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_123;
    v68 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
    v68[5] = 16995LL;
LABEL_122:
    v68[4] = v13;
    v68[3] = v10;
    goto LABEL_123;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 2470LL) || *(_BYTE *)(*(_QWORD *)(a1 + 16) + 777LL) )
  {
    LODWORD(v15) = -1073741130;
    *v7 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_123;
    v68 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
    v68[5] = 17003LL;
    goto LABEL_122;
  }
  if ( (int)v15 < 0 )
  {
    *v80 = 1;
    *v84 = (struct VIDMM_ALLOC *)v10;
    return (unsigned int)v15;
  }
  if ( !*((_BYTE *)v10 + 26) )
  {
    v28 = *(_DWORD *)(v13 + 80);
    if ( (v28 & 0x400) == 0 )
    {
      if ( v10[18]
        && (*(_BYTE *)(a1 + 40872) & 8) != 0
        && ((v28 & 0x80u) == 0 || (**(_DWORD **)(v13 + 504) & 0x20000008) != 0) )
      {
        KeStackAttachProcess(*(PRKPROCESS *)(*v10)[1], &ApcState);
        v69 = v10[18];
        v15 = (int)VidMmiEnsureVirtualAddressRangeValid(v69, *(_QWORD *)(v13 + 8));
        KeUnstackDetachProcess(&ApcState);
        if ( (int)v15 < 0 )
        {
          v72 = WdLogNewEntry5_WdAssertion(v71, v70);
          *(_QWORD *)(v72 + 24) = v69;
          *(_QWORD *)(v72 + 32) = v15;
          WdLogEvent5_WdAssertion(v72);
          *v7 = 0;
          goto LABEL_123;
        }
      }
      *((_BYTE *)v10 + 26) = 1;
    }
  }
  v29 = *(_BYTE *)(a1 + 40872);
  if ( (v29 & 2) == 0
    || (v29 & 0x10) != 0 && (*(_DWORD *)(v13 + 76) & 0x100) != 0
    || (*(_DWORD *)(v13 + 80) & 0x400) != 0 )
  {
    goto LABEL_62;
  }
  v30 = *(_QWORD *)(v13 + 136);
  v31 = *(_DWORD *)(v30 + 80);
  if ( (v31 & 0x1001) != 0 )
  {
    v79 = 0;
    v85 = 0LL;
  }
  else
  {
    if ( (v31 & 0x1000) != 0 )
      v79 = 0;
    else
      v79 = *(_DWORD *)(v30 + 16) + 1;
    v85 = *(_QWORD *)(v13 + 144);
  }
  FullMDL = 0LL;
  if ( (v31 & 0x1001) != 0 )
  {
    FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v13, 0LL);
    if ( !FullMDL )
    {
      v73 = WdLogNewEntry5_WdAssertion(v53, v52);
      *(_QWORD *)(v73 + 24) = v13;
      WdLogEvent5_WdAssertion(v73);
      LODWORD(v15) = -1073741801;
      goto LABEL_123;
    }
  }
  v32 = *v10;
  v83 = -1LL;
  v82 = 0LL;
  v33 = v32[1];
  v34 = *(_QWORD **)(*(_QWORD *)(v33 + 16) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 208LL));
  if ( v34 && *(_DWORD *)(*v34 + 40864LL) )
  {
    if ( (*(_DWORD *)(v33 + 88) & 2) != 0 )
      v35 = *(struct _KTHREAD ***)(*v34 + 8LL * (*(_DWORD *)(v13 + 76) & 0x3F) + 40352);
    else
      v35 = (struct _KTHREAD **)v34[62];
  }
  else
  {
    v35 = 0LL;
  }
  v36 = v35 + 7;
  v37 = 0;
  v81 = (CVirtualAddressAllocator *)v35;
  v76 = 0;
  if ( v35[8] != KeGetCurrentThread() )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v36, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v54 = *((_DWORD *)v36 + 4);
        if ( v54 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v38, &EventBlockThread, v39, v54);
      }
      ExAcquirePushLockExclusiveEx(v36, 0LL);
    }
    v37 = 1;
    v35 = (struct _KTHREAD **)v81;
    v36[1] = KeGetCurrentThread();
    v76 = 1;
  }
  v40 = 0;
  v41 = (__int64 **)v10[16];
  v42 = 0;
  v78 = 0;
  if ( v41 == v10 + 16 )
  {
LABEL_53:
    if ( v37 )
    {
      v36[1] = 0LL;
      ExReleasePushLockExclusiveEx(v36, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v40 && v42 )
    {
      v46 = v81;
      v47 = v82;
      v48 = v83;
      do
      {
        v49 = v42;
        if ( (v42 & 1) != 0 )
          CVirtualAddressAllocator::FlushGpuVaTlb(v46, v6, v48, v47);
        v42 >>= 1;
        ++v6;
      }
      while ( v49 >= 2 );
      v10 = v88;
      v13 = v87;
    }
LABEL_62:
    if ( (*((_DWORD *)v10 + 7) & 3) != 2 )
    {
      VIDMM_DEVICE::AddCommitment((VIDMM_DEVICE *)v10[1], (struct VIDMM_ALLOC *)v10);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v75) = *(_DWORD *)(*(_QWORD *)(v13 + 136) + 16LL) + 1;
          McTemplateK0pqx((unsigned int)v75, &EventPageInAllocation, v50, v10, v75, *(_QWORD *)(v13 + 144));
        }
      }
    }
    *(_BYTE *)(v13 + 98) = 1;
    *v80 = 0;
    return (unsigned int)v15;
  }
  while ( 2 )
  {
    v43 = v41 - 3;
    if ( ((_DWORD)v41[5] & 0x400) != 0 )
    {
      v40 = v78;
LABEL_51:
      v41 = (__int64 **)*v41;
      if ( v41 == v10 + 16 )
      {
        v37 = v76;
        goto LABEL_53;
      }
      v35 = (struct _KTHREAD **)v81;
      continue;
    }
    break;
  }
  LODWORD(v15) = CVirtualAddressAllocator::CommitVirtualAddressRange(
                   (CVirtualAddressAllocator *)v35,
                   (struct VIDMM_MAPPED_VA_RANGE *)(v41 - 3),
                   *(_DWORD *)(v13 + 76) & 0x3F,
                   v79,
                   (unsigned __int64)v43[9] + v85,
                   FullMDL,
                   0,
                   v84);
  if ( (int)v15 >= 0 )
  {
    v42 |= 1 << ((*((_DWORD *)v43 + 16) >> 4) & 0x3F);
    if ( v83 >= (unsigned __int64)v43[12] )
      v83 = (unsigned __int64)v43[12];
    if ( v82 <= (unsigned __int64)v43[13] )
      v82 = (unsigned __int64)v43[13];
    v40 = 1;
    v78 = 1;
    goto LABEL_51;
  }
  v74 = WdLogNewEntry5_WdWarning(v45, v44);
  *(_QWORD *)(v74 + 24) = v10;
  *(_QWORD *)(v74 + 32) = 17103LL;
  WdLogEvent5_WdWarning(v74);
  if ( v76 )
  {
    v36[1] = 0LL;
    ExReleasePushLockExclusiveEx(v36, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (_DWORD)v15 == -1073741267 )
    *v80 = 1;
LABEL_123:
  if ( v77 )
    VIDMM_SEGMENT::MarkResourcesForEviction(*(VIDMM_SEGMENT **)(v13 + 136), (struct _VIDMM_GLOBAL_ALLOC *)v13, 0LL, 0LL);
  return (unsigned int)v15;
}
