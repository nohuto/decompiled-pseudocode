/*
 * XREFs of ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C00373F8
 * Callers:
 *     ?PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ @ 0x1C003706C (-PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ADAPTER_RENDER_DdiCalibrateGpuClock@@YAJPEAVADAPTER_RENDER@@IIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C003DD00 (-ADAPTER_RENDER_DdiCalibrateGpuClock@@YAJPEAVADAPTER_RENDER@@IIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     DxgkQueryClockCalibration @ 0x1C0204070 (DxgkQueryClockCalibration.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B890 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCalibrateGpuClock(
        ADAPTER_RENDER *this,
        __int64 a2,
        const GUID *a3,
        struct _DXGK_GPUCLOCKDATA *a4)
{
  ADAPTER_RENDER *v5; // r15
  __int64 v6; // r13
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v8; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v11; // eax
  unsigned __int8 CurrentIrql; // r14
  __int64 v13; // rbx
  struct _KTHREAD *v14; // rbx
  __int64 v15; // rax
  int v16; // edi
  __int64 v17; // rax
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rcx
  _QWORD *v22; // rax
  unsigned __int8 v23; // cl
  _QWORD *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  const GUID *v33; // r8
  unsigned int v35; // [rsp+30h] [rbp-49h]
  int v36; // [rsp+38h] [rbp-41h] BYREF
  ADAPTER_RENDER *v37; // [rsp+40h] [rbp-39h]
  char v38; // [rsp+48h] [rbp-31h]
  _BYTE v39[8]; // [rsp+50h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-21h] BYREF

  v36 = -1;
  v37 = 0LL;
  v5 = this;
  v35 = (unsigned int)a3;
  v6 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    v36 = 5056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5056);
  }
  else
  {
    v38 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v8 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v8 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v8);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      this = *(ADAPTER_RENDER **)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      this = 0LL;
    }
    v37 = this;
    if ( this )
    {
      v11 = *((_DWORD *)this + 35);
      if ( !v11 )
        *((_DWORD *)this + 36) = 5056;
      *((_DWORD *)this + 35) = v11 + 1;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v5 + 2) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v13 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_29;
  v14 = KeGetCurrentThread();
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v15 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = PsGetCurrentProcessSessionId(this, a2);
  if ( v16 && (unsigned int)PsGetThreadSessionId(v14) == v16 )
  {
    if ( IsThreadCrossSessionAttached() || (v17 = PsGetThreadWin32Thread(v14)) == 0 || !*(_QWORD *)v17 )
    {
      v13 = 0LL;
LABEL_29:
      v18 = 0;
      goto LABEL_30;
    }
    v13 = *(_QWORD *)(*(_QWORD *)v17 + 80LL);
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
    goto LABEL_29;
  v18 = *(_DWORD *)(v13 + 136);
LABEL_30:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v39,
    *((struct DXGADAPTER **)v5 + 2));
  v20 = (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _DXGK_GPUCLOCKDATA *))(*((_QWORD *)v5 + 2) + 776LL))(
          *(_QWORD *)(*((_QWORD *)v5 + 2) + 248LL),
          (unsigned int)v6,
          v35,
          a4);
  if ( v39[0] )
    KeUnstackDetachProcess(&ApcState);
  v21 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v21 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v19);
    v22[3] = 275LL;
    v22[4] = 16LL;
    v22[5] = v5;
    v22[6] = CurrentIrql;
    v23 = KeGetCurrentIrql();
    v22[7] = v23;
    WdLogEvent5_WdCriticalError(v22);
  }
  if ( v13 && *(_DWORD *)(v13 + 136) != v18 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v19);
    v24[3] = 275LL;
    v24[4] = 38LL;
    v25 = *(int *)(v13 + 136);
    v24[7] = 0LL;
    v24[5] = v25;
    v24[6] = v18;
    WdLogEvent5_WdCriticalError(v24);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v5 + 2) + 4248LL));
  v26 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v26[5] = v35;
  v26[3] = v20;
  v26[4] = v6;
  v26[6] = a4->GpuFrequency;
  WdLogEvent5_WdEvent(v26);
  v27 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v27 + 24) = a4->GpuClockCounter;
  *(_QWORD *)(v27 + 32) = a4->CpuClockCounter;
  WdLogEvent5_WdEvent(v27);
  if ( (_DWORD)v20 != -1073741811 && (_DWORD)v20 )
  {
    v31 = WdLogNewEntry5_WdError(v29, v28, v30);
    *(_QWORD *)(v31 + 24) = v20;
    WdLogEvent5_WdError(v31);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v28);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v32, &EventProfilerExit, v33, v36);
  return (unsigned int)v20;
}
