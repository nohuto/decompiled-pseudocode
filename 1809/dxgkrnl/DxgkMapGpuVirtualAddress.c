/*
 * XREFs of DxgkMapGpuVirtualAddress @ 0x1C01093F0
 * Callers:
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F09E0 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0011778 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014E00 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001D6A4 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0021074 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C01F520C (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkMapGpuVirtualAddress(ULONG64 a1, __int64 a2, const GUID *a3)
{
  int v4; // r13d
  bool v5; // si
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  struct _KTHREAD **v9; // r15
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  const GUID *v14; // r8
  bool v15; // zf
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v16; // r14
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 Value; // rax
  __int64 v23; // rsi
  struct _KEVENT *v24; // rcx
  struct _LIST_ENTRY *Blink; // rax
  int v26; // eax
  int v27; // ebx
  int v28; // r12d
  struct _KEVENT *v29; // rdi
  unsigned int v30; // r12d
  __int64 v31; // r9
  __int64 v32; // rcx
  unsigned __int8 v33; // bl
  const GUID *v34; // r8
  struct _KEVENT *v35; // rdi
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  const GUID *v39; // r8
  __int64 v40; // rcx
  const GUID *v41; // r8
  struct _EX_RUNDOWN_REF *v43; // rbx
  ULONG_PTR Count; // r10
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v49; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v51; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v53; // rax
  struct _KTHREAD *v54; // rdi
  __int64 v55; // rax
  int v56; // ebx
  __int64 v57; // rbx
  __int64 *v58; // rax
  __int64 v59; // rbx
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  struct _EX_RUNDOWN_REF *v62; // r9
  _BYTE *v63; // r13
  bool v64; // r8
  int v65; // eax
  ULONG64 v66; // rcx
  unsigned int v67; // edi
  unsigned int HostProcess; // eax
  unsigned int v69; // r15d
  ULONG64 v70; // r8
  _QWORD *v71; // rdx
  _QWORD *v72; // rdx
  __int64 v73; // rcx
  struct _KTHREAD *v74; // rdi
  __int64 v75; // rax
  int v76; // ebx
  __int64 v77; // rbx
  __int64 v78; // rcx
  __int64 *v79; // rax
  __int64 v80; // rax
  struct _KTHREAD *v81; // rdi
  __int64 v82; // rax
  __int64 v83; // rcx
  int v84; // ebx
  __int64 v85; // rbx
  __int64 *v86; // rax
  __int64 v87; // rbx
  _QWORD *v88; // rax
  __int64 v89; // rcx
  const GUID *v90; // r8
  int Timeout; // [rsp+20h] [rbp-1B8h]
  bool v92; // [rsp+40h] [rbp-198h]
  int v93; // [rsp+48h] [rbp-190h] BYREF
  __int64 v94; // [rsp+50h] [rbp-188h]
  char v95; // [rsp+58h] [rbp-180h]
  char v96[8]; // [rsp+60h] [rbp-178h] BYREF
  struct _EX_RUNDOWN_REF *v97; // [rsp+68h] [rbp-170h] BYREF
  struct DXGPAGINGQUEUE *v98; // [rsp+70h] [rbp-168h] BYREF
  __int64 v99; // [rsp+78h] [rbp-160h] BYREF
  int v100; // [rsp+80h] [rbp-158h]
  struct _EX_RUNDOWN_REF *v101; // [rsp+88h] [rbp-150h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v102; // [rsp+90h] [rbp-148h]
  struct _KTHREAD **v103; // [rsp+98h] [rbp-140h]
  ULONG64 v104; // [rsp+A0h] [rbp-138h]
  char v105[8]; // [rsp+B0h] [rbp-128h] BYREF
  struct _KTHREAD **v106[2]; // [rsp+B8h] [rbp-120h] BYREF
  DXGADAPTER *v107; // [rsp+C8h] [rbp-110h]
  char v108; // [rsp+D0h] [rbp-108h]
  struct _KTHREAD **v109[5]; // [rsp+D8h] [rbp-100h] BYREF
  char v110; // [rsp+100h] [rbp-D8h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS v111; // [rsp+130h] [rbp-A8h] BYREF

  v104 = a1;
  v93 = -1;
  v4 = 0;
  v94 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v95 = 1;
    v93 = 2100;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2100);
  }
  else
  {
    v95 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v93, 2100);
  v5 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v92 = v5;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v11 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v11;
      }
    }
  }
  v103 = v9;
  if ( !v9 )
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v93);
    v15 = v95 == 0;
LABEL_146:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v13, &EventProfilerExit, v14, v93);
    return 3221225485LL;
  }
  if ( v5 )
  {
    v16 = &v111;
    v102 = &v111;
    v17 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)a1;
    if ( a1 >= MmUserProbeAddress )
      v17 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v111 = *v17;
  }
  else
  {
    v16 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)a1;
    v102 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)a1;
  }
  v98 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v96, v16->hPagingQueue, v9, &v98, 1);
  if ( !v98 )
  {
    v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v21 + 24) = v16->hPagingQueue;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
LABEL_144:
    WdLogEvent5_WdWarning(v21);
    goto LABEL_145;
  }
  Value = v16->Protection.Value;
  if ( (Value & 0x10) != 0 || Value >= 0x20 )
  {
    v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    goto LABEL_144;
  }
  v23 = *((_QWORD *)v98 + 2);
  v99 = v23;
  v24 = *(struct _KEVENT **)(v23 + 16);
  Blink = v24->Header.WaitListHead.Blink;
  if ( SLODWORD(Blink[135].Flink) >= 0x2000 || BYTE4(Blink[153].Flink) )
  {
    v26 = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v24) + 255);
    v100 = v26;
    v24 = *(struct _KEVENT **)(v23 + 16);
    v27 = v26;
    v28 = v26;
    v4 = v26;
  }
  else
  {
    v100 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
  }
  if ( *(_DWORD *)(v23 + 328) == 2 )
  {
    v29 = v24 + 4;
    if ( !KeReadStateEvent(v24 + 4) )
    {
      KeWaitForSingleObject(v29, Executive, 0, 0, 0LL);
      v27 = v28;
    }
    goto LABEL_27;
  }
  v35 = v24 + 3;
  v27 = v26;
  if ( KeReadStateEvent(v24 + 3) )
  {
LABEL_27:
    v30 = 0;
    goto LABEL_28;
  }
  v30 = 0;
  KeWaitForSingleObject(v35, Executive, 0, 0, 0LL);
  v27 = v4;
LABEL_28:
  KeEnterCriticalRegion();
  if ( v27 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v23 + 112, 0LL) )
      goto LABEL_41;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 96LL));
    v33 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v23 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 104), 0) )
      goto LABEL_41;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 96LL));
    v33 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v32, &EventBlockThread, v34, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 104), 1u);
  }
  if ( v33 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_41:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v105, v23, 0, v31, 0);
  if ( v108 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36);
    v37[3] = 275LL;
    v37[4] = 4LL;
    v37[5] = v106;
    v37[6] = 0LL;
    v37[7] = 0LL;
    WdLogEvent5_WdCriticalError(v37);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v107 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v107 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v38, &EventBlockThread, v39, 72);
      KeWaitForSingleObject((char *)v107 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v107);
  }
  v108 = 1;
  if ( *((_DWORD *)v109[4] + 116) != 1 )
    goto LABEL_54;
  if ( v110 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)v109);
    if ( *((_DWORD *)v109[2] + 44) != 1 )
    {
      COREACCESS::Release(v109);
LABEL_54:
      COREACCESS::Release(v106);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v105);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v99);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v96);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v93);
      if ( v95 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v40, &EventProfilerExit, v41, v93);
      return 3221226166LL;
    }
  }
  v43 = 0LL;
  v97 = 0LL;
  Count = 0LL;
  if ( (*(_BYTE *)&v16->Protection.0 & 0xC) == 0 )
  {
    AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                (__int64)v9,
                                                (DXGALLOCATIONREFERENCE *)&v101,
                                                v16->hAllocation);
    DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v97, AllocationSafe);
    v46 = (__int64)v101;
    if ( v101 )
      ExReleaseRundownProtection(v101 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v46) + 255) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v49 = WdLogNewEntry5_WdAssertion(v47);
        *(_QWORD *)(v49 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v49);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v47);
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        v51 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v51 = *ThreadWin32Thread;
        }
        if ( v51 )
          v53 = *(_QWORD *)(v51 + 80);
        else
          v53 = 0LL;
        if ( v53 )
        {
          v54 = KeGetCurrentThread();
          if ( !v54 )
          {
            v55 = WdLogNewEntry5_WdAssertion(v47);
            *(_QWORD *)(v55 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v55);
          }
          v56 = PsGetCurrentProcessSessionId(v47);
          if ( !v56 || (unsigned int)PsGetThreadSessionId(v54) != v56 )
            goto LABEL_82;
          v57 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v58 = (__int64 *)PsGetThreadWin32Thread(v54);
            if ( v58 )
              v57 = *v58;
          }
          if ( v57 )
            v59 = *(_QWORD *)(v57 + 80);
          else
LABEL_82:
            v59 = 0LL;
          if ( *(_DWORD *)(v59 + 136) )
          {
            v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47);
            v60[3] = 275LL;
            v60[4] = 38LL;
            v60[5] = *(int *)(v59 + 136);
            v60[6] = 0LL;
            v60[7] = 0LL;
            WdLogEvent5_WdCriticalError(v60);
          }
        }
      }
    }
    v43 = v97;
    if ( !v97 )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdError(v47);
      v61[3] = -1073741811LL;
      v61[4] = v16->hAllocation;
      v61[5] = v9;
LABEL_87:
      WdLogEvent5_WdError(v61);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v97);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v105);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v99);
LABEL_145:
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v96);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v93);
      v15 = v95 == 0;
      goto LABEL_146;
    }
    Count = v97[3].Count;
    if ( !Count && (*(_BYTE *)(v23 + 1749) & 1) == 0 )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdError(v47);
      v61[3] = -1073741811LL;
      v61[4] = v43;
      goto LABEL_87;
    }
    if ( v97[1].Count != v23 )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdError(v47);
      v61[3] = -1073741811LL;
      v61[4] = v43;
      v61[5] = v98;
      goto LABEL_87;
    }
  }
  v62 = *(struct _EX_RUNDOWN_REF **)(v23 + 16);
  v63 = (_BYTE *)v62[2].Count;
  v101 = v62;
  if ( v63[185] )
  {
    if ( v43 )
      v30 = v43[12].Count;
    v67 = *((_DWORD *)v98 + 7);
    HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v9);
    v65 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v63 + 4152),
            HostProcess,
            0LL,
            v67,
            v30,
            v16);
  }
  else
  {
    v64 = *(_BYTE *)(v23 + 1751)
       || *(_DWORD *)(v23 + 328) == 2 && (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)v63) >= 2000;
    LOBYTE(Timeout) = v64;
    v65 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, ULONG_PTR, struct D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(v62[68].Count + 8) + 792LL))(
            v62[69].Count,
            *((_QWORD *)v98 + 4),
            Count,
            v16,
            Timeout,
            -2);
  }
  v69 = v65;
  if ( v65 >= 0 && v92 )
  {
    v70 = v104;
    v71 = (_QWORD *)(v104 + 88);
    if ( v104 + 88 >= MmUserProbeAddress )
      v71 = (_QWORD *)MmUserProbeAddress;
    *v71 = v16->VirtualAddress;
    v72 = (_QWORD *)(v70 + 96);
    v66 = MmUserProbeAddress;
    if ( v70 + 96 >= MmUserProbeAddress )
      v72 = (_QWORD *)MmUserProbeAddress;
    *v72 = v16->PagingFenceValue;
  }
  if ( v43 )
    ExReleaseRundownProtection(v43 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v66) + 255) )
  {
    v74 = KeGetCurrentThread();
    if ( !v74 )
    {
      v75 = WdLogNewEntry5_WdAssertion(v73);
      *(_QWORD *)(v75 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v75);
    }
    v76 = PsGetCurrentProcessSessionId(v73);
    if ( v76 && (unsigned int)PsGetThreadSessionId(v74) == v76 )
    {
      v77 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v79 = (__int64 *)PsGetThreadWin32Thread(v74);
        if ( v79 )
          v77 = *v79;
      }
      if ( v77 )
        v80 = *(_QWORD *)(v77 + 80);
      else
        v80 = 0LL;
      if ( v80 )
      {
        v81 = KeGetCurrentThread();
        if ( !v81 )
        {
          v82 = WdLogNewEntry5_WdAssertion(v78);
          *(_QWORD *)(v82 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v82);
        }
        v84 = PsGetCurrentProcessSessionId(v78);
        if ( !v84 || (unsigned int)PsGetThreadSessionId(v81) != v84 )
          goto LABEL_133;
        v85 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          v86 = (__int64 *)PsGetThreadWin32Thread(v81);
          if ( v86 )
            v85 = *v86;
        }
        if ( v85 )
          v87 = *(_QWORD *)(v85 + 80);
        else
LABEL_133:
          v87 = 0LL;
        if ( *(_DWORD *)(v87 + 136) )
        {
          v88 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v83);
          v88[3] = 275LL;
          v88[4] = 38LL;
          v88[5] = *(int *)(v87 + 136);
          v88[6] = 0LL;
          v88[7] = 0LL;
          WdLogEvent5_WdCriticalError(v88);
        }
      }
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v105);
  if ( v100 )
    ExReleasePushLockSharedEx(v23 + 112, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v23 + 104));
  KeLeaveCriticalRegion();
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v96);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v93);
  if ( v95 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v89, &EventProfilerExit, v90, v93);
  return v69;
}
