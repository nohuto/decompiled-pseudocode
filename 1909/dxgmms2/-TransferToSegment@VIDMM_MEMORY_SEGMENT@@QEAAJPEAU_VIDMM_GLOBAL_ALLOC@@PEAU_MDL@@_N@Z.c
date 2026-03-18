/*
 * XREFs of ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C005B1B0
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005AF70 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00AF190 (-RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0018640 (memmove.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00242D0 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C0026670 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     McTemplateK0qqqxxp @ 0x1C0029204 (McTemplateK0qqqxxp.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A324 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A4A0 (-FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C005B520 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005B5A8 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D000 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C006A134 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C006A2F4 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006A5E0 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C006A690 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006AE5C (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006AEB0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0081BA0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C0082E94 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0083134 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085D74 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB9D0 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00AEAB0 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BE3F4 (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00BE77C (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C1390 (-ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferToSegment(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _MDL *a3,
        unsigned __int8 a4)
{
  unsigned int v7; // esi
  __int64 v8; // r13
  __int64 v9; // rdx
  VIDMM_GLOBAL *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r15
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
  unsigned __int64 v26; // r12
  unsigned int v27; // ecx
  unsigned __int64 v28; // r12
  unsigned int v29; // eax
  size_t v30; // rdx
  const void *v31; // rax
  SIZE_T v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  const GUID *v36; // r8
  const GUID *v37; // r8
  SIZE_T v38; // rdx
  _QWORD *v39; // rax
  SIZE_T v40; // rbx
  __int64 v41; // rcx
  const GUID *v42; // r8
  const GUID *v43; // r8
  SIZE_T v44; // rdx
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  struct _MDL *v47; // [rsp+30h] [rbp-138h]
  bool v48; // [rsp+60h] [rbp-108h] BYREF
  bool v49; // [rsp+61h] [rbp-107h] BYREF
  unsigned int v50; // [rsp+64h] [rbp-104h]
  unsigned int v51; // [rsp+68h] [rbp-100h]
  unsigned __int64 v52; // [rsp+70h] [rbp-F8h]
  int v53; // [rsp+78h] [rbp-F0h]
  int v54; // [rsp+80h] [rbp-E8h]
  union _LARGE_INTEGER v55; // [rsp+88h] [rbp-E0h] BYREF
  size_t Size; // [rsp+90h] [rbp-D8h]
  VIDMM_MEMORY_SEGMENT *v57; // [rsp+98h] [rbp-D0h]
  __int64 v58; // [rsp+A0h] [rbp-C8h]
  struct _VIDMM_GLOBAL_ALLOC *v59; // [rsp+A8h] [rbp-C0h]
  void *v60; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned __int64 v61; // [rsp+B8h] [rbp-B0h]
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-A8h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v63; // [rsp+F0h] [rbp-78h] BYREF

  v52 = (unsigned __int64)a3;
  v57 = this;
  v59 = a2;
  v7 = 0;
  v53 = 0;
  v48 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v8 = *((_QWORD *)a2 + 13);
  v58 = v8;
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
    goto LABEL_12;
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
    *(SIZE_T *)((char *)&v63.CurrentSize + 4) = 0LL;
    HIDWORD(v63.NewStartOffset) = 0;
    *(_QWORD *)&v63.VprIndex = this;
    v63.CurrentStartOffset = *((_QWORD *)a2 + 27);
    *(_QWORD *)&v63.PhysicalAdapterIndex = a2;
    LODWORD(v63.CurrentSize) = 0;
    KeStackAttachProcess(**(PRKPROCESS **)(v8 + 8), &ApcState);
    v12 = (int)VIDMM_GLOBAL::Rotate(
                 *((_QWORD *)this + 1),
                 *(_QWORD *)(*(_QWORD *)(v8 + 8) + 24LL),
                 *(_QWORD *)(v8 + 24),
                 0LL,
                 v52,
                 *((_QWORD *)a2 + 2),
                 VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback,
                 &v63,
                 2 * (unsigned int)a4,
                 a2);
    KeUnstackDetachProcess(&ApcState);
    v22 = *((_QWORD *)a2 + 33);
    if ( v22 )
      (*(void (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)v22 + 88LL))(v22, a2);
    if ( a4 )
    {
      if ( (int)v12 >= 0 )
        goto LABEL_37;
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
LABEL_45:
        WdLogEvent5_WdAssertion(v24);
        return (unsigned int)v12;
      }
      LODWORD(v12) = 0;
    }
    if ( (int)v12 < 0 )
    {
LABEL_38:
      *((_BYTE *)a2 + 98) = 1;
      v48 = 1;
      goto LABEL_12;
    }
LABEL_37:
    *(_BYTE *)(v8 + 32) |= 1u;
    goto LABEL_38;
  }
  if ( !*((_BYTE *)a2 + 97) )
  {
    if ( *(_QWORD *)(v8 + 24) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v8 + 8) + 24LL) + 144LL))(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 24LL));
    if ( (*((_DWORD *)a2 + 19) & 0x100) == 0 && (*((_DWORD *)a2 + 20) & 0x800) == 0 )
      VIDMM_GLOBAL::FillAllocation(
        *((VIDMM_GLOBAL **)this + 1),
        a2,
        *((_QWORD *)a2 + 1),
        v11,
        this,
        (union _LARGE_INTEGER *)a2 + 27);
    LODWORD(v12) = 0;
    v48 = 1;
  }
  if ( (int)v12 < 0 )
  {
    v49 = 0;
    LODWORD(v12) = VIDMM_MEMORY_SEGMENT::TransferMemory(
                     this,
                     a2,
                     DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL,
                     *((struct VIDMM_SEGMENT **)a2 + 28),
                     *(union _LARGE_INTEGER *)((char *)a2 + 216),
                     &v49,
                     &v48);
    if ( v49 )
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
      if ( v25 )
      {
        v27 = 0x10000;
        v28 = v26 >> 16;
      }
      else
      {
        v27 = 4096;
        v28 = v26 >> 12;
      }
      v50 = v27;
      v54 = v28;
      v55 = *(union _LARGE_INTEGER *)((char *)a2 + 216);
      v29 = 0;
      v30 = v27;
      v52 = v27;
      for ( Size = v27; ; v30 = Size )
      {
        v51 = v29;
        if ( v29 >= (unsigned int)v28 )
          break;
        v61 = v27 * v29;
        v31 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v8, (unsigned int)v61, v30, &v60, 0);
        if ( v31 )
        {
          memmove(*((void **)this + 32), v31, Size);
          VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v8, v60);
        }
        else
        {
          *((_DWORD *)a2 + 19) |= 0x100000u;
        }
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 1),
          a2,
          Size,
          v61,
          0LL,
          0LL,
          *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL),
          this,
          &v55,
          0LL,
          0);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        v55.QuadPart += v52;
        v29 = v51 + 1;
        v27 = v50;
      }
      v48 = 1;
      if ( (**((_DWORD **)a2 + 63) & 8) == 0 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  if ( (**((_DWORD **)a2 + 63) & 0x20000) == 0 )
    goto LABEL_12;
  v32 = *((_QWORD *)a2 + 2);
  memset(&v63, 0, sizeof(v63));
  v63.PhysicalAdapterIndex = *((_DWORD *)this + 95);
  if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
    v63.SegmentIndex = 0;
  else
    v63.SegmentIndex = *((_DWORD *)this + 4) + 1;
  if ( *((_DWORD *)this + 103) )
  {
    v40 = *((_QWORD *)a2 + 27) & ~*((_QWORD *)this + 50);
    if ( v40 < *((_QWORD *)this + 52) )
    {
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                            + 41024LL)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v41, &EventPerformanceWarning, v42, 24);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
      }
      VIDMM_MEMORY_SEGMENT::SuspendPurgeForVPRGrow(this, a2);
      VIDMM_SEGMENT::ReclaimScrubRegionResources(this, a2);
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
      v63.CurrentStartOffset = *((_QWORD *)this + 52);
      v63.CurrentSize = *((_QWORD *)this + 54);
      v63.NewStartOffset = v40;
      v44 = *((_QWORD *)this + 53) - v40;
      v63.NewSize = v44;
      *((_QWORD *)this + 54) = v44;
      *((_QWORD *)this + 52) = v40;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqxxp(
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          v44,
          v43,
          v63.PhysicalAdapterIndex,
          v63.SegmentIndex,
          v63.VprIndex,
          v40,
          v44,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      LODWORD(v12) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                       *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2560LL),
                       &v63);
      if ( (int)v12 < 0 && g_IsInternalRelease )
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v33);
        v45[3] = 270LL;
        v45[4] = 9LL;
        v45[5] = 0LL;
        v45[6] = 0LL;
        v45[7] = 0LL;
        WdLogEvent5_WdCriticalError(v45);
      }
    }
    if ( (int)v12 < 0 )
      goto LABEL_44;
    *((_DWORD *)a2 + 20) |= 0x200u;
    *((_QWORD *)this + 55) += v32;
    if ( g_IsInternalReleaseOrDbg )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdTrace(v34);
      v46[3] = v32;
      v34 = *((_QWORD *)this + 55);
      v46[4] = v34;
      v46[5] = a2;
    }
  }
  else
  {
    if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                          + 41024LL)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v35, &EventPerformanceWarning, v36, 24);
      KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
    }
    VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
    v38 = *((_QWORD *)a2 + 27);
    v63.NewStartOffset = v38;
    v63.NewSize = v32;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqxxp(
        *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
        v38,
        v37,
        v63.PhysicalAdapterIndex,
        v63.SegmentIndex,
        v63.VprIndex,
        v38,
        v32,
        *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
    LODWORD(v12) = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                     *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2560LL),
                     &v63);
    if ( (int)v12 < 0 && g_IsInternalRelease )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v33);
      v39[3] = 270LL;
      v39[4] = 9LL;
      v39[5] = 0LL;
      v39[6] = 0LL;
      v39[7] = 0LL;
      WdLogEvent5_WdCriticalError(v39);
    }
  }
  if ( (int)v12 < 0 )
  {
LABEL_44:
    v24 = WdLogNewEntry5_WdAssertion(v34, v33);
    *(_QWORD *)(v24 + 24) = 1018LL;
    goto LABEL_45;
  }
LABEL_12:
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
  if ( v48 && (v15 & 8) == 0 && !*((_QWORD *)a2 + 33) )
    VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
  if ( (**((_DWORD **)a2 + 63) & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency(*((ADAPTER_RENDER ***)this + 1), a2, 1u);
  v16 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v16 + 40952) )
  {
    if ( (*((_DWORD *)this + 20) & 0x1000) == 0 )
      v7 = *((_DWORD *)this + 4) + 1;
    VIDMM_GLOBAL::RecordPageMappingHistory(v16, v7, *((__int64 *)a2 + 18) >> 12, *((_QWORD *)a2 + 2) >> 12, 3, a2, v47);
  }
  return (unsigned int)v12;
}
