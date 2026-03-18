/*
 * XREFs of ?DdiRestartFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01CDF10
 * Callers:
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01C7174 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0011F90 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0012650 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00126D0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiRestartFromTimeout(ADAPTER_RENDER *this, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v8; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int8 v16; // cl
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  const GUID *v23; // r8
  int v25; // [rsp+20h] [rbp-60h] BYREF
  __int64 v26; // [rsp+28h] [rbp-58h]
  char v27; // [rsp+30h] [rbp-50h]
  _BYTE v28[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v27 = 1;
    v25 = 5021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5021);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 5021);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_15;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v8 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v8);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v6 = 0LL;
LABEL_15:
      v11 = 0;
      goto LABEL_16;
    }
    v6 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
    goto LABEL_15;
  v11 = *(_DWORD *)(v6 + 136);
LABEL_16:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v28,
    *((struct DXGADAPTER **)this + 2));
  v13 = (*(int (__fastcall **)(_QWORD))(*((_QWORD *)this + 2) + 448LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 248LL));
  if ( v28[0] )
    KeUnstackDetachProcess(&ApcState);
  v14 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v14 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14);
    v15[3] = 275LL;
    v15[4] = 16LL;
    v15[5] = this;
    v15[6] = CurrentIrql;
    v16 = KeGetCurrentIrql();
    v15[7] = v16;
    WdLogEvent5_WdCriticalError(v15);
  }
  if ( v6 && *(_DWORD *)(v6 + 136) != v11 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14);
    v17[3] = 275LL;
    v17[4] = 38LL;
    v18 = *(int *)(v6 + 136);
    v17[7] = 0LL;
    v17[5] = v18;
    v17[6] = v11;
    WdLogEvent5_WdCriticalError(v17);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  v19 = WdLogNewEntry5_WdEvent(v14, v12);
  *(_QWORD *)(v19 + 24) = v13;
  *(_QWORD *)(v19 + 32) = *(_QWORD *)(*((_QWORD *)this + 2) + 248LL);
  WdLogEvent5_WdEvent(v19);
  if ( (_DWORD)v13 )
  {
    v21 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v21 + 24) = v13;
    WdLogEvent5_WdError(v21);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v25);
  return (unsigned int)v13;
}
