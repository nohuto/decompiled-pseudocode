/*
 * XREFs of ?DdiSubmitCommandToHwQueue@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C00342D4
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommandToHwQueue@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C0037B80 (-ADAPTER_RENDER_DdiSubmitCommandToHwQueue@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDTOHW.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0011F90 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommandToHwQueue(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMANDTOHWQUEUE *a2,
        const GUID *a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v12; // esi
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(_QWORD, const struct _DXGKARG_SUBMITCOMMANDTOHWQUEUE *); // rax
  int v15; // edi
  _QWORD *v16; // rax
  unsigned __int8 v17; // cl
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  const GUID *v22; // r8
  int v24; // [rsp+20h] [rbp-60h] BYREF
  __int64 v25; // [rsp+28h] [rbp-58h]
  char v26; // [rsp+30h] [rbp-50h]
  _BYTE v27[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v24 = -1;
  v25 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v26 = 1;
    v24 = 5112;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5112);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 5112);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
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
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v7 = 0LL;
LABEL_15:
      v12 = 0;
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
  v12 = *(_DWORD *)(v7 + 136);
LABEL_16:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v27,
    *((struct DXGADAPTER **)this + 2));
  v13 = *((_QWORD *)this + 2);
  v14 = *(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMANDTOHWQUEUE *))(v13 + 1016);
  if ( v14 )
    v15 = v14(*(_QWORD *)(v13 + 248), a2);
  else
    v15 = -1073741822;
  if ( v27[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13);
    v16[3] = 275LL;
    v16[4] = 16LL;
    v16[5] = this;
    v16[6] = CurrentIrql;
    v17 = KeGetCurrentIrql();
    v16[7] = v17;
    WdLogEvent5_WdCriticalError(v16);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v12 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13);
    v18[3] = 275LL;
    v18[4] = 38LL;
    v19 = *(int *)(v7 + 136);
    v18[7] = 0LL;
    v18[5] = v19;
    v18[6] = v12;
    WdLogEvent5_WdCriticalError(v18);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  if ( v15 != -1073741822 && v15 != -1073741811 && v15 )
  {
    v20 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v20 + 24) = v15;
    WdLogEvent5_WdError(v20);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v24);
  return (unsigned int)v15;
}
