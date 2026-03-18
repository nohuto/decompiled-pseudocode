/*
 * XREFs of ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00F364C
 * Callers:
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00F0010 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F30A8 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00F3EC4 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C014FEAC (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1C020780C (-GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEA.c)
 *     ?VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021DF50 (-VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACK.c)
 * Callees:
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
 *     ?VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C02242B0 (-VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PE.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
        ADAPTER_RENDER *this,
        struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *a2,
        const GUID *a3)
{
  __int64 v5; // rsi
  char v6; // bl
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdi
  char *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  const GUID *v16; // r8
  int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v21; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v23; // rax
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  unsigned __int8 v30; // cl
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rcx
  const GUID *v39; // r8
  int v41; // [rsp+20h] [rbp-39h] BYREF
  __int64 v42; // [rsp+28h] [rbp-31h]
  char v43; // [rsp+30h] [rbp-29h]
  char v44[8]; // [rsp+38h] [rbp-21h] BYREF
  char *v45; // [rsp+40h] [rbp-19h]
  int v46; // [rsp+48h] [rbp-11h]
  char v47[8]; // [rsp+50h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-1h] BYREF

  v41 = -1;
  v42 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v43 = 1;
    v41 = 5004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5004);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v41, 5004LL);
  v5 = *((_QWORD *)this + 2);
  v6 = *(_BYTE *)(v5 + 185);
  Current = DXGPROCESS::GetCurrent();
  v10 = Current;
  if ( v6 )
  {
    LODWORD(v12) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetStandardAllocationDriverData(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v5 + 4144),
                     Current,
                     a2);
    goto LABEL_43;
  }
  if ( Current )
    v13 = (char *)Current + 112;
  else
    v13 = 0LL;
  v46 = 0;
  v45 = v13;
  if ( v13 && *((struct _KTHREAD **)v13 + 1) == KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v14 + 24) = 1449LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( v10 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v13, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v17 = *((_DWORD *)v13 + 4);
        if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v15, &EventBlockThread, v16, v17);
      }
      ExAcquirePushLockExclusiveEx(v13, 0LL);
    }
    *((_QWORD *)v13 + 1) = KeGetCurrentThread();
    v46 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v21 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_31;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v23 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v23 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v23);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v19, v18);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( IsThreadCrossSessionAttached()
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v21 = 0LL;
      goto LABEL_31;
    }
    v21 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v21 = 0LL;
  }
  if ( v21 )
  {
    v26 = *(_DWORD *)(v21 + 136);
    goto LABEL_32;
  }
LABEL_31:
  v26 = 0;
LABEL_32:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v47,
    *((struct DXGADAPTER **)this + 2));
  v12 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *))(*((_QWORD *)this + 2) + 360LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 248LL),
          a2);
  if ( v47[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27);
    v29[3] = 275LL;
    v29[4] = 16LL;
    v29[5] = this;
    v29[6] = CurrentIrql;
    v30 = KeGetCurrentIrql();
    v29[7] = v30;
    WdLogEvent5_WdCriticalError(v29);
  }
  if ( v21 && *(_DWORD *)(v21 + 136) != v26 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27);
    v31[3] = 275LL;
    v31[4] = 38LL;
    v32 = *(int *)(v21 + 136);
    v31[7] = 0LL;
    v31[5] = v32;
    v31[6] = v26;
    WdLogEvent5_WdCriticalError(v31);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4248LL));
  v33 = (_QWORD *)WdLogNewEntry5_WdEvent(v28);
  v33[3] = v12;
  v33[4] = a2->AllocationPrivateDriverDataSize;
  v33[5] = a2->ResourcePrivateDriverDataSize;
  WdLogEvent5_WdEvent(v33);
  if ( (_DWORD)v12 != -1073741801 && (_DWORD)v12 )
  {
    v37 = WdLogNewEntry5_WdError(v35, v34, v36);
    *(_QWORD *)(v37 + 24) = v12;
    WdLogEvent5_WdError(v37);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v44);
LABEL_43:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v11);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v38, &EventProfilerExit, v39, v41);
  return (unsigned int)v12;
}
