/*
 * XREFs of ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0070390
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0071020 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00AC020 (-SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001A680 (memmove.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C0024BC0 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0pqqt @ 0x1C0026820 (McTemplateK0pqqt.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C0026B6C (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x1C0028604 (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 *     McTemplateK0qqqxxp @ 0x1C00286C4 (McTemplateK0qqqxxp.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C006BA84 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C006C1CC (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C006C398 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006E428 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C006E674 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006F12C (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C006F450 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006F4CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006FF70 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070160 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0070FA4 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0070FCC (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C0076158 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0077F68 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C007E954 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C007F404 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C007F6B4 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00800C4 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008186C (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A85E0 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00AB834 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00BBBFC (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00BC400 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00C54AC (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00C5AF0 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
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
  struct _VIDMM_GLOBAL_ALLOC *v16; // r8
  char v17; // bl
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r12d
  unsigned int v21; // r13d
  __int64 (__fastcall *v22)(struct _MDL *, struct _MDL *, void *); // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 *v29; // r12
  NTSTATUS v30; // ebx
  const GUID *v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v41; // r8
  _QWORD *v42; // rax
  __int64 v43; // rcx
  const GUID *v44; // r8
  int v45; // r12d
  unsigned __int8 v46; // al
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  unsigned int i; // r13d
  unsigned int v52; // ebx
  char *v53; // rax
  SIZE_T v54; // rbx
  char v55; // r15
  unsigned __int64 v56; // r8
  __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  __int64 v59; // rcx
  SIZE_T v60; // rcx
  char *v61; // rbx
  _QWORD *v62; // rax
  _QWORD *v63; // r15
  __int64 v64; // rcx
  const GUID *v65; // r8
  __int64 v66; // rdx
  const GUID *v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rcx
  _QWORD *v70; // rax
  signed __int32 v71[8]; // [rsp+0h] [rbp-198h] BYREF
  ULONG AllocationType[2]; // [rsp+20h] [rbp-178h]
  ULONG Protect[2]; // [rsp+28h] [rbp-170h]
  struct _MDL *v74; // [rsp+30h] [rbp-168h]
  bool v75; // [rsp+60h] [rbp-138h] BYREF
  _BYTE v76[7]; // [rsp+61h] [rbp-137h] BYREF
  SIZE_T v77; // [rsp+68h] [rbp-130h] BYREF
  unsigned int v78; // [rsp+70h] [rbp-128h]
  union _LARGE_INTEGER v79; // [rsp+78h] [rbp-120h] BYREF
  struct _DXGK_TRANSFERFLAGS v80[2]; // [rsp+80h] [rbp-118h]
  size_t Size; // [rsp+88h] [rbp-110h]
  void *v82; // [rsp+90h] [rbp-108h] BYREF
  unsigned __int64 v83; // [rsp+98h] [rbp-100h] BYREF
  int v84; // [rsp+A0h] [rbp-F8h]
  PVOID BaseAddress; // [rsp+A8h] [rbp-F0h] BYREF
  void *v86[4]; // [rsp+B0h] [rbp-E8h] BYREF
  _QWORD v87[5]; // [rsp+D0h] [rbp-C8h] BYREF
  _DXGKARG_SETVIDEOPROTECTEDREGION v88; // [rsp+F8h] [rbp-A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+128h] [rbp-70h] BYREF

  v86[2] = this;
  v86[3] = a2;
  v86[1] = a4;
  *(_QWORD *)&v80[0].0 = 0LL;
  v84 = 0;
  v75 = 0;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  v9 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v9 + 40952) )
  {
    if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
      v27 = 0LL;
    else
      v27 = (unsigned int)(*((_DWORD *)this + 4) + 1);
    VIDMM_GLOBAL::RecordPageMappingHistory(v9, v27, *((__int64 *)a2 + 18) >> 12, *((_QWORD *)a2 + 2) >> 12, 4, a2, v74);
  }
  v10 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 19);
  if ( ((unsigned __int16)v10 & 0x100) != 0 || (*((_DWORD *)a2 + 20) & 0x400) != 0 )
    a3 = 0;
  if ( ((unsigned int)v10 & 0x8000000) != 0 )
    VIDMM_GLOBAL::NotifyContextAllocationEviction(v10, a2);
  v11 = (int *)*((_QWORD *)a2 + 63);
  v12 = *v11;
  if ( (*v11 & 0x10000) != 0 )
  {
    VIDMM_GLOBAL::NotifyResidency(*((VIDMM_GLOBAL **)this + 1), a2, 0);
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
    v28 = WdLogNewEntry5_WdEvent(v15, v14);
    *(_QWORD *)(v28 + 24) = a2;
    WdLogEvent5_WdEvent(v28);
    v13 = 0;
  }
  if ( (VIDMM_GLOBAL::_Config & 8) == 0 && (*((_DWORD *)a2 + 21) & 8) != 0 )
    *((_BYTE *)a2 + 98) = 1;
  if ( v13 && (*((_DWORD *)a2 + 21) & 8) != 0 && !*((_BYTE *)a2 + 98) && a4 )
  {
    KeStackAttachProcess(*a4[1], &ApcState);
    v29 = (__int64 *)((char *)a2 + 8);
    BaseAddress = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)a4, 0LL, *((const GUID **)a2 + 1), v86, 1);
    if ( BaseAddress )
    {
      v30 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, (PSIZE_T)a2 + 1, 0x1000000u, 4u);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)a4, (GUID *)v86[0]);
      if ( v30 < 0 )
      {
        *((_BYTE *)a2 + 98) = 1;
        if ( bTracingEnabled )
        {
          v35 = (unsigned __int64)*v29 >> 12;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v74) = 0;
            Protect[0] = v35;
            AllocationType[0] = 0;
            McTemplateK0pqqt(v35, &EventUnreset, v31, a2, *(_QWORD *)AllocationType, *(_QWORD *)Protect, v74);
          }
        }
        v36 = *v29;
        v37 = *((_QWORD *)this + 1);
        ++*(_DWORD *)(v37 + 7424);
        *(_QWORD *)(v37 + 7432) += v36;
      }
      else
      {
        if ( bTracingEnabled )
        {
          v32 = (unsigned __int64)*v29 >> 12;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v74) = 1;
            Protect[0] = v32;
            AllocationType[0] = 0;
            McTemplateK0pqqt(v32, &EventUnreset, v31, a2, *(_QWORD *)AllocationType, *(_QWORD *)Protect, v74);
          }
        }
        v33 = *v29;
        v34 = *((_QWORD *)this + 1);
        ++*(_DWORD *)(v34 + 7408);
        *(_QWORD *)(v34 + 7416) += v33;
      }
    }
    KeUnstackDetachProcess(&ApcState);
  }
  v17 = *((_BYTE *)a2 + 98) != 0 ? v13 : 0;
  v18 = *((unsigned int *)a2 + 21);
  if ( (v18 & 8) == 0 && (*((_DWORD *)a2 + 20) & 0x10000) != 0 )
  {
    if ( a4 )
    {
      LOBYTE(v15) = ((v18 & 2) == 0) & ~*((_BYTE *)a4 + 32);
      if ( (_BYTE)v15 )
      {
        if ( !*((_QWORD *)a2 + 33) )
        {
          if ( (*((_DWORD *)a2 + 19) & 0x4000000) == 0 )
          {
            v38 = WdLogNewEntry5_WdAssertion(v15, v18);
            *(_QWORD *)(v38 + 24) = 1520LL;
            WdLogEvent5_WdAssertion(v38);
          }
          if ( !v17 )
            goto LABEL_28;
          VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
        }
      }
    }
  }
  if ( v17 && (**((_DWORD **)a2 + 63) & 0x8000000) != 0 )
  {
    if ( !a4 )
      goto LABEL_30;
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
LABEL_28:
  if ( a4 && ((_BYTE)a4[4] & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v15);
    memset(v87, 0, sizeof(v87));
    v20 = 3;
    v21 = 3;
    if ( v17 )
    {
      if ( *((_BYTE *)a2 + 289) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        v39 = **((_QWORD **)a2 + 33);
        MDLForRange = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 34), *((_QWORD *)a2 + 35));
        (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))(v39 + 120))(
          *((_QWORD *)a2 + 33),
          a2,
          *((_QWORD *)a2 + 34),
          *((_QWORD *)a2 + 35),
          MDLForRange);
        LOBYTE(v41) = 1;
        (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, __int64))(**((_QWORD **)a2 + 33) + 104LL))(
          *((_QWORD *)a2 + 33),
          a2,
          v41);
      }
      v87[0] = a2;
      v87[1] = this;
      v87[2] = *((_QWORD *)a2 + 18);
      LODWORD(v87[3]) = v80[0];
      v22 = VIDMM_MEMORY_SEGMENT::RotateCopyCallback;
      v21 = 2;
    }
    else
    {
      v22 = 0LL;
    }
    KeStackAttachProcess(*a4[1], &ApcState);
    if ( !a5 || (*((_DWORD *)a2 + 21) & 0x20) == 0 )
      v20 = 1;
    v78 = v20;
    v23 = VIDMM_GLOBAL::Rotate(*((_QWORD *)this + 1), a4[1][3], a4[3], v21, 0LL, 0LL, v22, v87, v20, a2);
    v26 = v23;
    if ( v23 == -1073741558 )
    {
      *((_DWORD *)a2 + 19) |= 0x100000u;
    }
    else if ( v23 < 0 )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24);
      v42[3] = 270LL;
      v42[4] = 4LL;
      v42[5] = v21;
      v42[6] = v26;
      v42[7] = 0LL;
      WdLogEvent5_WdCriticalError(v42);
    }
    *((_BYTE *)a4 + 32) &= ~1u;
    KeUnstackDetachProcess(&ApcState);
    goto LABEL_36;
  }
LABEL_30:
  if ( v17 )
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
        WdLogNewEntry5_WdTrace(v43);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v43, &EventPerformanceWarning, v44, 2);
      v45 = 0;
      if ( (**((_DWORD **)a2 + 63) & 8) == 0 && a4 )
      {
        KeStackAttachProcess(*a4[1], &ApcState);
        v45 = 1;
      }
      LODWORD(v77) = v45;
      v46 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 17));
      v47 = *((_QWORD *)a2 + 1);
      v48 = v46 != 0 ? 0x10000 : 4096;
      v78 = v46 != 0 ? 0x10000 : 4096;
      v49 = v47 >> 12;
      v50 = v47 >> 16;
      if ( !v46 )
        v50 = (unsigned int)v49;
      v83 = v50;
      v79 = *(union _LARGE_INTEGER *)((char *)a2 + 144);
      for ( i = 0; i < (unsigned int)v50; ++i )
      {
        v52 = v48 * i;
        Size = (unsigned int)v48;
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 1),
          a2,
          v48,
          (unsigned int)v48 * i,
          this,
          &v79,
          0LL,
          0LL,
          0LL,
          *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL),
          v80[0]);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        v79.QuadPart += Size;
        v53 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)a4, v52, (const GUID *)Size, &v82, 0);
        if ( v53 )
        {
          memmove(v53, *((const void **)this + 32), Size);
          VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)a4, (GUID *)v82);
        }
        else
        {
          *((_DWORD *)a2 + 19) |= 0x100000u;
        }
        LODWORD(v50) = v83;
        v48 = v78;
      }
      if ( v45 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v15);
    if ( (*((_DWORD *)a2 + 19) & 0x100) == 0 )
      VIDMM_GLOBAL::DiscardAllocation(*((ADAPTER_RENDER ***)this + 1), a2, v16);
  }
  if ( (**((_DWORD **)a2 + 63) & 0x20000) != 0 && *((_QWORD *)a2 + 19) )
  {
    v54 = ~*((_QWORD *)this + 50) & (*((_QWORD *)this + 50) + *((_QWORD *)a2 + 2));
    memset(&v88, 0, sizeof(v88));
    v88.PhysicalAdapterIndex = *((_DWORD *)this + 95);
    v88.SegmentIndex = (*((_DWORD *)this + 20) & 0x1000) != 0 ? 0 : *((_DWORD *)this + 4) + 1;
    v55 = 1;
    if ( *((_DWORD *)this + 103) )
    {
      v55 = 0;
      v77 = 0LL;
      if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                           *((_QWORD *)this + 19),
                           *((_QWORD *)this + 52),
                           *((_QWORD *)this + 53),
                           0,
                           (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                           (__int64)this,
                           (__int64)&v77,
                           (__int64)&v83,
                           (__int64)v76) == -1073741823
        && v77 == *((_QWORD *)a2 + 18) )
      {
        v56 = *((_QWORD *)this + 53);
        v57 = *((_QWORD *)a2 + 19);
        v58 = *(_QWORD *)v57 + *(_QWORD *)(v57 + 8);
        if ( v58 >= v56 )
        {
LABEL_117:
          v58 = *((_QWORD *)this + 53);
        }
        else
        {
          while ( 1 )
          {
            v59 = *(_QWORD *)(v57 + 40);
            if ( v59 == *((_QWORD *)this + 19) + 72LL )
              break;
            v57 = v59 - 40;
            if ( *(_BYTE *)(v57 + 56) != 2 )
              break;
            v58 = *(_QWORD *)v57 + *(_QWORD *)(v57 + 8);
            if ( v58 >= v56 )
              goto LABEL_117;
          }
        }
        v60 = v58 & ~*((_QWORD *)this + 50);
        v77 = v60;
        if ( v60 > *((_QWORD *)this + 52) )
        {
          v88.CurrentStartOffset = *((_QWORD *)this + 52);
          v88.CurrentSize = *((_QWORD *)this + 54);
          v88.NewStartOffset = v60;
          v88.NewSize = v56 - v60;
          *((_QWORD *)this + 54) = v56 - v60;
          *((_QWORD *)this + 52) = v60;
          v55 = 1;
        }
      }
    }
    else
    {
      v88.CurrentStartOffset = *((_QWORD *)a2 + 18);
      v88.CurrentSize = v54;
    }
    if ( v55 )
    {
      v61 = (char *)operator new[](0x68uLL, 0x31356956u, PagedPool);
      v62 = operator new[](0x28uLL, 0x38356956u, PagedPool);
      v63 = v62;
      if ( v61 )
      {
        if ( v62 )
        {
          memset(v61, 0, 0x68uLL);
          *((_QWORD *)v61 + 2) = DeferredSetVprCallback;
          *((_QWORD *)v61 + 4) = DeferredSetVprCompletionCallback;
          *(_DXGKARG_SETVIDEOPROTECTEDREGION *)(v61 + 56) = v88;
          *((_QWORD *)v61 + 5) = *((_QWORD *)this + 1);
          *((_QWORD *)v61 + 6) = v63;
          v63[2] = this;
          v63[3] = *((_QWORD *)a2 + 19);
          v63[4] = *((_QWORD *)a2 + 2);
          *((_QWORD *)v61 + 3) = v61;
          VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
          VIDMM_GLOBAL::FlushPagingBuffer(*((VIDMM_GLOBAL **)this + 1), 0, 0LL, 0LL);
          VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
            *((VIDMM_LINEAR_POOL **)this + 19),
            *((void **)a2 + 19),
            v88.CurrentStartOffset,
            v88.NewStartOffset);
          DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
            (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1) + 41024LL),
            (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)v61);
          *((_QWORD *)a2 + 19) = 0LL;
          if ( *((_DWORD *)a2 + 32) != 1 )
          {
            VIDMM_SEGMENT::DecrementBytesCommitted(this, **((struct VIDMM_PARTITION ***)a2 + 61), *((_QWORD *)a2 + 2));
            --*((_DWORD *)this + 80);
          }
          goto LABEL_36;
        }
        operator delete(v61);
      }
      if ( v63 )
        operator delete(v63);
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1)
                                                                                            + 41024LL)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v64, &EventPerformanceWarning, v65, 24);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
      }
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1));
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
      VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v88);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqxxp(
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          v66,
          v67,
          v88.PhysicalAdapterIndex,
          v88.SegmentIndex,
          v88.VprIndex,
          v88.NewStartOffset,
          v88.NewSize,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      if ( (int)ADAPTER_RENDER::DdiSetVideoProtectedRegion(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2528LL),
                  &v88) < 0
        && g_IsInternalRelease )
      {
        v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v69, v68);
        v70[3] = 270LL;
        v70[4] = 9LL;
        v70[5] = 0LL;
        v70[6] = 0LL;
        v70[7] = 0LL;
        WdLogEvent5_WdCriticalError(v70);
      }
    }
  }
LABEL_36:
  *((_DWORD *)a2 + 19) &= ~0x4000000u;
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 32LL) = 0LL;
  *((_QWORD *)a2 + 17) = 0LL;
  if ( v75 )
    (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *))(**((_QWORD **)a2 + 33) + 88LL))(
      *((_QWORD *)a2 + 33),
      a2);
  v19 = *((_QWORD *)this + 1);
  _InterlockedOr(v71, 0);
  ++*(_QWORD *)(v19 + 40);
}
