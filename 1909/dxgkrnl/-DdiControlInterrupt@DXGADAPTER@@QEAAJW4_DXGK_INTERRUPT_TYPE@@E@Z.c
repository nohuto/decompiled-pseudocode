/*
 * XREFs of ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C013C374
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt @ 0x1C0015910 (DXGADAPTER_DdiControlInterrupt.c)
 *     ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C027E8D0 (-StartHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C027E990 (-StopHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B9C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BA80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000BAE0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C0015930 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt(DXGADAPTER *this, DXGK_INTERRUPT_TYPE a2, const GUID *a3)
{
  DXGK_INTERRUPT_STATE v3; // ebx
  __int64 v4; // r12
  unsigned __int8 v5; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v12; // rax
  int CurrentProcessSessionId; // r14d
  __int64 ThreadWin32Thread; // rax
  int v15; // r13d
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned __int8 v21; // cl
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  const GUID *v29; // r8
  struct _DXGKARG_CONTROLINTERRUPT2 v30; // [rsp+20h] [rbp-60h]
  unsigned __int8 CurrentIrql; // [rsp+20h] [rbp-60h]
  int v32; // [rsp+28h] [rbp-58h] BYREF
  __int64 v33; // [rsp+30h] [rbp-50h]
  char v34; // [rsp+38h] [rbp-48h]
  _BYTE v35[8]; // [rsp+40h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  v3 = DXGK_INTERRUPT_ENABLE;
  v4 = a2;
  v5 = (unsigned __int8)a3;
  if ( *((int *)this + 613) >= 1300 && *((_QWORD *)this + 95) )
  {
    v30.InterruptType = a2;
    LOBYTE(v3) = (_BYTE)a3 == 0;
    v30.InterruptState = v3;
    return DXGADAPTER::DdiControlInterrupt2(this, v30, 0LL);
  }
  v32 = -1;
  v33 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 5038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5038);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 5038LL);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 1062);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_18;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v12 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v12);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v10 = 0LL;
      goto LABEL_18;
    }
    v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v15 = *(_DWORD *)(v10 + 136);
    goto LABEL_19;
  }
LABEL_18:
  v15 = 0;
LABEL_19:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v35, this);
  LOBYTE(v16) = v5;
  v18 = (*((int (__fastcall **)(_QWORD, _QWORD, __int64))this + 70))(*((_QWORD *)this + 31), (unsigned int)v4, v16);
  if ( v35[0] )
    KeUnstackDetachProcess(&ApcState);
  v19 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v19 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v17);
    v20[3] = 275LL;
    v20[4] = 16LL;
    v20[5] = this;
    v20[6] = CurrentIrql;
    v21 = KeGetCurrentIrql();
    v20[7] = v21;
    WdLogEvent5_WdCriticalError(v20);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v15 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v17);
    v22[3] = 275LL;
    v22[4] = 38LL;
    v22[5] = *(int *)(v10 + 136);
    v22[6] = v15;
    v22[7] = 0LL;
    WdLogEvent5_WdCriticalError(v22);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1062);
  if ( (_DWORD)v4 == 3 && (int)v18 >= 0 )
  {
    LOBYTE(v19) = v5;
    PoNotifyVSyncChange(v19);
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v17);
  v23[3] = v18;
  v23[4] = v4;
  v23[5] = v5;
  if ( (unsigned int)(v18 + 0x3FFFFFFF) > 1 && (_DWORD)v18 )
  {
    v26 = WdLogNewEntry5_WdError(v5, v24, v25);
    *(_QWORD *)(v26 + 24) = v18;
    WdLogEvent5_WdError(v26);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v27);
  if ( v34 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v28, &EventProfilerExit, v29, v32);
  }
  return (unsigned int)v18;
}
