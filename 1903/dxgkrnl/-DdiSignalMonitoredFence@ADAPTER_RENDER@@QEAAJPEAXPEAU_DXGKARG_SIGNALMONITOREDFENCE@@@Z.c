/*
 * XREFs of ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x1C01FEC28
 * Callers:
 *     ?ADAPTER_RENDER_DdiSignalMonitoredFence@@YAJPEAVADAPTER_RENDER@@PEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x1C003DFA0 (-ADAPTER_RENDER_DdiSignalMonitoredFence@@YAJPEAVADAPTER_RENDER@@PEAXPEAU_DXGKARG_SIGNALMONITORED.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0116FA0 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAV.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1C0268268 (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004614 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B7D0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B890 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B8F0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSignalMonitoredFence(ADAPTER_RENDER *this, void *a2, const GUID *a3)
{
  int v3; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v13; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v15; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned __int8 v22; // cl
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  const GUID *v32; // r8
  int v34; // [rsp+20h] [rbp-49h] BYREF
  __int64 v35; // [rsp+28h] [rbp-41h]
  char v36; // [rsp+30h] [rbp-39h]
  _BYTE v37[24]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v38[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-11h] BYREF

  v34 = -1;
  v3 = 0;
  v35 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v36 = 1;
    v34 = 5134;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5134);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 5134LL);
  if ( a3->Data1 )
    Current = DXGPROCESS::GetCurrent(v8, v7);
  else
    Current = 0LL;
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v37, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v13 = 0LL;
  if ( CurrentIrql < 2u )
  {
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
        goto LABEL_21;
      }
      v13 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 )
      v3 = *(_DWORD *)(v13 + 136);
  }
LABEL_21:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v38,
    *((struct DXGADAPTER **)this + 2));
  v19 = (*(int (__fastcall **)(void *, const GUID *))(*((_QWORD *)this + 2) + 1240LL))(a2, a3);
  if ( v38[0] )
    KeUnstackDetachProcess(&ApcState);
  v20 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v20 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v18);
    v21[3] = 275LL;
    v21[4] = 16LL;
    v21[5] = this;
    v21[6] = CurrentIrql;
    v22 = KeGetCurrentIrql();
    v21[7] = v22;
    WdLogEvent5_WdCriticalError(v21);
  }
  if ( v13 && *(_DWORD *)(v13 + 136) != v3 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v18);
    v23[3] = 275LL;
    v23[4] = 38LL;
    v24 = *(int *)(v13 + 136);
    v23[7] = 0LL;
    v23[5] = v24;
    v23[6] = v3;
    WdLogEvent5_WdCriticalError(v23);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v18);
  v25[3] = v19;
  v25[4] = a2;
  v25[5] = *(_QWORD *)a3->Data4;
  v28 = *(unsigned int *)a3[1].Data4;
  v25[6] = v28;
  if ( (_DWORD)v19 != -1071775743 && (_DWORD)v19 != -1071775232 && (_DWORD)v19 )
  {
    v29 = WdLogNewEntry5_WdError(v28, v26, v27);
    *(_QWORD *)(v29 + 24) = v19;
    WdLogEvent5_WdError(v29);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v30);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v34);
  return (unsigned int)v19;
}
