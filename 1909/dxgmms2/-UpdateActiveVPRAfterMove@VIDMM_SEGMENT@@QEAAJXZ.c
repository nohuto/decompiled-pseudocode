/*
 * XREFs of ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00C2418
 * Callers:
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AD7F8 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00242D0 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C0026670 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     McTemplateK0qqqxxp @ 0x1C0029204 (McTemplateK0qqqxxp.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D000 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB9D0 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00BEF9C (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00C819C (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::UpdateActiveVPRAfterMove(VIDMM_SEGMENT *this)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  int v4; // edi
  SIZE_T v5; // rdx
  SIZE_T v6; // rcx
  bool v7; // zf
  SIZE_T v8; // rax
  DXG_DEFERRED_WORK_QUEUE *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v13; // rdx
  const GUID *v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _BYTE v18[8]; // [rsp+58h] [rbp+7h] BYREF
  SIZE_T v19; // [rsp+60h] [rbp+Fh] BYREF
  _BYTE v20[8]; // [rsp+68h] [rbp+17h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v21; // [rsp+70h] [rbp+1Fh] BYREF

  v1 = *((_QWORD *)this + 53);
  v2 = *((_QWORD *)this + 52);
  v4 = 0;
  v19 = 0LL;
  v18[0] = 0;
  if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                       *((_QWORD *)this + 19),
                       v2,
                       v1,
                       0,
                       (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                       (__int64)this,
                       (__int64)&v19,
                       (__int64)v20,
                       (__int64)v18) == -1073741823 )
  {
    v5 = *((_QWORD *)this + 52);
    v6 = v5 & ~*((_QWORD *)this + 50);
    v19 = v6;
    if ( v6 > v5 )
    {
      *(_QWORD *)&v21.VprIndex = 0LL;
      v7 = (*((_DWORD *)this + 20) & 0x1000) == 0;
      v21.PhysicalAdapterIndex = *((_DWORD *)this + 95);
      if ( v7 )
        v21.SegmentIndex = *((_DWORD *)this + 4) + 1;
      else
        v21.SegmentIndex = 0;
      v21.CurrentSize = *((_QWORD *)this + 54);
      v8 = *((_QWORD *)this + 53) - v6;
      v21.NewStartOffset = v6;
      *((_QWORD *)this + 52) = v6;
      v9 = (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1) + 41024LL);
      v21.CurrentStartOffset = v5;
      v21.NewSize = v8;
      *((_QWORD *)this + 54) = v8;
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems(v9) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v11, &EventPerformanceWarning, v12, 24);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
      }
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1), v10, v12);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
      VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v21);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqxxp(
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          v13,
          v14,
          v21.PhysicalAdapterIndex,
          v21.SegmentIndex,
          v21.VprIndex,
          v21.NewStartOffset,
          v21.NewSize,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      v4 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
             *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2560LL),
             &v21);
      if ( v4 < 0 && g_IsInternalRelease )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(*(_QWORD *)&g_IsInternalRelease, v15);
        v16[5] = 0LL;
        v16[6] = 0LL;
        v16[7] = 0LL;
        v16[3] = 270LL;
        v16[4] = 9LL;
        WdLogEvent5_WdCriticalError(v16);
      }
    }
  }
  return (unsigned int)v4;
}
