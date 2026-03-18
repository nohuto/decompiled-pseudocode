/*
 * XREFs of ?DdiQueryDiagnosticTypesSupport@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT@@@Z @ 0x1C01FB4BC
 * Callers:
 *     ?UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z @ 0x1C01EF704 (-UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004614 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B7D0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B890 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B8F0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiQueryDiagnosticTypesSupport(
        DXGADAPTER *this,
        struct _DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT *a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v13; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned __int8 v21; // cl
  _QWORD *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 Value; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  const GUID *v31; // r8
  int v33; // [rsp+20h] [rbp-39h] BYREF
  __int64 v34; // [rsp+28h] [rbp-31h]
  char v35; // [rsp+30h] [rbp-29h]
  _BYTE v36[24]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v37[8]; // [rsp+50h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-1h] BYREF

  v33 = -1;
  v34 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v35 = 1;
    v33 = 5128;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5128);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 5128LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v36, Current);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 1062);
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_15;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v13 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v13);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v11 = 0LL;
LABEL_15:
      v16 = 0;
      goto LABEL_16;
    }
    v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
    goto LABEL_15;
  v16 = *(_DWORD *)(v11 + 136);
LABEL_16:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v37, this);
  v18 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT *))this + 153))(
          *((_QWORD *)this + 31),
          a2);
  if ( v37[0] )
    KeUnstackDetachProcess(&ApcState);
  v19 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v19 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v17);
    v20[3] = 275LL;
    v20[4] = 16LL;
    v20[5] = this;
    v20[6] = CurrentIrql;
    v21 = KeGetCurrentIrql();
    v20[7] = v21;
    WdLogEvent5_WdCriticalError(v20);
  }
  if ( v11 && *(_DWORD *)(v11 + 136) != v16 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v17);
    v22[3] = 275LL;
    v22[4] = 38LL;
    v23 = *(int *)(v11 + 136);
    v22[7] = 0LL;
    v22[5] = v23;
    v22[6] = v16;
    WdLogEvent5_WdCriticalError(v22);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1062);
  v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v17);
  v24[3] = v18;
  v24[4] = *((_QWORD *)this + 31);
  v24[5] = a2->DiagnosticCategory.Value;
  v24[6] = a2->NoninvasiveTypes.Notifications.Value;
  Value = a2->InvasiveTypes.Notifications.Value;
  v24[7] = Value;
  if ( (_DWORD)v18 != -1073741801 && (_DWORD)v18 != -1073741637 && (_DWORD)v18 )
  {
    v28 = WdLogNewEntry5_WdError(Value, v25, v26);
    *(_QWORD *)(v28 + 24) = v18;
    WdLogEvent5_WdError(v28);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v29);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v33);
  return (unsigned int)v18;
}
