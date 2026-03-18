/*
 * XREFs of ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C005A9F8
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A584 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C005B918 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0080DD0 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0018C04 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0018C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A8B8 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C005AB48 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C005C210 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DC44 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::DebouncedUnlock(VIDMM_RECYCLE_RANGE *this, __int64 a2, const GUID *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rcx
  const GUID *v9; // r8
  VIDMM_RECYCLE_HEAP_MGR **v11; // rcx
  unsigned int v12; // r14d
  _QWORD *v13; // rax
  __int64 v14; // rcx
  const GUID *v15; // r8
  int v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h]
  char v18; // [rsp+30h] [rbp-10h]

  v3 = *((int *)this + 16);
  v5 = (unsigned int)(*((_DWORD *)this + 16) - 3);
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 != 1 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, a2);
      v13[6] = v3;
      v13[7] = 0LL;
      v13[3] = 270LL;
      v13[4] = 52LL;
      v13[5] = 6LL;
      WdLogEvent5_WdCriticalError(v13);
      return 0LL;
    }
    v16 = -1;
    v17 = 0LL;
    if ( (qword_1C004D010 & 2) != 0 )
    {
      v18 = 1;
      v16 = 8001;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v5, &EventProfilerEnter, a3, 8001);
    }
    else
    {
      v18 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry();
    v6 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
           (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
           *((_QWORD *)this + 4),
           *((_QWORD *)this + 5));
    if ( v6 >= 0 )
    {
      v11 = *(VIDMM_RECYCLE_HEAP_MGR ***)(*((_QWORD *)this + 9) + 32LL);
      if ( (unsigned int)(*(_DWORD *)v11 - 3) <= 3 || (unsigned int)(*(_DWORD *)v11 - 9) <= 1 )
      {
        v12 = 0;
      }
      else
      {
        VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(v11[1], this);
        v12 = 5;
        v11 = *(VIDMM_RECYCLE_HEAP_MGR ***)(*((_QWORD *)this + 9) + 32LL);
      }
      VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(v11, this);
      v7 = v12;
      goto LABEL_6;
    }
  }
  else
  {
    v16 = -1;
    v17 = 0LL;
    if ( (qword_1C004D010 & 2) != 0 )
    {
      v18 = 1;
      v16 = 8001;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v5, &EventProfilerEnter, a3, 8001);
    }
    else
    {
      v18 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry();
    v6 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
           (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
           *((_QWORD *)this + 4),
           *((_QWORD *)this + 5));
    if ( v6 >= 0 )
    {
      v7 = 1LL;
LABEL_6:
      VIDMM_RECYCLE_RANGE::Transition(this, v7);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
      if ( v18 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v8, &EventProfilerExit, v9, v16);
      }
      return 0LL;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, v16);
  return (unsigned int)v6;
}
