/*
 * XREFs of DxgkLock @ 0x1C00FE020
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F03B0 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0011778 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100E00 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0124C00 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkLock(struct _D3DKMT_LOCK *a1, __int64 a2, const GUID *a3)
{
  bool v4; // r15
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  struct _KTHREAD **v8; // rdi
  struct _D3DKMT_LOCK *v9; // rcx
  __int64 v10; // rcx
  struct DXGDEVICE *v11; // rsi
  __int64 v12; // rcx
  int v13; // edi
  struct _KEVENT *v14; // r12
  volatile signed __int64 *v15; // rdi
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rcx
  const GUID *v19; // r8
  int v20; // esi
  _QWORD *p_pData; // rcx
  _DWORD *p_hAllocation; // r14
  struct DXGADAPTER *v23; // rdi
  __int64 v24; // rcx
  const GUID *v25; // r8
  __int64 v27; // rcx
  unsigned __int8 v28; // di
  const GUID *v29; // r8
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  const GUID *v34; // r8
  __int64 v35; // rax
  struct _KEVENT *v36; // rcx
  unsigned __int8 v37; // di
  _QWORD *v38; // rax
  __int64 v39; // rcx
  const GUID *v40; // r8
  int v41; // [rsp+30h] [rbp-118h] BYREF
  __int64 v42; // [rsp+38h] [rbp-110h]
  char v43; // [rsp+40h] [rbp-108h]
  struct _D3DKMT_LOCK v44; // [rsp+48h] [rbp-100h] BYREF
  struct DXGDEVICE *v45; // [rsp+78h] [rbp-D0h] BYREF
  int v46; // [rsp+80h] [rbp-C8h]
  __int64 v47; // [rsp+98h] [rbp-B0h] BYREF
  struct DXGADAPTER *v48; // [rsp+A0h] [rbp-A8h]
  char v49; // [rsp+A8h] [rbp-A0h]
  _BYTE v50[8]; // [rsp+B0h] [rbp-98h] BYREF
  struct _KTHREAD **v51[2]; // [rsp+B8h] [rbp-90h] BYREF
  DXGADAPTER *v52; // [rsp+C8h] [rbp-80h]
  char v53; // [rsp+D0h] [rbp-78h]
  struct _KTHREAD **v54[5]; // [rsp+D8h] [rbp-70h] BYREF
  char v55; // [rsp+100h] [rbp-48h]
  struct DXGDEVICE *v56; // [rsp+158h] [rbp+10h] BYREF
  struct DXGDEVICE *v57; // [rsp+160h] [rbp+18h] BYREF

  v41 = -1;
  v42 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v43 = 1;
    v41 = 2011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2011);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2011);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v31 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v31;
      }
    }
  }
  if ( !v8 )
  {
    v32 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v32 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( !v43 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_64;
  }
  if ( v4 )
  {
    v9 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v9 = (struct _D3DKMT_LOCK *)MmUserProbeAddress;
    v44 = *v9;
  }
  else
  {
    v44 = *a1;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v57, v44.hDevice, v8, &v56);
  v11 = v56;
  if ( !v56 )
  {
    v35 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v35 + 24) = v44.hDevice;
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    if ( v57 && _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( !v43 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_64:
    McTemplateK0q(v33, &EventProfilerExit, v34, v41);
    return 3221225485LL;
  }
  v45 = v56;
  v12 = *(_QWORD *)(*((_QWORD *)v56 + 2) + 16LL);
  if ( *(int *)(v12 + 2160) >= 0x2000 || *(_BYTE *)(v12 + 2452) )
  {
    v13 = *((_DWORD *)DXGGLOBAL::GetGlobal(v12) + 255);
    v46 = v13;
  }
  else
  {
    v13 = 0;
    v46 = 0;
  }
  v14 = (struct _KEVENT *)*((_QWORD *)v11 + 2);
  if ( *((_DWORD *)v11 + 82) == 2 )
  {
    if ( KeReadStateEvent(v14 + 4) )
      goto LABEL_17;
    v36 = v14 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v14 + 3) )
      goto LABEL_17;
    v36 = v14 + 3;
  }
  KeWaitForSingleObject(v36, Executive, 0, 0, 0LL);
LABEL_17:
  KeEnterCriticalRegion();
  if ( !v13 )
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 13), 0) )
      goto LABEL_19;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 96LL));
    v28 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v27, &EventBlockThread, v29, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 13), 1u);
    if ( !v28 )
      goto LABEL_51;
    goto LABEL_71;
  }
  if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v11 + 112, 0LL) )
    goto LABEL_19;
  KeLeaveCriticalRegion();
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 96LL));
  v37 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
  DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v11 + 112));
  if ( v37 )
LABEL_71:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
LABEL_51:
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_19:
  v15 = *(volatile signed __int64 **)(*((_QWORD *)v11 + 2) + 16LL);
  v48 = (struct DXGADAPTER *)v15;
  _InterlockedIncrement64(v15 + 3);
  v47 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v15 + 15, 0LL);
  v49 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v50, (__int64)v56, 0, v16, 0);
  if ( v53 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17);
    v38[3] = 275LL;
    v38[4] = 4LL;
    v38[5] = v51;
    v38[6] = 0LL;
    v38[7] = 0LL;
    WdLogEvent5_WdCriticalError(v38);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v52 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v52 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v18, &EventBlockThread, v19, 72);
      KeWaitForSingleObject((char *)v52 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v52);
  }
  v53 = 1;
  if ( *((_DWORD *)v54[4] + 116) != 1 )
    goto LABEL_78;
  if ( v55 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)v54);
    if ( *((_DWORD *)v54[2] + 44) != 1 )
    {
      COREACCESS::Release(v54);
LABEL_78:
      COREACCESS::Release(v51);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v47);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v45);
      if ( v57 && _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
      if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v39, &EventProfilerExit, v40, v41);
      return 3221226166LL;
    }
  }
  v44.hDevice = 0;
  v20 = DXGDEVICE::Lock(v56, &v44, (struct COREDEVICEACCESS *)v50);
  if ( v20 >= 0 )
  {
    p_pData = &a1->pData;
    if ( v4 )
    {
      if ( (unsigned __int64)p_pData >= MmUserProbeAddress )
        p_pData = (_QWORD *)MmUserProbeAddress;
      *p_pData = v44.pData;
      p_hAllocation = &a1->hAllocation;
      if ( (unsigned __int64)p_hAllocation >= MmUserProbeAddress )
        p_hAllocation = (_DWORD *)MmUserProbeAddress;
      *p_hAllocation = v44.hAllocation;
    }
    else
    {
      *p_pData = v44.pData;
      a1->hAllocation = v44.hAllocation;
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
  v23 = v48;
  ExReleasePushLockSharedEx((char *)v48 + 120, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v48 + 2), v48);
  if ( v46 )
    ExReleasePushLockSharedEx((char *)v56 + 112, 0LL);
  else
    ExReleaseResourceLite(*((PERESOURCE *)v56 + 13));
  KeLeaveCriticalRegion();
  if ( v57 && _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v24, &EventProfilerExit, v25, v41);
  }
  return (unsigned int)v20;
}
