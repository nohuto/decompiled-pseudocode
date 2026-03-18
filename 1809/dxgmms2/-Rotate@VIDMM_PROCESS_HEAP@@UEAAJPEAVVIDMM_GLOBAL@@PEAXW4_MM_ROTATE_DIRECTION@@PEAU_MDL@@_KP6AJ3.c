/*
 * XREFs of ?Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C4780
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0018C04 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0018C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C0081038 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Rotate(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        enum _MM_ROTATE_DIRECTION a4,
        PMDL NewMdl,
        SIZE_T Size,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION a7,
        PVOID a8,
        char a9)
{
  ULONG_PTR v9; // rdi
  __int64 v12; // r15
  char v13; // si
  NTSTATUS v14; // r14d
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  char *v24; // r12
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  SIZE_T v30; // r14
  HANDLE v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  char v34; // bl
  struct _MDL *v35; // rbx
  ULONG_PTR v36; // rdi
  PVOID Context; // rsi
  NTSTATUS (__stdcall *CopyFunction)(PMDL, PMDL, PVOID); // r15
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  const GUID *v43; // r8
  __int64 v44; // rdx
  int i; // r15d
  NTSTATUS v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  const GUID *v50; // r8
  PVOID v51; // rbx
  NTSTATUS (__stdcall *v52)(PMDL, PMDL, PVOID); // r15
  __int64 v53; // rbx
  struct _MDL *v54; // r13
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v56; // rcx
  const GUID *v57; // r8
  SIZE_T v59; // [rsp+30h] [rbp-40h]
  ULONG_PTR NumberOfBytes; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR v61; // [rsp+40h] [rbp-30h] BYREF
  union _LARGE_INTEGER v62; // [rsp+48h] [rbp-28h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp-20h] BYREF
  int v64; // [rsp+58h] [rbp-18h] BYREF
  __int64 v65; // [rsp+60h] [rbp-10h]
  char v66; // [rsp+68h] [rbp-8h]
  int v67; // [rsp+B0h] [rbp+40h]
  ULONG_PTR v68; // [rsp+C0h] [rbp+50h] BYREF
  enum _MM_ROTATE_DIRECTION v69; // [rsp+C8h] [rbp+58h]

  v69 = a4;
  v68 = (ULONG_PTR)a3;
  v64 = -1;
  v9 = (ULONG_PTR)a3;
  v65 = 0LL;
  v12 = a4;
  v13 = 1;
  if ( (qword_1C004D010 & 2) != 0 )
  {
    v66 = 1;
    v64 = 8005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 8005);
  }
  else
  {
    v66 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v14 = 0;
  v15 = **(_QWORD **)(a1 + 8);
  if ( PsGetCurrentProcess(v17, v16) != v15 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18);
    v20[5] = 0LL;
    v20[6] = 0LL;
    v20[7] = 0LL;
    v20[3] = 270LL;
    v20[4] = 30LL;
    WdLogEvent5_WdCriticalError(v20);
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v21 = WdLogNewEntry5_WdTrace(v19);
    *(_QWORD *)(v21 + 24) = v9;
    *(_QWORD *)(v21 + 32) = v12;
  }
  v22 = *(_QWORD *)(v9 + 8);
  v23 = *(_DWORD *)v9 & 1;
  if ( (*(_DWORD *)v9 & 1) != 0 )
  {
    v24 = *(char **)(v9 + 8);
    v25 = (*(_DWORD *)(v9 + 20) >> 23) & 1;
  }
  else
  {
    v24 = (char *)(*(_QWORD *)(v9 + 16) + *(_QWORD *)(v22 + 32));
    if ( (*(_DWORD *)(v22 + 64) & 1) != 0 )
      goto LABEL_19;
    v25 = 0;
  }
  if ( v25 )
  {
LABEL_19:
    v67 = 0;
    if ( (unsigned int)v12 <= 1 )
    {
      v30 = Size;
      v59 = Size;
      if ( !(_DWORD)v23 && !*(_QWORD *)(v22 + 56) && !*(_QWORD *)(v9 + 32) )
      {
        v31 = MmSecureVirtualMemory(v24, Size, 4u);
        *(_QWORD *)(v9 + 32) = v31;
        if ( !v31 )
        {
          _InterlockedAdd(&dword_1C004D690, 1u);
          v33 = WdLogNewEntry5_WdLowResource(v32);
          *(_QWORD *)(v33 + 24) = 1551LL;
          WdLogEvent5_WdLowResource(v33);
          v14 = -1073741801;
          goto LABEL_59;
        }
      }
      if ( *(_DWORD *)(a2 + 40144) != -1 )
        (*(void (__fastcall **)(_QWORD))(a2 + 40048))(*(_QWORD *)(a2 + 40112));
      v67 = 1;
    }
    else
    {
      v30 = *(_QWORD *)(v9 + 64);
      v59 = v30;
    }
    v34 = a9;
    if ( (_DWORD)v12 == 2 )
    {
      v35 = NewMdl;
      v36 = v30;
      Context = a8;
      CopyFunction = a7;
      Interval.QuadPart = -10000LL;
      while ( 1 )
      {
        NumberOfBytes = v36;
        v14 = MmRotatePhysicalView(v24, &NumberOfBytes, v35, MmToRegularMemory, CopyFunction, Context);
        if ( v14 != 1073741849 )
          break;
        v41 = WdLogNewEntry5_WdWarning(v40, v39);
        WdLogEvent5_WdWarning(v41);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v42, &EventPerformanceWarning, v43, 12);
        v24 += NumberOfBytes;
        v36 -= NumberOfBytes;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v9 = v68;
      v13 = 1;
    }
    else
    {
      if ( (_DWORD)v12 != 3 )
      {
        v68 = v30;
        v14 = MmRotatePhysicalView(v24, &v68, NewMdl, (MM_ROTATE_DIRECTION)v12, a7, a8);
        if ( v14 >= 0 )
          goto LABEL_63;
        if ( (v34 & 2) != 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v9 + 80), 0);
          *(_QWORD *)(v9 + 80) = 0LL;
        }
LABEL_53:
        if ( v14 < 0 )
        {
          if ( v67 )
          {
            v44 = *(unsigned int *)(a2 + 40144);
            if ( (_DWORD)v44 != -1 )
              (*(void (__fastcall **)(_QWORD))(a2 + 40064))(*(_QWORD *)(a2 + 40112));
          }
          v53 = v59;
          v54 = NewMdl;
LABEL_58:
          CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v40, v44);
          VIDMM_GLOBAL::RecordRotation(CurrentProcess, v24, v53, v54, (enum _MM_ROTATE_DIRECTION)v12, v14);
          goto LABEL_59;
        }
LABEL_63:
        if ( (unsigned int)v12 <= 1 )
        {
          v53 = v59;
          v54 = NewMdl;
          *(_QWORD *)(v9 + 64) = v59;
          *(_QWORD *)(v9 + 80) = v54;
        }
        else
        {
          if ( (v34 & 2) == 0 )
          {
            ExFreePoolWithTag(*(PVOID *)(v9 + 80), 0);
            *(_QWORD *)(v9 + 80) = 0LL;
          }
          v53 = v59;
          v13 = 0;
          v54 = NewMdl;
        }
        *(_BYTE *)(v9 + 72) = v13;
        goto LABEL_58;
      }
      v62.QuadPart = -10000LL;
      v61 = v30;
      LODWORD(v68) = a9 & 1;
      for ( i = v68; ; i = v68 )
      {
        v46 = MmRotatePhysicalView(v24, &v61, NewMdl, MmToRegularMemoryNoCopy, a7, a8);
        v14 = v46;
        if ( !i || v46 != 1073741849 )
          break;
        v48 = WdLogNewEntry5_WdWarning(v40, v47);
        WdLogEvent5_WdWarning(v48);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v49, &EventPerformanceWarning, v50, 12);
        v51 = a8;
        v52 = a7;
        while ( MmRotatePhysicalView(v24, &v61, *(PMDL *)(v9 + 80), MmToFrameBufferNoCopy, v52, v51) < 0 )
          KeDelayExecutionThread(0, 0, &v62);
        KeDelayExecutionThread(0, 0, &v62);
      }
    }
    v44 = *(unsigned int *)(a2 + 40144);
    v34 = a9;
    LODWORD(v12) = v69;
    if ( (_DWORD)v44 != -1 )
      (*(void (__fastcall **)(_QWORD))(a2 + 40064))(*(_QWORD *)(a2 + 40112));
    goto LABEL_53;
  }
  if ( (int)v12 >= 0 )
  {
    if ( (int)v12 <= 1 )
    {
      v14 = -1073741823;
    }
    else if ( (int)v12 <= 3 )
    {
      v26 = PsGetCurrentProcess(v22, v23);
      v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27);
      v29[3] = 270LL;
      v29[4] = 1LL;
      v29[5] = v26;
      v29[6] = v9;
      v29[7] = v12;
      WdLogEvent5_WdCriticalError(v29);
    }
  }
LABEL_59:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
  if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v56, &EventProfilerExit, v57, v64);
  return (unsigned int)v14;
}
