/*
 * XREFs of ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006C610
 * Callers:
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C005A140 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005CC44 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C005CE30 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005FC30 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0060BAC (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B600 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0077A60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00AD130 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C00027A8 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001782C (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pqx @ 0x1C002647C (McTemplateK0pqx.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0060814 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006C0A8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C006C3BC (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NI_K@Z @ 0x1C006C4AC (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C006C56C (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C006C5C4 (-VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C006CCF4 (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C006CD34 (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z.c)
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006CE60 (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006D890 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0079770 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00AA6BC (-CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00AFB50 (-TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C00B72CC (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C07B8 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInOneAllocation(
        __int64 a1,
        __int64 **a2,
        signed int a3,
        unsigned __int8 a4,
        _BYTE *a5,
        struct VIDMM_ALLOC **a6,
        int a7,
        __int64 a8)
{
  unsigned int v8; // esi
  _BYTE *v9; // r12
  __int64 **v11; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 **v15; // rcx
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // rcx
  unsigned __int8 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // r14
  unsigned int *v22; // r15
  VIDMM_GLOBAL *v23; // rcx
  VIDMM_GLOBAL *v24; // rcx
  unsigned __int8 v25; // r8
  VIDMM_GLOBAL *v26; // rcx
  unsigned __int8 v27; // r8
  int v28; // eax
  __int64 v29; // rcx
  char v30; // al
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // r8
  _QWORD *v37; // rdx
  struct _KTHREAD **v38; // r10
  struct _KTHREAD **v39; // r13
  char v40; // dl
  __int64 v41; // rcx
  const GUID *v42; // r8
  __int64 **v43; // rax
  char v44; // r12
  unsigned int v45; // r14d
  __int64 **v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  _DWORD *v50; // rax
  CVirtualAddressAllocator *v51; // r13
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // rbx
  unsigned int v54; // ebp
  __int64 *v55; // r14
  __int64 v56; // rsi
  VIDMM_PROCESS *v57; // r12
  unsigned int *v58; // rbp
  _QWORD *v59; // rcx
  __int64 v60; // rdx
  __int64 *v61; // r8
  const GUID *v62; // r8
  __int64 v64; // rax
  int v65; // r9d
  __int64 *v66; // rcx
  _QWORD *v67; // rax
  __int64 *v68; // rdx
  __int64 v69; // rcx
  unsigned int v70; // r12d
  __int64 v71; // rax
  __int64 v72; // rcx
  VIDMM_CPU_HOST_APERTURE **v73; // rcx
  VIDMM_GLOBAL *v74; // rcx
  VIDMM_GLOBAL *v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 *v80; // r14
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  void *v86; // [rsp+20h] [rbp-E8h]
  char v88; // [rsp+40h] [rbp-C8h]
  char v89; // [rsp+41h] [rbp-C7h]
  unsigned __int8 v90[2]; // [rsp+42h] [rbp-C6h] BYREF
  unsigned int v91; // [rsp+44h] [rbp-C4h]
  _BYTE *v92; // [rsp+48h] [rbp-C0h]
  CVirtualAddressAllocator *v93; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v94; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v95; // [rsp+60h] [rbp-A8h]
  struct VIDMM_ALLOC **v96; // [rsp+68h] [rbp-A0h]
  __int64 v97; // [rsp+70h] [rbp-98h]
  struct _MDL *FullMDL; // [rsp+78h] [rbp-90h]
  __int64 ***v99; // [rsp+80h] [rbp-88h]
  __int64 **v100; // [rsp+88h] [rbp-80h]
  __int64 v101; // [rsp+90h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-70h] BYREF

  v8 = 0;
  v9 = a5;
  v96 = a6;
  v11 = a2;
  *a6 = 0LL;
  v100 = a2;
  v92 = a5;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
  if ( (*((_DWORD *)v11 + 7) & 3) == 1 )
  {
    v66 = v11[7];
    v67 = v11 + 7;
    if ( (__int64 **)v66[1] != v11 + 7 )
      goto LABEL_124;
    v68 = v11[8];
    if ( (_QWORD *)*v68 != v67 )
      goto LABEL_124;
    *v68 = (__int64)v66;
    v66[1] = (__int64)v68;
    *((_DWORD *)v11 + 7) &= 0xFFFFFFFC;
    v11[8] = 0LL;
    *v67 = 0LL;
  }
  v13 = *v11;
  v90[0] = 0;
  v14 = *v13;
  v101 = *v13;
  LODWORD(v16) = VIDMM_GLOBAL::ReferenceAllocationForPreparation((VIDMM_GLOBAL *)a1, (struct VIDMM_ALLOC *)v11, v90);
  if ( (int)v16 >= 0 )
    goto LABEL_20;
  v17 = v14 + 480;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v17, 0LL);
    if ( !*(_QWORD *)(v14 + 224) )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v18);
      VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL **)a1, a3 != 0, *(_DWORD *)(v14 + 76) & 0x3F);
      if ( *v96 )
        VIDMM_GLOBAL::EvictTemporaryAllocations(
          (VIDMM_GLOBAL **)a1,
          a3 != 0,
          *(_DWORD *)(**(_QWORD **)*v96 + 76LL) & 0x3F);
      v19 = a4;
      LODWORD(v16) = VIDMM_GLOBAL::FindResourcesForOneAllocation(a1, v11, a3, a4, a7, a8);
      if ( (int)v16 < 0 )
      {
        if ( !g_IsInternalReleaseOrDbg )
          goto LABEL_98;
        WdLogNewEntry5_WdTrace(v20);
        goto LABEL_95;
      }
    }
    v21 = **v11;
    v22 = *(unsigned int **)(v21 + 224);
    VIDMM_SEGMENT::TrimResidentBytes((VIDMM_SEGMENT *)v22, *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v21 + 488));
    if ( !VIDMM_GLOBAL::VerifyGlobalResidentLimit(v23, *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v21 + 488))
      && *(_DWORD *)(a1 + 3704) )
    {
      v70 = 0;
      do
        VIDMM_SEGMENT::TrimResidentBytes(
          *(VIDMM_SEGMENT **)(*(_QWORD *)(a1 + 3712) + 8LL * v70++),
          *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v21 + 488));
      while ( v70 < *(_DWORD *)(a1 + 3704) );
      v17 = v14 + 480;
    }
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v24);
    VIDMM_GLOBAL::EvictAllAllocationInList(v24, (struct _LIST_ENTRY *)(a1 + 3736), v25);
    VIDMM_GLOBAL::EvictAllAllocationInList(v26, (struct _LIST_ENTRY *)(a1 + 3752), v27);
    if ( (*(_DWORD *)(352LL * v22[95] + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 2440LL) + 16) & 4) != 0 )
      VIDMM_SEGMENT::ProcessPendingMoves((VIDMM_SEGMENT *)v22);
    v28 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v21 + 224) + 40LL))(*(_QWORD *)(v21 + 224), v21);
    v16 = v28;
    if ( v28 >= 0 )
      break;
    if ( !g_IsInternalReleaseOrDbg )
    {
      v19 = a4;
      goto LABEL_98;
    }
    v71 = WdLogNewEntry5_WdTrace(v29);
    *(_QWORD *)(v71 + 24) = v21;
    *(_QWORD *)(v71 + 32) = v16;
    WdLogNewEntry5_WdTrace(v72);
    v19 = a4;
LABEL_95:
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v69) + 24) = v11;
LABEL_98:
    v73 = *(VIDMM_CPU_HOST_APERTURE ***)(v14 + 224);
    if ( v73 )
    {
      if ( *(_DWORD *)(v14 + 472) != -1 )
      {
        VIDMM_CPU_HOST_APERTURE::ReleaseRange(v73[61], (struct _VIDMM_GLOBAL_ALLOC *)v14);
        v73 = *(VIDMM_CPU_HOST_APERTURE ***)(v14 + 224);
      }
      (*((void (__fastcall **)(VIDMM_CPU_HOST_APERTURE **, __int64, _QWORD, _QWORD))*v73 + 3))(
        v73,
        v14,
        *(_QWORD *)(v14 + 208),
        *(_QWORD *)(v14 + 16));
      *(_QWORD *)(v14 + 224) = 0LL;
      *(_QWORD *)(v14 + 208) = 0LL;
    }
    ExReleasePushLockExclusiveEx(v17, 0LL);
    KeLeaveCriticalRegion();
    VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v74, (struct _LIST_ENTRY *)(a1 + 3736));
    VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v75, (struct _LIST_ENTRY *)(a1 + 3752));
    v78 = WdLogNewEntry5_WdWarning(v77, v76);
    *(_QWORD *)(v78 + 32) = a3;
    *(_QWORD *)(v78 + 24) = v11;
    WdLogEvent5_WdWarning(v78);
    if ( a3 || (*(_DWORD *)(v14 + 76) & 0x40) == 0 || v19 )
      goto LABEL_19;
    a3 = 2;
    VIDMM_GLOBAL::TrimMarkedForEvictionAllocations(
      (VIDMM_GLOBAL *)a1,
      *(_QWORD *)(v14 + 16) + (*(_QWORD *)(v14 + 16) >> 2));
  }
  VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)a1, *(_DWORD *)(v21 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
  v90[0] = 1;
  LODWORD(v16) = 0;
  ExReleasePushLockExclusiveEx(v17, 0LL);
  KeLeaveCriticalRegion();
LABEL_19:
  v9 = v92;
LABEL_20:
  if ( (*(_DWORD *)(v14 + 76) & 0x100000) != 0 )
  {
    LODWORD(v16) = -1071775466;
    *v9 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_129;
    v79 = (_QWORD *)WdLogNewEntry5_WdTrace(v15);
    v79[5] = 17233LL;
LABEL_128:
    v79[4] = v14;
    v79[3] = v11;
    goto LABEL_129;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 2502LL) || *(_BYTE *)(*(_QWORD *)(a1 + 16) + 777LL) )
  {
    LODWORD(v16) = -1073741130;
    *v9 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_129;
    v79 = (_QWORD *)WdLogNewEntry5_WdTrace(v15);
    v79[5] = 17241LL;
    goto LABEL_128;
  }
  if ( (int)v16 < 0 )
  {
    *v92 = 1;
    *v96 = (struct VIDMM_ALLOC *)v11;
    return (unsigned int)v16;
  }
  if ( !*((_BYTE *)v11 + 26) )
  {
    v15 = (__int64 **)*(unsigned int *)(v14 + 80);
    if ( ((unsigned __int16)v15 & 0x400) == 0 )
    {
      if ( v11[18]
        && (*(_BYTE *)(a1 + 40872) & 8) != 0
        && ((char)v15 >= 0 || (**(_DWORD **)(v14 + 504) & 0x20000008) != 0) )
      {
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(*(PRKPROCESS *)(*v11)[1], &ApcState);
        v80 = v11[18];
        v16 = (int)VidMmiEnsureVirtualAddressRangeValid(v80, *(_QWORD *)(v14 + 8));
        KeUnstackDetachProcess(&ApcState);
        if ( (int)v16 < 0 )
        {
          v82 = WdLogNewEntry5_WdAssertion(v15, v81);
          *(_QWORD *)(v82 + 24) = v80;
          *(_QWORD *)(v82 + 32) = v16;
          WdLogEvent5_WdAssertion(v82);
          *v9 = 0;
          goto LABEL_129;
        }
      }
      *((_BYTE *)v11 + 26) = 1;
    }
  }
  v30 = *(_BYTE *)(a1 + 40872);
  if ( (v30 & 2) == 0
    || (v30 & 0x10) != 0 && (*(_DWORD *)(v14 + 76) & 0x100) != 0
    || (*(_DWORD *)(v14 + 80) & 0x400) != 0 )
  {
    goto LABEL_62;
  }
  v31 = *(_QWORD *)(v14 + 136);
  v32 = *(_DWORD *)(v31 + 80);
  if ( (v32 & 0x1001) != 0 )
  {
    v91 = 0;
    v97 = 0LL;
    FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v14, 0LL);
    if ( !FullMDL )
    {
      v83 = WdLogNewEntry5_WdAssertion(v34, v33);
      *(_QWORD *)(v83 + 24) = v14;
      WdLogEvent5_WdAssertion(v83);
      LODWORD(v16) = -1073741801;
      goto LABEL_129;
    }
  }
  else
  {
    if ( (v32 & 0x1000) != 0 )
    {
      v97 = *(_QWORD *)(v14 + 144);
      v91 = 0;
    }
    else
    {
      v64 = *(_QWORD *)(v14 + 144);
      v91 = *(_DWORD *)(v31 + 16) + 1;
      v97 = v64;
    }
    FullMDL = 0LL;
  }
  v35 = *v11;
  v95 = -1LL;
  v94 = 0LL;
  v36 = v35[1];
  v37 = *(_QWORD **)(*(_QWORD *)(v36 + 16) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 208LL));
  if ( v37 && *(_DWORD *)(*v37 + 40864LL) )
  {
    if ( (*(_DWORD *)(v36 + 88) & 2) != 0 )
      v38 = *(struct _KTHREAD ***)(*v37 + 8LL * (*(_DWORD *)(v14 + 76) & 0x3F) + 40352);
    else
      v38 = (struct _KTHREAD **)v37[62];
  }
  else
  {
    v38 = 0LL;
  }
  v39 = v38 + 7;
  v40 = 0;
  v93 = (CVirtualAddressAllocator *)v38;
  v89 = 0;
  if ( v38[8] != KeGetCurrentThread() )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v39, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v65 = *((_DWORD *)v39 + 4);
        if ( v65 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v41, (const EVENT_DESCRIPTOR *)"g", v42, v65);
      }
      ExAcquirePushLockExclusiveEx(v39, 0LL);
    }
    v40 = 1;
    v38 = (struct _KTHREAD **)v93;
    v39[1] = KeGetCurrentThread();
    v89 = 1;
  }
  v43 = (__int64 **)v11[16];
  v15 = v11 + 16;
  v44 = 0;
  v99 = (__int64 ***)v43;
  v88 = 0;
  v45 = 0;
  if ( v43 == v11 + 16 )
  {
LABEL_53:
    if ( v40 )
    {
      v39[1] = 0LL;
      ExReleasePushLockExclusiveEx(v39, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v44 && v45 )
    {
      v51 = v93;
      v52 = v94;
      v53 = v95;
      do
      {
        v54 = v45;
        if ( (v45 & 1) != 0 )
          CVirtualAddressAllocator::FlushGpuVaTlb(v51, v8, v53, v52);
        v45 >>= 1;
        ++v8;
      }
      while ( v54 >= 2 );
      v11 = v100;
      v14 = v101;
    }
LABEL_62:
    if ( (*((_DWORD *)v11 + 7) & 3) == 2 )
    {
LABEL_69:
      *(_BYTE *)(v14 + 98) = 1;
      *v92 = 0;
      return (unsigned int)v16;
    }
    v55 = v11[1];
    v56 = **v11;
    v57 = (VIDMM_PROCESS *)(*v11)[1];
    v58 = *(unsigned int **)(v56 + 136);
    if ( g_IsInternalReleaseOrDbg )
    {
      v85 = WdLogNewEntry5_WdTrace(v15);
      *(_QWORD *)(v85 + 24) = v11;
      *(_QWORD *)(v85 + 32) = v55;
    }
    v59 = v11 + 7;
    v60 = v55[5] + 56LL * v58[5];
    ++*(_DWORD *)v60;
    *(_QWORD *)(v60 + 8) += *(_QWORD *)(v56 + 16);
    *(_QWORD *)(v60 + 48) = v55;
    v61 = *(__int64 **)(v60 + 40);
    if ( *v61 == v60 + 32 )
    {
      *v59 = v60 + 32;
      v11[8] = v61;
      *v61 = (__int64)v59;
      *(_QWORD *)(v60 + 40) = v59;
      VIDMM_PROCESS::AddCommitment(
        v57,
        (struct _VIDMM_DEVICE_COMMITMENT_INFO *)v60,
        *(_DWORD *)(*(_QWORD *)(*v55 + 24) + 208LL),
        (struct VIDMM_SEGMENT *)v58,
        *(_DWORD *)v60 == 1,
        (struct _VIDMM_GLOBAL_ALLOC *)v56);
      *((_DWORD *)v11 + 7) = *((_DWORD *)v11 + 7) & 0xFFFFFFFC | 2;
      ++*(_DWORD *)(v56 + 160);
      *((_DWORD *)v11 + 7) |= 0x10u;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v86) = *(_DWORD *)(*(_QWORD *)(v14 + 136) + 16LL) + 1;
        McTemplateK0pqx((unsigned int)v86, &EventPageInAllocation, v62, v11, v86, *(_QWORD *)(v14 + 144));
      }
      goto LABEL_69;
    }
LABEL_124:
    __fastfail(3u);
  }
  while ( 2 )
  {
    v46 = v43 - 3;
    if ( ((_DWORD)v43[5] & 0x400) != 0 )
      goto LABEL_75;
    LODWORD(v16) = CVirtualAddressAllocator::CommitVirtualAddressRange(
                     (CVirtualAddressAllocator *)v38,
                     (struct VIDMM_MAPPED_VA_RANGE *)(v43 - 3),
                     *(_DWORD *)(v14 + 76) & 0x3F,
                     v91,
                     (unsigned __int64)v46[9] + v97,
                     FullMDL,
                     0,
                     v96);
    if ( (int)v16 >= 0 )
    {
      v49 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1008LL);
      if ( v49 )
        v50 = (_DWORD *)(v49 + 144LL * ((*((_DWORD *)v46 + 16) >> 4) & 0x3F));
      else
        v50 = 0LL;
      if ( (*v50 & 0x400) == 0 )
      {
        v45 |= 1 << ((*((_DWORD *)v46 + 16) >> 4) & 0x3F);
        if ( v95 >= (unsigned __int64)v46[12] )
          v95 = (unsigned __int64)v46[12];
        if ( v94 <= (unsigned __int64)v46[13] )
          v94 = (unsigned __int64)v46[13];
        v44 = 1;
        v15 = v11 + 16;
        v88 = 1;
        goto LABEL_51;
      }
      v15 = v11 + 16;
LABEL_75:
      v44 = v88;
LABEL_51:
      v43 = *v99;
      v99 = (__int64 ***)v43;
      if ( v43 == v15 )
      {
        v40 = v89;
        goto LABEL_53;
      }
      v38 = (struct _KTHREAD **)v93;
      continue;
    }
    break;
  }
  v84 = WdLogNewEntry5_WdWarning(v48, v47);
  *(_QWORD *)(v84 + 24) = v11;
  *(_QWORD *)(v84 + 32) = 17341LL;
  WdLogEvent5_WdWarning(v84);
  if ( v89 )
  {
    v39[1] = 0LL;
    ExReleasePushLockExclusiveEx(v39, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (_DWORD)v16 == -1073741267 )
    *v92 = 1;
LABEL_129:
  if ( v90[0] )
    VIDMM_SEGMENT::MarkResourcesForEviction(
      *(VIDMM_LINEAR_POOL ***)(v14 + 136),
      (struct _VIDMM_POOL_BLOCK **)v14,
      0LL,
      0LL);
  return (unsigned int)v16;
}
