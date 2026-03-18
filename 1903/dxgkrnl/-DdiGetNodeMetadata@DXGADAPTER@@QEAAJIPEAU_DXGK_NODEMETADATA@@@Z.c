/*
 * XREFs of ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C015C694
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015BE84 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
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
 *     ?VmBusSendDdiGetNodeMetadata@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C0223B48 (-VmBusSendDdiGetNodeMetadata@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DdiGetNodeMetadata(DXGADAPTER *this, unsigned int a2, GUID *a3)
{
  int v3; // r14d
  __int64 v5; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v15; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v17; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  unsigned __int8 v23; // cl
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  const GUID *v31; // r8
  int v33; // [rsp+20h] [rbp-49h] BYREF
  __int64 v34; // [rsp+28h] [rbp-41h]
  char v35; // [rsp+30h] [rbp-39h]
  _BYTE v36[24]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v37[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-11h] BYREF

  v33 = -1;
  v3 = 0;
  v5 = a2;
  v34 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v35 = 1;
    v33 = 5053;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5053);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 5053LL);
  if ( *((_BYTE *)this + 185) )
  {
    LODWORD(v10) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetNodeMetadata(
                     (DXGADAPTER *)((char *)this + 4144),
                     v5,
                     (struct _DXGK_NODEMETADATA *)a3);
    goto LABEL_31;
  }
  Current = DXGPROCESS::GetCurrent(v8, v7);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v36, Current);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 1062);
  CurrentIrql = KeGetCurrentIrql();
  v15 = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v17 = WdLogNewEntry5_WdAssertion(v13, v12);
      *(_QWORD *)(v17 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v17);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13, v12);
    if ( !CurrentProcessSessionId || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
    {
      v15 = 0LL;
LABEL_18:
      if ( v15 )
        v3 = *(_DWORD *)(v15 + 136);
      goto LABEL_20;
    }
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        if ( *(_QWORD *)ThreadWin32Thread )
        {
          v15 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
          goto LABEL_18;
        }
      }
    }
    v15 = 0LL;
  }
LABEL_20:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v37, this);
  a3->Data2 = 0;
  v10 = (*((int (__fastcall **)(_QWORD, _QWORD, GUID *))this + 93))(*((_QWORD *)this + 31), (unsigned int)v5, a3);
  if ( v37[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20);
    v22[3] = 275LL;
    v22[4] = 16LL;
    v22[5] = this;
    v22[6] = CurrentIrql;
    v23 = KeGetCurrentIrql();
    v22[7] = v23;
    WdLogEvent5_WdCriticalError(v22);
  }
  if ( v15 && *(_DWORD *)(v15 + 136) != v3 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20);
    v24[3] = 275LL;
    v24[4] = 38LL;
    v24[5] = *(int *)(v15 + 136);
    v24[6] = v3;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1062);
  v25 = (_QWORD *)WdLogNewEntry5_WdEvent(v21);
  v25[3] = v10;
  v25[4] = v5;
  v25[5] = (int)a3->Data1;
  WdLogEvent5_WdEvent(v25);
  if ( (_DWORD)v10 != -1073741811 && (_DWORD)v10 )
  {
    v29 = WdLogNewEntry5_WdError(v27, v26, v28);
    *(_QWORD *)(v29 + 24) = v10;
    WdLogEvent5_WdError(v29);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
LABEL_31:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v9);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v33);
  return (unsigned int)v10;
}
