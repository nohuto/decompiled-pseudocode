/*
 * XREFs of ?DdiSubmitCommandToHwQueue@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C003A7A8
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommandToHwQueue@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C003DFE0 (-ADAPTER_RENDER_DdiSubmitCommandToHwQueue@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDTOHW.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B890 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommandToHwQueue(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMANDTOHWQUEUE *a2,
        const GUID *a3)
{
  ADAPTER_RENDER *v4; // r15
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v9; // eax
  unsigned __int8 CurrentIrql; // r14
  __int64 v11; // rbx
  struct _KTHREAD *v12; // rbx
  __int64 v13; // rax
  int v14; // edi
  __int64 v15; // rax
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(_QWORD, const struct _DXGKARG_SUBMITCOMMANDTOHWQUEUE *); // rax
  int v21; // edi
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
  v31 = 0LL;
  v4 = this;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v32 = 1;
    v30 = 5112;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5112);
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
      v6 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v6 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v6);
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
      v9 = *((_DWORD *)this + 35);
      if ( !v9 )
        *((_DWORD *)this + 36) = 5112;
      *((_DWORD *)this + 35) = v9 + 1;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v4 + 2) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_29;
  v12 = KeGetCurrentThread();
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v13 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = PsGetCurrentProcessSessionId(this, a2);
  if ( v14 && (unsigned int)PsGetThreadSessionId(v12) == v14 )
  {
    if ( IsThreadCrossSessionAttached() || (v15 = PsGetThreadWin32Thread(v12)) == 0 || !*(_QWORD *)v15 )
    {
      v11 = 0LL;
LABEL_29:
      v16 = 0;
      goto LABEL_30;
    }
    v11 = *(_QWORD *)(*(_QWORD *)v15 + 80LL);
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
    goto LABEL_29;
  v16 = *(_DWORD *)(v11 + 136);
LABEL_30:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v33,
    *((struct DXGADAPTER **)v4 + 2));
  v19 = *((_QWORD *)v4 + 2);
  v20 = *(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMANDTOHWQUEUE *))(v19 + 1000);
  if ( v20 )
    v21 = v20(*(_QWORD *)(v19 + 248), a2);
  else
    v21 = -1073741822;
  if ( v33[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v17);
    v22[3] = 275LL;
    v22[4] = 16LL;
    v22[5] = v4;
    v22[6] = CurrentIrql;
    v23 = KeGetCurrentIrql();
    v22[7] = v23;
    WdLogEvent5_WdCriticalError(v22);
  }
  if ( v11 && *(_DWORD *)(v11 + 136) != v16 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v17);
    v24[3] = 275LL;
    v24[4] = 38LL;
    v25 = *(int *)(v11 + 136);
    v24[7] = 0LL;
    v24[5] = v25;
    v24[6] = v16;
    WdLogEvent5_WdCriticalError(v24);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v4 + 2) + 4248LL));
  if ( v21 != -1073741822 && v21 != -1073741811 && v21 )
  {
    v26 = WdLogNewEntry5_WdError(v19, v17, v18);
    *(_QWORD *)(v26 + 24) = v21;
    WdLogEvent5_WdError(v26);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v17);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, v30);
  return (unsigned int)v21;
}
