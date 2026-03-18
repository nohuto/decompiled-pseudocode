/*
 * XREFs of DxgkUnlock2 @ 0x1C0103EA0
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C022A200 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006D60 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00074E4 (-Release@COREACCESS@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C1C0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01EC944 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01EFA3C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C02279EC (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C024EBE0 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 */

__int64 __fastcall DxgkUnlock2(_D3DKMT_UNLOCK2 *a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  bool v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KTHREAD **v12; // r13
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  const GUID *v18; // r8
  bool v19; // zf
  _D3DKMT_UNLOCK2 *v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGDEVICE *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // esi
  struct _KEVENT *v30; // r14
  struct _KEVENT *v31; // rcx
  __int64 v32; // r9
  const GUID *v33; // r8
  __int64 v34; // rcx
  char v35; // si
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  const GUID *v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  const GUID *v44; // r8
  __int64 v45; // rcx
  unsigned int v46; // edi
  __int64 v47; // rdx
  __int64 v48; // rcx
  const GUID *v49; // r8
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rax
  struct DXGDEVICE *v57; // rdi
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  const GUID *v66; // r8
  struct DXGALLOCATION *v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v71; // rax
  int CurrentProcessSessionId; // edi
  __int64 v73; // rdi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v77; // rax
  struct _KTHREAD *v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  int v82; // edi
  __int64 v83; // rdi
  __int64 *v84; // rax
  __int64 v85; // rdi
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  const GUID *v89; // r8
  struct DXGDEVICE *v90; // [rsp+30h] [rbp-128h] BYREF
  int v91; // [rsp+38h] [rbp-120h] BYREF
  __int64 v92; // [rsp+40h] [rbp-118h]
  char v93; // [rsp+48h] [rbp-110h]
  _D3DKMT_UNLOCK2 v94; // [rsp+50h] [rbp-108h] BYREF
  struct DXGALLOCATION *v95; // [rsp+58h] [rbp-100h] BYREF
  struct DXGDEVICE *v96; // [rsp+60h] [rbp-F8h] BYREF
  struct DXGDEVICE *v97; // [rsp+68h] [rbp-F0h] BYREF
  int v98; // [rsp+70h] [rbp-E8h]
  _BYTE v99[8]; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v100[16]; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v101; // [rsp+98h] [rbp-C0h]
  char v102; // [rsp+A0h] [rbp-B8h]
  int v103; // [rsp+A4h] [rbp-B4h]
  __int64 v104; // [rsp+A8h] [rbp-B0h]
  _BYTE v105[16]; // [rsp+C8h] [rbp-90h] BYREF
  __int64 v106; // [rsp+D8h] [rbp-80h]
  __int64 v107; // [rsp+108h] [rbp-50h]
  char v108; // [rsp+110h] [rbp-48h]

  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v91 = -1;
  v92 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v93 = 1;
    v91 = 2104;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2104);
  }
  else
  {
    v93 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v91, 2104LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v14 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v12 = *v14;
    }
  }
  if ( !v12 )
  {
    v15 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v16);
    v19 = v93 == 0;
LABEL_11:
    if ( !v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, v91);
    return 3221225485LL;
  }
  v94 = 0LL;
  v21 = &v94;
  if ( v4 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_D3DKMT_UNLOCK2 *)MmUserProbeAddress;
    v94 = *a1;
  }
  else
  {
    v21 = a1;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v90, v21->hDevice, v12, &v96);
  v25 = v96;
  if ( !v96 )
  {
    v26 = WdLogNewEntry5_WdError(v23, v22, v24);
    *(_QWORD *)(v26 + 24) = v21->hDevice;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
LABEL_94:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v27);
    v19 = v93 == 0;
    goto LABEL_11;
  }
  v97 = v96;
  v28 = *(_QWORD *)(*((_QWORD *)v96 + 2) + 16LL);
  if ( *(int *)(v28 + 2184) >= 0x2000 || *(_BYTE *)(v28 + 2484) )
  {
    v29 = *((_DWORD *)DXGGLOBAL::GetGlobal(v28, v22) + 247);
    v98 = v29;
  }
  else
  {
    v29 = 0;
    v98 = 0;
  }
  v30 = (struct _KEVENT *)*((_QWORD *)v25 + 2);
  if ( *((_DWORD *)v25 + 82) == 2 )
  {
    if ( KeReadStateEvent(v30 + 4) )
      goto LABEL_35;
    v31 = v30 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v30 + 3) )
      goto LABEL_35;
    v31 = v30 + 3;
  }
  KeWaitForSingleObject(v31, Executive, 0, 0, 0LL);
