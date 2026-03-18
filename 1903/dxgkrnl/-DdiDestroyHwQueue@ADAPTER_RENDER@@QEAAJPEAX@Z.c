/*
 * XREFs of ?DdiDestroyHwQueue@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C01F8ECC
 * Callers:
 *     ?ADAPTER_RENDER_DdiDestroyHwQueue@@YAJPEAVADAPTER_RENDER@@QEAX@Z @ 0x1C003DDC0 (-ADAPTER_RENDER_DdiDestroyHwQueue@@YAJPEAVADAPTER_RENDER@@QEAX@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0247258 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiDestroyHwQueue(ADAPTER_RENDER *this, void *a2, const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v13; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v16; // r14d
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(void *); // rax
  int v19; // edi
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned __int8 v22; // cl
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  const GUID *v32; // r8
  int v34; // [rsp+20h] [rbp-39h] BYREF
  __int64 v35; // [rsp+28h] [rbp-31h]
  char v36; // [rsp+30h] [rbp-29h]
  _BYTE v37[24]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v38[8]; // [rsp+50h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-1h] BYREF

  v34 = -1;
  v35 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v36 = 1;
    v34 = 5111;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5111);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 5111LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v37, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_15;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v13 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v13);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v11 = 0LL;
LABEL_15:
      v16 = 0;
      goto LABEL_16;
    }
    v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
    goto LABEL_15;
  v16 = *(_DWORD *)(v11 + 136);
LABEL_16:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v38,
    *((struct DXGADAPTER **)this + 2));
  v18 = *(__int64 (__fastcall **)(void *))(*((_QWORD *)this + 2) + 992LL);
  if ( v18 )
    v19 = v18(a2);
  else
    v19 = -1073741822;
  if ( v38[0] )
    KeUnstackDetachProcess(&ApcState);
  v20 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v20 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v17);
    v21[3] = 275LL;
    v21[4] = 16LL;
    v21[5] = this;
    v21[6] = CurrentIrql;
    v22 = KeGetCurrentIrql();
    v21[7] = v22;
    WdLogEvent5_WdCriticalError(v21);
  }
  if ( v11 && *(_DWORD *)(v11 + 136) != v16 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v17);
    v23[3] = 275LL;
    v23[4] = 38LL;
    v24 = *(int *)(v11 + 136);
    v23[7] = 0LL;
    v23[5] = v24;
    v23[6] = v16;
    WdLogEvent5_WdCriticalError(v23);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  v25 = WdLogNewEntry5_WdEvent(v20);
  *(_QWORD *)(v25 + 24) = v19;
  *(_QWORD *)(v25 + 32) = a2;
  WdLogEvent5_WdEvent(v25);
  if ( v19 != -1073741822 && v19 )
  {
    v29 = WdLogNewEntry5_WdError(v27, v26, v28);
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
