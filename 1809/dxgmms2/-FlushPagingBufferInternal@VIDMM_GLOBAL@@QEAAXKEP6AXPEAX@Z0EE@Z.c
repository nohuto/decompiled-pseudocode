/*
 * XREFs of ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0
 * Callers:
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0066340 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C006F450 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006FA30 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006FE10 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0071660 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C0071A90 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00721E4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00728D0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C0073CC0 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C00751C0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C0075F44 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C007F6B4 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C007F918 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0080114 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AA58C (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00AB0A4 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AD464 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00BC760 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00BDBB8 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x1C00024CC (VidSchIsMonitoredFenceSignaled.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0002CAC (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0003990 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0003A10 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0003AA0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0004750 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchIsTDRPending @ 0x1C00083F0 (VidSchIsTDRPending.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0010A40 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     VidSchiSetPriorityContext @ 0x1C0012490 (VidSchiSetPriorityContext.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0014904 (VidSchiInterlockedRemoveEntryList.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0015664 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0032CB0 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0066880 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0066B38 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0067AE0 (VidSchRegisterCompletionEvent.c)
 *     VidSchGetNodeOrdinal @ 0x1C0067EB4 (VidSchGetNodeOrdinal.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C006A150 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0073AE0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C00AC4F8 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     ?RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER@@K@Z @ 0x1C00B5BCC (-RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00CA810 (VidSchiSubmitHwPagingCommand.c)
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
  unsigned __int8 v7; // bl
  __int64 v8; // r10
  VIDMM_GLOBAL *v9; // rdi
  unsigned int v10; // r11d
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // r12
  unsigned __int8 v14; // al
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  struct _KTHREAD **v17; // r13
  char v18; // r14
  _QWORD **v19; // rcx
  _QWORD *v20; // rbx
  char *v21; // r14
  __int64 v22; // rax
  int v23; // ecx
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rbx
  unsigned int i; // r14d
  __int64 v29; // rcx
  VIDMM_GLOBAL **v30; // rcx
  bool v31; // al
  __int64 v32; // rdx
  unsigned __int64 v33; // r13
  struct _VIDSCH_SYNC_OBJECT *v34; // r8
  __int64 v35; // rdx
  struct _VIDSCH_SYNC_OBJECT *v36; // r9
  volatile signed __int32 *v37; // rax
  unsigned int v38; // ecx
  char v39; // r12
  unsigned int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  int v44; // r8d
  unsigned int v45; // r15d
  bool v46; // bl
  bool v47; // zf
  __int64 v48; // r14
  __int64 v49; // rcx
  __int64 v50; // r15
  __int64 v51; // r13
  unsigned int v52; // r12d
  _QWORD *v53; // rax
  _QWORD *PoolWithTag; // rbx
  size_t v55; // rax
  KSPIN_LOCK *v56; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _VIDMM_DMA_BUFFER *v58; // xmm2_8
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  bool v63; // cl
  unsigned __int64 v64; // r8
  __int64 *v65; // r9
  unsigned int v66; // r10d
  _QWORD *v67; // rdx
  __int64 v68; // rax
  unsigned int v69; // r12d
  __int64 v70; // rax
  VIDMM_GLOBAL *v71; // r14
  _QWORD *v72; // rsi
  _QWORD *v73; // r15
  _QWORD *v74; // r14
  int v75; // eax
  _QWORD *v76; // rax
  unsigned __int64 v77; // rdx
  __int64 v78; // rcx
  const GUID *v79; // r8
  __int64 v80; // rax
  _QWORD *v81; // rcx
  char v82; // bl
  VIDMM_DMA_POOL **v83; // rbx
  _QWORD *v84; // r13
  VIDMM_GLOBAL *v85; // r15
  int v86; // eax
  VIDMM_GLOBAL **v87; // rax
  _QWORD *v88; // rax
  __int64 v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rcx
  _QWORD *v94; // rax
  KPRIORITY PriorityThread; // eax
  bool v96; // [rsp+40h] [rbp-C0h] BYREF
  struct VIDMM_VAD *v97; // [rsp+48h] [rbp-B8h]
  KSPIN_LOCK *v98; // [rsp+50h] [rbp-B0h]
  size_t v99; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v100; // [rsp+60h] [rbp-A0h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v101; // [rsp+68h] [rbp-98h] BYREF
  struct _VIDMM_DMA_BUFFER *v102[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v103; // [rsp+80h] [rbp-80h]
  __int128 v104; // [rsp+90h] [rbp-70h]
  __int128 v105; // [rsp+A0h] [rbp-60h]
  __int128 v106; // [rsp+B0h] [rbp-50h]
  _BOOL8 v107; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v108; // [rsp+D8h] [rbp-28h]
  _QWORD v109[21]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int8 v112; // [rsp+1E0h] [rbp+E0h]
  void (*v113)(void *); // [rsp+1E8h] [rbp+E8h]

  v113 = a4;
  v112 = a3;
  v7 = a3;
  v8 = *((_QWORD *)this + 5023);
  v9 = this;
  v10 = a2;
  v11 = 1560LL * a2;
  v12 = a2;
  v13 = v8 + v11;
  if ( g_IsInternalReleaseOrDbg )
  {
    v88 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    a4 = v113;
    v10 = a2;
    v88[3] = v7;
    v88[4] = *((unsigned int *)v9 + v12 + 414);
    v88[5] = *((unsigned int *)v9 + v12 + 478);
    v8 = *((_QWORD *)v9 + 5023);
  }
  v14 = *((_BYTE *)v9 + 40873);
  v15 = v14;
  if ( (v14 & 1) != 0 )
  {
    v15 = v14;
    if ( v7 )
    {
      LOBYTE(v15) = v14 | 2;
      *((_BYTE *)v9 + 40873) = v14 | 2;
    }
  }
  v16 = (unsigned __int8)v15;
  if ( (*(_BYTE *)(v8 + v11 + 436) & 1) != 0 && *((_QWORD *)v9 + v12 + 143) && *((_DWORD *)v9 + 2) && (v15 & 1) == 0 )
  {
    LOBYTE(v15) = v15 | 1;
    *((_BYTE *)v9 + 40873) = v15;
    v17 = (struct _KTHREAD **)*((_QWORD *)v9 + v12 + 5044);
    while ( 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        v19 = (_QWORD **)(v11 + *((_QWORD *)v9 + 5023) + 464LL);
        v20 = *v19;
        if ( *v19 == v19 )
          break;
        v77 = v20[2];
        v78 = *((_QWORD *)v9 + v12 + 746);
        v97 = (struct VIDMM_VAD *)(v20 - 3);
        if ( !VidSchIsMonitoredFenceSignaled(v78, v77) )
          break;
        v80 = *v20;
        if ( *(_QWORD **)(*v20 + 8LL) != v20 || (v81 = (_QWORD *)v20[1], (_QWORD *)*v81 != v20) )
LABEL_136:
          __fastfail(3u);
        *v81 = v80;
        *(_QWORD *)(v80 + 8) = v81;
        *v20 = 0LL;
        v20[1] = 0LL;
        if ( VIDMM_GLOBAL::_Config >= 0 )
        {
          v18 = 1;
          CVirtualAddressAllocator::UncommitVirtualAddressRange(
            *((CVirtualAddressAllocator **)v9 + v12 + 5044),
            v97,
            0LL,
            1u);
        }
        v82 = 0;
        v97 = *(struct VIDMM_VAD **)v97;
        if ( v17[8] != KeGetCurrentThread() )
        {
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v17 + 7));
          v82 = 1;
        }
        CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)v17, v97, v79);
        if ( v82 )
        {
          v17[8] = 0LL;
          ExReleasePushLockExclusiveEx(v17 + 7, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      if ( !v18 )
        break;
      VIDMM_GLOBAL::FlushPagingBufferInternal(v9, a2, 0, 0LL, 0LL, 0, 0);
    }
    *((_BYTE *)v9 + 40873) &= ~1u;
    v16 = *((unsigned __int8 *)v9 + 40873);
    a4 = v113;
    v10 = a2;
    v7 = v112;
  }
  if ( (v16 & 1) == 0 )
  {
    if ( a6 && (v16 & 2) != 0 )
    {
      v7 = 0;
      v112 = 0;
    }
    LOBYTE(v16) = v16 & 0xFD;
    *((_BYTE *)v9 + 40873) = v16;
  }
  if ( *((_DWORD *)v9 + v12 + 478) == *((_DWORD *)v9 + v12 + 414)
    && *((_DWORD *)v9 + v12 + 606) == *((_DWORD *)v9 + v12 + 542)
    && !v7 )
  {
    v72 = (_QWORD *)*((_QWORD *)v9 + 471);
    if ( v72 != (_QWORD *)((char *)v9 + 3768) )
    {
      while ( 1 )
      {
        v73 = v72 - 29;
        v74 = v72;
        v75 = *((_DWORD *)v72 - 39);
        v72 = (_QWORD *)*v72;
        if ( (v75 & 0x3F) == v10 )
        {
          if ( (_QWORD *)v72[1] != v74 )
            goto LABEL_136;
          v76 = (_QWORD *)v74[1];
          if ( (_QWORD *)*v76 != v74 )
            goto LABEL_136;
          *v76 = v72;
          v72[1] = v76;
          if ( g_IsInternalReleaseOrDbg )
          {
            v89 = WdLogNewEntry5_WdTrace(v16);
            v10 = a2;
            *(_QWORD *)(v89 + 24) = v73;
          }
          v16 = *((_QWORD *)v9 + 474);
          if ( *(VIDMM_GLOBAL **)v16 != (VIDMM_GLOBAL *)((char *)v9 + 3784) )
            goto LABEL_136;
          *v74 = (char *)v9 + 3784;
          v74[1] = v16;
          *(_QWORD *)v16 = v74;
          *((_QWORD *)v9 + 474) = v74;
        }
        if ( v72 == (_QWORD *)((char *)v9 + 3768) )
          return;
      }
    }
    return;
  }
  if ( !*((_DWORD *)v9 + 2) )
  {
    v90 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15);
    v90[3] = 270LL;
    v90[4] = 33LL;
    v90[5] = v9;
    v90[6] = 0LL;
    v90[7] = 0LL;
    WdLogEvent5_WdCriticalError(v90);
    a4 = v113;
  }
  v21 = (char *)v9 + 8 * v12;
  v22 = *((_QWORD *)v21 + 143);
  LODWORD(v99) = *(_DWORD *)(v22 + 172);
  v23 = *(_DWORD *)(v22 + 168);
  *(_DWORD *)(v22 + 172) = v23;
  v24 = (_QWORD *)*((_QWORD *)v21 + 143);
  LODWORD(v97) = v23;
  v25 = v24[7];
  if ( v25 )
  {
    v26 = *(_QWORD *)(v25 + 136);
    if ( (*(_DWORD *)(v26 + 80) & 0x1000) != 0 )
      LODWORD(v98) = 0;
    else
      LODWORD(v98) = *(_DWORD *)(v26 + 16) + 1;
    v27 = *(_QWORD *)(v25 + 144) + *(_QWORD *)(v26 + 24);
  }
  else
  {
    v27 = v24[11];
    LODWORD(v98) = 0;
  }
  if ( a4 )
  {
    ((void (__fastcall *)(void *))a4)(a5);
    v24 = (_QWORD *)*((_QWORD *)v21 + 143);
  }
  if ( *(_DWORD *)(v24[17] + 36LL) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v24[7] + 136LL) + 56LL))(*(_QWORD *)(v24[7] + 136LL));
  for ( i = 0; i < *(_DWORD *)(v13 + 24); ++i )
  {
    v29 = *(_QWORD *)(*((_QWORD *)v9 + 464) + 8LL * (i + *(_DWORD *)(*((_QWORD *)v9 + 5023) + v11 + 20)));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 160LL))(v29);
  }
  v30 = (VIDMM_GLOBAL **)*((unsigned int *)v9 + v12 + 414);
  v31 = (_DWORD)v30 == *((_DWORD *)v9 + v12 + 478) && *((_DWORD *)v9 + v12 + 542) == *((_DWORD *)v9 + v12 + 606);
  v32 = *((unsigned int *)v9 + v12 + 1171);
  if ( !(_DWORD)v32 && v31 )
  {
    v69 = a2;
    goto LABEL_63;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v9 + 5023) + v11 + 436) & 0x40) != 0 )
  {
    v91 = WdLogNewEntry5_WdWarning(v30, v32);
    *(_QWORD *)(v91 + 24) = v12;
    WdLogEvent5_WdWarning(v91);
    LODWORD(v32) = *((_DWORD *)v9 + v12 + 1171);
  }
  if ( !(_DWORD)v32 )
  {
    *((_DWORD *)v9 + v12 + 1171) = 1;
    ++*((_QWORD *)v9 + v12 + 618);
  }
  v33 = *((_QWORD *)v9 + v12 + 618);
  v34 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v9 + v12 + 746);
  v35 = *((_QWORD *)v9 + 2);
  v36 = v34;
  v108 = v33;
  v96 = *(_BYTE *)(*(_QWORD *)(v35 + 528) + 55LL);
  v101 = v34;
  v100 = v33;
  if ( v96 && !*(_BYTE *)(*(_QWORD *)(v35 + 528) + 58LL) )
  {
    VIDMM_GLOBAL::SignalMonitoredFence(v9, a2, v34, v33, &v96);
    v36 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v9 + v12 + 746);
  }
  *(_QWORD *)&v104 = *((_QWORD *)v36 + 8);
  *((_QWORD *)&v103 + 1) = *((_QWORD *)v9 + v12 + 810);
  v37 = (volatile signed __int32 *)*((_QWORD *)v9 + v12 + 143);
  v102[0] = (struct _VIDMM_DMA_BUFFER *)256;
  v102[1] = (struct _VIDMM_DMA_BUFFER *)v37;
  *(_QWORD *)&v103 = v33;
  _InterlockedIncrement(v37 + 8);
  v38 = *((_DWORD *)v9 + v12 + 478);
  v39 = a7;
  *(_QWORD *)&v105 = __PAIR64__(v38, (unsigned int)v98);
  LODWORD(v37) = *((_DWORD *)v9 + v12 + 414) - v38;
  v40 = *((_DWORD *)v9 + v12 + 606);
  *((_QWORD *)&v105 + 1) = __PAIR64__(v40, (unsigned int)v37);
  *(_QWORD *)&v106 = __PAIR64__(v99, *((_DWORD *)v9 + v12 + 542) - v40);
  DWORD2(v106) = (_DWORD)v97;
  v41 = *((_QWORD *)v9 + 3);
  v42 = 352 * v12;
  *((_QWORD *)&v104 + 1) = v27;
  v43 = *(_QWORD *)(v41 + 2416);
  if ( a7 )
    v44 = *(_DWORD *)(v43 + v42 + 20);
  else
    v44 = *(unsigned __int16 *)(v43 + v42 + 2);
  HIDWORD(v106) = VidSchGetNodeOrdinal(*(_QWORD *)(*((_QWORD *)v9 + 2) + 528LL), a2, v44);
  v45 = HIDWORD(v106);
  v46 = a7 != 0;
  v47 = (*((_BYTE *)v9 + 40872) & 2) == 0;
  LOBYTE(v107) = a7 != 0;
  if ( !v47 && *((_QWORD *)v9 + 5115) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryFlushPagingBuffer(
      v9,
      (struct VIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER *)v102,
      a2);
    v46 = v107;
    v45 = HIDWORD(v106);
  }
  v48 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 528LL);
  if ( !VidSchIsTDRPending(v48) )
  {
    if ( *(_BYTE *)(v48 + 55) )
    {
      VidSchiSubmitHwPagingCommand(v48, v102);
      goto LABEL_55;
    }
    v49 = (unsigned int)VidSchiSchedulerNodeToDriverEngine(v48, v45);
    v50 = *(_QWORD *)(*(_QWORD *)(v48 + 248) + 8 * v49);
    if ( v46 )
    {
      v92 = *(_QWORD *)(*(_QWORD *)(v48 + 272) + 8 * v49);
      if ( v92 )
        v50 = v92;
    }
    v51 = *(_QWORD *)(*(_QWORD *)(v50 + 96) + 24LL);
    v52 = *(_DWORD *)(v51 + 140) * ((*(_DWORD *)(v51 + 64) << 6) + ((8 * *(_DWORD *)(v51 + 64) + 191) & 0xFFFFFFF8))
        + 8 * (*(_DWORD *)(v51 + 64) + 106);
    if ( v52 <= 0x410 )
      v52 = 1040;
    v98 = (KSPIN_LOCK *)(v51 + 1656);
    v53 = VidSchiInterlockedRemoveHeadListIfExist(
            (KSPIN_LOCK *)(v51 + 1656),
            (_QWORD **)(v50 + 704),
            (_DWORD *)(v50 + 720));
    if ( v53 )
    {
      PoolWithTag = v53 - 1;
    }
    else
    {
      v99 = v52;
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v52, 0x35616956u);
      if ( PoolWithTag )
      {
        v55 = v99;
        goto LABEL_51;
      }
      memset(v109, 0, 0xA0uLL);
      v93 = *(_QWORD *)(v50 + 96);
      LODWORD(v109[4]) |= 0x40u;
      LODWORD(v109[2]) = 1;
      LODWORD(v109[6]) = *(unsigned __int16 *)(v93 + 4);
      VidSchRegisterCompletionEvent(v51, (__int64)v109);
      do
      {
        v94 = VidSchiInterlockedRemoveHeadListIfExist(
                (KSPIN_LOCK *)(v51 + 1656),
                (_QWORD **)(v50 + 704),
                (_DWORD *)(v50 + 720));
        if ( v94 )
          PoolWithTag = v94 - 1;
        else
          VidSchWaitForCompletionEvent(v51, (__int64)v109, (const GUID *)0x13);
      }
      while ( !PoolWithTag );
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v51 + 1664), v109, 0LL);
      v9 = this;
    }
    if ( !PoolWithTag )
    {
LABEL_52:
      *(_DWORD *)PoolWithTag = 895576406;
      *((_DWORD *)PoolWithTag + 12) = 8;
      PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)PoolWithTag + 13) = 2;
      PoolWithTag[11] = v50;
      CurrentThread = KeGetCurrentThread();
      v58 = v102[0];
      v59 = v103;
      v60 = v104;
      *((_OWORD *)PoolWithTag + 17) = *(_OWORD *)v102;
      PoolWithTag[13] = CurrentThread;
      *((_OWORD *)PoolWithTag + 18) = v59;
      v61 = v105;
      *((_OWORD *)PoolWithTag + 19) = v60;
      v62 = v106;
      *((_OWORD *)PoolWithTag + 20) = v61;
      *(_QWORD *)&v61 = v107;
      *((_OWORD *)PoolWithTag + 21) = v62;
      PoolWithTag[44] = v61;
      PoolWithTag[9] = v58;
      if ( (*(_DWORD *)(v48 + 1936) & 2) != 0 )
      {
        PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
        VidSchiSetPriorityContext((struct _VIDSCH_CONTEXT *)v50, PriorityThread);
      }
      VidSchiSubmitCommandPacketToQueue((__int64)PoolWithTag);
      v39 = a7;
      v33 = v108;
      goto LABEL_55;
    }
    v55 = v52;
LABEL_51:
    memset(PoolWithTag, 0, v55);
    v56 = v98;
    PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)PoolWithTag + 13) = 1;
    VidSchiInterlockedInsertTailList(v56, v50 + 752, PoolWithTag + 1, (_DWORD *)(v50 + 768));
    goto LABEL_52;
  }
  if ( ((__int64)v102[0] & 0x100) != 0 )
    VIDMM_DMA_POOL::ReleaseBuffer(*((VIDMM_DMA_POOL **)v102[1] + 17), v102[1], 1);
LABEL_55:
  if ( v96 )
  {
LABEL_128:
    v69 = a2;
    goto LABEL_62;
  }
  v63 = v39 != 0;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0;
  v67 = 0LL;
  v68 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 528LL);
  if ( !*(_BYTE *)(v68 + 55) )
  {
    v69 = a2;
    if ( a2 == -1 )
    {
      v64 = *(unsigned int *)(v68 + 64);
      if ( v63 )
        v65 = *(__int64 **)(v68 + 272);
      else
        v65 = *(__int64 **)(v68 + 248);
    }
    else
    {
      v64 = 1LL;
      if ( v63 )
        v70 = *(_QWORD *)(v68 + 272);
      else
        v70 = *(_QWORD *)(v68 + 248);
      v65 = (__int64 *)(v70 + 8 * v12);
    }
    goto LABEL_61;
  }
  v67 = *(_QWORD **)(v68 + 264);
  if ( !*v67 )
  {
    VidSchSignalSyncObjectsFromCpu(1LL, &v101, 0LL, (char *)&v100);
    goto LABEL_128;
  }
  v69 = a2;
  if ( a2 == -1 )
  {
    v66 = *(_DWORD *)(v68 + 64);
  }
  else
  {
    v66 = 1;
    v67 += v12;
  }
LABEL_61:
  VidSchSignalSyncObjectsFromGpu(v66, (__int64)v67, v64, v65, 1u, (void **)&v101, 0, &v100);
LABEL_62:
  *((_QWORD *)v9 + v12 + 682) = v33;
  v30 = (VIDMM_GLOBAL **)*((unsigned int *)v9 + v12 + 414);
LABEL_63:
  *((_DWORD *)v9 + v12 + 606) = *((_DWORD *)v9 + v12 + 542);
  *((_DWORD *)v9 + v12 + 478) = (_DWORD)v30;
  v71 = (VIDMM_GLOBAL *)*((_QWORD *)v9 + 471);
  while ( v71 != (VIDMM_GLOBAL *)((char *)v9 + 3768) )
  {
    v84 = (_QWORD *)((char *)v71 - 232);
    v85 = v71;
    v86 = *((_DWORD *)v71 - 39);
    v71 = *(VIDMM_GLOBAL **)v71;
    if ( (v86 & 0x3F) == v69 )
    {
      if ( *((VIDMM_GLOBAL **)v71 + 1) != v85 )
        goto LABEL_136;
      v87 = (VIDMM_GLOBAL **)*((_QWORD *)v85 + 1);
      if ( *v87 != v85 )
        goto LABEL_136;
      *v87 = v71;
      *((_QWORD *)v71 + 1) = v87;
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v30) + 24) = v84;
      v30 = (VIDMM_GLOBAL **)*((_QWORD *)v9 + 474);
      if ( *v30 != (VIDMM_GLOBAL *)((char *)v9 + 3784) )
        goto LABEL_136;
      *(_QWORD *)v85 = (char *)v9 + 3784;
      *((_QWORD *)v85 + 1) = v30;
      *v30 = v85;
      *((_QWORD *)v9 + 474) = v85;
    }
  }
  *((_DWORD *)v9 + v12 + 958) = 1;
  *((_DWORD *)v9 + v12 + 1171) = 0;
  if ( v112 )
  {
    v83 = (VIDMM_DMA_POOL **)((char *)v9 + 8 * v12);
    VIDMM_DMA_POOL::ReleaseBuffer(v83[79], v83[143], 1);
    VIDMM_DMA_POOL::AcquireBuffer(v83[79], v83 + 143, 0, 1u);
    *((_DWORD *)v83[143] + 8) = 1;
    *((_DWORD *)v9 + v12 + 414) = 0;
    *((_DWORD *)v9 + v12 + 478) = 0;
    *((_DWORD *)v9 + v12 + 542) = 0;
    *((_DWORD *)v9 + v12 + 606) = 0;
  }
  *(_QWORD *)(*((_QWORD *)v9 + 5023) + 448LL) = 0LL;
}
