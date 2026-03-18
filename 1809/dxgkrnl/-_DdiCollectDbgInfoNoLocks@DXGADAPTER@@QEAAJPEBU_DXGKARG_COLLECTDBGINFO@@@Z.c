/*
 * XREFs of ?_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEBU_DXGKARG_COLLECTDBGINFO@@@Z @ 0x1C01D1EB0
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C020A1C0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0011F90 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::_DdiCollectDbgInfoNoLocks(
        DXGADAPTER *this,
        const struct _DXGKARG_COLLECTDBGINFO *a2,
        const GUID *a3)
{
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
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int8 v18; // cl
  _QWORD *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  const GUID *v25; // r8
  int v26; // [rsp+20h] [rbp-60h] BYREF
  __int64 v27; // [rsp+28h] [rbp-58h]
  char v28; // [rsp+30h] [rbp-50h]
  _BYTE v29[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  if ( !*((_QWORD *)this + 58) )
    return 3221225474LL;
  v26 = -1;
  v27 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v28 = 1;
    v26 = 5023;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5023);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 5023);
  _InterlockedIncrement((volatile signed __int32 *)this + 1064);
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_17;
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
      goto LABEL_17;
    }
    v8 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v13 = *(_DWORD *)(v8 + 136);
    goto LABEL_18;
  }
LABEL_17:
  v13 = 0;
LABEL_18:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v29, this);
  v15 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_COLLECTDBGINFO *))this + 58))(*((_QWORD *)this + 31), a2);
  if ( v29[0] )
    KeUnstackDetachProcess(&ApcState);
  v16 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v16 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16);
    v17[3] = 275LL;
    v17[4] = 16LL;
    v17[5] = this;
    v17[6] = CurrentIrql;
    v18 = KeGetCurrentIrql();
    v17[7] = v18;
    WdLogEvent5_WdCriticalError(v17);
  }
  if ( v8 && *(_DWORD *)(v8 + 136) != v13 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16);
    v19[3] = 275LL;
    v19[4] = 38LL;
    v20 = *(int *)(v8 + 136);
    v19[7] = 0LL;
    v19[5] = v20;
    v19[6] = v13;
    WdLogEvent5_WdCriticalError(v19);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1064);
  v21 = (_QWORD *)WdLogNewEntry5_WdEvent(v16, v14);
  v21[3] = v15;
  v21[4] = *((_QWORD *)this + 31);
  v21[5] = a2->Reason;
  v21[6] = a2->pBuffer;
  v21[7] = a2->BufferSize;
  WdLogEvent5_WdEvent(v21);
  if ( (_DWORD)v15 != -1073741823 && (_DWORD)v15 != -1073741801 && (_DWORD)v15 )
  {
    v23 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v23 + 24) = v15;
    WdLogEvent5_WdError(v23);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v24, &EventProfilerExit, v25, v26);
  }
  return (unsigned int)v15;
}
