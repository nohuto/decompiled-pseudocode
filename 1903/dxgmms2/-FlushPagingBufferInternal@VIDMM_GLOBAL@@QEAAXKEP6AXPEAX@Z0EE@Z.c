/*
 * XREFs of ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0078D90
 * Callers:
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C005A0C4 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A970 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005BD88 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C250 (-AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006B230 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B8F0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C006BD50 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C006C6AC (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006C900 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C006F1F0 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C006F660 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C00770E0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0077D20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0078D90 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0081ED4 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0082138 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0082944 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00ADB54 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00AE688 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B08C4 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00BF660 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C0B18 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001554 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x1C0003470 (VidSchIsMonitoredFenceSignaled.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0003E48 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0004B50 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0004BD0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0004C60 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0005810 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchIsTDRPending @ 0x1C00094D0 (VidSchIsTDRPending.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000EC10 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiSetPriorityContext @ 0x1C001061C (VidSchiSetPriorityContext.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0014310 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C00336D0 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C005A140 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C006E0D0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00776B0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0077960 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0077C4C (VidSchRegisterCompletionEvent.c)
 *     VidSchGetNodeOrdinal @ 0x1C0078D6C (VidSchGetNodeOrdinal.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0078D90 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C00AFAF8 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     ?RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER@@K@Z @ 0x1C00B8E4C (-RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00CD610 (VidSchiSubmitHwPagingCommand.c)
 */

