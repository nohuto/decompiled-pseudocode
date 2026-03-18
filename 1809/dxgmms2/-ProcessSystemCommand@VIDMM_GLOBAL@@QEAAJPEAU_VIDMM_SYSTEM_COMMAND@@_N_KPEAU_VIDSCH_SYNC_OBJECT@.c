/*
 * XREFs of ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0071660
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0083F00 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B17CC (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0003AA0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0018214 (-OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0032CB0 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0069330 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C006A814 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006B6DC (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C006BA84 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006E6F4 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C0071A90 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C0071B24 (-StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0071B98 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0071FF8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00728D0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007335C (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C0075F44 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0076744 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0076C38 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C007993C (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C0079EA4 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007BC10 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007C198 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00805D4 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C008CB40 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A74F4 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A7ECC (-DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A7F6C (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00A7FDC (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1C00AA830 (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00AB1F8 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00AB714 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00ABC38 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00AC908 (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 *     ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00ACCF8 (-UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00AED4C (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00BB3B4 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x1C00BBC28 (-ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00BCD24 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00BCFD8 (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00BE000 (-ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANG.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00BE078 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00BF004 (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00BFB68 (-RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00C02A4 (-ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00C5AF0 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 *     VidSchiResumeFlipQueues @ 0x1C00C71E0 (VidSchiResumeFlipQueues.c)
 *     VidSchSignalPagingFences @ 0x1C00C98C4 (VidSchSignalPagingFences.c)
 *     VidSchWaitForPagingFence @ 0x1C00C9FFC (VidSchWaitForPagingFence.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessSystemCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        char a3,
        unsigned __int64 a4,
        struct _VIDSCH_SYNC_OBJECT *a5)
{
  __int64 v5; // r14
  int v6; // r15d
  int updated; // r12d
  __int64 v8; // rbx
  char v9; // r13
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rbx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  struct VIDMM_ALLOC *v16; // r10
  int *v17; // rax
  struct _KEVENT *v18; // r13
  unsigned int v19; // esi
  unsigned int v20; // ebx
  __int64 v21; // r14
  __int64 v22; // rcx
  _QWORD **v23; // rsi
  unsigned __int64 v24; // r8
  __int64 *v25; // r9
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  VIDMM_DEVICE *v31; // rbx
  __int64 v32; // rax
  CVirtualAddressAllocator *v33; // rbx
  __int64 v34; // rdx
  const GUID *v35; // r8
  unsigned __int8 v36; // r9
  __int64 v37; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v38; // rdx
  __int64 v39; // rcx
  VIDMM_GLOBAL *v40; // rcx
  _QWORD *v41; // rax
  unsigned int v42; // ebx
  __int64 v43; // r14
  __int64 v44; // r10
  int v45; // r8d
  char v46; // cl
  char v47; // dl
  _DWORD *v48; // rdx
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rdx
  unsigned int v52; // r14d
  __int64 j; // rbx
  VIDMM_MEMORY_SEGMENT *v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  unsigned int v58; // eax
  __int64 v59; // rdx
  char v60; // r8
  int v61; // ebx
  __int64 v62; // r14
  VIDMM_SEGMENT *v63; // rcx
  int v64; // eax
  VIDMM_GLOBAL *v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 i; // rbx
  __int64 v70; // rcx
  _QWORD *v71; // rax
  __int64 v72; // rdx
  _QWORD *v73; // r14
  _QWORD *v74; // rax
  _QWORD *v75; // r15
  _QWORD *v76; // rcx
  __int64 v77; // rbx
  _QWORD *v78; // rax
  bool v80; // [rsp+51h] [rbp-AFh] BYREF
  _BYTE v81[6]; // [rsp+52h] [rbp-AEh] BYREF
  unsigned __int64 v82; // [rsp+58h] [rbp-A8h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v83; // [rsp+60h] [rbp-A0h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v84; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v85; // [rsp+70h] [rbp-90h] BYREF
  struct VIDMM_ALLOC *v86; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v87[8]; // [rsp+80h] [rbp-80h] BYREF
  struct VIDMM_ALLOC *v88; // [rsp+88h] [rbp-78h] BYREF
  struct _KAPC_STATE v89; // [rsp+90h] [rbp-70h] BYREF
  struct _KAPC_STATE v90; // [rsp+C0h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-10h] BYREF

  v5 = *((int *)this + 2);
  v6 = 0;
  updated = 0;
  v8 = *(int *)a2;
  v9 = a3;
  v85 = a4;
  v84 = a5;
  if ( (_DWORD)v5 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v41[3] = 270LL;
    v41[4] = 64LL;
    v41[5] = this;
    v41[6] = v5;
    v41[7] = v8;
    WdLogEvent5_WdCriticalError(v41);
  }
  ++*((_QWORD *)this + 575);
  v12 = *((unsigned int *)this + 1748);
  *((_DWORD *)this + 2) = v8;
  v13 = 0;
  *((_DWORD *)this + 12) = -1;
  *((_QWORD *)this + 877) = 0LL;
  for ( *((_QWORD *)this + 878) = 0LL; v13 < (unsigned int)v12; ++v13 )
  {
    VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter(this, v13);
    v12 = *((unsigned int *)this + 1748);
  }
  v14 = *(int *)a2;
  if ( (_DWORD)v14 == 121 )
  {
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                *(VIDMM_PROCESS **)(**((_QWORD **)a2 + 2) + 8LL),
                                *(_DWORD *)(*((_QWORD *)this + 3) + 208LL),
                                *(_DWORD *)(***((_QWORD ***)a2 + 2) + 76LL) & 0x3F);
    CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, v16);
    goto LABEL_7;
  }
  switch ( (int)v14 )
  {
    case 101:
      v55 = 0LL;
      if ( *((_DWORD *)this + 926) )
      {
        do
        {
          v56 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v55);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 152LL))(v56);
          v55 = (unsigned int)(v55 + 1);
        }
        while ( (unsigned int)v55 < *((_DWORD *)this + 926) );
        LODWORD(v12) = *((_DWORD *)this + 1748);
      }
      v57 = 0LL;
      v58 = 0;
      if ( (_DWORD)v12 )
      {
        do
        {
          v59 = *((_QWORD *)this + 5023) + 1560LL * v58;
          v60 = *(_BYTE *)(v59 + 436);
          if ( (v60 & 0x10) != 0 )
          {
            v57 |= 1LL << v58;
            *(_BYTE *)(v59 + 436) = v60 & 0xEF;
          }
          ++v58;
        }
        while ( v58 < *((_DWORD *)this + 1748) );
      }
      VIDMM_GLOBAL::RecommitGpuVirtualAddresses(this, v57);
      goto LABEL_7;
    case 102:
      v42 = *((_DWORD *)a2 + 10);
      v43 = 0LL;
      if ( !*((_DWORD *)this + 926) )
        goto LABEL_80;
      break;
    case 103:
      VIDMM_GLOBAL::CleanupPrimaryAllocation(this, *((struct _VIDMM_GLOBAL_ALLOC **)a2 + 5));
      goto LABEL_7;
    case 104:
      updated = VIDMM_GLOBAL::PageInOneAllocation(this, *((_QWORD *)a2 + 2), 4LL, 0LL, v81, v87);
      goto LABEL_7;
    case 105:
      VIDMM_GLOBAL::EvictOneAllocation(this, *((struct VIDMM_ALLOC **)a2 + 2), 0);
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
      v61 = 0;
      if ( *((int *)this + 926) > 0 )
      {
        v62 = 0LL;
        do
        {
          v63 = *(VIDMM_SEGMENT **)(v62 + *((_QWORD *)this + 464));
          v64 = *((_DWORD *)v63 + 20);
          if ( (v64 & 0x1001) == 0 && (v64 & 4) != 0 )
          {
            updated = VIDMM_SEGMENT::SuspendCpuAccess(v63);
            if ( updated < 0 )
              break;
          }
          ++v61;
          v62 += 8LL;
        }
        while ( v61 < *((_DWORD *)this + 926) );
      }
      goto LABEL_7;
    case 112:
      v37 = *((_QWORD *)a2 + 5);
      if ( *(_QWORD *)(v37 + 136) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _BYTE, _QWORD))(**(_QWORD **)(v37 + 136) + 48LL))(
          *(_QWORD *)(v37 + 136),
          v37,
          0LL,
          0LL,
          0,
          0LL);
      }
      if ( *(_QWORD *)(v37 + 264) )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(this);
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v37 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::EvictTemporaryAllocation(v65, (struct _VIDMM_GLOBAL_ALLOC *)v37);
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v37 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
      }
      goto LABEL_7;
    case 113:
      updated = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                  this,
                  (struct _VIDMM_SYSTEM_COMMAND *)((char *)a2 + 40),
                  &v88);
      goto LABEL_7;
    case 114:
      KeStackAttachProcess(**((PRKPROCESS **)this + 5040), &v89);
      updated = VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v40, a2);
      KeUnstackDetachProcess(&v89);
      goto LABEL_7;
    case 115:
      v32 = *((_QWORD *)a2 + 6);
      v33 = *(CVirtualAddressAllocator **)(v32 + 496);
      if ( v33 )
      {
        if ( *((_QWORD *)a2 + 5) )
        {
          KeStackAttachProcess(**((PRKPROCESS **)this + 5040), &ApcState);
          CVirtualAddressAllocator::DestroyVaAllocator(v33, v34, v35, v36);
          KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          CVirtualAddressAllocator::DestroyVaAllocator(
            *(CVirtualAddressAllocator **)(v32 + 496),
            v12,
            (const GUID *)0x1C0000000LL,
            a4);
        }
        *(_QWORD *)(*((_QWORD *)a2 + 6) + 496LL) = 0LL;
      }
      goto LABEL_7;
    case 116:
      updated = VIDMM_GLOBAL::PageInDeviceInternal(this, *((struct VIDMM_DEVICE **)a2 + 3), 0, &v80, &v86);
      goto LABEL_7;
    case 117:
      KeStackAttachProcess(**((PRKPROCESS **)this + 5040), &v90);
      updated = VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
                  this,
                  *((const struct _DXGKARGCB_UPDATECONTEXTALLOCATION **)a2 + 5),
                  1u);
      KeUnstackDetachProcess(&v90);
      goto LABEL_7;
    case 118:
      updated = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, *((_DWORD *)a2 + 1), 0);
      if ( updated < 0 )
      {
        v68 = WdLogNewEntry5_WdAssertion(v67, v66);
        *(_QWORD *)(v68 + 24) = 9770LL;
        WdLogEvent5_WdAssertion(v68);
      }
      goto LABEL_7;
    case 120:
      updated = VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
                  this,
                  *((struct CVirtualAddressAllocator **)a2 + 5),
                  *((_QWORD *)a2 + 6),
                  a4,
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
        VIDMM_DEVICE::EnsureSchedulable(v31, 0LL);
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
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 926); i = (unsigned int)(i + 1) )
        VIDMM_SEGMENT::InvalidateAllVirtualAddress(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8 * i));
      goto LABEL_7;
    case 128:
      v70 = *((_QWORD *)a2 + 5);
      if ( *((_DWORD *)a2 + 12) )
        VIDMM_SEGMENT::FreeVPRReserve((VIDMM_SEGMENT *)v70);
      else
        VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
          *(VIDMM_LINEAR_POOL **)(v70 + 152),
          *(void **)(v70 + 456),
          *(_QWORD *)(v70 + 424) - *(_QWORD *)(v70 + 464),
          *(_QWORD *)(v70 + 424));
      goto LABEL_7;
    case 129:
      v38 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 5);
      v39 = *((_QWORD *)v38 + 17);
      if ( v39 && *((_QWORD *)v38 + 56) )
        VIDMM_CPU_HOST_APERTURE::OfferRange(*(VIDMM_CPU_HOST_APERTURE **)(v39 + 488), v38);
      goto LABEL_7;
    case 130:
      updated = VIDMM_GLOBAL::EnableIoMmuIsolation(this);
      goto LABEL_7;
    case 131:
      VIDMM_GLOBAL::DisableIoMmuIsolation(this);
      goto LABEL_7;
    case 205:
      VIDMM_GLOBAL::EvictOneAllocation(this, *((struct VIDMM_ALLOC **)a2 + 2), 1);
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a2 + 2) + 164LL));
      goto LABEL_7;
    case 216:
      VIDMM_SEGMENT::ProcessUnblockMemoryRanges(
        *((_QWORD *)a2 + 5),
        *((unsigned __int8 *)a2 + 48),
        0x1C0000000uLL,
        (char *)a2 + 56);
      goto LABEL_7;
    default:
      v71 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v12);
      v71[3] = 270LL;
      v71[4] = 23LL;
      v71[5] = -1073741811LL;
      v71[6] = v14;
      v71[7] = 0LL;
      WdLogEvent5_WdCriticalError(v71);
      goto LABEL_7;
  }
  do
  {
    v44 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v43);
    v45 = *(_DWORD *)(v44 + 80);
    if ( (v45 & 0x1001) != 0
      || *((_DWORD *)this + 10036) == -1
      || (v42 & 0x40) != 0 && *(_QWORD *)(v44 + 232) > (unsigned __int64)qword_1C004D410 )
    {
      v46 = 1;
      if ( (v45 & 0x1001) != 0 )
        goto LABEL_53;
    }
    else
    {
      v46 = 0;
    }
    if ( *((_DWORD *)this + 10036) != -1 && *(_QWORD *)(v44 + 232) <= (unsigned __int64)qword_1C004D410 )
    {
      v47 = 0;
      goto LABEL_54;
    }
LABEL_53:
    v47 = 1;
LABEL_54:
    if ( ((v45 & 0x80) == 0 || (v42 & 2) == 0 || !v46)
      && ((v45 & 0x100) == 0 || (v42 & 4) == 0)
      && ((v45 & 0x1001) != 0 || (v42 & 0x10) == 0) )
    {
      if ( (v45 & 0x80) != 0 && (v42 & 0x20) != 0 && v47 )
      {
        if ( (v45 & 0x1001) == 0 )
          VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(v44, v42);
      }
      else
      {
        VIDMM_SEGMENT::PurgeContent(v44, v42, *((_QWORD *)a2 + 6));
        if ( (v42 & 8) == 0 )
        {
          v48 = *(_DWORD **)(*((_QWORD *)this + 464) + 8 * v43);
          v49 = *((_QWORD *)this + 5023) + 1560LL * (unsigned int)v48[95];
          if ( (v48[20] & 0x1000) != 0 )
            v50 = 0;
          else
            v50 = v48[4] + 1;
          if ( v50 == *(_DWORD *)(v49 + 56) || v50 == *(_DWORD *)(v49 + 40) )
            *(_BYTE *)(v49 + 436) |= 0x80u;
          if ( v50 == *(_DWORD *)(v49 + 64) || v50 == *(_DWORD *)(v49 + 48) )
            *(_BYTE *)(v49 + 437) |= 1u;
        }
        v51 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8 * v43) + 368LL);
        if ( (_DWORD)v51 != -1 )
          (*((void (__fastcall **)(_QWORD, __int64, _QWORD))this + 5013))(*((_QWORD *)this + 5014), v51, 0LL);
      }
    }
    v43 = (unsigned int)(v43 + 1);
  }
  while ( (unsigned int)v43 < *((_DWORD *)this + 926) );
  LODWORD(v12) = *((_DWORD *)this + 1748);
  v9 = a3;
LABEL_80:
  v52 = 0;
  if ( (_DWORD)v12 )
  {
    do
      VIDMM_GLOBAL::EvictTemporaryAllocations(this, 1u, v52++);
    while ( v52 < *((_DWORD *)this + 1748) );
  }
  if ( (v42 & 8) == 0 )
  {
    VIDMM_GLOBAL::PurgePageTables(this, v42);
    v6 = 1;
    VIDMM_GLOBAL::DoDeferredUnlock(this);
  }
  if ( (v42 & 0x20) != 0 )
  {
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 926); j = (unsigned int)(j + 1) )
    {
      v54 = *(VIDMM_MEMORY_SEGMENT **)(*((_QWORD *)this + 464) + 8 * j);
      if ( (*((_DWORD *)v54 + 20) & 0x1001) == 0 )
        VIDMM_MEMORY_SEGMENT::ValidateFrameBufferRotation(v54);
    }
  }
LABEL_7:
  v17 = (int *)*((_QWORD *)a2 + 4);
  if ( v17 )
    *v17 = updated;
  if ( v6 )
  {
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
    VIDMM_GLOBAL::UnmapAllPagingBuffers(this);
    if ( v9 )
      VidSchSignalPagingFences(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL), &v84, &v85);
    else
      KeSetEvent(*((PRKEVENT *)a2 + 1), 0, 0);
  }
  else
  {
    v18 = (struct _KEVENT *)*((_QWORD *)a2 + 1);
    v19 = 0;
    v83 = v84;
    v82 = v85;
    *((_QWORD *)this + 466) = (char *)this + 3720;
    for ( *((_QWORD *)this + 465) = (char *)this + 3720; v19 < *((_DWORD *)this + 1748); ++v19 )
    {
      v20 = 0;
      v21 = 1560LL * v19;
      if ( *(_DWORD *)(v21 + *((_QWORD *)this + 5023) + 24) )
      {
        do
        {
          v22 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v20 + *(_DWORD *)(v21 + *((_QWORD *)this + 5023) + 20)));
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 160LL))(v22);
          ++v20;
        }
        while ( v20 < *(_DWORD *)(v21 + *((_QWORD *)this + 5023) + 24) );
      }
      VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(this, v19);
    }
    v23 = (_QWORD **)((char *)this + 41424);
    if ( *v23 != v23 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
      v73 = *v23;
      while ( v73 != v23 )
      {
        v74 = (_QWORD *)*v73;
        v75 = v73 - 36;
        if ( *(_QWORD **)(*v73 + 8LL) != v73 || (v76 = (_QWORD *)v73[1], (_QWORD *)*v76 != v73) )
          __fastfail(3u);
        *v76 = v74;
        v74[1] = v76;
        *v73 = 0LL;
        v73 = v74;
        if ( (*((_DWORD *)v75 + 13) & 7) != 0 )
        {
          v77 = v75[4];
          v78 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v76, v72);
          v78[3] = 270LL;
          v78[4] = 63LL;
          v78[5] = v75;
          v78[6] = v77;
          v78[7] = 0LL;
          WdLogEvent5_WdCriticalError(v78);
        }
        VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v75);
      }
    }
    if ( *((_BYTE *)this + 41440) )
    {
      VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL), 0xFFFFFFFFLL);
      *((_BYTE *)this + 41440) = 0;
    }
    if ( a3 )
    {
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v27 = *(_QWORD *)(*((_QWORD *)this + 2) + 528LL);
      v28 = 0;
      if ( !*(_BYTE *)(v27 + 55) )
      {
        v24 = *(unsigned int *)(v27 + 64);
        v25 = *(__int64 **)(v27 + 248);
        goto LABEL_20;
      }
      v26 = *(_QWORD **)(v27 + 264);
      if ( *v26 )
      {
        v28 = *(_DWORD *)(v27 + 64);
LABEL_20:
        VidSchSignalSyncObjectsFromGpu(v28, (__int64)v26, v24, v25, 1u, (void **)&v83, 0, &v82);
      }
      else
      {
        VidSchSignalSyncObjectsFromCpu(1LL, &v83, 0LL, (char *)&v82);
      }
      v29 = *((_DWORD *)this + 1748);
      if ( v29 > 1 )
        VidSchWaitForPagingFence(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL), v83, v82, (unsigned int)((1 << v29) - 1));
    }
    else if ( v18 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
      KeSetEvent(v18, 0, 0);
    }
    *((_QWORD *)this + 877) = 0LL;
    *((_QWORD *)this + 878) = 0LL;
    *((_DWORD *)this + 2) = 0;
  }
  return (unsigned int)updated;
}
