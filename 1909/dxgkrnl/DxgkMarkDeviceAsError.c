/*
 * XREFs of DxgkMarkDeviceAsError @ 0x1C0233410
 * Callers:
 *     ?VmBusMarkDeviceAsError@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0221170 (-VmBusMarkDeviceAsError@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0124B10 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU_D3DKMT_MARKDEVICEASERROR@@@Z @ 0x1C02259AC (-VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU.c)
 */

__int64 __fastcall DxgkMarkDeviceAsError(__int64 a1, __int64 a2, const GUID *a3)
{
  _D3DKMT_MARKDEVICEASERROR *v3; // rbx
  bool v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KTHREAD **Current; // r14
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGDEVICE *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  const GUID *v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  struct DXGDEVICE *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  const GUID *v33; // r8
  _QWORD v34[2]; // [rsp+20h] [rbp-68h] BYREF
  int v35; // [rsp+30h] [rbp-58h] BYREF
  __int64 v36; // [rsp+38h] [rbp-50h]
  char v37; // [rsp+40h] [rbp-48h]
  _BYTE v38[8]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v39; // [rsp+50h] [rbp-38h]
  char v40; // [rsp+58h] [rbp-30h]
  struct DXGDEVICE *v41; // [rsp+98h] [rbp+10h] BYREF
  _D3DKMT_MARKDEVICEASERROR v42; // [rsp+A0h] [rbp+18h] BYREF
  struct DXGDEVICE *v43; // [rsp+A8h] [rbp+20h] BYREF

  v3 = (_D3DKMT_MARKDEVICEASERROR *)a1;
  v35 = -1;
  v36 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v37 = 1;
    v35 = 2131;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2131);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2131LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7, v9);
    v12 = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v13);
    if ( v37 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v14, &EventProfilerExit, v15, v35);
    }
    return v12;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_MARKDEVICEASERROR *)MmUserProbeAddress;
    v42 = *v3;
    LODWORD(v3) = v42.hDevice;
  }
  else
  {
    v3 = (_D3DKMT_MARKDEVICEASERROR *)*v3;
    v42 = (_D3DKMT_MARKDEVICEASERROR)v3;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v41, (unsigned int)v3, Current, &v43);
  v20 = v43;
  if ( !v43 )
  {
    v21 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v21 + 24) = (unsigned int)v3;
    v12 = -1073741811;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
LABEL_18:
    if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34, v43);
  v39 = *(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL);
  v22 = v39;
  v40 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v38);
  if ( *(_DWORD *)(v22 + 176) != 1 )
  {
    if ( v40 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v38);
    if ( v34[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
    if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v23);
    if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v24, &EventProfilerExit, v25, v35);
    return 3221226166LL;
  }
  if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v20 + 2) + 16LL)) )
  {
    v29 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    v12 = -1073741811;
    *(_QWORD *)(v29 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
LABEL_35:
    if ( v40 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v38);
    if ( v34[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
    goto LABEL_18;
  }
  v30 = v43;
  if ( (*((_BYTE *)v43 + 1749) & 1) != 0 )
  {
    v12 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMarkDeviceAsError(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v27 + 4144),
            (struct DXGPROCESS *)Current,
            v43,
            &v42);
    goto LABEL_35;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v26 + 520) + 8LL) + 208LL))(
    *((_QWORD *)v43 + 82),
    v42.Reason | 0x80000000,
    0LL);
  DXGDEVICE::FlushScheduler(v30, 3u);
  if ( v40 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v38);
  if ( v34[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
  if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v31);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v32, &EventProfilerExit, v33, v35);
  return 0LL;
}