void __fastcall VIDMM_GLOBAL::FlushPagingBufferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int8 a3,
        void (*a4)(void *),
        void *a5,
        char a6,
        char a7)
{
  __int64 v7; // r13
  unsigned __int8 v8; // bl
  VIDMM_GLOBAL *v9; // rdi
  void (*v10)(void *); // r14
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r15
  __int64 v15; // r12
  unsigned __int8 v16; // al
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  struct _KTHREAD **v19; // r13
  char v20; // r14
  _QWORD **v21; // rcx
  _QWORD *v22; // rbx
  char *v23; // r13
  __int64 v24; // rax
  int v25; // ecx
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  struct _VIDMM_DMA_BUFFER *v29; // rbx
  unsigned int i; // r14d
  __int64 v31; // rcx
  VIDMM_GLOBAL **v32; // rcx
  bool v33; // al
  __int64 v34; // rdx
  struct _VIDMM_DMA_BUFFER *v35; // r13
  struct _VIDSCH_SYNC_OBJECT *v36; // r8
  __int64 v37; // rdx
  struct _VIDSCH_SYNC_OBJECT *v38; // r9
  volatile signed __int32 *v39; // rax
  unsigned int v40; // ecx
  char v41; // r12
  unsigned int v42; // ecx
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // r8d
  unsigned int v46; // r15d
  char v47; // bl
  bool v48; // zf
  __int64 v49; // r14
  __int64 v50; // rcx
  __int64 v51; // r15
  __int64 v52; // r13
  unsigned int v53; // r12d
  _QWORD *v54; // rax
  _QWORD *PoolWithTag; // rbx
  size_t v56; // rax
  KSPIN_LOCK *v57; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _VIDMM_DMA_BUFFER *v59; // xmm2_8
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  bool v64; // cl
  int v65; // r8d
  _QWORD *v66; // r9
  unsigned int v67; // r10d
  _QWORD *v68; // rdx
  __int64 v69; // rax
  unsigned int v70; // r12d
  __int64 v71; // rax
  VIDMM_GLOBAL *v72; // r14
  _QWORD *v73; // rsi
  _QWORD *v74; // r15
  _QWORD *v75; // r14
  int v76; // eax
  _QWORD *v77; // rax
  unsigned __int64 v78; // rdx
  __int64 v79; // rcx
  const GUID *v80; // r8
  __int64 v81; // rax
  _QWORD *v82; // rcx
  char v83; // bl
  VIDMM_DMA_POOL **v84; // rbx
  _QWORD *v85; // r13
  VIDMM_GLOBAL *v86; // r15
  int v87; // eax
  VIDMM_GLOBAL **v88; // rax
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rcx
  _QWORD *v94; // rax
  KPRIORITY PriorityThread; // eax
  bool v96; // [rsp+40h] [rbp-C0h] BYREF
  struct VIDMM_MAPPED_VA_RANGE *v97; // [rsp+48h] [rbp-B8h]
  KSPIN_LOCK *v98; // [rsp+50h] [rbp-B0h]
  size_t v99; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v100; // [rsp+60h] [rbp-A0h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v101; // [rsp+68h] [rbp-98h] BYREF
  struct _VIDMM_DMA_BUFFER *v102[13]; // [rsp+70h] [rbp-90h] BYREF
  struct _VIDMM_DMA_BUFFER *v103; // [rsp+D8h] [rbp-28h]
  _QWORD v104[44]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int8 v107; // [rsp+260h] [rbp+160h]

  v107 = a3;
  v7 = a2;
  v8 = a3;
  v9 = this;
  v10 = a4;
  memset(&v104[20], 0, 0x78uLL);
  memset(v102, 0, 0x58uLL);
  v12 = (unsigned int)v7;
  v13 = *((_QWORD *)v9 + 5023);
  v14 = 1560 * v7;
  v15 = v13 + 1560 * v7;
  if ( g_IsInternalReleaseOrDbg )
  {
    v89 = (_QWORD *)WdLogNewEntry5_WdTrace(v11);
    v89[3] = v8;
    v89[4] = *((unsigned int *)v9 + v7 + 414);
    v89[5] = *((unsigned int *)v9 + v7 + 478);
    v13 = *((_QWORD *)v9 + 5023);
  }
  v16 = *((_BYTE *)v9 + 40873);
  v17 = v16;
  if ( (v16 & 1) != 0 )
  {
    v17 = v16;
    if ( v8 )
    {
      LOBYTE(v17) = v16 | 2;
      *((_BYTE *)v9 + 40873) = v16 | 2;
    }
  }
  v18 = (unsigned __int8)v17;
  if ( (*(_BYTE *)(v13 + v14 + 436) & 1) != 0 && *((_QWORD *)v9 + v7 + 143) && *((_DWORD *)v9 + 2) && (v17 & 1) == 0 )
  {
    LOBYTE(v17) = v17 | 1;
    *((_BYTE *)v9 + 40873) = v17;
    v19 = (struct _KTHREAD **)*((_QWORD *)v9 + v7 + 5044);
    while ( 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        v21 = (_QWORD **)(v14 + *((_QWORD *)v9 + 5023) + 464LL);
        v22 = *v21;
        if ( *v21 == v21 )
          break;
        v78 = v22[2];
        v79 = *((_QWORD *)v9 + v12 + 746);
        v97 = (struct VIDMM_MAPPED_VA_RANGE *)(v22 - 3);
        if ( !VidSchIsMonitoredFenceSignaled(v79, v78) )
          break;
        v81 = *v22;
        if ( *(_QWORD **)(*v22 + 8LL) != v22 || (v82 = (_QWORD *)v22[1], (_QWORD *)*v82 != v22) )
LABEL_136:
          __fastfail(3u);
        *v82 = v81;
        *(_QWORD *)(v81 + 8) = v82;
        *v22 = 0LL;
        v22[1] = 0LL;
        if ( VIDMM_GLOBAL::_Config >= 0 )
        {
          v20 = 1;
          CVirtualAddressAllocator::UncommitVirtualAddressRange(
            *((CVirtualAddressAllocator **)v9 + v12 + 5044),
            v97,
            0LL,
            1);
        }
        v83 = 0;
        v97 = *(struct VIDMM_MAPPED_VA_RANGE **)v97;
        if ( v19[8] != KeGetCurrentThread() )
        {
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v19 + 7));
          v83 = 1;
        }
        CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)v19, v97, v80);
        if ( v83 )
        {
          v19[8] = 0LL;
          ExReleasePushLockExclusiveEx(v19 + 7, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      if ( !v20 )
        break;
      VIDMM_GLOBAL::FlushPagingBufferInternal(v9, a2, 0, 0LL, 0LL, 0, 0);
    }
    *((_BYTE *)v9 + 40873) &= ~1u;
    v18 = *((unsigned __int8 *)v9 + 40873);
    v10 = a4;
    LODWORD(v7) = a2;
    v8 = v107;
  }
  if ( (v18 & 1) == 0 )
  {
    if ( a6 && (v18 & 2) != 0 )
    {
      v8 = 0;
      v107 = 0;
    }
    LOBYTE(v18) = v18 & 0xFD;
    *((_BYTE *)v9 + 40873) = v18;
  }
  if ( *((_DWORD *)v9 + v12 + 478) == *((_DWORD *)v9 + v12 + 414)
    && *((_DWORD *)v9 + v12 + 606) == *((_DWORD *)v9 + v12 + 542)
    && !v8 )
  {
    v73 = (_QWORD *)*((_QWORD *)v9 + 471);
    if ( v73 != (_QWORD *)((char *)v9 + 3768) )
    {
      while ( 1 )
      {
        v74 = v73 - 29;
        v75 = v73;
        v76 = *((_DWORD *)v73 - 39);
        v73 = (_QWORD *)*v73;
        if ( (v76 & 0x3F) == (_DWORD)v7 )
        {
          if ( (_QWORD *)v73[1] != v75 )
            goto LABEL_136;
          v77 = (_QWORD *)v75[1];
          if ( (_QWORD *)*v77 != v75 )
            goto LABEL_136;
          *v77 = v73;
          v73[1] = v77;
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v18) + 24) = v74;
          v18 = *((_QWORD *)v9 + 474);
          if ( *(VIDMM_GLOBAL **)v18 != (VIDMM_GLOBAL *)((char *)v9 + 3784) )
            goto LABEL_136;
          *v75 = (char *)v9 + 3784;
          v75[1] = v18;
          *(_QWORD *)v18 = v75;
          *((_QWORD *)v9 + 474) = v75;
        }
        if ( v73 == (_QWORD *)((char *)v9 + 3768) )
          return;
      }
    }
    return;
  }
  if ( !*((_DWORD *)v9 + 2) )
  {
    v90 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17);
    v90[3] = 270LL;
    v90[4] = 33LL;
    v90[5] = v9;
    v90[6] = 0LL;
    v90[7] = 0LL;
    WdLogEvent5_WdCriticalError(v90);
  }
  v23 = (char *)v9 + 8 * v12;
  v24 = *((_QWORD *)v23 + 143);
  LODWORD(v99) = *(_DWORD *)(v24 + 172);
  v25 = *(_DWORD *)(v24 + 168);
  *(_DWORD *)(v24 + 172) = v25;
  v26 = (_QWORD *)*((_QWORD *)v23 + 143);
  LODWORD(v97) = v25;
  v27 = v26[7];
  if ( v27 )
  {
    v28 = *(_QWORD *)(v27 + 136);
    if ( (*(_DWORD *)(v28 + 80) & 0x1000) != 0 )
      LODWORD(v98) = 0;
    else
      LODWORD(v98) = *(_DWORD *)(v28 + 16) + 1;
    v29 = (struct _VIDMM_DMA_BUFFER *)(*(_QWORD *)(v27 + 144) + *(_QWORD *)(v28 + 24));
  }
  else
  {
    v29 = (struct _VIDMM_DMA_BUFFER *)v26[11];
    LODWORD(v98) = 0;
  }
  if ( v10 )
  {
    ((void (__fastcall *)(void *))v10)(a5);
    v26 = (_QWORD *)*((_QWORD *)v23 + 143);
  }
  if ( *(_DWORD *)(v26[17] + 36LL) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v26[7] + 136LL) + 56LL))(*(_QWORD *)(v26[7] + 136LL));
  for ( i = 0; i < *(_DWORD *)(v15 + 24); ++i )
  {
    v31 = *(_QWORD *)(*((_QWORD *)v9 + 464) + 8LL * (i + *(_DWORD *)(*((_QWORD *)v9 + 5023) + v14 + 20)));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 160LL))(v31);
  }
  v32 = (VIDMM_GLOBAL **)*((unsigned int *)v9 + v12 + 414);
  v33 = (_DWORD)v32 == *((_DWORD *)v9 + v12 + 478) && *((_DWORD *)v9 + v12 + 542) == *((_DWORD *)v9 + v12 + 606);
  v34 = *((unsigned int *)v9 + v12 + 1171);
  if ( !(_DWORD)v34 && v33 )
  {
    v70 = a2;
    goto LABEL_63;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v9 + 5023) + v14 + 436) & 0x40) != 0 )
  {
    v91 = WdLogNewEntry5_WdWarning(v32, v34);
    *(_QWORD *)(v91 + 24) = v12;
    WdLogEvent5_WdWarning(v91);
    LODWORD(v34) = *((_DWORD *)v9 + v12 + 1171);
  }
  if ( !(_DWORD)v34 )
  {
    *((_DWORD *)v9 + v12 + 1171) = 1;
    ++*((_QWORD *)v9 + v12 + 618);
  }
  v35 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)v9 + v12 + 618);
  v36 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v9 + v12 + 746);
  v37 = *((_QWORD *)v9 + 2);
  v38 = v36;
  v103 = v35;
  v96 = *(_BYTE *)(*(_QWORD *)(v37 + 528) + 55LL);
  v101 = v36;
  v100 = (unsigned __int64)v35;
  if ( v96 && !*(_BYTE *)(*(_QWORD *)(v37 + 528) + 58LL) )
  {
    VIDMM_GLOBAL::SignalMonitoredFence(v9, a2, v36, (unsigned __int64)v35, &v96);
    v38 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v9 + v12 + 746);
  }
  v102[4] = *((struct _VIDMM_DMA_BUFFER **)v38 + 8);
  v102[3] = *((struct _VIDMM_DMA_BUFFER **)v9 + v12 + 810);
  v39 = (volatile signed __int32 *)*((_QWORD *)v9 + v12 + 143);
  v102[0] = (struct _VIDMM_DMA_BUFFER *)256;
  v102[1] = (struct _VIDMM_DMA_BUFFER *)v39;
  v102[2] = v35;
  _InterlockedIncrement(v39 + 8);
  v40 = *((_DWORD *)v9 + v12 + 478);
  v41 = a7;
  v102[6] = (struct _VIDMM_DMA_BUFFER *)__PAIR64__(v40, (unsigned int)v98);
  LODWORD(v39) = *((_DWORD *)v9 + v12 + 414) - v40;
  v42 = *((_DWORD *)v9 + v12 + 606);
  v102[7] = (struct _VIDMM_DMA_BUFFER *)__PAIR64__(v42, (unsigned int)v39);
  v102[8] = (struct _VIDMM_DMA_BUFFER *)__PAIR64__(v99, *((_DWORD *)v9 + v12 + 542) - v42);
  LODWORD(v102[9]) = (_DWORD)v97;
  v43 = *((_QWORD *)v9 + 3);
  v102[5] = v29;
  v44 = *(_QWORD *)(v43 + 2440) + 352 * v12;
  if ( a7 )
    v45 = *(_DWORD *)(v44 + 20);
  else
    v45 = *(unsigned __int16 *)(v44 + 2);
  HIDWORD(v102[9]) = VidSchGetNodeOrdinal(*(_QWORD *)(*((_QWORD *)v9 + 2) + 528LL), a2, v45);
  v46 = HIDWORD(v102[9]);
  v47 = a7 != 0;
  v48 = (*((_BYTE *)v9 + 40872) & 2) == 0;
  LOBYTE(v102[10]) = a7 != 0;
  if ( !v48 && *((_QWORD *)v9 + 5115) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryFlushPagingBuffer(
      v9,
      (struct VIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER *)v102,
      a2);
    v47 = (char)v102[10];
    v46 = HIDWORD(v102[9]);
  }
  v49 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 528LL);
  if ( !VidSchIsTDRPending(v49) )
  {
    if ( *(_BYTE *)(v49 + 55) )
    {
      VidSchiSubmitHwPagingCommand(v49, v102);
      goto LABEL_55;
    }
    v50 = (unsigned int)VidSchiSchedulerNodeToDriverEngine(v49, v46);
    v51 = *(_QWORD *)(*(_QWORD *)(v49 + 248) + 8 * v50);
    if ( v47 )
    {
      v92 = *(_QWORD *)(*(_QWORD *)(v49 + 272) + 8 * v50);
      if ( v92 )
        v51 = v92;
    }
    v52 = *(_QWORD *)(*(_QWORD *)(v51 + 96) + 24LL);
    v53 = *(_DWORD *)(v52 + 140) * ((*(_DWORD *)(v52 + 64) << 6) + ((8 * *(_DWORD *)(v52 + 64) + 191) & 0xFFFFFFF8))
        + 8 * (*(_DWORD *)(v52 + 64) + 105);
    if ( v53 <= 0x410 )
      v53 = 1040;
    v98 = (KSPIN_LOCK *)(v52 + 1656);
    v54 = VidSchiInterlockedRemoveHeadListIfExist(
            (KSPIN_LOCK *)(v52 + 1656),
            (_QWORD **)(v51 + 704),
            (_DWORD *)(v51 + 720));
    if ( v54 )
    {
      PoolWithTag = v54 - 1;
    }
    else
    {
      v99 = v53;
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v53, 0x35616956u);
      if ( PoolWithTag )
      {
        v56 = v99;
        goto LABEL_51;
      }
      memset(v104, 0, 0xA0uLL);
      v93 = *(_QWORD *)(v51 + 96);
      LODWORD(v104[4]) |= 0x40u;
      LODWORD(v104[2]) = 1;
      LODWORD(v104[6]) = *(unsigned __int16 *)(v93 + 4);
      VidSchRegisterCompletionEvent(v52, (__int64)v104);
      do
      {
        v94 = VidSchiInterlockedRemoveHeadListIfExist(
                (KSPIN_LOCK *)(v52 + 1656),
                (_QWORD **)(v51 + 704),
                (_DWORD *)(v51 + 720));
        if ( v94 )
          PoolWithTag = v94 - 1;
        else
          VidSchWaitForCompletionEvent(v52, (__int64)v104, (const GUID *)0x13);
      }
      while ( !PoolWithTag );
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v52 + 1664), v104, 0LL);
      v9 = this;
    }
    if ( !PoolWithTag )
    {
LABEL_52:
      *(_DWORD *)PoolWithTag = 895576406;
      *((_DWORD *)PoolWithTag + 12) = 8;
      PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)PoolWithTag + 13) = 2;
      PoolWithTag[11] = v51;
      CurrentThread = KeGetCurrentThread();
      v59 = v102[0];
      v60 = *(_OWORD *)&v102[2];
      v61 = *(_OWORD *)&v102[4];
      *((_OWORD *)PoolWithTag + 17) = *(_OWORD *)v102;
      PoolWithTag[13] = CurrentThread;
      *((_OWORD *)PoolWithTag + 18) = v60;
      v62 = *(_OWORD *)&v102[6];
      *((_OWORD *)PoolWithTag + 19) = v61;
      v63 = *(_OWORD *)&v102[8];
      *((_OWORD *)PoolWithTag + 20) = v62;
      *(struct _VIDMM_DMA_BUFFER **)&v62 = v102[10];
      *((_OWORD *)PoolWithTag + 21) = v63;
      PoolWithTag[44] = v62;
      PoolWithTag[9] = v59;
      if ( (*(_DWORD *)(v49 + 1936) & 2) != 0 )
      {
        PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
        VidSchiSetPriorityContext((struct _VIDSCH_CONTEXT *)v51, PriorityThread);
      }
      VidSchiSubmitCommandPacketToQueue((__int64)PoolWithTag);
      v41 = a7;
      v35 = v103;
      goto LABEL_55;
    }
    v56 = v53;
