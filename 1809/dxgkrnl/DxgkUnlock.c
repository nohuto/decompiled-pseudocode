/*
 * XREFs of DxgkUnlock @ 0x1C0124840
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01FA0A0 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0011778 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0012380 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0124C00 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkUnlock(__int64 a1, __int64 a2, const GUID *a3)
{
  __int128 *v3; // rsi
  unsigned __int8 v4; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  struct _KTHREAD **v8; // rdi
  __int128 v9; // xmm0
  __int64 v10; // rcx
  struct DXGDEVICE *v11; // rsi
  __int64 v12; // rcx
  int v13; // edi
  struct _KEVENT *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  const GUID *v17; // r8
  struct DXGDEVICE *v18; // rsi
  unsigned int v19; // edi
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v23; // rcx
  unsigned __int8 v24; // di
  const GUID *v25; // r8
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v27; // r15
  __int64 v28; // rax
  __int64 v29; // rcx
  const GUID *v30; // r8
  __int64 v31; // rax
  struct _KEVENT *v32; // rcx
  unsigned __int8 v33; // di
  _QWORD *v34; // rax
  __int64 v35; // rcx
  const GUID *v36; // r8
  struct _D3DKMT_UNLOCK v37; // [rsp+30h] [rbp-88h] BYREF
  struct DXGDEVICE *v38; // [rsp+40h] [rbp-78h] BYREF
  int v39; // [rsp+48h] [rbp-70h]
  int v40; // [rsp+50h] [rbp-68h] BYREF
  __int64 v41; // [rsp+58h] [rbp-60h]
  char v42; // [rsp+60h] [rbp-58h]
  _BYTE v43[16]; // [rsp+68h] [rbp-50h] BYREF
  DXGADAPTER *v44; // [rsp+78h] [rbp-40h]
  char v45; // [rsp+80h] [rbp-38h]
  struct DXGDEVICE *v46; // [rsp+C8h] [rbp+10h] BYREF
  struct DXGDEVICE *v47; // [rsp+D0h] [rbp+18h] BYREF

  v3 = (__int128 *)a1;
  v40 = -1;
  v41 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v42 = 1;
    v40 = 2012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2012);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2012);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v27 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v27;
      }
    }
  }
  if ( !v8 )
  {
    v28 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( !v42 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_53;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int128 *)MmUserProbeAddress;
    v9 = *v3;
  }
  else
  {
    v9 = *v3;
  }
  v37 = (struct _D3DKMT_UNLOCK)v9;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v46, v9, v8, &v47);
  v11 = v47;
  if ( !v47 )
  {
    v31 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v31 + 24) = (unsigned int)v9;
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( !v42 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_53:
    McTemplateK0q(v29, &EventProfilerExit, v30, v40);
    return 3221225485LL;
  }
  v38 = v47;
  v12 = *(_QWORD *)(*((_QWORD *)v47 + 2) + 16LL);
  if ( *(int *)(v12 + 2160) >= 0x2000 || *(_BYTE *)(v12 + 2452) )
  {
    v13 = *((_DWORD *)DXGGLOBAL::GetGlobal(v12) + 255);
    v39 = v13;
  }
  else
  {
    v13 = 0;
    v39 = 0;
  }
  v14 = (struct _KEVENT *)*((_QWORD *)v11 + 2);
  if ( *((_DWORD *)v11 + 82) == 2 )
  {
    if ( KeReadStateEvent(v14 + 4) )
      goto LABEL_17;
    v32 = v14 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v14 + 3) )
      goto LABEL_17;
    v32 = v14 + 3;
  }
  KeWaitForSingleObject(v32, Executive, 0, 0, 0LL);
LABEL_17:
  KeEnterCriticalRegion();
  if ( v13 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v11 + 112, 0LL) )
      goto LABEL_19;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 96LL));
    v33 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v11 + 112));
    if ( !v33 )
    {
LABEL_40:
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_19;
    }
LABEL_60:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
    goto LABEL_40;
  }
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 13), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 96LL));
    v24 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v23, &EventBlockThread, v25, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 13), 1u);
    if ( !v24 )
      goto LABEL_40;
    goto LABEL_60;
  }
LABEL_19:
  COREACCESS::COREACCESS((COREACCESS *)v43, *(struct DXGADAPTER *const *)(*((_QWORD *)v11 + 2) + 16LL));
  if ( v45 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15);
    v34[3] = 275LL;
    v34[4] = 4LL;
    v34[5] = v43;
    v34[6] = 0LL;
    v34[7] = 0LL;
    WdLogEvent5_WdCriticalError(v34);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v44 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v44 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v16, &EventBlockThread, v17, 72);
      KeWaitForSingleObject((char *)v44 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v44);
  }
  v45 = 1;
  if ( *((_DWORD *)v47 + 116) == 4 )
  {
    COREACCESS::~COREACCESS((COREACCESS *)v43);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v38);
    if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v35, &EventProfilerExit, v36, v40);
    return 0LL;
  }
  else
  {
    v37.hDevice = 0;
    v18 = v47;
    v19 = DXGDEVICE::Unlock(v47, &v37, v4);
    COREACCESS::~COREACCESS((COREACCESS *)v43);
    if ( v39 )
      ExReleasePushLockSharedEx((char *)v18 + 112, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v18 + 13));
    KeLeaveCriticalRegion();
    if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v20, &EventProfilerExit, v21, v40);
    }
    return v19;
  }
}
