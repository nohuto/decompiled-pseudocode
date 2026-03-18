/*
 * XREFs of DxgkLock @ 0x1C00E0860
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021FEF0 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006D60 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00074E4 (-Release@COREACCESS@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E0E20 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0131250 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01EC944 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01EFA3C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0241BC8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkLock(struct _D3DKMT_LOCK *a1, __int64 a2, const GUID *a3)
{
  bool v4; // r12
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KTHREAD **v10; // rdi
  struct _D3DKMT_LOCK *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGDEVICE *v15; // rdi
  __int64 v16; // rcx
  int v17; // esi
  struct _KEVENT *v18; // r15
  struct _KEVENT *v19; // r15
  volatile signed __int64 *v20; // rdi
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  const GUID *v25; // r8
  int v26; // esi
  _QWORD *p_pData; // rcx
  _DWORD *p_hAllocation; // r14
  struct DXGADAPTER *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  const GUID *v32; // r8
  const GUID *v34; // r8
  __int64 v35; // rcx
  char v36; // si
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  const GUID *v42; // r8
  bool v43; // zf
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  char v47; // r15
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  const GUID *v51; // r8
  struct DXGDEVICE *v52; // [rsp+30h] [rbp-178h] BYREF
  struct DXGDEVICE *v53; // [rsp+38h] [rbp-170h] BYREF
  int v54; // [rsp+40h] [rbp-168h] BYREF
  __int64 v55; // [rsp+48h] [rbp-160h]
  char v56; // [rsp+50h] [rbp-158h]
  struct _D3DKMT_LOCK *v57; // [rsp+58h] [rbp-150h]
  struct _D3DKMT_LOCK v58; // [rsp+60h] [rbp-148h] BYREF
  struct DXGDEVICE *v59; // [rsp+90h] [rbp-118h] BYREF
  int v60; // [rsp+98h] [rbp-110h]
  __int64 v61; // [rsp+B0h] [rbp-F8h] BYREF
  struct DXGADAPTER *v62; // [rsp+B8h] [rbp-F0h]
  char v63; // [rsp+C0h] [rbp-E8h]
  _BYTE v64[8]; // [rsp+D0h] [rbp-D8h] BYREF
  _BYTE v65[16]; // [rsp+D8h] [rbp-D0h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-C0h]
  char v67; // [rsp+F0h] [rbp-B8h]
  int v68; // [rsp+F4h] [rbp-B4h]
  __int64 v69; // [rsp+F8h] [rbp-B0h]
  _BYTE v70[16]; // [rsp+118h] [rbp-90h] BYREF
  __int64 v71; // [rsp+128h] [rbp-80h]
  __int64 v72; // [rsp+158h] [rbp-50h]
  char v73; // [rsp+160h] [rbp-48h]

  v57 = a1;
  v54 = -1;
  v55 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v56 = 1;
    v54 = 2011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2011);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v54, 2011LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v38 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v10 = *v38;
    }
  }
  if ( !v10 )
  {
    v39 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v39 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v39);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v40);
    v43 = v56 == 0;
LABEL_61:
    if ( !v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v41, &EventProfilerExit, v42, v54);
    return 3221225485LL;
  }
  memset(&v58, 0, sizeof(v58));
  if ( v4 )
  {
    v11 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v11 = (struct _D3DKMT_LOCK *)MmUserProbeAddress;
    v58 = *v11;
  }
  else
  {
    v58 = *a1;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v53, v58.hDevice, v10, &v52);
  v15 = v52;
  if ( !v52 )
  {
    v44 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v44 + 24) = v58.hDevice;
    *(_QWORD *)(v44 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v44);
    if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v45);
    v43 = v56 == 0;
    goto LABEL_61;
  }
  v59 = v52;
  v16 = *(_QWORD *)(*((_QWORD *)v52 + 2) + 16LL);
  if ( *(int *)(v16 + 2184) >= 0x2000 || *(_BYTE *)(v16 + 2484) )
  {
    v17 = *((_DWORD *)DXGGLOBAL::GetGlobal(v16, v12) + 247);
    v60 = v17;
  }
  else
  {
    v17 = 0;
    v60 = 0;
  }
  v18 = (struct _KEVENT *)*((_QWORD *)v15 + 2);
  if ( *((_DWORD *)v15 + 82) == 2 )
  {
    v19 = v18 + 4;
    if ( KeReadStateEvent(v19) )
      goto LABEL_17;
  }
  else
  {
    v19 = v18 + 3;
    if ( KeReadStateEvent(v19) )
      goto LABEL_17;
  }
  KeWaitForSingleObject(v19, Executive, 0, 0, 0LL);
LABEL_17:
  KeEnterCriticalRegion();
  if ( v17 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v15 + 112, 0LL) )
      goto LABEL_19;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 96LL));
    v46 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
    if ( *(_DWORD *)(v46 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v46, 0xFFFFFFFFLL);
      v47 = 1;
    }
    else
    {
      v47 = 0;
    }
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v15 + 112));
    if ( !v47 )
    {
LABEL_53:
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_19;
    }
LABEL_74:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
    goto LABEL_53;
  }
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 13), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 96LL));
    v35 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
    if ( *(_DWORD *)(v35 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v35, 0xFFFFFFFFLL);
      v36 = 1;
    }
    else
    {
      v36 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v35, &EventBlockThread, v34, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 13), 1u);
    if ( !v36 )
      goto LABEL_53;
    goto LABEL_74;
  }
LABEL_19:
  v20 = *(volatile signed __int64 **)(*((_QWORD *)v15 + 2) + 16LL);
  v62 = (struct DXGADAPTER *)v20;
  _InterlockedIncrement64(v20 + 3);
  v61 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v20 + 15, 0LL);
  v63 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v64, (__int64)v52, 0, v21, 0);
  if ( v67 )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22);
    v48[3] = 275LL;
    v48[4] = 4LL;
    v48[5] = v65;
    v48[6] = 0LL;
    v48[7] = 0LL;
    WdLogEvent5_WdCriticalError(v48);
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v66 + 160) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v66 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v24, &EventBlockThread, v25, 72);
      KeWaitForSingleObject((PVOID)(v66 + 48), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v66, 0xFFFFFFFFLL, 0LL);
  }
  v68 = -1;
  v69 = 0LL;
  v67 = 1;
  if ( *(_DWORD *)(v72 + 464) != 1 )
    goto LABEL_81;
  if ( v73 )
  {
    COREACCESS::AcquireShared((__int64)v70, 0xFFFFFFFF, 0LL);
    if ( *(_DWORD *)(v71 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v70);
LABEL_81:
      COREACCESS::Release((COREACCESS *)v65);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v64);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v61);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v59);
      if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v49);
      if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v50, &EventProfilerExit, v51, v54);
      return 3221226166LL;
    }
  }
  v58.hDevice = 0;
  v26 = DXGDEVICE::Lock(v52, &v58, (struct COREDEVICEACCESS *)v64);
  if ( v26 >= 0 )
  {
    if ( v4 )
    {
      p_pData = &a1->pData;
      if ( (unsigned __int64)&a1->pData >= MmUserProbeAddress )
        p_pData = (_QWORD *)MmUserProbeAddress;
      *p_pData = v58.pData;
      p_hAllocation = &a1->hAllocation;
      if ( (unsigned __int64)p_hAllocation >= MmUserProbeAddress )
        p_hAllocation = (_DWORD *)MmUserProbeAddress;
      *p_hAllocation = v58.hAllocation;
    }
    else
    {
      a1->pData = v58.pData;
      a1->hAllocation = v58.hAllocation;
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v64);
  v29 = v62;
  ExReleasePushLockSharedEx((char *)v62 + 120, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v62 + 2), v62);
  if ( v60 )
    ExReleasePushLockSharedEx((char *)v52 + 112, 0LL);
  else
    ExReleaseResourceLite(*((PERESOURCE *)v52 + 13));
  KeLeaveCriticalRegion();
  if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v30);
  if ( v56 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v31, &EventProfilerExit, v32, v54);
  }
  return (unsigned int)v26;
}