LABEL_51:
    memset(PoolWithTag, 0, v56);
    v57 = v98;
    PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)PoolWithTag + 13) = 1;
    VidSchiInterlockedInsertTailList(v57, v51 + 752, PoolWithTag + 1, (_DWORD *)(v51 + 768));
    goto LABEL_52;
  }
  if ( ((__int64)v102[0] & 0x100) != 0 )
    VIDMM_DMA_POOL::ReleaseBuffer(*((VIDMM_DMA_POOL **)v102[1] + 17), v102[1], 1);
LABEL_55:
  if ( v96 )
  {
LABEL_128:
    v70 = a2;
    goto LABEL_62;
  }
  v64 = v41 != 0;
  v65 = 0;
  v66 = 0LL;
  v67 = 0;
  v68 = 0LL;
  v69 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 528LL);
  if ( !*(_BYTE *)(v69 + 55) )
  {
    v70 = a2;
    if ( a2 == -1 )
    {
      v65 = *(_DWORD *)(v69 + 64);
      if ( v64 )
        v66 = *(_QWORD **)(v69 + 272);
      else
        v66 = *(_QWORD **)(v69 + 248);
    }
    else
    {
      v65 = 1;
      if ( v64 )
        v71 = *(_QWORD *)(v69 + 272);
      else
        v71 = *(_QWORD *)(v69 + 248);
      v66 = (_QWORD *)(v71 + 8 * v12);
    }
    goto LABEL_61;
  }
  v68 = *(_QWORD **)(v69 + 264);
  if ( !*v68 )
  {
    VidSchSignalSyncObjectsFromCpu(1LL, &v101, 0, (char *)&v100);
    goto LABEL_128;
  }
  v70 = a2;
  if ( a2 == -1 )
  {
    v67 = *(_DWORD *)(v69 + 64);
  }
  else
  {
    v67 = 1;
    v68 += v12;
  }
