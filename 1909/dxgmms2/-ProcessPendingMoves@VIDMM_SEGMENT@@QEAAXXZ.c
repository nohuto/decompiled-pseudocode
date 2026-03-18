/*
 * XREFs of ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C07B8
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006C610 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00242D0 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C0026670 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     McTemplateK0qqqxxp @ 0x1C0029204 (McTemplateK0qqqxxp.c)
 *     ?SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0029364 (-SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D000 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0079770 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB9D0 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00BEF9C (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00C819C (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

void __fastcall VIDMM_SEGMENT::ProcessPendingMoves(VIDMM_SEGMENT *this)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // rax
  bool v11; // r14
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // r15
  int v15; // edi
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  SIZE_T v20; // rdx
  SIZE_T v21; // rcx
  bool v22; // zf
  SIZE_T v23; // rax
  DXG_DEFERRED_WORK_QUEUE *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v28; // rdx
  const GUID *v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // rax
  _BYTE v32[8]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v33; // [rsp+58h] [rbp-11h] BYREF
  SIZE_T v34; // [rsp+60h] [rbp-9h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v35; // [rsp+68h] [rbp-1h] BYREF

  if ( !*((_BYTE *)this + 472) )
    return;
  *((_BYTE *)this + 472) = 0;
  v32[0] = 0;
  v33 = 0LL;
  if ( *((_QWORD *)this + 54) )
    v2 = *((_QWORD *)this + 52);
  else
    v2 = *((_QWORD *)this + 6);
  v3 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
         *((_QWORD *)this + 19),
         0,
         v2,
         1,
         (__int64)VIDMM_SEGMENT::MoveOneResource,
         (__int64)this,
         0LL,
         (__int64)&v33,
         (__int64)v32);
  v6 = v3;
  if ( v3 < 0 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v4);
    v7[3] = v33;
    v7[4] = v6;
LABEL_31:
    v7[5] = v32[0];
    WdLogEvent5_WdWarning(v7);
    return;
  }
  if ( !*((_QWORD *)this + 54) )
    return;
  v8 = *((unsigned int *)this + 95);
  v9 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v10 = *(_QWORD *)(*((_QWORD *)v9 + 3) + 2440LL);
  v11 = (*(_DWORD *)(v10 + 352 * v8 + 16) & 8) != 0;
  if ( (*(_DWORD *)(v10 + 352 * v8 + 16) & 8) != 0 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(v9, v8, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
    LOBYTE(v12) = 1;
    VIDMM_GLOBAL::SetVPRPaging(*((VIDMM_GLOBAL **)this + 1), v12, v13);
  }
  v14 = *((_QWORD *)this + 53);
  v15 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
          *((_QWORD *)this + 19),
          v2,
          v14,
          1,
          (__int64)VIDMM_SEGMENT::MoveOneResource,
          (__int64)this,
          0LL,
          (__int64)&v33,
          (__int64)v32);
  if ( v11 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95), 0, 0LL, 0LL, 0, 1);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
    VIDMM_GLOBAL::SetVPRPaging(*((VIDMM_GLOBAL **)this + 1), 0LL, v16);
  }
  v17 = *((_QWORD *)this + 19);
  v34 = 0LL;
  if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                       v17,
                       v2,
                       v14,
                       0,
                       (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                       (__int64)this,
                       (__int64)&v34,
                       (__int64)&v33,
                       (__int64)v32) != -1073741823 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v31 + 24) = 6208LL;
    WdLogEvent5_WdAssertion(v31);
    goto LABEL_29;
  }
  v20 = *((_QWORD *)this + 52);
  v21 = v34 & ~*((_QWORD *)this + 50);
  v34 = v21;
  if ( v21 <= v20 )
  {
LABEL_29:
    if ( v15 >= 0 )
      return;
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20);
    v7[3] = v33;
    v7[4] = v15;
    goto LABEL_31;
  }
  v22 = (*((_DWORD *)this + 20) & 0x1000) == 0;
  v35.PhysicalAdapterIndex = *((_DWORD *)this + 95);
  *(_QWORD *)&v35.VprIndex = 0LL;
  if ( v22 )
    v35.SegmentIndex = *((_DWORD *)this + 4) + 1;
  else
    v35.SegmentIndex = 0;
  v35.CurrentSize = *((_QWORD *)this + 54);
  v23 = *((_QWORD *)this + 53) - v21;
  v35.NewStartOffset = v21;
  *((_QWORD *)this + 52) = v21;
  v24 = (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1) + 41024LL);
  v35.CurrentStartOffset = v20;
  v35.NewSize = v23;
  *((_QWORD *)this + 54) = v23;
  if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems(v24) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v26, &EventPerformanceWarning, v27, 24);
    KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
  }
  VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1), v25, v27);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
  VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v35);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qqqxxp(
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
      v28,
      v29,
      v35.PhysicalAdapterIndex,
      v35.SegmentIndex,
      v35.VprIndex,
      v35.NewStartOffset,
      v35.NewSize,
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
  v15 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2560LL),
          &v35);
  if ( v15 < 0 )
  {
    if ( g_IsInternalRelease )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20);
      v30[3] = 270LL;
      v30[4] = 9LL;
      v30[5] = 0LL;
      v30[6] = 0LL;
      v30[7] = 0LL;
      WdLogEvent5_WdCriticalError(v30);
    }
    goto LABEL_29;
  }
}
