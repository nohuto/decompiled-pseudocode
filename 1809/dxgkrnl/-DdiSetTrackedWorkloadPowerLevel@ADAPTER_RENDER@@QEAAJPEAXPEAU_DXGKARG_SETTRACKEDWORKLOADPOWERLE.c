/*
 * XREFs of ?DdiSetTrackedWorkloadPowerLevel@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL@@@Z @ 0x1C01CFED4
 * Callers:
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z @ 0x1C0260354 (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000F778 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0011F90 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0012650 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00126D0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetTrackedWorkloadPowerLevel(ADAPTER_RENDER *this, void *a2, const GUID *a3)
{
  __int64 v6; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v12; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  const GUID *v27; // r8
  int v29; // [rsp+20h] [rbp-49h] BYREF
  __int64 v30; // [rsp+28h] [rbp-41h]
  char v31; // [rsp+30h] [rbp-39h]
  _BYTE v32[24]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v33[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-11h] BYREF

  v29 = -1;
  v30 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 5140;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5140);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 5140);
  if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 1280LL) )
  {
    LODWORD(v6) = -1073741822;
    goto LABEL_29;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v32, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_17;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v12 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v12 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v12);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v10 = 0LL;
      goto LABEL_17;
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
    goto LABEL_18;
  }
LABEL_17:
  v15 = 0;
LABEL_18:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v33,
    *((struct DXGADAPTER **)this + 2));
  v6 = (*(int (__fastcall **)(void *, const GUID *))(*((_QWORD *)this + 2) + 1280LL))(a2, a3);
  if ( v33[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17);
    v20[3] = 275LL;
    v20[4] = 16LL;
    v20[5] = this;
    v20[6] = CurrentIrql;
    v20[7] = KeGetCurrentIrql();
    WdLogEvent5_WdCriticalError(v20);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v15 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17);
    v21[3] = 275LL;
    v21[4] = 38LL;
    v22 = *(int *)(v10 + 136);
    v21[7] = 0LL;
    v21[5] = v22;
    v21[6] = v15;
    WdLogEvent5_WdCriticalError(v21);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4256LL));
  v23 = WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
  *(_QWORD *)(v23 + 24) = v6;
  *(_QWORD *)(v23 + 32) = a2;
  if ( (_DWORD)v6 != -1073741592 && (_DWORD)v6 )
  {
    v25 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v25 + 24) = v6;
    WdLogEvent5_WdError(v25);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
LABEL_29:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v29);
  return (unsigned int)v6;
}
