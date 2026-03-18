/*
 * XREFs of DxgkMapGpuVirtualAddress @ 0x1C0135D50
 * Callers:
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02205C0 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
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
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001D630 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0023F34 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01EC944 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01EFA3C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C0225220 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E230 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkMapGpuVirtualAddress(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // r12
  bool v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KTHREAD **v12; // r15
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  const GUID *v18; // r8
  bool v19; // zf
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v20; // r14
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned __int64 Value; // rax
  __int64 v27; // rsi
  __int64 v28; // rcx
  int v29; // ebx
  struct _KEVENT *v30; // rdi
  struct _KEVENT *v31; // rcx
  __int64 v32; // r9
  const GUID *v33; // r8
  __int64 v34; // rcx
  char v35; // bl
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  const GUID *v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  const GUID *v44; // r8
  struct _EX_RUNDOWN_REF *v46; // rbx
  ULONG_PTR Count; // r10
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v55; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v57; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v59; // rax
  struct _KTHREAD *v60; // rdi
  __int64 v61; // rax
  int v62; // ebx
  __int64 v63; // rbx
  __int64 *v64; // rax
  __int64 v65; // rbx
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rdx
  struct _EX_RUNDOWN_REF *v70; // r9
  ULONG_PTR v71; // r13
  bool v72; // r8
  int v73; // eax
  _QWORD *v74; // rdx
  ULONG64 v75; // rcx
  unsigned int v76; // r12d
  unsigned int v77; // edi
  unsigned int HostProcess; // eax
  unsigned int v79; // r15d
  _QWORD *v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rcx
  struct _KTHREAD *v83; // rdi
  __int64 v84; // rax
  int v85; // ebx
  __int64 v86; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 *v89; // rax
  __int64 v90; // rax
  struct _KTHREAD *v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  int v95; // ebx
  __int64 v96; // rbx
  __int64 *v97; // rax
  __int64 v98; // rbx
  _QWORD *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  const GUID *v102; // r8
  int Timeout; // [rsp+20h] [rbp-1E8h]
  bool v104; // [rsp+40h] [rbp-1C8h]
  int v105; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v106; // [rsp+50h] [rbp-1B8h]
  char v107; // [rsp+58h] [rbp-1B0h]
  struct _EX_RUNDOWN_REF *v108; // [rsp+60h] [rbp-1A8h] BYREF
  DXGPAGINGQUEUE *v109; // [rsp+68h] [rbp-1A0h] BYREF
  struct DXGPAGINGQUEUE *v110; // [rsp+70h] [rbp-198h] BYREF
  __int64 v111; // [rsp+78h] [rbp-190h] BYREF
  int v112; // [rsp+80h] [rbp-188h]
  struct _EX_RUNDOWN_REF *v113; // [rsp+88h] [rbp-180h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v114; // [rsp+90h] [rbp-178h]
  struct _KTHREAD **v115; // [rsp+98h] [rbp-170h]
  ULONG64 v116; // [rsp+A0h] [rbp-168h]
  char v117[8]; // [rsp+C0h] [rbp-148h] BYREF
  _BYTE v118[16]; // [rsp+C8h] [rbp-140h] BYREF
  __int64 v119; // [rsp+D8h] [rbp-130h]
  char v120; // [rsp+E0h] [rbp-128h]
  int v121; // [rsp+E4h] [rbp-124h]
  __int64 v122; // [rsp+E8h] [rbp-120h]
  _BYTE v123[16]; // [rsp+108h] [rbp-100h] BYREF
  __int64 v124; // [rsp+118h] [rbp-F0h]
  __int64 v125; // [rsp+148h] [rbp-C0h]
  char v126; // [rsp+150h] [rbp-B8h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS v127; // [rsp+160h] [rbp-A8h] BYREF

  v3 = a1;
  v116 = a1;
  v105 = -1;
  v106 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v107 = 1;
    v105 = 2100;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2100);
  }
  else
  {
    v107 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v105, 2100LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v104 = v4;
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
  v115 = v12;
  if ( !v12 )
  {
    v15 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v105, v16);
    v19 = v107 == 0;
LABEL_160:
    if ( !v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, v105);
    return 3221225485LL;
  }
  memset(&v127, 0, sizeof(v127));
  if ( v4 )
  {
    v20 = &v127;
    v114 = &v127;
    v21 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)v3;
    if ( v3 >= MmUserProbeAddress )
      v21 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v127 = *v21;
  }
  else
  {
    v20 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)v3;
    v114 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)v3;
  }
  v110 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v109, v20->hPagingQueue, v12, &v110, 1);
  if ( !v110 )
  {
    v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v25 + 24) = v20->hPagingQueue;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
LABEL_156:
    WdLogEvent5_WdWarning(v25);
    goto LABEL_157;
  }
  Value = v20->Protection.Value;
  if ( (Value & 0x10) != 0 || Value >= 0x20 )
  {
    v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    goto LABEL_156;
  }
  v27 = *((_QWORD *)v110 + 2);
  v111 = v27;
  v28 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL);
  if ( *(int *)(v28 + 2184) >= 0x2000 || *(_BYTE *)(v28 + 2484) )
    v29 = *((_DWORD *)DXGGLOBAL::GetGlobal(v28, v22) + 247);
  else
    v29 = 0;
  v112 = v29;
  v30 = *(struct _KEVENT **)(v27 + 16);
  if ( *(_DWORD *)(v27 + 328) == 2 )
  {
    if ( KeReadStateEvent(v30 + 4) )
      goto LABEL_30;
    v31 = v30 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v30 + 3) )
      goto LABEL_30;
    v31 = v30 + 3;
  }
  KeWaitForSingleObject(v31, Executive, 0, 0, 0LL);
LABEL_30:
  KeEnterCriticalRegion();
  if ( v29 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v27 + 112, 0LL) )
      goto LABEL_47;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 96LL));
    v36 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL);
    if ( *(_DWORD *)(v36 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v36, 0xFFFFFFFFLL);
      v35 = 1;
    }
    else
    {
      v35 = 0;
    }
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v27 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v27 + 104), 0) )
      goto LABEL_47;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 96LL));
    v34 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL);
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
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v27 + 104), 1u);
  }
  if ( v35 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v27 + 16) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_47:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v117, v27, 0, v32, 0);
  if ( v120 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v37);
    v39[3] = 275LL;
    v39[4] = 4LL;
    v39[5] = v118;
    v39[6] = 0LL;
    v39[7] = 0LL;
    WdLogEvent5_WdCriticalError(v39);
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v119 + 160) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v119 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v40, &EventBlockThread, v41, 72);
      KeWaitForSingleObject((PVOID)(v119 + 48), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v119, 0x834u, 0LL);
  }
  v121 = 2100;
  v122 = 0LL;
  v120 = 1;
  if ( *(_DWORD *)(v125 + 464) != 1 )
    goto LABEL_60;
  if ( v126 )
  {
    COREACCESS::AcquireShared((__int64)v123, 0xFFFFFFFF, 0LL);
    if ( *(_DWORD *)(v124 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v123);
LABEL_60:
      COREACCESS::Release((COREACCESS *)v118);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v111);
      if ( v109 )
        DXGPAGINGQUEUE::ReleaseReference(v109, v42);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v105, v42);
      if ( v107 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v43, &EventProfilerExit, v44, v105);
      return 3221226166LL;
    }
  }
  v46 = 0LL;
  v108 = 0LL;
  Count = 0LL;
  if ( (*(_BYTE *)&v20->Protection.0 & 0xC) == 0 )
  {
    AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)v12, (DXGALLOCATIONREFERENCE *)&v113, v20->hAllocation);
    v46 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    v108 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    *(_QWORD *)AllocationSafe = 0LL;
    v50 = (__int64)v113;
    if ( v113 )
      ExReleaseRundownProtection(v113 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v50, v49) + 247) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v55 = WdLogNewEntry5_WdAssertion(v52, v51);
        *(_QWORD *)(v55 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v55);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v52, v51);
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        v57 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v57 = *ThreadWin32Thread;
        }
        if ( v57 )
          v59 = *(_QWORD *)(v57 + 80);
        else
          v59 = 0LL;
        if ( v59 )
        {
          v60 = KeGetCurrentThread();
          if ( !v60 )
          {
            v61 = WdLogNewEntry5_WdAssertion(v52, v51);
            *(_QWORD *)(v61 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v61);
          }
          v62 = PsGetCurrentProcessSessionId(v52, v51);
          if ( !v62 || (unsigned int)PsGetThreadSessionId(v60) != v62 )
            goto LABEL_90;
          v63 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v64 = (__int64 *)PsGetThreadWin32Thread(v60);
            if ( v64 )
              v63 = *v64;
          }
          if ( v63 )
            v65 = *(_QWORD *)(v63 + 80);
          else
LABEL_90:
            v65 = 0LL;
          if ( *(_DWORD *)(v65 + 136) )
          {
            v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v52, v51);
            v66[3] = 275LL;
            v66[4] = 38LL;
            v66[5] = *(int *)(v65 + 136);
            v66[6] = 0LL;
            v66[7] = 0LL;
            WdLogEvent5_WdCriticalError(v66);
          }
        }
      }
      v46 = v108;
    }
    if ( !v46 )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdError(v52, v51, v53);
      v67[3] = -1073741811LL;
      v67[4] = v20->hAllocation;
      v67[5] = v12;
LABEL_96:
      WdLogEvent5_WdError(v67);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v108, v68);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v111);
LABEL_157:
      if ( v109 )
        DXGPAGINGQUEUE::ReleaseReference(v109, v69);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v105, v69);
      v19 = v107 == 0;
      goto LABEL_160;
    }
    Count = v46[3].Count;
    if ( !Count && (*(_BYTE *)(v27 + 1749) & 1) == 0 )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdError(v52, v51, v53);
      v67[3] = -1073741811LL;
      v67[4] = v46;
      goto LABEL_96;
    }
    if ( v46[1].Count != v27 )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdError(v52, v51, v53);
      v67[3] = -1073741811LL;
      v67[4] = v46;
      v67[5] = v110;
      goto LABEL_96;
    }
  }
  v70 = *(struct _EX_RUNDOWN_REF **)(v27 + 16);
  v71 = v70[2].Count;
  v113 = v70;
  if ( *(_BYTE *)(v71 + 185) )
  {
    if ( v46 )
      v76 = v46[12].Count;
    else
      v76 = 0;
    v77 = *((_DWORD *)v110 + 7);
    HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v12);
    v73 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v71 + 4144),
            HostProcess,
            0LL,
            v77,
            v76,
            v20);
    v3 = v116;
  }
  else
  {
    v72 = *(_BYTE *)(v27 + 1751) || *(_DWORD *)(v27 + 328) == 2 && *(int *)(v71 + 2452) >= 2000;
    LOBYTE(Timeout) = v72;
    v73 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, ULONG_PTR, struct D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(v70[68].Count + 8) + 792LL))(
            v70[69].Count,
            *((_QWORD *)v110 + 4),
            Count,
            v20,
            Timeout,
            -2);
  }
  v79 = v73;
  if ( v73 >= 0 && v104 )
  {
    v80 = (_QWORD *)(v3 + 88);
    if ( v3 + 88 >= MmUserProbeAddress )
      v80 = (_QWORD *)MmUserProbeAddress;
    *v80 = v20->VirtualAddress;
    v74 = (_QWORD *)(v3 + 96);
    v75 = MmUserProbeAddress;
    if ( v3 + 96 >= MmUserProbeAddress )
      v74 = (_QWORD *)MmUserProbeAddress;
    *v74 = v20->PagingFenceValue;
  }
  if ( v46 )
    ExReleaseRundownProtection(v46 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v75, (__int64)v74) + 247) )
  {
    v83 = KeGetCurrentThread();
    if ( !v83 )
    {
      v84 = WdLogNewEntry5_WdAssertion(v82, v81);
      *(_QWORD *)(v84 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v84);
    }
    v85 = PsGetCurrentProcessSessionId(v82, v81);
    if ( v85 && (unsigned int)PsGetThreadSessionId(v83) == v85 )
    {
      v86 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v89 = (__int64 *)PsGetThreadWin32Thread(v83);
        if ( v89 )
          v86 = *v89;
      }
      if ( v86 )
        v90 = *(_QWORD *)(v86 + 80);
      else
        v90 = 0LL;
      if ( v90 )
      {
        v91 = KeGetCurrentThread();
        if ( !v91 )
        {
          v92 = WdLogNewEntry5_WdAssertion(v88, v87);
          *(_QWORD *)(v92 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v92);
        }
        v95 = PsGetCurrentProcessSessionId(v88, v87);
        if ( !v95 || (unsigned int)PsGetThreadSessionId(v91) != v95 )
          goto LABEL_143;
        v96 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          v97 = (__int64 *)PsGetThreadWin32Thread(v91);
          if ( v97 )
            v96 = *v97;
        }
        if ( v96 )
          v98 = *(_QWORD *)(v96 + 80);
        else
LABEL_143:
          v98 = 0LL;
        if ( *(_DWORD *)(v98 + 136) )
        {
          v99 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v94, v93);
          v99[3] = 275LL;
          v99[4] = 38LL;
          v99[5] = *(int *)(v98 + 136);
          v99[6] = 0LL;
          v99[7] = 0LL;
          WdLogEvent5_WdCriticalError(v99);
        }
      }
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
  if ( v112 )
    ExReleasePushLockSharedEx(v27 + 112, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v27 + 104));
  KeLeaveCriticalRegion();
  if ( v109 )
    DXGPAGINGQUEUE::ReleaseReference(v109, v100);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v105, v100);
  if ( v107 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v101, &EventProfilerExit, v102, v105);
  return v79;
}