LABEL_61:
  VidSchSignalSyncObjectsFromGpu(v67, (__int64)v68, v65, v66, 1u, (void **)&v101, 0, &v100);
LABEL_62:
  *((_QWORD *)v9 + v12 + 682) = v35;
  v32 = (VIDMM_GLOBAL **)*((unsigned int *)v9 + v12 + 414);
LABEL_63:
  *((_DWORD *)v9 + v12 + 606) = *((_DWORD *)v9 + v12 + 542);
  *((_DWORD *)v9 + v12 + 478) = (_DWORD)v32;
  v72 = (VIDMM_GLOBAL *)*((_QWORD *)v9 + 471);
  while ( v72 != (VIDMM_GLOBAL *)((char *)v9 + 3768) )
  {
    v85 = (_QWORD *)((char *)v72 - 232);
    v86 = v72;
    v87 = *((_DWORD *)v72 - 39);
    v72 = *(VIDMM_GLOBAL **)v72;
    if ( (v87 & 0x3F) == v70 )
    {
      if ( *((VIDMM_GLOBAL **)v72 + 1) != v86 )
        goto LABEL_136;
      v88 = (VIDMM_GLOBAL **)*((_QWORD *)v86 + 1);
      if ( *v88 != v86 )
        goto LABEL_136;
      *v88 = v72;
      *((_QWORD *)v72 + 1) = v88;
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v32) + 24) = v85;
      v32 = (VIDMM_GLOBAL **)*((_QWORD *)v9 + 474);
      if ( *v32 != (VIDMM_GLOBAL *)((char *)v9 + 3784) )
        goto LABEL_136;
      *(_QWORD *)v86 = (char *)v9 + 3784;
      *((_QWORD *)v86 + 1) = v32;
      *v32 = v86;
      *((_QWORD *)v9 + 474) = v86;
    }
  }
  *((_DWORD *)v9 + v12 + 958) = 1;
  *((_DWORD *)v9 + v12 + 1171) = 0;
  if ( v107 )
  {
    v84 = (VIDMM_DMA_POOL **)((char *)v9 + 8 * v12);
    VIDMM_DMA_POOL::ReleaseBuffer(v84[79], v84[143], 1);
    VIDMM_DMA_POOL::AcquireBuffer(v84[79], v84 + 143, 0, 1);
    *((_DWORD *)v84[143] + 8) = 1;
    *((_DWORD *)v9 + v12 + 414) = 0;
    *((_DWORD *)v9 + v12 + 478) = 0;
    *((_DWORD *)v9 + v12 + 542) = 0;
    *((_DWORD *)v9 + v12 + 606) = 0;
  }
  *(_QWORD *)(*((_QWORD *)v9 + 5023) + 448LL) = 0LL;
}
