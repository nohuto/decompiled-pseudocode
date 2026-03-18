/*
 * XREFs of ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C0159674
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0158E80 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
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
 *     ?VmBusSendDdiGetNodeMetadata@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C01F3E18 (-VmBusSendDdiGetNodeMetadata@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DdiGetNodeMetadata(DXGADAPTER *this, unsigned int a2, GUID *a3)
{
  int v3; // r14d
  __int64 v5; // r12
  __int64 v7; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v13; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int8 v19; // cl
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  const GUID *v25; // r8
  int v27; // [rsp+20h] [rbp-49h] BYREF
  __int64 v28; // [rsp+28h] [rbp-41h]
  char v29; // [rsp+30h] [rbp-39h]
  _BYTE v30[24]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v31[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-11h] BYREF

  v27 = -1;
  v3 = 0;
  v5 = a2;
  v28 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v29 = 1;
    v27 = 5053;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5053);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 5053);
  if ( *((_BYTE *)this + 185) )
  {
    LODWORD(v7) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetNodeMetadata(
                    (DXGADAPTER *)((char *)this + 4152),
                    v5,
                    (struct _DXGK_NODEMETADATA *)a3);
    goto LABEL_31;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v30, Current);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 1064);
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v13 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v13 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v13);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
    if ( !CurrentProcessSessionId || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
    {
      v11 = 0LL;
LABEL_18:
      if ( v11 )
        v3 = *(_DWORD *)(v11 + 136);
      goto LABEL_20;
    }
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        if ( *(_QWORD *)ThreadWin32Thread )
        {
          v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
          goto LABEL_18;
        }
      }
    }
    v11 = 0LL;
  }
LABEL_20:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v31, this);
  a3->Data2 = 0;
  v7 = (*((int (__fastcall **)(_QWORD, _QWORD, GUID *))this + 95))(*((_QWORD *)this + 31), (unsigned int)v5, a3);
  if ( v31[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17);
    v18[3] = 275LL;
    v18[4] = 16LL;
    v18[5] = this;
    v18[6] = CurrentIrql;
    v19 = KeGetCurrentIrql();
    v18[7] = v19;
    WdLogEvent5_WdCriticalError(v18);
  }
  if ( v11 && *(_DWORD *)(v11 + 136) != v3 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17);
    v20[3] = 275LL;
    v20[4] = 38LL;
    v20[5] = *(int *)(v11 + 136);
    v20[6] = v3;
    v20[7] = 0LL;
    WdLogEvent5_WdCriticalError(v20);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1064);
  v21 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16);
  v21[3] = v7;
  v21[4] = v5;
  v21[5] = (int)a3->Data1;
  WdLogEvent5_WdEvent(v21);
  if ( (_DWORD)v7 != -1073741811 && (_DWORD)v7 )
  {
    v23 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v23 + 24) = v7;
    WdLogEvent5_WdError(v23);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
LABEL_31:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v27);
  return (unsigned int)v7;
}