LABEL_35:
  KeEnterCriticalRegion();
  if ( v29 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v25 + 112, 0LL) )
      goto LABEL_52;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 96LL));
    v36 = *(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL);
    if ( *(_DWORD *)(v36 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v36, 0xFFFFFFFFLL);
      v35 = 1;
    }
    else
    {
      v35 = 0;
    }
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v25 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v25 + 13), 0) )
      goto LABEL_52;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 96LL));
    v34 = *(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL);
    if ( *(_DWORD *)(v34 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v34, 0xFFFFFFFFLL);
      v35 = 1;
    }
    else
    {
      v35 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v34, &EventBlockThread, v33, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v25 + 13), 1u);
  }
  if ( v35 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v25 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_52:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v99, (__int64)v25, 0, v32, 0);
  if ( v102 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v37);
    v39[3] = 275LL;
    v39[4] = 4LL;
    v39[5] = v100;
    v39[6] = 0LL;
    v39[7] = 0LL;
    WdLogEvent5_WdCriticalError(v39);
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v101 + 160) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v101 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v40, &EventBlockThread, v41, 72);
      KeWaitForSingleObject((PVOID)(v101 + 48), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v101, 2104LL, 0LL);
  }
  v103 = 2104;
  v104 = 0LL;
  v102 = 1;
  if ( *(_DWORD *)(v107 + 464) != 1 )
    goto LABEL_65;
  if ( v108 )
  {
    COREACCESS::AcquireShared((__int64)v105, 0xFFFFFFFF, 0LL);
    if ( *(_DWORD *)(v106 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v105);
LABEL_65:
      COREACCESS::Release((COREACCESS *)v100);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v99);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
      if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v42);
      if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v43, &EventProfilerExit, v44, v91);
      return 3221226166LL;
    }
  }
  v45 = *(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL);
  if ( *(_BYTE *)(v45 + 185) )
  {
    v46 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v45 + 4144),
            (struct DXGPROCESS *)v12,
            v96,
            v21,
            0);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v99);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
    if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v47);
    if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v48, &EventProfilerExit, v49, v91);
    return v46;
  }
  else
  {
    DXGPROCESS::GetAllocationSafe((__int64)v12, (DXGALLOCATIONREFERENCE *)&v95, v21->hAllocation);
    if ( !v95 )
    {
      v52 = WdLogNewEntry5_WdWarning(v50, 0LL, v51);
      *(_QWORD *)(v52 + 24) = v21->hAllocation;
      WdLogEvent5_WdWarning(v52);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v95);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v99);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
      if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
      goto LABEL_94;
    }
    v53 = *(_QWORD *)(*((_QWORD *)v95 + 1) + 16LL);
    v54 = *(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL);
    if ( *(_QWORD *)(v53 + 16) != v54 )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v54, v95, v53);
      v55[3] = v96;
      v55[4] = v95;
      v55[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v55);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v95);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v99);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
      if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
      goto LABEL_94;
    }
    if ( !*((_QWORD *)v95 + 3) )
    {
      v56 = WdLogNewEntry5_WdWarning(v54, v95, v53);
      *(_QWORD *)(v56 + 24) = v21->hAllocation;
      *(_QWORD *)(v56 + 32) = v95;
      WdLogEvent5_WdWarning(v56);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v95);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v99);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
      if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
      goto LABEL_94;
    }
    v57 = v96;
    v58 = DXGDEVICE::Unlock2(v96, v95, 1);
    v62 = v58;
    if ( v58 >= 0 )
    {
      v67 = v95;
      if ( v95 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v95 + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v67, v59) + 247) )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !CurrentThread )
        {
          v71 = WdLogNewEntry5_WdAssertion(v69, v68);
          *(_QWORD *)(v71 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v71);
        }
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v69, v68);
        if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
        {
          v73 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v73 = *ThreadWin32Thread;
          }
          if ( v73 )
            v77 = *(_QWORD *)(v73 + 80);
          else
            v77 = 0LL;
          if ( v77 )
          {
            v78 = KeGetCurrentThread();
            if ( !v78 )
            {
              v79 = WdLogNewEntry5_WdAssertion(v75, v74);
              *(_QWORD *)(v79 + 24) = 94LL;
              WdLogEvent5_WdAssertion(v79);
            }
            v82 = PsGetCurrentProcessSessionId(v75, v74);
            if ( !v82 || (unsigned int)PsGetThreadSessionId(v78) != v82 )
              goto LABEL_126;
            v83 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              v84 = (__int64 *)PsGetThreadWin32Thread(v78);
              if ( v84 )
                v83 = *v84;
            }
            if ( v83 )
              v85 = *(_QWORD *)(v83 + 80);
            else
LABEL_126:
              v85 = 0LL;
            if ( *(_DWORD *)(v85 + 136) )
            {
              v86 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v81, v80);
              v86[3] = 275LL;
              v86[4] = 38LL;
              v86[5] = *(int *)(v85 + 136);
              v86[6] = 0LL;
              v86[7] = 0LL;
              WdLogEvent5_WdCriticalError(v86);
            }
          }
        }
        v57 = v96;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v99);
      if ( v98 )
        ExReleasePushLockSharedEx((char *)v57 + 112, 0LL);
      else
        ExReleaseResourceLite(*((PERESOURCE *)v57 + 13));
      KeLeaveCriticalRegion();
      if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v87);
      if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v88, &EventProfilerExit, v89, v91);
      return 0LL;
    }
    else
    {
      v63 = WdLogNewEntry5_WdError(v60, v59, v61);
      *(_QWORD *)(v63 + 24) = v95;
      *(_QWORD *)(v63 + 32) = v62;
      WdLogEvent5_WdError(v63);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v95);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v99);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
      if ( v90 && _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v90 + 2), v90);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v64);
      if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v65, &EventProfilerExit, v66, v91);
      return (unsigned int)v62;
    }
  }
}
