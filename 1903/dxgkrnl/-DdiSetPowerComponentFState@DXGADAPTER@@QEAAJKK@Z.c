/*
 * XREFs of ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x1C00399C4
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0033CA0 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x1C0036FD0 (-DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z.c)
 *     ?DXGADAPTER_DdiSetPowerComponentFState@@YAJPEAVDXGADAPTER@@KK@Z @ 0x1C003E040 (-DXGADAPTER_DdiSetPowerComponentFState@@YAJPEAVDXGADAPTER@@KK@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B890 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiSetPowerComponentFState(DXGADAPTER *this, __int64 a2, const GUID *a3)
{
  unsigned int v3; // r13d
  unsigned int v4; // r12d
  DXGADAPTER *v5; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v10; // eax
  unsigned __int8 CurrentIrql; // r15
  __int64 v12; // rbx
  struct _KTHREAD *v13; // rbx
  __int64 v14; // rax
  int v15; // edi
  __int64 v16; // rax
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rax
  unsigned __int8 v23; // cl
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  const GUID *v27; // r8
  int v29; // [rsp+20h] [rbp-60h] BYREF
  DXGADAPTER *v30; // [rsp+28h] [rbp-58h]
  char v31; // [rsp+30h] [rbp-50h]
  _BYTE v32[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v29 = -1;
  v3 = (unsigned int)a3;
  v30 = 0LL;
  v4 = a2;
  v5 = this;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 5124;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5124);
  }
  else
  {
    v31 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v7 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v7 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v7);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      this = *(DXGADAPTER **)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      this = 0LL;
    }
    v30 = this;
    if ( this )
    {
      v10 = *((_DWORD *)this + 35);
      if ( !v10 )
        *((_DWORD *)this + 36) = 5124;
      *((_DWORD *)this + 35) = v10 + 1;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)v5 + 1062);
  CurrentIrql = KeGetCurrentIrql();
  v12 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_29;
  v13 = KeGetCurrentThread();
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v14 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = PsGetCurrentProcessSessionId(this, a2);
  if ( v15 && (unsigned int)PsGetThreadSessionId(v13) == v15 )
  {
    if ( IsThreadCrossSessionAttached() || (v16 = PsGetThreadWin32Thread(v13)) == 0 || !*(_QWORD *)v16 )
    {
      v12 = 0LL;
LABEL_29:
      v17 = 0;
      goto LABEL_30;
    }
    v12 = *(_QWORD *)(*(_QWORD *)v16 + 80LL);
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
    goto LABEL_29;
  v17 = *(_DWORD *)(v12 + 136);
LABEL_30:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v32, v5);
  v19 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD))v5 + 88))(*((_QWORD *)v5 + 31), v4, v3);
  if ( v32[0] )
    KeUnstackDetachProcess(&ApcState);
  v21 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v21 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v18);
    v22[3] = 275LL;
    v22[4] = 16LL;
    v22[5] = v5;
    v22[6] = CurrentIrql;
    v23 = KeGetCurrentIrql();
    v22[7] = v23;
    WdLogEvent5_WdCriticalError(v22);
  }
  if ( v12 && *(_DWORD *)(v12 + 136) != v17 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v18);
    v24[3] = 275LL;
    v24[4] = 38LL;
    v24[5] = *(int *)(v12 + 136);
    v24[6] = v17;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  _InterlockedDecrement((volatile signed __int32 *)v5 + 1062);
  if ( (_DWORD)v19 != -1071775466 && (_DWORD)v19 )
  {
    v25 = WdLogNewEntry5_WdError(v21, v18, v20);
    *(_QWORD *)(v25 + 24) = v19;
    WdLogEvent5_WdError(v25);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v18);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v29);
  return (unsigned int)v19;
}
