/*
 * XREFs of ?ADAPTER_RENDER_DdiPreemptCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C0009E40
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B7D0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B890 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B8F0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiPreemptCommand(struct DXGADAPTER **a1, const struct _DXGKARG_PREEMPTCOMMAND *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // rax
  int CurrentProcessSessionId; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v15; // rbx
  struct _KTHREAD *v16; // rbx
  __int64 v17; // rax
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rcx
  _QWORD *v26; // rax
  unsigned __int8 v27; // cl
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 PreemptionFenceId; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  int v37; // [rsp+20h] [rbp-60h] BYREF
  __int64 v38; // [rsp+28h] [rbp-58h]
  char v39; // [rsp+30h] [rbp-50h]
  _BYTE v40[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v37 = -1;
  v38 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v39 = 1;
    v37 = 5014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter);
  }
  else
  {
    v39 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v5 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v5 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v5);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1, a2);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !(unsigned int)IsThreadCrossSessionAttached(v8, v7)
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v10 = 0LL;
    }
    v38 = v10;
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 140);
      if ( !v11 )
        *(_DWORD *)(v10 + 144) = 5014;
      *(_DWORD *)(v10 + 140) = v11 + 1;
    }
  }
  DXGADAPTER::AcquireDdiSync(a1[2], 1LL);
  _InterlockedIncrement((volatile signed __int32 *)a1[2] + 1062);
  CurrentIrql = KeGetCurrentIrql();
  v15 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_29;
  v16 = KeGetCurrentThread();
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v17 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = PsGetCurrentProcessSessionId(v13, v12);
  if ( v18 && (unsigned int)PsGetThreadSessionId(v16) == v18 )
  {
    if ( (unsigned int)IsThreadCrossSessionAttached(v20, v19)
      || (v21 = PsGetThreadWin32Thread(v16)) == 0
      || !*(_QWORD *)v21 )
    {
      v15 = 0LL;
LABEL_29:
      v22 = 0;
      goto LABEL_30;
    }
    v15 = *(_QWORD *)(*(_QWORD *)v21 + 80LL);
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v15 )
    goto LABEL_29;
  v22 = *(_DWORD *)(v15 + 136);
LABEL_30:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v40, a1[2]);
  v24 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_PREEMPTCOMMAND *))a1[2] + 50))(
          *((_QWORD *)a1[2] + 31),
          a2);
  if ( v40[0] )
    KeUnstackDetachProcess(&ApcState);
  v25 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v25 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v23);
    v26[3] = 275LL;
    v26[4] = 16LL;
    v26[5] = a1;
    v26[6] = CurrentIrql;
    v27 = KeGetCurrentIrql();
    v26[7] = v27;
    WdLogEvent5_WdCriticalError(v26);
  }
  if ( v15 && *(_DWORD *)(v15 + 136) != v22 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v23);
    v28[3] = 275LL;
    v28[4] = 38LL;
    v29 = *(int *)(v15 + 136);
    v28[7] = 0LL;
    v28[5] = v29;
    v28[6] = v22;
    WdLogEvent5_WdCriticalError(v28);
  }
  _InterlockedDecrement((volatile signed __int32 *)a1[2] + 1062);
  v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v23);
  v30[3] = v24;
  v30[4] = a2->Flags.Value;
  PreemptionFenceId = a2->PreemptionFenceId;
  v30[5] = PreemptionFenceId;
  if ( (_DWORD)v24 )
  {
    v34 = WdLogNewEntry5_WdError(PreemptionFenceId, v31, v32);
    *(_QWORD *)(v34 + 24) = v24;
    WdLogEvent5_WdError(v34);
  }
  DXGADAPTER::ReleaseDdiSync(a1[2]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v35, &EventProfilerExit);
  return (unsigned int)v24;
}
