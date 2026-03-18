/*
 * XREFs of ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C0031B7C
 * Callers:
 *     ?PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ @ 0x1C003181C (-PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ADAPTER_RENDER_DdiCalibrateGpuClock@@YAJPEAVADAPTER_RENDER@@IIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C00378A0 (-ADAPTER_RENDER_DdiCalibrateGpuClock@@YAJPEAVADAPTER_RENDER@@IIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     DxgkQueryClockCalibration @ 0x1C01D6200 (DxgkQueryClockCalibration.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0011F90 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCalibrateGpuClock(
        ADAPTER_RENDER *this,
        unsigned int a2,
        const GUID *a3,
        struct _DXGK_GPUCLOCKDATA *a4)
{
  __int64 v6; // r13
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v11; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v14; // esi
  __int64 v15; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int8 v18; // cl
  _QWORD *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  const GUID *v26; // r8
  unsigned int v28; // [rsp+30h] [rbp-49h]
  int v29; // [rsp+38h] [rbp-41h] BYREF
  __int64 v30; // [rsp+40h] [rbp-39h]
  char v31; // [rsp+48h] [rbp-31h]
  _BYTE v32[8]; // [rsp+50h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-21h] BYREF

  v29 = -1;
  v30 = 0LL;
  v28 = (unsigned int)a3;
  v6 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 5056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5056);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 5056);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_15;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v11 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v11);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v9 = 0LL;
LABEL_15:
      v14 = 0;
      goto LABEL_16;
    }
    v9 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
    goto LABEL_15;
  v14 = *(_DWORD *)(v9 + 136);
LABEL_16:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v32,
    *((struct DXGADAPTER **)this + 2));
  v15 = (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _DXGK_GPUCLOCKDATA *))(*((_QWORD *)this + 2) + 792LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
          (unsigned int)v6,
          v28,
          a4);
  if ( v32[0] )
    KeUnstackDetachProcess(&ApcState);
  v16 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v16 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16);
    v17[3] = 275LL;
    v17[4] = 16LL;
    v17[5] = this;
    v17[6] = CurrentIrql;
    v18 = KeGetCurrentIrql();
    v17[7] = v18;
    WdLogEvent5_WdCriticalError(v17);
  }
  if ( v9 && *(_DWORD *)(v9 + 136) != v14 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16);
    v19[3] = 275LL;
    v19[4] = 38LL;
    v20 = *(int *)(v9 + 136);
    v19[7] = 0LL;
    v19[5] = v20;
    v19[6] = v14;
    WdLogEvent5_WdCriticalError(v19);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  v21 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v21[5] = v28;
  v21[3] = v15;
  v21[4] = v6;
  v21[6] = a4->GpuFrequency;
  WdLogEvent5_WdEvent(v21);
  v22 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v22 + 24) = a4->GpuClockCounter;
  *(_QWORD *)(v22 + 32) = a4->CpuClockCounter;
  WdLogEvent5_WdEvent(v22);
  if ( (_DWORD)v15 != -1073741811 && (_DWORD)v15 )
  {
    v24 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v24 + 24) = v15;
    WdLogEvent5_WdError(v24);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v29);
  return (unsigned int)v15;
}
