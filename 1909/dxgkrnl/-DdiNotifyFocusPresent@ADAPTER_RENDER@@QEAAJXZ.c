/*
 * XREFs of ?DdiNotifyFocusPresent@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0037C90
 * Callers:
 *     ?ADAPTER_RENDER_DdiNotifyFocusPresent@@YAJPEAVADAPTER_RENDER@@@Z @ 0x1C003DF80 (-ADAPTER_RENDER_DdiNotifyFocusPresent@@YAJPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BA80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiNotifyFocusPresent(ADAPTER_RENDER *this, __int64 a2, const GUID *a3)
{
  ADAPTER_RENDER *v3; // r15
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v8; // eax
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rbx
  struct _KTHREAD *v11; // rbx
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // rax
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(_QWORD); // rax
  int v20; // edi
  __int64 v21; // rcx
  _QWORD *v22; // rax
  unsigned __int8 v23; // cl
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  const GUID *v28; // r8
  int v30; // [rsp+20h] [rbp-60h] BYREF
  ADAPTER_RENDER *v31; // [rsp+28h] [rbp-58h]
  char v32; // [rsp+30h] [rbp-50h]
  _BYTE v33[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v30 = -1;
  v3 = this;
  v31 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v32 = 1;
    v30 = 5116;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5116);
  }
  else
  {
    v32 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v5 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v5 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v5);
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
    v31 = this;
    if ( this )
    {
      v8 = *((_DWORD *)this + 35);
      if ( !v8 )
        *((_DWORD *)this + 36) = 5116;
      *((_DWORD *)this + 35) = v8 + 1;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v3 + 2) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_29;
  v11 = KeGetCurrentThread();
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v12 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = PsGetCurrentProcessSessionId(this, a2);
  if ( v13 && (unsigned int)PsGetThreadSessionId(v11) == v13 )
  {
    if ( IsThreadCrossSessionAttached() || (v14 = PsGetThreadWin32Thread(v11)) == 0 || !*(_QWORD *)v14 )
    {
      v10 = 0LL;
LABEL_29:
      v15 = 0;
      goto LABEL_30;
    }
    v10 = *(_QWORD *)(*(_QWORD *)v14 + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
    goto LABEL_29;
  v15 = *(_DWORD *)(v10 + 136);
LABEL_30:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v33,
    *((struct DXGADAPTER **)v3 + 2));
  v18 = *((_QWORD *)v3 + 2);
  v19 = *(__int64 (__fastcall **)(_QWORD))(v18 + 1168);
  if ( v19 )
    v20 = v19(*(_QWORD *)(v18 + 248));
  else
    v20 = -1073741822;
  if ( v33[0] )
    KeUnstackDetachProcess(&ApcState);
  v21 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v21 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v16);
    v22[3] = 275LL;
    v22[4] = 16LL;
    v22[5] = v3;
    v22[6] = CurrentIrql;
    v23 = KeGetCurrentIrql();
    v22[7] = v23;
    WdLogEvent5_WdCriticalError(v22);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v15 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v16);
    v24[3] = 275LL;
    v24[4] = 38LL;
    v25 = *(int *)(v10 + 136);
    v24[7] = 0LL;
    v24[5] = v25;
    v24[6] = v15;
    WdLogEvent5_WdCriticalError(v24);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v3 + 2) + 4248LL));
  if ( v20 != -1073741822 && v20 != -1073741801 && v20 )
  {
    v26 = WdLogNewEntry5_WdError(v21, v16, v17);
    *(_QWORD *)(v26 + 24) = v20;
    WdLogEvent5_WdError(v26);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v16);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, v30);
  return (unsigned int)v20;
}
