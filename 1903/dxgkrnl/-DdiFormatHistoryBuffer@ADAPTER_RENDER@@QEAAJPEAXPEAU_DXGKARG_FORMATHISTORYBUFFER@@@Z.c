/*
 * XREFs of ?DdiFormatHistoryBuffer@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FORMATHISTORYBUFFER@@@Z @ 0x1C00377A4
 * Callers:
 *     ?ADAPTER_RENDER_DdiFormatHistoryBuffer@@YAJPEAVADAPTER_RENDER@@QEAXPEAU_DXGKARG_FORMATHISTORYBUFFER@@@Z @ 0x1C003DE00 (-ADAPTER_RENDER_DdiFormatHistoryBuffer@@YAJPEAVADAPTER_RENDER@@QEAXPEAU_DXGKARG_FORMATHISTORYBUF.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B890 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiFormatHistoryBuffer(ADAPTER_RENDER *this, void *a2, const GUID *a3)
{
  ADAPTER_RENDER *v5; // r15
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v10; // eax
  unsigned __int8 CurrentIrql; // r14
  __int64 v12; // rbx
  struct _KTHREAD *v13; // rbx
  __int64 v14; // rax
  int v15; // edi
  __int64 v16; // rax
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned __int8 v22; // cl
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  const GUID *v30; // r8
  int v32; // [rsp+20h] [rbp-60h] BYREF
  ADAPTER_RENDER *v33; // [rsp+28h] [rbp-58h]
  char v34; // [rsp+30h] [rbp-50h]
  _BYTE v35[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v32 = -1;
  v33 = 0LL;
  v5 = this;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 5057;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5057);
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
      this = *(ADAPTER_RENDER **)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      this = 0LL;
    }
    v33 = this;
    if ( this )
    {
      v10 = *((_DWORD *)this + 35);
      if ( !v10 )
        *((_DWORD *)this + 36) = 5057;
      *((_DWORD *)this + 35) = v10 + 1;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v5 + 2) + 4248LL));
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
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v35,
    *((struct DXGADAPTER **)v5 + 2));
  v19 = (*(int (__fastcall **)(void *, const GUID *))(*((_QWORD *)v5 + 2) + 784LL))(a2, a3);
  if ( v35[0] )
    KeUnstackDetachProcess(&ApcState);
  v20 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v20 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v18);
    v21[3] = 275LL;
    v21[4] = 16LL;
    v21[5] = v5;
    v21[6] = CurrentIrql;
    v22 = KeGetCurrentIrql();
    v21[7] = v22;
    WdLogEvent5_WdCriticalError(v21);
  }
  if ( v12 && *(_DWORD *)(v12 + 136) != v17 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v18);
    v23[3] = 275LL;
    v23[4] = 38LL;
    v23[5] = *(int *)(v12 + 136);
    v23[6] = v17;
    v23[7] = 0LL;
    WdLogEvent5_WdCriticalError(v23);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v5 + 2) + 4248LL));
  v24 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v24[3] = v19;
  v24[4] = *(unsigned int *)&a3[1].Data4[4];
  v24[5] = a3[2].Data1;
  v24[6] = *(unsigned int *)&a3[2].Data2;
  WdLogEvent5_WdEvent(v24);
  if ( (_DWORD)v19 != -1073741823 && (_DWORD)v19 != -1073741684 && (_DWORD)v19 )
  {
    v28 = WdLogNewEntry5_WdError(v26, v25, v27);
    *(_QWORD *)(v28 + 24) = v19;
    WdLogEvent5_WdError(v28);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v25);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v32);
  return (unsigned int)v19;
}
