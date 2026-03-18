/*
 * XREFs of ?DdiSetTrackedWorkloadPowerLevel@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL@@@Z @ 0x1C01FE73C
 * Callers:
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEBU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z @ 0x1C02975BC (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEBU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00045D4 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B9C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BA80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000BAE0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetTrackedWorkloadPowerLevel(ADAPTER_RENDER *this, void *a2, const GUID *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v13; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v15; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  const GUID *v30; // r8
  int v32; // [rsp+20h] [rbp-49h] BYREF
  __int64 v33; // [rsp+28h] [rbp-41h]
  char v34; // [rsp+30h] [rbp-39h]
  _BYTE v35[24]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v36[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-11h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 5140;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5140);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 5140LL);
  if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 1264LL) )
  {
    LODWORD(v8) = -1073741822;
    goto LABEL_29;
  }
  Current = DXGPROCESS::GetCurrent(v7, v6);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v35, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v13 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_17;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v15 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v13 = 0LL;
      goto LABEL_17;
    }
    v13 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    v18 = *(_DWORD *)(v13 + 136);
    goto LABEL_18;
  }
LABEL_17:
  v18 = 0;
LABEL_18:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v36,
    *((struct DXGADAPTER **)this + 2));
  v8 = (*(int (__fastcall **)(void *, const GUID *))(*((_QWORD *)this + 2) + 1264LL))(a2, a3);
  if ( v36[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
    v21[3] = 275LL;
    v21[4] = 16LL;
    v21[5] = this;
    v21[6] = CurrentIrql;
    v21[7] = KeGetCurrentIrql();
    WdLogEvent5_WdCriticalError(v21);
  }
  if ( v13 && *(_DWORD *)(v13 + 136) != v18 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
    v22[3] = 275LL;
    v22[4] = 38LL;
    v23 = *(int *)(v13 + 136);
    v22[7] = 0LL;
    v22[5] = v23;
    v22[6] = v18;
    WdLogEvent5_WdCriticalError(v22);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  v24 = WdLogNewEntry5_WdTrace(v20, v19);
  *(_QWORD *)(v24 + 24) = v8;
  *(_QWORD *)(v24 + 32) = a2;
  if ( (_DWORD)v8 != -1073741592 && (_DWORD)v8 )
  {
    v28 = WdLogNewEntry5_WdError(v26, v25, v27);
    *(_QWORD *)(v28 + 24) = v8;
    WdLogEvent5_WdError(v28);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
LABEL_29:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v6);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v32);
  return (unsigned int)v8;
}
