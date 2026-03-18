/*
 * XREFs of ?DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C01F7CD4
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02386DC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B7D0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B890 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B8F0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiCollectDiagnosticInfo(
        DXGADAPTER *this,
        struct _DXGKARG_COLLECTDIAGNOSTICINFO *a2,
        const GUID *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v11; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int8 v19; // cl
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  const GUID *v29; // r8
  int v30; // [rsp+20h] [rbp-60h] BYREF
  __int64 v31; // [rsp+28h] [rbp-58h]
  char v32; // [rsp+30h] [rbp-50h]
  _BYTE v33[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  if ( !*((_QWORD *)this + 161) )
    return 3221225474LL;
  v30 = -1;
  v31 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v32 = 1;
    v30 = 5141;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5141);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 5141LL);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 1062);
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_17;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v11 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v11);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v9 = 0LL;
      goto LABEL_17;
    }
    v9 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v14 = *(_DWORD *)(v9 + 136);
    goto LABEL_18;
  }
LABEL_17:
  v14 = 0;
LABEL_18:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v33, this);
  v16 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_COLLECTDIAGNOSTICINFO *))this + 161))(
          *((_QWORD *)this + 24),
          a2);
  if ( v33[0] )
    KeUnstackDetachProcess(&ApcState);
  v17 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v17 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v15);
    v18[3] = 275LL;
    v18[4] = 16LL;
    v18[5] = this;
    v18[6] = CurrentIrql;
    v19 = KeGetCurrentIrql();
    v18[7] = v19;
    WdLogEvent5_WdCriticalError(v18);
  }
  if ( v9 && *(_DWORD *)(v9 + 136) != v14 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v15);
    v20[3] = 275LL;
    v20[4] = 38LL;
    v21 = *(int *)(v9 + 136);
    v20[7] = 0LL;
    v20[5] = v21;
    v20[6] = v14;
    WdLogEvent5_WdCriticalError(v20);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1062);
  v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v17);
  v22[3] = v16;
  v22[4] = *((_QWORD *)this + 24);
  v22[5] = *((_QWORD *)this + 31);
  v22[6] = *((int *)a2 + 2);
  v22[7] = *((unsigned int *)a2 + 55);
  WdLogEvent5_WdEvent(v22);
  if ( (_DWORD)v16 != -1073741823 && (_DWORD)v16 != -1073741801 && (_DWORD)v16 )
  {
    v26 = WdLogNewEntry5_WdError(v24, v23, v25);
    *(_QWORD *)(v26 + 24) = v16;
    WdLogEvent5_WdError(v26);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v27);
  if ( v32 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v28, &EventProfilerExit, v29, v30);
  }
  return (unsigned int)v16;
}
