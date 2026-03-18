/*
 * XREFs of ?DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C0114974
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0115D80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0011F90 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0012650 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00126D0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0012DE4 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiRender(ADAPTER_RENDER *this, void *a2, const GUID *a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rbx
  __int64 *ThreadProperty; // rax
  __int64 *v8; // rdi
  __int64 v9; // rcx
  int v10; // r13d
  __int64 v11; // rsi
  __int64 v12; // rax
  const GUID *v13; // r8
  int v14; // r9d
  struct DXGADAPTER *v15; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v20; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v22; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  _QWORD *v30; // rax
  unsigned __int8 v31; // cl
  _QWORD *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  const GUID *v38; // r8
  int v42; // [rsp+30h] [rbp-39h] BYREF
  __int64 v43; // [rsp+38h] [rbp-31h]
  char v44; // [rsp+40h] [rbp-29h]
  char v45[8]; // [rsp+48h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-19h] BYREF

  v42 = -1;
  v43 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v44 = 1;
    v42 = 5030;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5030);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 5030);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v6 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v8 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v6 = *v8;
      }
    }
  }
  v9 = v6 + 120;
  v10 = 0;
  v11 = (v6 + 120) & -(__int64)(v6 != 0);
  if ( v11 && *(struct _KTHREAD **)(((v6 + 120) & -(__int64)(v6 != 0)) + 8) == KeGetCurrentThread() )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v12 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( v6 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((v6 + 120) & -(__int64)(v6 != 0), 0LL) )
    {
      if ( bTracingEnabled )
      {
        v14 = *(_DWORD *)(((v6 + 120) & -(__int64)(v6 != 0)) + 0x10);
        if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v9, &EventBlockThread, v13, v14);
      }
      ExAcquirePushLockExclusiveEx((v6 + 120) & -(__int64)(v6 != 0), 0LL);
    }
    v10 = 2;
    *(_QWORD *)(((v6 + 120) & -(__int64)(v6 != 0)) + 8) = KeGetCurrentThread();
  }
  v15 = (struct DXGADAPTER *)*((_QWORD *)this + 2);
  Global = DXGGLOBAL::GetGlobal(v9);
  if ( *((_BYTE *)Global + 1321)
    && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1316), v15) )
  {
    LODWORD(v17) = -1073741637;
    goto LABEL_50;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  CurrentIrql = KeGetCurrentIrql();
  v20 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_33;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v22 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v22 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v22);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v20 = 0LL;
      goto LABEL_33;
    }
    v20 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v20 = 0LL;
  }
  if ( v20 )
  {
    v25 = *(_DWORD *)(v20 + 136);
    goto LABEL_34;
  }
LABEL_33:
  v25 = 0;
LABEL_34:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v45,
    *((struct DXGADAPTER **)this + 2));
  v17 = (*(int (__fastcall **)(void *, const GUID *))(*((_QWORD *)this + 2) + 608LL))(a2, a3);
  if ( v45[0] )
    KeUnstackDetachProcess(&ApcState);
  v29 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v29 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29);
    v30[3] = 275LL;
    v30[4] = 16LL;
    v30[5] = this;
    v30[6] = CurrentIrql;
    v31 = KeGetCurrentIrql();
    v30[7] = v31;
    WdLogEvent5_WdCriticalError(v30);
  }
  if ( v20 && *(_DWORD *)(v20 + 136) != v25 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29);
    v32[3] = 275LL;
    v32[4] = 38LL;
    v33 = *(int *)(v20 + 136);
    v32[7] = 0LL;
    v32[5] = v33;
    v32[6] = v25;
    WdLogEvent5_WdCriticalError(v32);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v26, v27, v28);
  v34[3] = v17;
  v34[4] = a2;
  v34[5] = *(_QWORD *)&a3[1].Data1;
  v34[6] = *(unsigned int *)a3[1].Data4;
  v35 = *(_QWORD *)&a3[3].Data1;
  v34[7] = v35;
  if ( (unsigned int)(v17 + 1073741816) > 0x15 || (v35 = 2129953LL, !_bittest((const int *)&v35, v17 + 1073741816)) )
  {
    if ( (_DWORD)v17 != -1073741674
      && (_DWORD)v17 != -1073741592
      && (_DWORD)v17 != -1071775743
      && (_DWORD)v17 != -1071775232
      && (_DWORD)v17 )
    {
      v36 = WdLogNewEntry5_WdError(v35);
      *(_QWORD *)(v36 + 24) = v17;
      WdLogEvent5_WdError(v36);
    }
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
LABEL_50:
  if ( v10 == 2 )
  {
    *(_QWORD *)(v11 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v37, &EventProfilerExit, v38, v42);
  return (unsigned int)v17;
}
