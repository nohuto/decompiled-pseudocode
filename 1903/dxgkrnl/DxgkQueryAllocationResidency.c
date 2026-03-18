/*
 * XREFs of DxgkQueryAllocationResidency @ 0x1C02094E0
 * Callers:
 *     ?VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0221CA0 (-VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006810 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C0207638 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 */

__int64 __fastcall DxgkQueryAllocationResidency(__int64 a1, __int64 a2, const GUID *a3)
{
  __int128 *v3; // rbx
  unsigned __int8 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  const GUID *v14; // r8
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGPROCESS **v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  const GUID *v32; // r8
  struct DXGDEVICE *v33; // [rsp+30h] [rbp-118h] BYREF
  int v34; // [rsp+38h] [rbp-110h] BYREF
  __int64 v35; // [rsp+40h] [rbp-108h]
  char v36; // [rsp+48h] [rbp-100h]
  struct DXGDEVICE *v37; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v38; // [rsp+58h] [rbp-F0h] BYREF
  char v39; // [rsp+60h] [rbp-E8h]
  _D3DKMT_QUERYALLOCATIONRESIDENCY v40; // [rsp+68h] [rbp-E0h] BYREF
  _BYTE v41[160]; // [rsp+90h] [rbp-B8h] BYREF

  v3 = (__int128 *)a1;
  v34 = -1;
  v35 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v36 = 1;
    v34 = 2008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2008);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 2008LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7, 0LL);
    v11 = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v12);
    if ( v36 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v13, &EventProfilerExit, v14, v34);
    }
    return v11;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int128 *)MmUserProbeAddress;
    v16 = *v3;
    v17 = v3[1];
  }
  else
  {
    v16 = *v3;
    v17 = v3[1];
  }
  *(_OWORD *)&v40.AllocationCount = v17;
  *(_OWORD *)&v40.hDevice = v16;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v33, v16, Current, &v37);
  v21 = (struct DXGPROCESS **)v37;
  if ( !v37 )
  {
    v22 = WdLogNewEntry5_WdError(v19, v18, v20);
    *(_QWORD *)(v22 + 24) = v40.hDevice;
    v11 = -1073741811;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v22);
LABEL_18:
    if ( v33 && _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v38, v37);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, (__int64)v21, 0, v23, 0);
  v24 = COREDEVICEACCESS::AcquireShared((__int64)v41, 0xFFFFFFFF, 0LL);
  v28 = v24;
  if ( v24 >= 0 )
  {
    v11 = DXGDEVICE::QueryAllocationResidency(v21, &v40, v4);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
    if ( v38 && v39 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v38 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_18;
  }
  v29 = WdLogNewEntry5_WdWarning(v26, v25, v27);
  *(_QWORD *)(v29 + 24) = v21;
  *(_QWORD *)(v29 + 32) = v28;
  WdLogEvent5_WdWarning(v29);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
  if ( v38 && v39 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v38 + 104));
    KeLeaveCriticalRegion();
  }
  if ( v33 && _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v30);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v34);
  return (unsigned int)v28;
}
