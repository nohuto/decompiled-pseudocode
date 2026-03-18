/*
 * XREFs of ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C005ABF8
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005A870 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00AF2C0 (-SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001710 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002900 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0018640 (memmove.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00242D0 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0pqqt @ 0x1C00262C0 (McTemplateK0pqqt.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C0026670 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x1C0029144 (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 *     McTemplateK0qqqxxp @ 0x1C0029204 (McTemplateK0qqqxxp.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C005A0C4 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A324 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C005B520 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005B5A8 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005B794 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C198 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D000 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C0060938 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C006A134 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C006A2F4 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006A73C (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006AE5C (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006AEB0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C0081994 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0081BA0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C0082E94 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0083134 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C0083B54 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085D74 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB9D0 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00AEAB0 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00BE77C (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00BEF9C (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00C819C (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00C87F4 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::TransferToSystem(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3,
        PRKPROCESS **a4,
        bool a5)
{
  __int64 v9; // rcx
  VIDMM_GLOBAL *v10; // rcx
  int *v11; // rdx
  int v12; // eax
  char v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // bl
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r12d
  unsigned int v20; // r13d
  __int64 (__fastcall *v21)(struct _MDL *, struct _MDL *, void *); // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 *v28; // r12
  NTSTATUS v29; // ebx
  const GUID *v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v40; // r8
  _QWORD *v41; // rax
  __int64 v42; // rcx
  const GUID *v43; // r8
  int v44; // r8d
  unsigned __int8 v45; // al
  int v46; // r8d
  unsigned __int64 v47; // r12
  unsigned __int64 v48; // r12
  unsigned int v49; // ecx
  unsigned int i; // r13d
  unsigned int v51; // ebx
  void *v52; // rax
  SIZE_T v53; // rbx
  char v54; // r15
  unsigned __int64 v55; // r8
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  __int64 v58; // rcx
  SIZE_T v59; // rcx
  char *v60; // rbx
  _QWORD *v61; // rax
  _QWORD *v62; // r15
  __int64 v63; // rcx
  const GUID *v64; // r8
  __int64 v65; // rdx
  const GUID *v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rcx
  _QWORD *v69; // rax
  signed __int32 v70[8]; // [rsp+0h] [rbp-188h] BYREF
  ULONG AllocationType[2]; // [rsp+20h] [rbp-168h]
  ULONG Protect[2]; // [rsp+28h] [rbp-160h]
  struct _MDL *v73; // [rsp+30h] [rbp-158h]
  __int64 v74; // [rsp+50h] [rbp-138h]
  bool v75; // [rsp+60h] [rbp-128h] BYREF
  unsigned int Size; // [rsp+64h] [rbp-124h]
  size_t Size_4; // [rsp+68h] [rbp-120h] BYREF
  SIZE_T v78; // [rsp+70h] [rbp-118h] BYREF
  int v79; // [rsp+78h] [rbp-110h]
  union _LARGE_INTEGER v80; // [rsp+80h] [rbp-108h] BYREF
  void *v81; // [rsp+88h] [rbp-100h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v82; // [rsp+90h] [rbp-F8h] BYREF
  int v83; // [rsp+98h] [rbp-F0h]
  PVOID BaseAddress; // [rsp+A0h] [rbp-E8h] BYREF
  void *v85[3]; // [rsp+A8h] [rbp-E0h] BYREF
  _QWORD v86[5]; // [rsp+C0h] [rbp-C8h] BYREF
  _DXGKARG_SETVIDEOPROTECTEDREGION v87; // [rsp+E8h] [rbp-A0h] BYREF
  _KAPC_STATE ApcState; // [rsp+118h] [rbp-70h] BYREF

  v85[2] = this;
  v82 = a2;
  v85[1] = a4;
  v83 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v75 = 0;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  v9 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v9 + 40952) )
  {
    if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
      v26 = 0LL;
    else
      v26 = (unsigned int)(*((_DWORD *)this + 4) + 1);
    VIDMM_GLOBAL::RecordPageMappingHistory(v9, v26, *((__int64 *)a2 + 18) >> 12, *((_QWORD *)a2 + 2) >> 12, 4, a2, v73);
  }
  v10 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 19);
  if ( ((unsigned __int16)v10 & 0x100) != 0 || (*((_DWORD *)a2 + 20) & 0x400) != 0 )
    a3 = 0;
  if ( ((unsigned int)v10 & 0x8000000) != 0 )
    VIDMM_GLOBAL::NotifyContextAllocationEviction(v10, a2);
  v11 = (int *)*((_QWORD *)a2 + 63);
  v12 = *v11;
  Size = 0x10000;
  if ( (v12 & 0x10000) != 0 )
  {
    VIDMM_GLOBAL::NotifyResidency(*((ADAPTER_RENDER ***)this + 1), a2, 0);
    v11 = (int *)*((_QWORD *)a2 + 63);
    v12 = *v11;
  }
  if ( (v12 & 0x20000) != 0 && (*((_DWORD *)this + 20) & 0x40000) == 0 )
  {
    *((_DWORD *)a2 + 19) |= 0x100000u;
    v12 = *v11;
  }
  if ( (v12 & 0x20000000) == 0 && (unsigned __int8)PsIsProcessCommitRelinquished(*a4[1]) )
    *((_DWORD *)a2 + 19) |= 0x100000u;
  v13 = 0;
  if ( (*((_DWORD *)a2 + 19) & 0x100000) == 0 )
    v13 = a3;
  if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
  {
    v27 = WdLogNewEntry5_WdEvent(v15, v14);
    *(_QWORD *)(v27 + 24) = a2;
    WdLogEvent5_WdEvent(v27);
    v13 = 0;
  }
  if ( (VIDMM_GLOBAL::_Config & 8) == 0 && (*((_DWORD *)a2 + 21) & 8) != 0 )
    *((_BYTE *)a2 + 98) = 1;
  if ( v13 && (*((_DWORD *)a2 + 21) & 8) != 0 && !*((_BYTE *)a2 + 98) && a4 )
  {
    KeStackAttachProcess(*a4[1], &ApcState);
    v28 = (__int64 *)((char *)a2 + 8);
    BaseAddress = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)a4, 0LL, *((_QWORD *)a2 + 1), v85, 1);
    if ( BaseAddress )
    {
      v29 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, (PSIZE_T)a2 + 1, 0x1000000u, 4u);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)a4, v85[0]);
      if ( v29 < 0 )
      {
        *((_BYTE *)a2 + 98) = 1;
        if ( bTracingEnabled )
        {
          v34 = (unsigned __int64)*v28 >> 12;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v73) = 0;
            Protect[0] = v34;
            AllocationType[0] = 0;
            McTemplateK0pqqt(v34, &EventUnreset, v30, a2, *(_QWORD *)AllocationType, *(_QWORD *)Protect, v73);
          }
        }
        v35 = *v28;
        v36 = *((_QWORD *)this + 1);
        ++*(_DWORD *)(v36 + 7424);
        *(_QWORD *)(v36 + 7432) += v35;
      }
      else
      {
        if ( bTracingEnabled )
        {
          v31 = (unsigned __int64)*v28 >> 12;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v73) = 1;
            Protect[0] = v31;
            AllocationType[0] = 0;
            McTemplateK0pqqt(v31, &EventUnreset, v30, a2, *(_QWORD *)AllocationType, *(_QWORD *)Protect, v73);
          }
        }
        v32 = *v28;
        v33 = *((_QWORD *)this + 1);
        ++*(_DWORD *)(v33 + 7408);
        *(_QWORD *)(v33 + 7416) += v32;
      }
    }
    KeUnstackDetachProcess(&ApcState);
  }
  v16 = *((_BYTE *)a2 + 98) != 0 ? v13 : 0;
  v17 = *((unsigned int *)a2 + 21);
  if ( (v17 & 8) == 0 && (*((_DWORD *)a2 + 20) & 0x20000) != 0 )
  {
    if ( a4 )
    {
      LOBYTE(v15) = ((v17 & 2) == 0) & ~*((_BYTE *)a4 + 32);
      if ( (_BYTE)v15 )
      {
        if ( !*((_QWORD *)a2 + 33) )
        {
          if ( (*((_DWORD *)a2 + 19) & 0x4000000) == 0 )
          {
            v37 = WdLogNewEntry5_WdAssertion(v15, v17);
            *(_QWORD *)(v37 + 24) = 1522LL;
            WdLogEvent5_WdAssertion(v37);
          }
          if ( !v16 )
            goto LABEL_20;
          VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
        }
      }
    }
  }
  if ( v16 && (**((_DWORD **)a2 + 63) & 0x8000000) != 0 )
  {
    if ( !a4 )
      goto LABEL_22;
    LOBYTE(v15) = ((*((_BYTE *)a2 + 84) & 2) == 0) & ~*((_BYTE *)a4 + 32);
    if ( (_BYTE)v15
      && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1)) >= 0 )
    {
      if ( (int)VIDMM_SEGMENT::LockAllocationBackingStore(this, a2) < 0 )
        VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
      else
        *((_DWORD *)a2 + 21) |= 2u;
    }
  }
LABEL_20:
  if ( a4 && ((_BYTE)a4[4] & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v15);
    memset(v86, 0, sizeof(v86));
    v19 = 3;
    v20 = 3;
    if ( v16 )
    {
      if ( *((_BYTE *)a2 + 289) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        v38 = **((_QWORD **)a2 + 33);
        MDLForRange = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 34), *((_QWORD *)a2 + 35));
        (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))(v38 + 120))(
          *((_QWORD *)a2 + 33),
          a2,
          *((_QWORD *)a2 + 34),
          *((_QWORD *)a2 + 35),
          MDLForRange);
        LOBYTE(v40) = 1;
        (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, __int64))(**((_QWORD **)a2 + 33) + 104LL))(
          *((_QWORD *)a2 + 33),
          a2,
          v40);
      }
      v86[0] = a2;
      v86[1] = this;
      v86[2] = *((_QWORD *)a2 + 18);
      LODWORD(v86[3]) = 0;
      v21 = VIDMM_MEMORY_SEGMENT::RotateCopyCallback;
      v20 = 2;
    }
    else
    {
      v21 = 0LL;
    }
    KeStackAttachProcess(*a4[1], &ApcState);
    if ( !a5 || (*((_DWORD *)a2 + 21) & 0x20) == 0 )
      v19 = 1;
    v79 = v19;
    v22 = VIDMM_GLOBAL::Rotate(*((_QWORD *)this + 1), a4[1][3], a4[3], v20, 0LL, 0LL, v21, v86, v19, a2, v74);
    v25 = v22;
    if ( v22 == -1073741558 )
    {
      *((_DWORD *)a2 + 19) |= 0x100000u;
    }
    else if ( v22 < 0 )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23);
      v41[3] = 270LL;
      v41[4] = 4LL;
      v41[5] = v20;
      v41[6] = v25;
      v41[7] = 0LL;
      WdLogEvent5_WdCriticalError(v41);
    }
    *((_BYTE *)a4 + 32) &= ~1u;
    KeUnstackDetachProcess(&ApcState);
    goto LABEL_28;
  }
LABEL_22:
  if ( v16 )
  {
    if ( (int)VIDMM_MEMORY_SEGMENT::TransferMemory(
                this,
                a2,
                DXGK_MEMORY_TRANSFER_LOCAL_TO_SYSTEM,
                *((struct VIDMM_SEGMENT **)a2 + 17),
                *(union _LARGE_INTEGER *)((char *)a2 + 144),
                &v75,
                0LL) < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v42);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v42, &EventPerformanceWarning, v43, 2);
      v44 = 0;
      LODWORD(v78) = 0;
      if ( (**((_DWORD **)a2 + 63) & 8) == 0 && a4 )
      {
        KeStackAttachProcess(*a4[1], &ApcState);
        v44 = 1;
        LODWORD(v78) = 1;
      }
      v79 = v44;
      v45 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 17));
      v47 = *((_QWORD *)a2 + 1);
      if ( v45 )
      {
        v48 = v47 >> 16;
        v49 = 0x10000;
      }
      else
      {
        v49 = 4096;
        Size = 4096;
        v48 = v47 >> 12;
      }
      v80 = *(union _LARGE_INTEGER *)((char *)a2 + 144);
      for ( i = 0; i < (unsigned int)v48; ++i )
      {
        v51 = v49 * i;
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 1),
          a2,
          v49,
          v49 * i,
          this,
          &v80,
          0LL,
          0LL,
          0LL,
          *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL),
          0);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        v80.QuadPart += Size;
        v52 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)a4, v51, Size, &v81, 0);
        if ( v52 )
        {
          memmove(v52, *((const void **)this + 32), Size);
          VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)a4, v81);
        }
        else
        {
          *((_DWORD *)a2 + 19) |= 0x100000u;
        }
        v46 = v78;
        v49 = Size;
      }
      if ( v46 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v15);
    if ( (*((_DWORD *)a2 + 19) & 0x100) == 0 )
      VIDMM_GLOBAL::DiscardAllocation(*((VIDMM_GLOBAL **)this + 1), a2);
  }
  if ( (**((_DWORD **)a2 + 63) & 0x20000) != 0 && *((_QWORD *)a2 + 19) )
  {
    v53 = ~*((_QWORD *)this + 50) & (*((_QWORD *)this + 50) + *((_QWORD *)a2 + 2));
    memset(&v87, 0, sizeof(v87));
    v87.PhysicalAdapterIndex = *((_DWORD *)this + 95);
    v87.SegmentIndex = (*((_DWORD *)this + 20) & 0x1000) != 0 ? 0 : *((_DWORD *)this + 4) + 1;
    v54 = 1;
    if ( *((_DWORD *)this + 103) )
    {
      v54 = 0;
      v78 = 0LL;
      if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                           *((_QWORD *)this + 19),
                           *((_QWORD *)this + 52),
                           *((_QWORD *)this + 53),
                           0,
                           (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                           (__int64)this,
                           (__int64)&v78,
                           (__int64)&v82,
                           (__int64)&Size_4) == -1073741823
        && v78 == *((_QWORD *)a2 + 18) )
      {
        v55 = *((_QWORD *)this + 53);
        v56 = *((_QWORD *)a2 + 19);
        v57 = *(_QWORD *)v56 + *(_QWORD *)(v56 + 8);
        if ( v57 >= v55 )
        {
LABEL_117:
          v57 = *((_QWORD *)this + 53);
        }
        else
        {
          while ( 1 )
          {
            v58 = *(_QWORD *)(v56 + 40);
            if ( v58 == *((_QWORD *)this + 19) + 72LL )
              break;
            v56 = v58 - 40;
            if ( *(_BYTE *)(v56 + 56) != 2 )
              break;
            v57 = *(_QWORD *)v56 + *(_QWORD *)(v56 + 8);
            if ( v57 >= v55 )
              goto LABEL_117;
          }
        }
        v59 = v57 & ~*((_QWORD *)this + 50);
        v78 = v59;
        if ( v59 > *((_QWORD *)this + 52) )
        {
          v87.CurrentStartOffset = *((_QWORD *)this + 52);
          v87.CurrentSize = *((_QWORD *)this + 54);
          v87.NewStartOffset = v59;
          v87.NewSize = v55 - v59;
          *((_QWORD *)this + 54) = v55 - v59;
          *((_QWORD *)this + 52) = v59;
          v54 = 1;
        }
      }
    }
    else
    {
      v87.CurrentStartOffset = *((_QWORD *)a2 + 18);
      v87.CurrentSize = v53;
    }
    if ( v54 )
    {
      v60 = (char *)operator new[](0x68uLL, 0x31356956u, PagedPool);
      v61 = operator new[](0x28uLL, 0x38356956u, PagedPool);
      v62 = v61;
      if ( v60 )
      {
        if ( v61 )
        {
          memset(v60, 0, 0x68uLL);
          *((_QWORD *)v60 + 2) = DeferredSetVprCallback;
          *((_QWORD *)v60 + 4) = DeferredSetVprCompletionCallback;
          *(_DXGKARG_SETVIDEOPROTECTEDREGION *)(v60 + 56) = v87;
          *((_QWORD *)v60 + 5) = *((_QWORD *)this + 1);
          *((_QWORD *)v60 + 6) = v62;
          v62[2] = this;
          v62[3] = *((_QWORD *)a2 + 19);
          v62[4] = *((_QWORD *)a2 + 2);
          *((_QWORD *)v60 + 3) = v60;
          VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
          VIDMM_GLOBAL::FlushPagingBuffer(*((VIDMM_GLOBAL **)this + 1), 0, 0LL, 0LL);
          VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
            *((VIDMM_LINEAR_POOL **)this + 19),
            *((void **)a2 + 19),
            v87.CurrentStartOffset,
            v87.NewStartOffset);
          DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
            (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1) + 41024LL),
            (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)v60);
          *((_QWORD *)a2 + 19) = 0LL;
          if ( *((_DWORD *)a2 + 32) != 1 )
          {
            VIDMM_SEGMENT::DecrementBytesCommitted(this, **((struct VIDMM_PARTITION ***)a2 + 61), *((_QWORD *)a2 + 2));
            --*((_DWORD *)this + 80);
          }
          goto LABEL_28;
        }
        operator delete(v60);
      }
      if ( v62 )
        operator delete(v62);
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                            + 41024LL)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v63, &EventPerformanceWarning, v64, 24);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
      }
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
      VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v87);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqxxp(
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          v65,
          v66,
          v87.PhysicalAdapterIndex,
          v87.SegmentIndex,
          v87.VprIndex,
          v87.NewStartOffset,
          v87.NewSize,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      if ( (int)ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2560LL),
                  &v87) < 0
        && g_IsInternalRelease )
      {
        v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v68, v67);
        v69[3] = 270LL;
        v69[4] = 9LL;
        v69[5] = 0LL;
        v69[6] = 0LL;
        v69[7] = 0LL;
        WdLogEvent5_WdCriticalError(v69);
      }
    }
  }
LABEL_28:
  *((_DWORD *)a2 + 19) &= ~0x4000000u;
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 32LL) = 0LL;
  *((_QWORD *)a2 + 17) = 0LL;
  if ( v75 )
    (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *))(**((_QWORD **)a2 + 33) + 88LL))(
      *((_QWORD *)a2 + 33),
      a2);
  v18 = *((_QWORD *)this + 1);
  _InterlockedOr(v70, 0);
  ++*(_QWORD *)(v18 + 40);
}
