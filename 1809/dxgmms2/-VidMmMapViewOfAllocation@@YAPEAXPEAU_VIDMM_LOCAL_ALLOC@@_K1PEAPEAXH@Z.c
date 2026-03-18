/*
 * XREFs of ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C006C1CC
 * Callers:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006C450 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0070390 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C007095C (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C0080450 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0080650 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00B9220 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00B9D60 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0018C04 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0018C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall VidMmMapViewOfAllocation(struct _VIDMM_LOCAL_ALLOC *a1, __int64 a2, const GUID *a3, void **a4, int a5)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  struct _VIDMM_LOCAL_ALLOC *v9; // r15
  int v10; // edx
  char *v11; // rdi
  __int64 v13; // rdx
  int v14; // ebx
  __int64 CurrentProcess; // rax
  __int64 v16; // rcx
  NTSTATUS v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // [rsp+50h] [rbp-20h] BYREF
  int v26; // [rsp+58h] [rbp-18h] BYREF
  __int64 v27; // [rsp+60h] [rbp-10h]
  char v28; // [rsp+68h] [rbp-8h]
  PVOID MappedBase; // [rsp+B0h] [rbp+40h] BYREF
  const GUID *v30; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v31; // [rsp+C8h] [rbp+58h] BYREF

  v30 = a3;
  v5 = *(_QWORD *)a1;
  v6 = 0LL;
  *a4 = 0LL;
  MappedBase = 0LL;
  v9 = a1;
  if ( (*(_DWORD *)(v5 + 76) & 0x100) != 0 && (*(_DWORD *)(v5 + 80) & 0x80u) != 0 )
  {
    v11 = (char *)*((_QWORD *)a1 + 2);
    return &v11[a2];
  }
  if ( (*(_BYTE *)(v5 + 84) & 4) != 0 || (*(_DWORD *)(v5 + 76) & 0x100) != 0 )
  {
    v22 = *(_QWORD *)(v5 + 360);
    v31 = a2;
    if ( (int)MmMapViewInSystemSpaceEx(v22, v5 + 368, &v30, &v31, 0LL) >= 0 )
    {
      v11 = (char *)(*(_QWORD *)(v5 + 368) - v31);
      return &v11[a2];
    }
    _InterlockedIncrement(&dword_1C004D6B4);
    v24 = WdLogNewEntry5_WdLowResource(v23);
    *(_QWORD *)(v24 + 24) = v5;
    WdLogEvent5_WdLowResource(v24);
    return (char *)MappedBase;
  }
  v10 = **(_DWORD **)(v5 + 504);
  if ( (v10 & 8) == 0 )
  {
    LOBYTE(a1) = (v10 & 0x30) == 0;
    if ( ((unsigned __int8)a1 & (*(_BYTE *)(v5 + 80) >= 0)) == 0 )
    {
      if ( !a5 || (v10 & 0x20) == 0 )
      {
        v11 = (char *)*((_QWORD *)v9 + 2);
        return &v11[a2];
      }
      return (char *)v6;
    }
    if ( (v10 & 0x20000000) == 0 )
    {
      v26 = -1;
      v27 = 0LL;
      if ( (qword_1C004D010 & 2) != 0 )
      {
        v28 = 1;
        v26 = 8002;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 8002);
      }
      else
      {
        v28 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry();
      MappedBase = (PVOID)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const GUID *, int))(**(_QWORD **)(*((_QWORD *)v9 + 1) + 24LL)
                                                                                                + 56LL))(
                            *(_QWORD *)(*((_QWORD *)v9 + 1) + 24LL),
                            *((_QWORD *)v9 + 3),
                            a2,
                            v30,
                            a5);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v20, &EventProfilerExit, v21, v26);
      return (char *)MappedBase;
    }
    if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
    {
      _InterlockedIncrement(&dword_1C004D6B4);
      v18 = WdLogNewEntry5_WdLowResource(a1);
      *(_QWORD *)(v18 + 24) = 641LL;
      WdLogEvent5_WdLowResource(v18);
      v17 = -1073741823;
    }
    else
    {
      v13 = -(**(_DWORD **)(v5 + 504) & 4);
      v25 = 0LL;
      v14 = (_DWORD)v13 != 0 ? 4 : 1028;
      CurrentProcess = PsGetCurrentProcess(a1, v13);
      v17 = MmMapViewOfSection(
              *(_QWORD *)(v5 + 360),
              CurrentProcess,
              &MappedBase,
              0LL,
              *(_QWORD *)(v5 + 8),
              &v25,
              v5 + 8,
              2,
              0,
              v14);
      if ( v17 >= 0 )
      {
LABEL_12:
        v11 = (char *)MappedBase;
        *a4 = MappedBase;
        return &v11[a2];
      }
    }
    _InterlockedIncrement(&dword_1C004D6B4);
    v19 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v19 + 24) = a5;
    WdLogEvent5_WdLowResource(v19);
    if ( !a5 )
    {
      v17 = MmMapViewInSystemSpace(*(PVOID *)(v5 + 360), &MappedBase, (PSIZE_T)(v5 + 8));
      if ( v17 < 0 )
        return (char *)MappedBase;
      *((_BYTE *)v9 + 32) |= 8u;
    }
    if ( v17 >= 0 )
      goto LABEL_12;
    return (char *)MappedBase;
  }
  if ( !a5 )
  {
    v11 = *(char **)(v5 + 368);
    return &v11[a2];
  }
  return (char *)v6;
}
