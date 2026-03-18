/*
 * XREFs of ?DdiPreemptCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C000ECD4
 * Callers:
 *     ?ADAPTER_RENDER_DdiPreemptCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C000ECC0 (-ADAPTER_RENDER_DdiPreemptCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PREEMPTCOMMAND@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0011F90 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0012650 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00126D0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPreemptCommand(
        struct DXGADAPTER **this,
        const struct _DXGKARG_PREEMPTCOMMAND *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  int CurrentProcessSessionId; // edi
  __int64 v11; // rcx
  __int64 ThreadWin32Thread; // rax
  int v13; // edi
  __int64 v14; // r14
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 v17; // cl
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 PreemptionFenceId; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  unsigned int v30; // [rsp+20h] [rbp-60h] BYREF
  __int64 v31; // [rsp+28h] [rbp-58h]
  char v32; // [rsp+30h] [rbp-50h]
  _BYTE v33[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v30 = -1;
  v31 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v32 = 1;
    v30 = 5014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(this, &EventProfilerEnter, a3, 5014LL);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry(&v30, 5014LL);
  DXGADAPTER::AcquireDdiSync(this[2], 1LL);
  _InterlockedIncrement((volatile signed __int32 *)this[2] + 1064);
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_15;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v9 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v9);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( (unsigned int)IsThreadCrossSessionAttached(v11)
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v7 = 0LL;
LABEL_15:
      v13 = 0;
      goto LABEL_16;
    }
    v7 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
    goto LABEL_15;
  v13 = *(_DWORD *)(v7 + 136);
LABEL_16:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v33, this[2]);
  v14 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_PREEMPTCOMMAND *))this[2] + 50))(
          *((_QWORD *)this[2] + 31),
          a2);
  if ( v33[0] )
    KeUnstackDetachProcess(&ApcState);
  v15 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v15 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15);
    v16[3] = 275LL;
    v16[4] = 16LL;
    v16[5] = this;
    v16[6] = CurrentIrql;
    v17 = KeGetCurrentIrql();
    v16[7] = v17;
    WdLogEvent5_WdCriticalError(v16);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v13 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15);
    v18[3] = 275LL;
    v18[4] = 38LL;
    v19 = *(int *)(v7 + 136);
    v18[7] = 0LL;
    v18[5] = v19;
    v18[6] = v13;
    WdLogEvent5_WdCriticalError(v18);
  }
  _InterlockedDecrement((volatile signed __int32 *)this[2] + 1064);
  v20 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v20[3] = v14;
  v20[4] = a2->Flags.Value;
  PreemptionFenceId = a2->PreemptionFenceId;
  v20[5] = PreemptionFenceId;
  if ( (_DWORD)v14 )
  {
    v22 = WdLogNewEntry5_WdError(PreemptionFenceId);
    *(_QWORD *)(v22 + 24) = v14;
    WdLogEvent5_WdError(v22);
  }
  DXGADAPTER::ReleaseDdiSync(this[2]);
  v25 = v31;
  if ( v31 )
  {
    v26 = *(_DWORD *)(v31 + 140);
    if ( !v26 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v27 + 24) = 232LL;
      WdLogEvent5_WdAssertion(v27);
      v26 = *(_DWORD *)(v25 + 140);
    }
    v28 = v26 - 1;
    *(_DWORD *)(v25 + 140) = v28;
    if ( !v28 )
      *(_DWORD *)(v25 + 144) = -1;
  }
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v30);
  return (unsigned int)v14;
}
