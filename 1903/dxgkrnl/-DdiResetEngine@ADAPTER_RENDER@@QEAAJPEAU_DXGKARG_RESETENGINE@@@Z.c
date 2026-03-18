/*
 * XREFs of ?DdiResetEngine@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETENGINE@@@Z @ 0x1C0038FC0
 * Callers:
 *     ?ADAPTER_RENDER_DdiResetEngine@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_RESETENGINE@@@Z @ 0x1C003DEA0 (-ADAPTER_RENDER_DdiResetEngine@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_RESETENGINE@@@Z.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiResetEngine(
        ADAPTER_RENDER *this,
        struct _DXGKARG_RESETENGINE *a2,
        const GUID *a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v14; // rbx
  struct _KTHREAD *v15; // rbx
  __int64 v16; // rax
  int v17; // edi
  __int64 v18; // rax
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned __int8 v24; // cl
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  const GUID *v30; // r8
  int v32; // [rsp+20h] [rbp-60h] BYREF
  __int64 v33; // [rsp+28h] [rbp-58h]
  char v34; // [rsp+30h] [rbp-50h]
  _BYTE v35[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 5051;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5051);
  }
  else
  {
    v34 = 0;
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
      v9 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v9 = 0LL;
    }
    v33 = v9;
    if ( v9 )
    {
      v10 = *(_DWORD *)(v9 + 140);
      if ( !v10 )
        *(_DWORD *)(v9 + 144) = 5051;
      *(_DWORD *)(v9 + 140) = v10 + 1;
    }
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v14 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_29;
  v15 = KeGetCurrentThread();
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v16 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = PsGetCurrentProcessSessionId(v12, v11);
  if ( v17 && (unsigned int)PsGetThreadSessionId(v15) == v17 )
  {
    if ( IsThreadCrossSessionAttached() || (v18 = PsGetThreadWin32Thread(v15)) == 0 || !*(_QWORD *)v18 )
    {
      v14 = 0LL;
LABEL_29:
      v19 = 0;
      goto LABEL_30;
    }
    v14 = *(_QWORD *)(*(_QWORD *)v18 + 80LL);
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v14 )
    goto LABEL_29;
  v19 = *(_DWORD *)(v14 + 136);
LABEL_30:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v35,
    *((struct DXGADAPTER **)this + 2));
  v21 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_RESETENGINE *))(*((_QWORD *)this + 2) + 688LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
          a2);
  if ( v35[0] )
    KeUnstackDetachProcess(&ApcState);
  v22 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v22 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v20);
    v23[3] = 275LL;
    v23[4] = 16LL;
    v23[5] = this;
    v23[6] = CurrentIrql;
    v24 = KeGetCurrentIrql();
    v23[7] = v24;
    WdLogEvent5_WdCriticalError(v23);
  }
  if ( v14 && *(_DWORD *)(v14 + 136) != v19 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v20);
    v25[3] = 275LL;
    v25[4] = 38LL;
    v26 = *(int *)(v14 + 136);
    v25[7] = 0LL;
    v25[5] = v26;
    v25[6] = v19;
    WdLogEvent5_WdCriticalError(v25);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v20);
  v27[3] = v21;
  v27[4] = a2->NodeOrdinal;
  v27[5] = a2->EngineOrdinal;
  v27[6] = a2->LastAbortedFenceId;
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v28);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v32);
  return (unsigned int)v21;
}
