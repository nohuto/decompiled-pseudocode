/*
 * XREFs of ?ADAPTER_RENDER_DdiPreemptCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C000A070
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B9C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BA80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000BAE0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiPreemptCommand(
        struct DXGADAPTER **a1,
        const struct _DXGKARG_PREEMPTCOMMAND *a2,
        __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  int CurrentProcessSessionId; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v16; // rbx
  struct _KTHREAD *v17; // rbx
  __int64 v18; // rax
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rcx
  _QWORD *v27; // rax
  unsigned __int8 v28; // cl
  _QWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 PreemptionFenceId; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v39; // [rsp+20h] [rbp-60h] BYREF
  __int64 v40; // [rsp+28h] [rbp-58h]
  char v41; // [rsp+30h] [rbp-50h]
  _BYTE v42[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v39 = -1;
  v40 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v41 = 1;
    v39 = 5014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 5014LL);
  }
  else
  {
    v41 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v6 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v6);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1, a2);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !(unsigned int)IsThreadCrossSessionAttached(v9, v8)
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v11 = 0LL;
    }
    v40 = v11;
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 140);
      if ( !v12 )
        *(_DWORD *)(v11 + 144) = 5014;
      *(_DWORD *)(v11 + 140) = v12 + 1;
    }
  }
  DXGADAPTER::AcquireDdiSync(a1[2], 1LL);
  _InterlockedIncrement((volatile signed __int32 *)a1[2] + 1062);
  CurrentIrql = KeGetCurrentIrql();
  v16 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_29;
  v17 = KeGetCurrentThread();
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v18 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = PsGetCurrentProcessSessionId(v14, v13);
  if ( v19 && (unsigned int)PsGetThreadSessionId(v17) == v19 )
  {
    if ( (unsigned int)IsThreadCrossSessionAttached(v21, v20)
      || (v22 = PsGetThreadWin32Thread(v17)) == 0
      || !*(_QWORD *)v22 )
    {
      v16 = 0LL;
LABEL_29:
      v23 = 0;
      goto LABEL_30;
    }
    v16 = *(_QWORD *)(*(_QWORD *)v22 + 80LL);
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v16 )
    goto LABEL_29;
  v23 = *(_DWORD *)(v16 + 136);
LABEL_30:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v42, a1[2]);
  v25 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_PREEMPTCOMMAND *))a1[2] + 50))(
          *((_QWORD *)a1[2] + 31),
          a2);
  if ( v42[0] )
    KeUnstackDetachProcess(&ApcState);
  v26 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v26 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v24);
    v27[3] = 275LL;
    v27[4] = 16LL;
    v27[5] = a1;
    v27[6] = CurrentIrql;
    v28 = KeGetCurrentIrql();
    v27[7] = v28;
    WdLogEvent5_WdCriticalError(v27);
  }
  if ( v16 && *(_DWORD *)(v16 + 136) != v23 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v24);
    v29[3] = 275LL;
    v29[4] = 38LL;
    v30 = *(int *)(v16 + 136);
    v29[7] = 0LL;
    v29[5] = v30;
    v29[6] = v23;
    WdLogEvent5_WdCriticalError(v29);
  }
  _InterlockedDecrement((volatile signed __int32 *)a1[2] + 1062);
  v31 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v31[3] = v25;
  v31[4] = a2->Flags.Value;
  PreemptionFenceId = a2->PreemptionFenceId;
  v31[5] = PreemptionFenceId;
  if ( (_DWORD)v25 )
  {
    v35 = WdLogNewEntry5_WdError(PreemptionFenceId, v32, v33);
    *(_QWORD *)(v35 + 24) = v25;
    WdLogEvent5_WdError(v35);
  }
  DXGADAPTER::ReleaseDdiSync(a1[2]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v36, &EventProfilerExit, v37, v39);
  return (unsigned int)v25;
}
