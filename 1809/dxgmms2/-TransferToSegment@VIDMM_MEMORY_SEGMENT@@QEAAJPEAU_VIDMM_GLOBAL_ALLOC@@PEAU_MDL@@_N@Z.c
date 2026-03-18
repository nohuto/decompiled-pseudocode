/*
 * XREFs of ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C007095C
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00706E0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00ABEF0 (-RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001A680 (memmove.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C0024BC0 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C0026B6C (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     McTemplateK0qqqxxp @ 0x1C00286C4 (McTemplateK0qqqxxp.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C006BA84 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C006C1CC (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C006C398 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006EF9C (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C006F03C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006F4CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006F958 (-FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070160 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0070FA4 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0070FCC (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0077F68 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C007E954 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C007F404 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C007F6B4 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008186C (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A85E0 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00AB834 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BB868 (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00BBBFC (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BE79C (-ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferToSegment(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _MDL *a3,
        unsigned __int8 a4)
{
  unsigned int v7; // edi
  __int64 v8; // r15
  __int64 v9; // rdx
  VIDMM_GLOBAL *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rcx
  __int16 v14; // cx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // rcx
  const GUID *v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int8 v25; // al
  unsigned __int64 v26; // r8
  unsigned int v27; // edx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r8
  unsigned int v30; // r13d
  __int64 v31; // r12
  size_t v32; // rcx
  char *v33; // rax
  SIZE_T v34; // r12
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  const GUID *v38; // r8
  const GUID *v39; // r8
  SIZE_T v40; // rdx
  _QWORD *v41; // rax
  SIZE_T v42; // r15
  __int64 v43; // rcx
  const GUID *v44; // r8
  const GUID *v45; // r8
  SIZE_T v46; // rdx
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  struct _MDL *v49; // [rsp+30h] [rbp-148h]
  bool v50; // [rsp+60h] [rbp-118h] BYREF
  bool v51; // [rsp+61h] [rbp-117h] BYREF
  unsigned int v52; // [rsp+64h] [rbp-114h]
  size_t v53; // [rsp+68h] [rbp-110h]
  struct _MDL *v54; // [rsp+70h] [rbp-108h]
  int v55; // [rsp+78h] [rbp-100h]
  int v56; // [rsp+80h] [rbp-F8h]
  struct _DXGK_TRANSFERFLAGS v57[2]; // [rsp+88h] [rbp-F0h]
  union _LARGE_INTEGER v58; // [rsp+90h] [rbp-E8h] BYREF
  size_t Size; // [rsp+98h] [rbp-E0h]
  VIDMM_MEMORY_SEGMENT *v60; // [rsp+A0h] [rbp-D8h]
  __int64 v61; // [rsp+A8h] [rbp-D0h]
  struct _VIDMM_GLOBAL_ALLOC *v62; // [rsp+B0h] [rbp-C8h]
  void *v63; // [rsp+B8h] [rbp-C0h] BYREF
  unsigned __int64 v64; // [rsp+C0h] [rbp-B8h]
  __int64 v65; // [rsp+C8h] [rbp-B0h]
  struct _KAPC_STATE ApcState; // [rsp+D0h] [rbp-A8h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v67; // [rsp+100h] [rbp-78h] BYREF

  v54 = a3;
  v60 = this;
  v62 = a2;
  *(_QWORD *)&v57[0].0 = 0LL;
  v55 = 0;
  v7 = 0;
  v50 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v8 = *((_QWORD *)a2 + 13);
  v61 = v8;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 1u);
  if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
  {
    LODWORD(v12) = -1073741130;
    if ( !a4 )
    {
      v23 = WdLogNewEntry5_WdEvent(v10, v9);
      *(_QWORD *)(v23 + 24) = a2;
      WdLogEvent5_WdEvent(v23);
      return (unsigned int)v12;
    }
    goto LABEL_11;
  }
  LODWORD(v12) = -1073741823;
  if ( (*((_DWORD *)a2 + 21) & 0x20) != 0 )
  {
    if ( *((int *)a2 + 87) > 0 )
    {
      VIDMM_GLOBAL::UnlockAllocation(v10, (struct _VIDMM_LOCAL_ALLOC *)v8, 0LL, *((_QWORD *)a2 + 1), 0, 0);
      VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
      *((_DWORD *)a2 + 21) &= ~2u;
      --*((_DWORD *)a2 + 87);
    }
    memset(&v67, 0, 0x28uLL);
    *(_QWORD *)&v67.VprIndex = this;
    v67.CurrentStartOffset = *((_QWORD *)a2 + 27);
    *(_QWORD *)&v67.PhysicalAdapterIndex = a2;
    LODWORD(v67.CurrentSize) = v57[0];
    KeStackAttachProcess(**(PRKPROCESS **)(v8 + 8), &ApcState);
    v12 = (int)VIDMM_GLOBAL::Rotate(
                 *((_QWORD *)this + 1),
                 *(_QWORD *)(*(_QWORD *)(v8 + 8) + 24LL),
                 *(_QWORD *)(v8 + 24),
                 0LL,
                 v54,
                 *((_QWORD *)a2 + 2),
                 VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback,
                 &v67,
                 2 * (unsigned int)a4,
                 a2);
    KeUnstackDetachProcess(&ApcState);
    v22 = *((_QWORD *)a2 + 33);
    if ( v22 )
      (*(void (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)v22 + 88LL))(v22, a2);
    if ( a4 )
    {
      if ( (int)v12 >= 0 )
        goto LABEL_36;
      *((_DWORD *)a2 + 19) |= 0x100000u;
      VIDMM_GLOBAL::FillAllocation(
        *((VIDMM_GLOBAL **)this + 1),
        a2,
        *((_QWORD *)a2 + 2),
        v21,
        *((struct VIDMM_SEGMENT **)a2 + 28),
        (union _LARGE_INTEGER *)a2 + 27);
    }
    else
    {
      if ( (int)v12 < 0 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v22, v20);
        *(_QWORD *)(v24 + 24) = v12;
LABEL_44:
        WdLogEvent5_WdAssertion(v24);
        return (unsigned int)v12;
      }
      LODWORD(v12) = 0;
    }
    if ( (int)v12 < 0 )
    {
LABEL_37:
      *((_BYTE *)a2 + 98) = 1;
      v50 = 1;
      goto LABEL_11;
    }
LABEL_36:
    *(_BYTE *)(v8 + 32) |= 1u;
    goto LABEL_37;
  }
  if ( !*((_BYTE *)a2 + 97) )
  {
    if ( *(_QWORD *)(v8 + 24) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v8 + 8) + 24LL) + 144LL))(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 24LL));
    if ( (*((_DWORD *)a2 + 19) & 0x100) == 0 )
      VIDMM_GLOBAL::FillAllocation(
        *((VIDMM_GLOBAL **)this + 1),
        a2,
        *((_QWORD *)a2 + 1),
        v11,
        this,
        (union _LARGE_INTEGER *)a2 + 27);
    LODWORD(v12) = 0;
    v50 = 1;
  }
  if ( (int)v12 < 0 )
  {
    v51 = 0;
    LODWORD(v12) = VIDMM_MEMORY_SEGMENT::TransferMemory(
                     this,
                     a2,
                     DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL,
                     *((struct VIDMM_SEGMENT **)a2 + 28),
                     *(union _LARGE_INTEGER *)((char *)a2 + 216),
                     &v51,
                     &v50);
    if ( v51 )
      (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *))(**((_QWORD **)a2 + 33) + 88LL))(
        *((_QWORD *)a2 + 33),
        a2);
    if ( (int)v12 < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v18);
      LODWORD(v12) = 0;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v18, &EventPerformanceWarning, v19, 2);
      if ( (**((_DWORD **)a2 + 63) & 8) == 0 )
        KeStackAttachProcess(**(PRKPROCESS **)(v8 + 8), &ApcState);
      v25 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 28));
      v26 = *((_QWORD *)a2 + 1);
      v27 = v25 != 0 ? 0x10000 : 4096;
      LODWORD(v53) = v27;
      v28 = v26 >> 12;
      v29 = v26 >> 16;
      if ( !v25 )
        v29 = (unsigned int)v28;
      v54 = (struct _MDL *)v29;
      v56 = v29;
      v58 = *(union _LARGE_INTEGER *)((char *)a2 + 216);
      v30 = 0;
      v52 = 0;
      v31 = v27;
      v65 = v27;
      v32 = v27;
      Size = v27;
      while ( v30 < (unsigned int)v29 )
      {
        v64 = v27 * v30;
        v33 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v8, v64, (const GUID *)v32, &v63, 0);
        if ( v33 )
        {
          memmove(*((void **)this + 32), v33, Size);
          VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v8, (GUID *)v63);
        }
        else
        {
          *((_DWORD *)a2 + 19) |= 0x100000u;
        }
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 1),
          a2,
          Size,
          v64,
          0LL,
          0LL,
          *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL),
          this,
          &v58,
          0LL,
          v57[0]);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        v58.QuadPart += v31;
        v52 = ++v30;
        v27 = v53;
        LODWORD(v29) = (_DWORD)v54;
        v31 = v65;
        v32 = Size;
      }
      v50 = 1;
      if ( (**((_DWORD **)a2 + 63) & 8) == 0 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  if ( (**((_DWORD **)a2 + 63) & 0x20000) == 0 )
    goto LABEL_11;
  v34 = *((_QWORD *)a2 + 2);
  memset(&v67, 0, sizeof(v67));
  v67.PhysicalAdapterIndex = *((_DWORD *)this + 95);
  if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
    v67.SegmentIndex = 0;
  else
    v67.SegmentIndex = *((_DWORD *)this + 4) + 1;
  if ( *((_DWORD *)this + 103) )
  {
    v42 = *((_QWORD *)a2 + 27) & ~*((_QWORD *)this + 50);
    if ( v42 < *((_QWORD *)this + 52) )
    {
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                            + 41024LL)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v43, &EventPerformanceWarning, v44, 24);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
      }
      VIDMM_MEMORY_SEGMENT::SuspendPurgeForVPRGrow(this, a2);
      VIDMM_SEGMENT::ReclaimScrubRegionResources(this, a2);
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
      v67.CurrentStartOffset = *((_QWORD *)this + 52);
      v67.CurrentSize = *((_QWORD *)this + 54);
      v67.NewStartOffset = v42;
      v46 = *((_QWORD *)this + 53) - v42;
      v67.NewSize = v46;
      *((_QWORD *)this + 54) = v46;
      *((_QWORD *)this + 52) = v42;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqxxp(
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          v46,
          v45,
          v67.PhysicalAdapterIndex,
          v67.SegmentIndex,
          v67.VprIndex,
          v42,
          v46,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      LODWORD(v12) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                       *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2528LL),
                       &v67);
      if ( (int)v12 < 0 && g_IsInternalRelease )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v35);
        v47[3] = 270LL;
        v47[4] = 9LL;
        v47[5] = 0LL;
        v47[6] = 0LL;
        v47[7] = 0LL;
        WdLogEvent5_WdCriticalError(v47);
      }
    }
    if ( (int)v12 < 0 )
      goto LABEL_43;
    *((_DWORD *)a2 + 20) |= 0x200u;
    *((_QWORD *)this + 55) += v34;
    if ( g_IsInternalReleaseOrDbg )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdTrace(v36);
      v48[3] = v34;
      v36 = *((_QWORD *)this + 55);
      v48[4] = v36;
      v48[5] = a2;
    }
  }
  else
  {
    if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                          + 41024LL)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v37, &EventPerformanceWarning, v38, 24);
      KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
    }
    VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
    v40 = *((_QWORD *)a2 + 27);
    v67.NewStartOffset = v40;
    v67.NewSize = v34;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqxxp(
        *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
        v40,
        v39,
        v67.PhysicalAdapterIndex,
        v67.SegmentIndex,
        v67.VprIndex,
        v40,
        v34,
        *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
    LODWORD(v12) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                     *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2528LL),
                     &v67);
    if ( (int)v12 < 0 && g_IsInternalRelease )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v35);
      v41[3] = 270LL;
      v41[4] = 9LL;
      v41[5] = 0LL;
      v41[6] = 0LL;
      v41[7] = 0LL;
      WdLogEvent5_WdCriticalError(v41);
    }
  }
  if ( (int)v12 < 0 )
  {
LABEL_43:
    v24 = WdLogNewEntry5_WdAssertion(v36, v35);
    *(_QWORD *)(v24 + 24) = 1016LL;
    goto LABEL_44;
  }
LABEL_11:
  v13 = *((_QWORD *)a2 + 28);
  *((_QWORD *)a2 + 17) = v13;
  *((_QWORD *)a2 + 18) = *((_QWORD *)a2 + 27);
  if ( (*(_DWORD *)(v13 + 80) & 0x1000) != 0 )
    v14 = 0;
  else
    v14 = *(_DWORD *)(v13 + 16) + 1;
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = v14;
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 32LL) = *((_QWORD *)a2 + 18) + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
  *((_QWORD *)a2 + 28) = 0LL;
  v15 = *((_DWORD *)a2 + 21);
  if ( (v15 & 2) != 0 )
  {
    VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)this + 1), a2, 0LL);
    VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
    *((_DWORD *)a2 + 21) &= ~2u;
    v15 = *((_DWORD *)a2 + 21);
  }
  if ( v50 && (v15 & 8) == 0 && !*((_QWORD *)a2 + 33) )
    VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
  if ( (**((_DWORD **)a2 + 63) & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency(*((VIDMM_GLOBAL **)this + 1), a2, 1u);
  v16 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v16 + 40952) )
  {
    if ( (*((_DWORD *)this + 20) & 0x1000) == 0 )
      v7 = *((_DWORD *)this + 4) + 1;
    VIDMM_GLOBAL::RecordPageMappingHistory(v16, v7, *((__int64 *)a2 + 18) >> 12, *((_QWORD *)a2 + 2) >> 12, 3, a2, v49);
  }
  return (unsigned int)v12;
}
