/*
 * XREFs of ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C00663FC
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0064E60 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0068E48 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0084030 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00180C4 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00180E8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0065188 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00662E8 (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C0066594 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C0067AEC (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069CC8 (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069D3C (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::DebouncedUnlock(VIDMM_RECYCLE_RANGE *this, bool *a2, const GUID *a3)
{
  __int64 v3; // rdi
  int v5; // ecx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  const GUID *v12; // r8
  char v14; // si
  VIDMM_RECYCLE_HEAP_MGR **v15; // r8
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rcx
  const GUID *v19; // r8
  int v20; // [rsp+20h] [rbp-20h] BYREF
  __int64 v21; // [rsp+28h] [rbp-18h]
  char v22; // [rsp+30h] [rbp-10h]

  v3 = *((int *)this + 16);
  v5 = *((_DWORD *)this + 16);
  *a2 = 0;
  v7 = (unsigned int)(v5 - 3);
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 1 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, a2);
      v17[7] = 0LL;
      v17[3] = 270LL;
      v17[4] = 52LL;
      v17[5] = 6LL;
      v17[6] = v3;
      WdLogEvent5_WdCriticalError(v17);
      return 0LL;
    }
    v20 = -1;
    v14 = 1;
    v21 = 0LL;
    if ( (qword_1C004E010 & 2) != 0 )
    {
      v22 = 1;
      v20 = 8001;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v7, &EventProfilerEnter, a3, 8001);
    }
    else
    {
      v22 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry();
    v9 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
           (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
           *((_QWORD *)this + 4),
           *((_QWORD *)this + 5));
    if ( v9 >= 0 )
    {
      v15 = *(VIDMM_RECYCLE_HEAP_MGR ***)(*((_QWORD *)this + 9) + 32LL);
      if ( (unsigned int)(*(_DWORD *)v15 - 3) > 3 && (unsigned int)(*(_DWORD *)v15 - 9) > 1 )
        v14 = 0;
      if ( v14 )
      {
        VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(v15, this);
        VIDMM_RECYCLE_RANGE::Transition(this, 0LL, v16);
        VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)this + 9), this);
        *a2 = VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(*((VIDMM_RECYCLE_BLOCK **)this + 9), this);
LABEL_7:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
        if ( v22 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v11, &EventProfilerExit, v12, v20);
        }
        return 0LL;
      }
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(v15[1], this);
      VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
        *(VIDMM_RECYCLE_HEAP_MGR ***)(*((_QWORD *)this + 9) + 32LL),
        this);
      v10 = 5LL;
LABEL_6:
      VIDMM_RECYCLE_RANGE::Transition(this, v10, v8);
      goto LABEL_7;
    }
  }
  else
  {
    v20 = -1;
    v21 = 0LL;
    if ( (qword_1C004E010 & 2) != 0 )
    {
      v22 = 1;
      v20 = 8001;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v7, &EventProfilerEnter, a3, 8001);
    }
    else
    {
      v22 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry();
    v9 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
           (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
           *((_QWORD *)this + 4),
           *((_QWORD *)this + 5));
    if ( v9 >= 0 )
    {
      v10 = 1LL;
      goto LABEL_6;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v20);
  return (unsigned int)v9;
}
