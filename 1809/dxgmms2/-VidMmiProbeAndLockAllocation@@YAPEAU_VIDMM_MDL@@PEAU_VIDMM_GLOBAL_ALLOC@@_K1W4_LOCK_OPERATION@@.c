/*
 * XREFs of ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006C450
 * Callers:
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C0059510 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006F3A0 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008D130 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z @ 0x1C00A8210 (-EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00C43B0 (-ProbeAndLockAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0018C04 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0018C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     ?TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E408 (-TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C006C1CC (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C006C314 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C006C398 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 */

struct _VIDMM_MDL *__fastcall VidMmiProbeAndLockAllocation(
        struct _VIDMM_GLOBAL_ALLOC *a1,
        __int64 a2,
        const GUID *a3,
        LOCK_OPERATION a4,
        struct VIDMM_SEGMENT *a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  struct _VIDMM_LOCAL_ALLOC *v8; // rsi
  char v9; // r15
  char v10; // r14
  struct _VIDMM_MDL *v11; // rax
  __int64 v12; // rcx
  struct _VIDMM_MDL *v13; // rdi
  char *v14; // rax
  __int64 v15; // rcx
  const GUID *v16; // r8
  PMDL Mdl; // rax
  __int64 v18; // rcx
  const GUID *v19; // r8
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v23; // rax
  void *v24; // rcx
  void *v25[2]; // [rsp+40h] [rbp-58h] BYREF
  int v26; // [rsp+50h] [rbp-48h] BYREF
  __int64 v27; // [rsp+58h] [rbp-40h]
  char v28; // [rsp+60h] [rbp-38h]

  v8 = a6;
  if ( !a6 )
    v8 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a1 + 13);
  v9 = 0;
  v10 = 0;
  v11 = (struct _VIDMM_MDL *)operator new[](0x18uLL, 0x35336956u, PagedPool);
  v13 = v11;
  v25[1] = v11;
  if ( !v11 )
  {
    _InterlockedIncrement(&dword_1C004D684);
    v23 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v23 + 24) = 1201LL;
LABEL_14:
    WdLogEvent5_WdLowResource(v23);
    goto LABEL_15;
  }
  *((_QWORD *)v11 + 1) = 0LL;
  v14 = VidMmMapViewOfAllocation(v8, a2, a3, v25, 0);
  if ( !v14 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v15, &EventPerformanceWarning, v16, 14);
    _InterlockedIncrement(&dword_1C004D6B4);
    v23 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v23 + 24) = 1216LL;
    goto LABEL_14;
  }
  v9 = 1;
  *(_DWORD *)v13 = 0;
  Mdl = VidMmiAllocateMdl((unsigned __int64)v14, (SIZE_T)a3);
  *((_QWORD *)v13 + 1) = Mdl;
  if ( !Mdl )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    v23 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v23 + 24) = 1230LL;
    goto LABEL_14;
  }
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C004D010 & 2) != 0 )
  {
    v28 = 1;
    v26 = 8000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v18, &EventProfilerEnter, v19, 8000);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  MmProbeAndLockPages(*((PMDL *)v13 + 1), 0, a4);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v26);
  v10 = 1;
  if ( !a5 || VIDMM_SEGMENT::TrackAndValidatePagesOnLock(a5, v13, (__int64)v21, a1) )
  {
    VidMmUnmapViewOfAllocation(v8, (GUID *)v25[0]);
    return v13;
  }
LABEL_15:
  if ( v10 )
    MmUnlockPages(*((PMDL *)v13 + 1));
  if ( v13 )
  {
    v24 = (void *)*((_QWORD *)v13 + 1);
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    operator delete(v13);
  }
  if ( v9 )
    VidMmUnmapViewOfAllocation(v8, (GUID *)v25[0]);
  return 0LL;
}
