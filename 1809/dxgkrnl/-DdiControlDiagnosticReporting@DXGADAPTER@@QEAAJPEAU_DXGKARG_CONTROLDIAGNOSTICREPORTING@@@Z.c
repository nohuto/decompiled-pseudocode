/*
 * XREFs of ?DdiControlDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLDIAGNOSTICREPORTING@@@Z @ 0x1C01C97C0
 * Callers:
 *     ?UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z @ 0x1C01C0140 (-UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000F778 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0011F90 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0012650 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00126D0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlDiagnosticReporting(
        DXGADAPTER *this,
        struct _DXGKARG_CONTROLDIAGNOSTICREPORTING *a2,
        const GUID *a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned __int8 v20; // cl
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 Value; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  const GUID *v27; // r8
  int v29; // [rsp+20h] [rbp-39h] BYREF
  __int64 v30; // [rsp+28h] [rbp-31h]
  char v31; // [rsp+30h] [rbp-29h]
  _BYTE v32[24]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v33[8]; // [rsp+50h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-1h] BYREF

  v29 = -1;
  v30 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 5129;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5129);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 5129);
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v32, Current);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 1064);
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_15;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v10 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v10);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v8 = 0LL;
LABEL_15:
      v13 = 0;
      goto LABEL_16;
    }
    v8 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_15;
  v13 = *(_DWORD *)(v8 + 136);
LABEL_16:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v33, this);
  v15 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLDIAGNOSTICREPORTING *))this + 156))(
          *((_QWORD *)this + 31),
          a2);
  if ( v33[0] )
    KeUnstackDetachProcess(&ApcState);
  v18 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v18 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18);
    v19[3] = 275LL;
    v19[4] = 16LL;
    v19[5] = this;
    v19[6] = CurrentIrql;
    v20 = KeGetCurrentIrql();
    v19[7] = v20;
    WdLogEvent5_WdCriticalError(v19);
  }
  if ( v8 && *(_DWORD *)(v8 + 136) != v13 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18);
    v21[3] = 275LL;
    v21[4] = 38LL;
    v22 = *(int *)(v8 + 136);
    v21[7] = 0LL;
    v21[5] = v22;
    v21[6] = v13;
    WdLogEvent5_WdCriticalError(v21);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1064);
  v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v14, v16, v17);
  v23[3] = v15;
  v23[4] = *((_QWORD *)this + 31);
  v23[5] = a2->DiagnosticCategory.Value;
  Value = a2->RequestedDiagnostics.Notifications.Value;
  v23[6] = Value;
  if ( (_DWORD)v15 != -1073741801 && (_DWORD)v15 != -1073741637 && (_DWORD)v15 )
  {
    v25 = WdLogNewEntry5_WdError(Value);
    *(_QWORD *)(v25 + 24) = v15;
    WdLogEvent5_WdError(v25);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v29);
  return (unsigned int)v15;
}
