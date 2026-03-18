/*
 * XREFs of ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C006A6E4
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C005AFE8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C005B5A0 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006A31C (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C0082C90 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0082E30 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00BC210 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00BCD50 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00180C4 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00180E8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 */

char *__fastcall VidMmMapViewOfAllocation(struct _VIDMM_LOCAL_ALLOC *a1, __int64 a2, const GUID *a3, void **a4, int a5)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  struct _VIDMM_LOCAL_ALLOC *v9; // r15
  int v10; // edx
  __int64 v11; // rdx
  int v12; // ebx
  __int64 CurrentProcess; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  char *v16; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  const GUID *v24; // r8
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // [rsp+50h] [rbp-20h] BYREF
  int v31; // [rsp+58h] [rbp-18h] BYREF
  __int64 v32; // [rsp+60h] [rbp-10h]
  char v33; // [rsp+68h] [rbp-8h]
  PVOID MappedBase; // [rsp+B0h] [rbp+40h] BYREF
  const GUID *v35; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+58h] BYREF

  v35 = a3;
  v5 = *(_QWORD *)a1;
  v6 = 0LL;
  *a4 = 0LL;
  MappedBase = 0LL;
  v9 = a1;
  if ( (*(_DWORD *)(v5 + 76) & 0x100) != 0 && (*(_DWORD *)(v5 + 80) & 0x80u) != 0 )
  {
    v16 = (char *)*((_QWORD *)a1 + 2);
    return &v16[a2];
  }
  if ( (*(_BYTE *)(v5 + 84) & 4) != 0 || (*(_DWORD *)(v5 + 76) & 0x100) != 0 )
  {
    v25 = *(_QWORD *)(v5 + 360);
    v36 = a2;
    v26 = MmMapViewInSystemSpaceEx(v25, v5 + 368, &v35, &v36, 0LL);
    v28 = v26;
    if ( v26 >= 0 )
    {
      v16 = (char *)(*(_QWORD *)(v5 + 368) - v36);
      return &v16[a2];
    }
    _InterlockedIncrement(&dword_1C004E694);
    v29 = WdLogNewEntry5_WdLowResource(v27);
    *(_QWORD *)(v29 + 24) = v5;
    *(_QWORD *)(v29 + 32) = v28;
    WdLogEvent5_WdLowResource(v29);
    return (char *)MappedBase;
  }
  v10 = **(_DWORD **)(v5 + 504);
  if ( (v10 & 8) != 0 )
  {
    if ( a5 )
      return (char *)v6;
    v16 = *(char **)(v5 + 368);
    return &v16[a2];
  }
  LOBYTE(a1) = (v10 & 0x30) == 0;
  if ( ((unsigned __int8)a1 & (*(_BYTE *)(v5 + 80) >= 0)) != 0 )
  {
    if ( (v10 & 0x20000000) != 0 )
    {
      if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
      {
        _InterlockedIncrement(&dword_1C004E694);
        v18 = WdLogNewEntry5_WdLowResource(a1);
        *(_QWORD *)(v18 + 24) = 642LL;
        WdLogEvent5_WdLowResource(v18);
        LODWORD(v15) = -1073741823;
      }
      else
      {
        v11 = -(**(_DWORD **)(v5 + 504) & 4);
        v30 = 0LL;
        v12 = (_DWORD)v11 != 0 ? 4 : 1028;
        CurrentProcess = PsGetCurrentProcess(a1, v11);
        LODWORD(v15) = MmMapViewOfSection(
                         *(_QWORD *)(v5 + 360),
                         CurrentProcess,
                         &MappedBase,
                         0LL,
                         *(_QWORD *)(v5 + 8),
                         &v30,
                         v5 + 8,
                         2,
                         0,
                         v12);
        if ( (int)v15 >= 0 )
        {
LABEL_8:
          v16 = (char *)MappedBase;
          *a4 = MappedBase;
          return &v16[a2];
        }
      }
      _InterlockedIncrement(&dword_1C004E694);
      v19 = WdLogNewEntry5_WdLowResource(v14);
      *(_QWORD *)(v19 + 24) = a5;
      *(_QWORD *)(v19 + 32) = (int)v15;
      WdLogEvent5_WdLowResource(v19);
      if ( !a5 )
      {
        v20 = MmMapViewInSystemSpace(*(PVOID *)(v5 + 360), &MappedBase, (PSIZE_T)(v5 + 8));
        v15 = v20;
        if ( v20 < 0 )
        {
          _InterlockedIncrement(&dword_1C004E694);
          v22 = WdLogNewEntry5_WdLowResource(v21);
          *(_QWORD *)(v22 + 24) = v15;
          WdLogEvent5_WdLowResource(v22);
        }
        else
        {
          *((_BYTE *)v9 + 32) |= 8u;
        }
      }
      if ( (int)v15 >= 0 )
        goto LABEL_8;
    }
    else
    {
      v31 = -1;
      v32 = 0LL;
      if ( (qword_1C004E010 & 2) != 0 )
      {
        v33 = 1;
        v31 = 8002;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 8002);
      }
      else
      {
        v33 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry();
      MappedBase = (PVOID)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const GUID *, int))(**(_QWORD **)(*((_QWORD *)v9 + 1) + 24LL)
                                                                                                + 56LL))(
                            *(_QWORD *)(*((_QWORD *)v9 + 1) + 24LL),
                            *((_QWORD *)v9 + 3),
                            a2,
                            v35,
                            a5);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v23, &EventProfilerExit, v24, v31);
    }
    return (char *)MappedBase;
  }
  if ( !a5 || (v10 & 0x20) == 0 )
  {
    v16 = (char *)*((_QWORD *)v9 + 2);
    return &v16[a2];
  }
  return (char *)v6;
}
