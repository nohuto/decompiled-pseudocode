/*
 * XREFs of ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00667FC
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00666DC (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00180B4 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00180D8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00676FC (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00693D0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C0069A60 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::Lock(
        VIDMM_RECYCLE_RANGE *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        const GUID *a3,
        struct VIDMM_SEGMENT *a4)
{
  __int64 v4; // rdi
  __int64 v8; // rcx
  enum _LOCK_OPERATION v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // r8
  __int64 v14; // rcx
  const GUID *v15; // r8
  VIDMM_RECYCLE_HEAP_MGR *v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  int v21; // [rsp+30h] [rbp-28h] BYREF
  __int64 v22; // [rsp+38h] [rbp-20h]
  char v23; // [rsp+40h] [rbp-18h]

  v4 = *((int *)this + 16);
  v8 = (unsigned int)(*((_DWORD *)this + 16) - 1);
  if ( (_DWORD)v8 )
  {
    v17 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v8 - 1);
    if ( (_DWORD)v17 )
    {
      if ( (_DWORD)v17 != 1 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, a2);
        v19[7] = 0LL;
        v19[3] = 270LL;
        v19[4] = 52LL;
        v19[5] = 2LL;
        v19[6] = v4;
        WdLogEvent5_WdCriticalError(v19);
        return 3221225473LL;
      }
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v17, this);
      ++*((_DWORD *)this + 22);
      VIDMM_RECYCLE_RANGE::Transition(this, 2LL, v18);
    }
    else
    {
      ++*((_DWORD *)this + 22);
    }
    return 0LL;
  }
  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C004E010 & 2) != 0 )
  {
    v23 = 1;
    v21 = 8000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v8, &EventProfilerEnter, a3, 8000);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v12 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
          (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
          a2,
          v9,
          a4,
          *((void **)this + 4),
          *((void **)this + 5));
  if ( v12 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10);
    v20[3] = this;
    v20[4] = a2;
    v20[5] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL) + 8LL);
    WdLogEvent5_WdWarning(v20);
  }
  else
  {
    ++*((_DWORD *)this + 22);
    VIDMM_RECYCLE_RANGE::Transition(this, 2LL, v13);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v14, &EventProfilerExit, v15, v21);
  }
  return (unsigned int)v12;
}
