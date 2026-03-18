/*
 * XREFs of ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B600
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0088B00 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B486C (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0004A20 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00177E0 (-OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C00336D0 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C005C1DC (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005CC44 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D000 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005E960 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00601F4 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00602D0 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C0062CBC (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0062EA4 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C006BA60 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C006BAF4 (-StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006BB70 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006C068 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C006C3BC (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006C610 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0070278 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0079770 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007ABE0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007D3CC (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007D954 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0084188 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C009179C (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AA808 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB290 (-DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB330 (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00AB3A0 (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1C00ADA9C (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00AE47C (-PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00AE990 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AEEB4 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00AFBBC (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 *     ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AFFAC (-UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00B1E20 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00BDF18 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x1C00BE7A8 (-ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00BF8D8 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00BFB8C (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00C0BF4 (-ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANG.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00C0C6C (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00C1C04 (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00C2778 (-RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00C2EC4 (-ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00C87F4 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 *     VidSchiResumeFlipQueues @ 0x1C00C9EF8 (VidSchiResumeFlipQueues.c)
 *     VidSchSignalPagingFences @ 0x1C00CC364 (VidSchSignalPagingFences.c)
 *     VidSchWaitForPagingFence @ 0x1C00CCAA4 (VidSchWaitForPagingFence.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessSystemCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        char a3,
        unsigned __int64 a4,
        struct _VIDSCH_SYNC_OBJECT *a5)
{
  __int64 v5; // r14
  int updated; // r12d
  int v7; // r15d
  __int64 v8; // rbx
  char v9; // r13
  __int64 v12; // rdx
  const GUID *v13; // r8
  unsigned int v14; // ebx
  __int64 v15; // rbx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  struct VIDMM_ALLOC *v17; // r10
  int *v18; // rax
  struct _KEVENT *v19; // r13
  unsigned int v20; // esi
  __int64 v21; // r14
  __int64 v22; // rcx
  _QWORD **v23; // rsi
  int v24; // r8d
  _QWORD *v25; // r9
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  VIDMM_DEVICE *v31; // rbx
  __int64 v32; // rax
  CVirtualAddressAllocator *v33; // rbx
  __int64 v34; // rdx
  const GUID *v35; // r8
  struct _VIDMM_GLOBAL_ALLOC *v36; // rdx
  __int64 v37; // rcx
  VIDMM_GLOBAL *v38; // rcx
  _QWORD *v39; // rax
  unsigned int v40; // ebx
  __int64 v41; // r14
  __int64 v42; // r10
  int v43; // r11d
  char v44; // cl
  char v45; // r8
  _DWORD *v46; // rdx
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rdx
  unsigned int v50; // r14d
  VIDMM_MEMORY_SEGMENT *v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rcx
  unsigned __int64 v54; // rcx
  unsigned int v55; // eax
  __int64 v56; // rdx
  char v57; // r8
  __int64 v58; // r14
  VIDMM_SEGMENT *v59; // rcx
  int v60; // eax
  VIDMM_GLOBAL *v61; // rcx
  int v62; // edx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  _QWORD *v67; // rax
  __int64 v68; // rdx
  _QWORD *v69; // r14
  _QWORD *v70; // rax
  _QWORD *v71; // r15
  _QWORD *v72; // rcx
  __int64 v73; // rbx
  _QWORD *v74; // rax
  bool v76; // [rsp+51h] [rbp-AFh] BYREF
  _BYTE v77[6]; // [rsp+52h] [rbp-AEh] BYREF
  unsigned __int64 v78; // [rsp+58h] [rbp-A8h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v79; // [rsp+60h] [rbp-A0h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v80; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v81; // [rsp+70h] [rbp-90h] BYREF
  struct VIDMM_ALLOC *v82; // [rsp+78h] [rbp-88h] BYREF
  struct VIDMM_ALLOC *v83; // [rsp+88h] [rbp-78h] BYREF
  struct _KAPC_STATE v84; // [rsp+90h] [rbp-70h] BYREF
  struct _KAPC_STATE v85; // [rsp+C0h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-10h] BYREF

  v5 = *((int *)this + 2);
  updated = 0;
  v7 = 0;
  v8 = *(int *)a2;
  v9 = a3;
  v81 = a4;
  v80 = a5;
  LODWORD(v78) = 0;
  if ( (_DWORD)v5 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v39[3] = 270LL;
    v39[4] = 64LL;
    v39[5] = this;
    v39[6] = v5;
    v39[7] = v8;
    WdLogEvent5_WdCriticalError(v39);
  }
  v12 = *((unsigned int *)this + 1748);
  v13 = (const GUID *)(unsigned int)v12;
  ++*((_QWORD *)this + 575);
  *((_DWORD *)this + 2) = v8;
  v14 = 0;
  *((_DWORD *)this + 12) = -1;
  *((_QWORD *)this + 877) = 0LL;
  for ( *((_QWORD *)this + 878) = 0LL; v14 < (unsigned int)v12; v13 = (const GUID *)(unsigned int)v12 )
  {
    VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter(this, v14);
    v12 = *((unsigned int *)this + 1748);
    ++v14;
  }
  v15 = *(int *)a2;
  if ( (_DWORD)v15 == 121 )
  {
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                *(VIDMM_PROCESS **)(**((_QWORD **)a2 + 2) + 8LL),
                                *(_DWORD *)(*((_QWORD *)this + 3) + 208LL),
                                *(_DWORD *)(***((_QWORD ***)a2 + 2) + 76LL) & 0x3F);
    CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, v17);
    goto LABEL_7;
  }
  switch ( (int)v15 )
  {
    case 101:
      v52 = 0LL;
      if ( *((_DWORD *)this + 926) )
      {
        do
        {
          v53 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v52);
          (*(void (__fastcall **)(__int64, __int64, const GUID *))(*(_QWORD *)v53 + 152LL))(v53, v12, v13);
          v52 = (unsigned int)(v52 + 1);
        }
        while ( (unsigned int)v52 < *((_DWORD *)this + 926) );
        LODWORD(v12) = *((_DWORD *)this + 1748);
      }
      LODWORD(v15) = 0;
      v54 = 0LL;
      v55 = 0;
      if ( (_DWORD)v12 )
      {
        do
        {
          v56 = *((_QWORD *)this + 5023) + 1560LL * v55;
          v57 = *(_BYTE *)(v56 + 436);
          if ( (v57 & 0x10) != 0 )
          {
            v54 |= 1LL << v55;
            *(_BYTE *)(v56 + 436) = v57 & 0xEF;
          }
          ++v55;
        }
        while ( v55 < *((_DWORD *)this + 1748) );
      }
      VIDMM_GLOBAL::RecommitGpuVirtualAddresses(this, v54);
      goto LABEL_8;
    case 102:
      v40 = *((_DWORD *)a2 + 10);
      v41 = 0LL;
      if ( !*((_DWORD *)this + 926) )
        goto LABEL_79;
      v76 = (v40 & 2) != 0;
      break;
    case 103:
      VIDMM_GLOBAL::CleanupPrimaryAllocation(this, *((struct _VIDMM_GLOBAL_ALLOC **)a2 + 5));
      goto LABEL_7;
    case 104:
      LODWORD(v15) = 0;
      updated = VIDMM_GLOBAL::PageInOneAllocation(this, *((_QWORD *)a2 + 2), 4LL, 0LL, v77);
      goto LABEL_8;
    case 105:
      VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)this, *((struct VIDMM_ALLOC **)a2 + 2), 0LL);
      goto LABEL_7;
    case 106:
      VIDMM_GLOBAL::ReportVidMmStateWorker(this);
      goto LABEL_7;
    case 107:
      updated = VIDMM_GLOBAL::RunApertureCoherencyTest(this);
      goto LABEL_7;
    case 108:
      updated = VIDMM_GLOBAL::ValidateApertureUnmapToDummyPage(this);
      goto LABEL_7;
    case 110:
      LODWORD(v15) = 0;
      if ( *((int *)this + 926) <= 0 )
        goto LABEL_8;
      v58 = 0LL;
      do
      {
        v59 = *(VIDMM_SEGMENT **)(v58 + *((_QWORD *)this + 464));
        v60 = *((_DWORD *)v59 + 20);
        if ( (v60 & 0x1001) == 0 && (v60 & 4) != 0 )
        {
          updated = VIDMM_SEGMENT::SuspendCpuAccess(v59);
          if ( updated < 0 )
            break;
        }
        LODWORD(v15) = v15 + 1;
        v58 += 8LL;
      }
      while ( (int)v15 < *((_DWORD *)this + 926) );
      goto LABEL_7;
    case 112:
      v15 = *((_QWORD *)a2 + 5);
      if ( *(_QWORD *)(v15 + 136) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _BYTE, _QWORD))(**(_QWORD **)(v15 + 136) + 48LL))(
          *(_QWORD *)(v15 + 136),
          v15,
          0LL,
          0LL,
          0,
          0LL);
      }
      if ( !*(_QWORD *)(v15 + 264) )
        goto LABEL_7;
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(this);
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v15 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
      VIDMM_GLOBAL::EvictTemporaryAllocation(v61, (struct _VIDMM_GLOBAL_ALLOC *)v15);
      v62 = *(_DWORD *)(v15 + 76);
      LODWORD(v15) = 0;
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v62 & 0x3F, 0, 0LL, 0LL, 0, 0);
      goto LABEL_8;
    case 113:
      updated = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                  this,
                  (struct _VIDMM_SYSTEM_COMMAND *)((char *)a2 + 40),
                  &v83);
      goto LABEL_7;
    case 114:
      memset(&v84, 0, sizeof(v84));
      KeStackAttachProcess(**((PRKPROCESS **)this + 5040), &v84);
      updated = VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v38, a2);
      KeUnstackDetachProcess(&v84);
      goto LABEL_7;
    case 115:
      v32 = *((_QWORD *)a2 + 6);
      v33 = *(CVirtualAddressAllocator **)(v32 + 496);
      if ( !v33 )
        goto LABEL_7;
      if ( *((_QWORD *)a2 + 5) )
      {
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(**((PRKPROCESS **)this + 5040), &ApcState);
        CVirtualAddressAllocator::DestroyVaAllocator(v33, v34, v35);
        KeUnstackDetachProcess(&ApcState);
      }
      else
      {
        CVirtualAddressAllocator::DestroyVaAllocator(*(CVirtualAddressAllocator **)(v32 + 496), v12, v13);
      }
      LODWORD(v15) = 0;
      *(_QWORD *)(*((_QWORD *)a2 + 6) + 496LL) = 0LL;
      goto LABEL_8;
    case 116:
      updated = VIDMM_GLOBAL::PageInDeviceInternal(this, *((struct VIDMM_DEVICE **)a2 + 3), 0, &v76, &v82);
      goto LABEL_7;
    case 117:
      memset(&v85, 0, sizeof(v85));
      KeStackAttachProcess(**((PRKPROCESS **)this + 5040), &v85);
      updated = VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
                  this,
                  *((const struct _DXGKARGCB_UPDATECONTEXTALLOCATION **)a2 + 5),
                  1u);
      KeUnstackDetachProcess(&v85);
      goto LABEL_7;
    case 118:
      updated = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, *((_DWORD *)a2 + 1), 0);
      if ( updated < 0 )
      {
        v65 = WdLogNewEntry5_WdAssertion(v64, v63);
        *(_QWORD *)(v65 + 24) = 9918LL;
        WdLogEvent5_WdAssertion(v65);
      }
      goto LABEL_7;
    case 120:
      updated = VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
                  this,
                  *((struct CVirtualAddressAllocator **)a2 + 5),
                  *((_QWORD *)a2 + 6),
                  0x1C0000000LL,
                  *((_BYTE *)a2 + 64));
      goto LABEL_7;
    case 122:
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 5) + 24LL))(
        *((_QWORD *)a2 + 5),
        0LL,
        *((_QWORD *)a2 + 6),
        *((_QWORD *)a2 + 7));
      goto LABEL_7;
    case 123:
      v31 = (VIDMM_DEVICE *)*((_QWORD *)a2 + 5);
      if ( *((_BYTE *)a2 + 48) )
      {
        VIDMM_DEVICE::IndefinitelySuspend(v31, *((_BYTE *)a2 + 49));
        VIDMM_DEVICE::FaultAllAllocations(v31);
      }
      else
      {
        VIDMM_DEVICE::EnsureSchedulable(v31, 0);
      }
      goto LABEL_7;
    case 124:
      VIDMM_GLOBAL::TrimOfferCommitmentInternal(
        this,
        *((struct VIDMM_PROCESS **)a2 + 5),
        *((struct DXGDECOMMITITERATOR **)a2 + 6),
        *(union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS *)((char *)a2 + 56),
        *((_QWORD *)a2 + 8),
        *((unsigned __int64 **)a2 + 9));
      goto LABEL_7;
    case 126:
      VIDMM_GLOBAL::MoveResourcesSysCommandHelper(
        this,
        *((unsigned int *)a2 + 1),
        *((unsigned int *)a2 + 10),
        *((unsigned int *)a2 + 11));
      goto LABEL_7;
    case 127:
      v15 = 0LL;
      if ( !*((_DWORD *)this + 926) )
        goto LABEL_8;
      do
      {
        VIDMM_SEGMENT::InvalidateAllVirtualAddress(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8 * v15));
        v15 = (unsigned int)(v15 + 1);
      }
      while ( (unsigned int)v15 < *((_DWORD *)this + 926) );
      goto LABEL_7;
    case 128:
      v66 = *((_QWORD *)a2 + 5);
      if ( *((_DWORD *)a2 + 12) )
        VIDMM_SEGMENT::FreeVPRReserve((VIDMM_SEGMENT *)v66);
      else
        VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
          *(VIDMM_LINEAR_POOL **)(v66 + 152),
          *(void **)(v66 + 456),
          *(_QWORD *)(v66 + 424) - *(_QWORD *)(v66 + 464),
          *(_QWORD *)(v66 + 424));
      goto LABEL_7;
    case 129:
      v36 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 5);
      v37 = *((_QWORD *)v36 + 17);
      if ( v37 && *((_QWORD *)v36 + 56) )
        VIDMM_CPU_HOST_APERTURE::OfferRange(*(VIDMM_CPU_HOST_APERTURE **)(v37 + 488), v36);
      goto LABEL_7;
    case 130:
      updated = VIDMM_GLOBAL::EnableIoMmuIsolation(this);
      goto LABEL_7;
    case 131:
      VIDMM_GLOBAL::DisableIoMmuIsolation(this);
      goto LABEL_7;
    case 205:
      VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)this, *((struct VIDMM_ALLOC **)a2 + 2), (const GUID *)1);
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a2 + 2) + 164LL));
      goto LABEL_7;
    case 216:
      VIDMM_SEGMENT::ProcessUnblockMemoryRanges(
        *((_QWORD *)a2 + 5),
        *((unsigned __int8 *)a2 + 48),
        v13,
        (char *)a2 + 56);
      goto LABEL_7;
    default:
      v67 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v12);
      v67[6] = v15;
      LODWORD(v15) = 0;
      v67[7] = 0LL;
      v67[3] = 270LL;
      v67[4] = 23LL;
      v67[5] = -1073741811LL;
      WdLogEvent5_WdCriticalError(v67);
      goto LABEL_8;
  }
  do
  {
    v42 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v41);
    v43 = *(_DWORD *)(v42 + 80);
    if ( (v43 & 0x1001) != 0
      || *((_DWORD *)this + 10036) == -1
      || (v40 & 0x40) != 0 && *(_QWORD *)(v42 + 232) > (unsigned __int64)qword_1C004E418 )
    {
      v44 = 1;
      if ( (v43 & 0x1001) != 0 )
        goto LABEL_55;
    }
    else
    {
      v44 = 0;
    }
    if ( *((_DWORD *)this + 10036) != -1 && *(_QWORD *)(v42 + 232) <= (unsigned __int64)qword_1C004E418 )
    {
      v45 = 0;
      goto LABEL_56;
    }
LABEL_55:
    v45 = 1;
LABEL_56:
    if ( ((v40 & 2) == 0 || (v43 & 0x80u) == 0 || !v44)
      && ((v43 & 0x100) == 0 || (v40 & 4) == 0)
      && ((v43 & 0x1001) != 0 || (v40 & 0x10) == 0) )
    {
      if ( (v40 & 0x20) != 0 && (v43 & 0x80u) != 0 && v45 )
      {
        if ( (v43 & 0x1001) == 0 )
          VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(v42, v40);
      }
      else
      {
        VIDMM_SEGMENT::PurgeContent(v42, v40, *((_QWORD *)a2 + 6));
        if ( (v40 & 8) == 0 )
        {
          v46 = *(_DWORD **)(*((_QWORD *)this + 464) + 8 * v41);
          v47 = *((_QWORD *)this + 5023) + 1560LL * (unsigned int)v46[95];
          if ( (v46[20] & 0x1000) != 0 )
            v48 = 0;
          else
            v48 = v46[4] + 1;
          if ( v48 == *(_DWORD *)(v47 + 56) || v48 == *(_DWORD *)(v47 + 40) )
            *(_BYTE *)(v47 + 436) |= 0x80u;
          if ( v48 == *(_DWORD *)(v47 + 64) || v48 == *(_DWORD *)(v47 + 48) )
            *(_BYTE *)(v47 + 437) |= 1u;
        }
        v49 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8 * v41) + 368LL);
        if ( (_DWORD)v49 != -1 )
          (*((void (__fastcall **)(_QWORD, __int64, _QWORD))this + 5013))(*((_QWORD *)this + 5014), v49, 0LL);
      }
    }
    v41 = (unsigned int)(v41 + 1);
  }
  while ( (unsigned int)v41 < *((_DWORD *)this + 926) );
  LODWORD(v13) = *((_DWORD *)this + 1748);
  updated = 0;
  v9 = a3;
LABEL_79:
  v50 = 0;
  if ( (_DWORD)v13 )
  {
    do
      VIDMM_GLOBAL::EvictTemporaryAllocations(this, 1u, v50++);
    while ( v50 < *((_DWORD *)this + 1748) );
  }
  if ( (v40 & 8) == 0 )
  {
    VIDMM_GLOBAL::PurgePageTables(this, v40);
    v7 = 1;
    VIDMM_GLOBAL::DoDeferredUnlock(this);
  }
  if ( (v40 & 0x20) != 0 )
  {
    v15 = 0LL;
    if ( *((_DWORD *)this + 926) )
    {
      do
      {
        v51 = *(VIDMM_MEMORY_SEGMENT **)(*((_QWORD *)this + 464) + 8 * v15);
        if ( (*((_DWORD *)v51 + 20) & 0x1001) == 0 )
          VIDMM_MEMORY_SEGMENT::ValidateFrameBufferRotation(v51);
        v15 = (unsigned int)(v15 + 1);
      }
      while ( (unsigned int)v15 < *((_DWORD *)this + 926) );
      goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    LODWORD(v15) = 0;
  }
LABEL_8:
  v18 = (int *)*((_QWORD *)a2 + 4);
  if ( v18 )
    *v18 = updated;
  if ( v7 )
  {
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
    VIDMM_GLOBAL::UnmapAllPagingBuffers(this);
    if ( v9 )
      VidSchSignalPagingFences(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL), &v80, &v81);
    else
      KeSetEvent(*((PRKEVENT *)a2 + 1), 0, 0);
  }
  else
  {
    v19 = (struct _KEVENT *)*((_QWORD *)a2 + 1);
    v20 = 0;
    v79 = v80;
    v78 = v81;
    *((_QWORD *)this + 466) = (char *)this + 3720;
    for ( *((_QWORD *)this + 465) = (char *)this + 3720; v20 < *((_DWORD *)this + 1748); LODWORD(v15) = 0 )
    {
      v21 = 1560LL * v20;
      if ( *(_DWORD *)(v21 + *((_QWORD *)this + 5023) + 24) )
      {
        do
        {
          v22 = *(_QWORD *)(*((_QWORD *)this + 464)
                          + 8LL * (unsigned int)(v15 + *(_DWORD *)(v21 + *((_QWORD *)this + 5023) + 20)));
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 160LL))(v22);
          LODWORD(v15) = v15 + 1;
        }
        while ( (unsigned int)v15 < *(_DWORD *)(v21 + *((_QWORD *)this + 5023) + 24) );
      }
      VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(this, v20++);
    }
    v23 = (_QWORD **)((char *)this + 41424);
    if ( *v23 != v23 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
      v69 = *v23;
      while ( v69 != v23 )
      {
        v70 = (_QWORD *)*v69;
        v71 = v69 - 36;
        if ( *(_QWORD **)(*v69 + 8LL) != v69 || (v72 = (_QWORD *)v69[1], (_QWORD *)*v72 != v69) )
          __fastfail(3u);
        *v72 = v70;
        v70[1] = v72;
        *v69 = 0LL;
        v69 = v70;
        if ( (*((_DWORD *)v71 + 13) & 7) != 0 )
        {
          v73 = v71[4];
          v74 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v72, v68);
          v74[6] = v73;
          v74[7] = 0LL;
          v74[3] = 270LL;
          v74[4] = 63LL;
          v74[5] = v71;
          WdLogEvent5_WdCriticalError(v74);
        }
        VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v71);
      }
    }
    if ( *((_BYTE *)this + 41440) )
    {
      VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL), 0xFFFFFFFFLL);
      *((_BYTE *)this + 41440) = 0;
    }
    if ( a3 )
    {
      v24 = 0;
      v25 = 0LL;
      v26 = 0LL;
      v27 = *(_QWORD *)(*((_QWORD *)this + 2) + 528LL);
      v28 = 0;
      if ( !*(_BYTE *)(v27 + 55) )
      {
        v24 = *(_DWORD *)(v27 + 64);
        v25 = *(_QWORD **)(v27 + 248);
        goto LABEL_21;
      }
      v26 = *(_QWORD **)(v27 + 264);
      if ( *v26 )
      {
        v28 = *(_DWORD *)(v27 + 64);
LABEL_21:
        VidSchSignalSyncObjectsFromGpu(v28, (__int64)v26, v24, v25, 1u, (void **)&v79, 0, &v78);
      }
      else
      {
        VidSchSignalSyncObjectsFromCpu(1LL, &v79, 0, (char *)&v78);
      }
      v29 = *((_DWORD *)this + 1748);
      if ( v29 > 1 )
        VidSchWaitForPagingFence(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL), v79, v78, (unsigned int)((1 << v29) - 1));
    }
    else if ( v19 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
      KeSetEvent(v19, 0, 0);
    }
    *((_QWORD *)this + 877) = 0LL;
    *((_QWORD *)this + 878) = 0LL;
    *((_DWORD *)this + 2) = 0;
  }
  return (unsigned int)updated;
}
