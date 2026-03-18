/*
 * XREFs of ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E2644
 * Callers:
 *     DXGADAPTER_DdiQueryAdapterInfo @ 0x1C0023270 (DXGADAPTER_DdiQueryAdapterInfo.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EAD1C (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C014A0E0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015BE84 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01613F0 (DpiFdoInitializeGpuVirtualization.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01651A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0166B3C (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     DpiGetMonitorColorimetryOverride @ 0x1C016FF84 (DpiGetMonitorColorimetryOverride.c)
 *     DpiQueryDisplayIDDescriptor @ 0x1C01757E0 (DpiQueryDisplayIDDescriptor.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C01ECC3C (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C01ECF00 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C0201068 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C0201D6C (DxgkCreateLightweightDeviceAndContext.c)
 *     ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021DD60 (-VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C02A1C88 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C02A1F24 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004614 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C000B764 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B7D0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B890 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B8F0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0223E84 (-VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DdiQueryAdapterInfo(
        DXGADAPTER *this,
        struct _DXGKARG_QUERYADAPTERINFO *a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  struct DXGPROCESS *Current; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v13; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned __int8 v20; // cl
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  const GUID *v29; // r8
  int v31; // [rsp+20h] [rbp-39h] BYREF
  __int64 v32; // [rsp+28h] [rbp-31h]
  char v33; // [rsp+30h] [rbp-29h]
  _BYTE v34[24]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v35[8]; // [rsp+50h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-1h] BYREF

  v31 = -1;
  v32 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v33 = 1;
    v31 = 5000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5000);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 5000LL);
  if ( *((_BYTE *)this + 185) )
  {
    LODWORD(v6) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiQueryAdapterInfo((DXGADAPTER *)((char *)this + 4144), a2);
    goto LABEL_32;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v34, Current);
  if ( (a2->Flags.Value & 1) == 0 )
    a2->Flags.Value ^= (a2->Flags.Value ^ (unsigned __int8)DXGPROCESS::IsVmProcessOrVmValidation(Current, this)) & 1;
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedAdd((volatile signed __int32 *)this + 1062, 1u);
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_19;
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
      goto LABEL_19;
    }
    v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    v16 = *(_DWORD *)(v11 + 136);
    goto LABEL_20;
  }
LABEL_19:
  v16 = 0;
LABEL_20:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v35, this);
  v6 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_QUERYADAPTERINFO *))this + 40))(*((_QWORD *)this + 31), a2);
  if ( v35[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17);
    v19[3] = 275LL;
    v19[4] = 16LL;
    v19[5] = this;
    v19[6] = CurrentIrql;
    v20 = KeGetCurrentIrql();
    v19[7] = v20;
    WdLogEvent5_WdCriticalError(v19);
  }
  if ( v11 && *(_DWORD *)(v11 + 136) != v16 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17);
    v21[3] = 275LL;
    v21[4] = 38LL;
    v22 = *(int *)(v11 + 136);
    v21[7] = 0LL;
    v21[5] = v22;
    v21[6] = v16;
    WdLogEvent5_WdCriticalError(v21);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1062);
  v23 = (_QWORD *)WdLogNewEntry5_WdEvent(v18);
  v23[3] = v6;
  v23[4] = a2->Type;
  v23[5] = a2->InputDataSize;
  v23[6] = a2->OutputDataSize;
  WdLogEvent5_WdEvent(v23);
  if ( (unsigned int)(v6 + 1073741822) > 0x15 || (v25 = 2099201LL, !_bittest((const int *)&v25, v6 + 1073741822)) )
  {
    if ( (_DWORD)v6 )
    {
      v27 = WdLogNewEntry5_WdError(v25, v24, v26);
      *(_QWORD *)(v27 + 24) = v6;
      WdLogEvent5_WdError(v27);
    }
  }
  DXGADAPTER::ReleaseDdiSync(this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
LABEL_32:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v5);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v31);
  return (unsigned int)v6;
}
