/*
 * XREFs of DxgkLock2 @ 0x1C0109B90
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0220560 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007664 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C3B0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0225140 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C022805C (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C024F260 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 */

__int64 __fastcall DxgkLock2(ULONG64 a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  bool v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KTHREAD **v12; // r12
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v14; // rdi
  __int64 v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  const GUID *v19; // r8
  bool v20; // zf
  struct _D3DKMT_LOCK2 *v21; // r15
  struct _D3DKMT_LOCK2 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGDEVICE *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // esi
  struct _KEVENT *v31; // r13
  struct _KEVENT *v32; // rcx
  __int64 v33; // r9
  const GUID *v34; // r8
  __int64 v35; // rcx
  char v36; // si
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rcx
  const GUID *v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  const GUID *v45; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  struct DXGALLOCATION *v50; // r13
  _QWORD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  struct DXGDEVICE *hAllocation; // rcx
  char v55; // r9
  __int64 v56; // rax
  int v57; // eax
  struct DXGDEVICE *v58; // rsi
  int v59; // eax
  _QWORD *v60; // rdx
  _QWORD *v61; // rax
  struct DXGALLOCATION *v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v66; // rax
  int CurrentProcessSessionId; // esi
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v72; // rax
  struct _KTHREAD *v73; // r15
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  int v77; // esi
  __int64 v78; // rsi
  __int64 *v79; // rax
  __int64 v80; // rsi
  _QWORD *v81; // rax
  unsigned int v82; // [rsp+28h] [rbp-190h]
  unsigned int v83; // [rsp+30h] [rbp-188h]
  bool v84; // [rsp+40h] [rbp-178h]
  struct DXGDEVICE *v85; // [rsp+48h] [rbp-170h] BYREF
  struct DXGALLOCATION *v86; // [rsp+50h] [rbp-168h] BYREF
  int v87; // [rsp+58h] [rbp-160h] BYREF
  __int64 v88; // [rsp+60h] [rbp-158h]
  char v89; // [rsp+68h] [rbp-150h]
  struct DXGDEVICE *v90[2]; // [rsp+70h] [rbp-148h] BYREF
  struct DXGDEVICE *v91; // [rsp+80h] [rbp-138h] BYREF
  int v92; // [rsp+88h] [rbp-130h]
  __int64 v93; // [rsp+90h] [rbp-128h]
  struct _KTHREAD **v94; // [rsp+98h] [rbp-120h]
  struct _D3DKMT_LOCK2 *v95; // [rsp+A0h] [rbp-118h]
  ULONG64 v96; // [rsp+B0h] [rbp-108h]
  ULONG64 v97; // [rsp+B8h] [rbp-100h]
  struct _D3DKMT_LOCK2 v98; // [rsp+C0h] [rbp-F8h] BYREF
  _BYTE v99[8]; // [rsp+E0h] [rbp-D8h] BYREF
  _BYTE v100[16]; // [rsp+E8h] [rbp-D0h] BYREF
  __int64 v101; // [rsp+F8h] [rbp-C0h]
  char v102; // [rsp+100h] [rbp-B8h]
  int v103; // [rsp+104h] [rbp-B4h]
  __int64 v104; // [rsp+108h] [rbp-B0h]
  _BYTE v105[16]; // [rsp+128h] [rbp-90h] BYREF
  __int64 v106; // [rsp+138h] [rbp-80h]
  __int64 v107; // [rsp+168h] [rbp-50h]
  char v108; // [rsp+170h] [rbp-48h]

  v96 = a1;
  v97 = a1;
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v84 = v4;
  v87 = -1;
  v88 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v89 = 1;
    v87 = 2103;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2103);
  }
  else
  {
    v89 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v87, 2103LL);
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
  v94 = v12;
  if ( !v12 )
  {
    v15 = WdLogNewEntry5_WdError(v10, v9, v11);
    v16 = -1073741811;
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87, v17);
    v20 = v89 == 0;
LABEL_129:
    if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v18, &EventProfilerExit, v19, v87);
    return v16;
  }
  memset(&v98, 0, sizeof(v98));
  v21 = &v98;
  v95 = &v98;
  if ( v4 )
  {
    v22 = (struct _D3DKMT_LOCK2 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v22 = (struct _D3DKMT_LOCK2 *)MmUserProbeAddress;
    v98 = *v22;
  }
  else
  {
    v21 = (struct _D3DKMT_LOCK2 *)a1;
    v95 = (struct _D3DKMT_LOCK2 *)a1;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v85, v21->hDevice, v12, v90);
  v26 = v90[0];
  if ( !v90[0] )
  {
    v27 = WdLogNewEntry5_WdError(v24, v23, v25);
    *(_QWORD *)(v27 + 24) = v21->hDevice;
    v16 = -1073741811;
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    goto LABEL_125;
  }
  v29 = *(_QWORD *)(*((_QWORD *)v90[0] + 2) + 16LL);
  v93 = v29;
  v90[1] = (struct DXGDEVICE *)v29;
  v91 = v90[0];
  if ( *(int *)(v29 + 2184) >= 0x2000 || *(_BYTE *)(v29 + 2484) )
  {
    v30 = *((_DWORD *)DXGGLOBAL::GetGlobal(v24, v23) + 247);
    v92 = v30;
  }
  else
  {
    v30 = 0;
    v92 = 0;
  }
  v31 = (struct _KEVENT *)*((_QWORD *)v26 + 2);
  if ( *((_DWORD *)v26 + 82) == 2 )
  {
    if ( KeReadStateEvent(v31 + 4) )
      goto LABEL_28;
    v32 = v31 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v31 + 3) )
      goto LABEL_28;
    v32 = v31 + 3;
  }
  KeWaitForSingleObject(v32, Executive, 0, 0, 0LL);
LABEL_28:
  KeEnterCriticalRegion();
  if ( v30 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v26 + 112, 0LL) )
      goto LABEL_45;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL) + 96LL));
    v37 = *(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL);
    if ( *(_DWORD *)(v37 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v37, 0xFFFFFFFFLL);
      v36 = 1;
    }
    else
    {
      v36 = 0;
    }
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v26 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v26 + 13), 0) )
      goto LABEL_45;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL) + 96LL));
    v35 = *(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL);
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
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v26 + 13), 1u);
  }
  if ( v36 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v26 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_45:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v99, (__int64)v26, 0, v33, 0);
  if ( v102 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39, v38);
    v40[3] = 275LL;
    v40[4] = 4LL;
    v40[5] = v100;
    v40[6] = 0LL;
    v40[7] = 0LL;
    WdLogEvent5_WdCriticalError(v40);
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v101 + 160) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v101 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v41, &EventBlockThread, v42, 72);
      KeWaitForSingleObject((PVOID)(v101 + 48), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v101, 2103LL, 0LL);
  }
  v103 = 2103;
  v104 = 0LL;
  v102 = 1;
  if ( *(_DWORD *)(v107 + 464) != 1 )
    goto LABEL_58;
  if ( !v108 || (COREACCESS::AcquireShared((__int64)v105, 0xFFFFFFFF, 0LL), *(_DWORD *)(v106 + 176) == 1) )
  {
    DXGPROCESS::GetAllocationSafe((__int64)v12, (DXGALLOCATIONREFERENCE *)&v86, v21->hAllocation);
    v50 = v86;
    if ( !v86 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, v49);
      v51[3] = v21->hAllocation;
      v16 = -1073741811;
      v51[4] = -1073741811LL;
LABEL_67:
      WdLogEvent5_WdWarning(v51);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v86);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v99);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v91);
LABEL_125:
      if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87, v28);
      v20 = v89 == 0;
      goto LABEL_129;
    }
    v52 = *(_QWORD *)(*((_QWORD *)v86 + 1) + 16LL);
    v53 = *(_QWORD *)(*((_QWORD *)v26 + 2) + 16LL);
    if ( *(_QWORD *)(v52 + 16) != v53 )
      goto LABEL_69;
    v49 = v93;
    v55 = *(_BYTE *)(v93 + 185);
    if ( !v55 && !*((_QWORD *)v86 + 3) )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v53, v93);
      hAllocation = (struct DXGDEVICE *)v21->hAllocation;
      goto LABEL_70;
    }
    v56 = *((_QWORD *)v86 + 5);
    if ( v56 )
    {
      v52 = *(unsigned int *)(v56 + 4);
      if ( (v52 & 1) != 0 && (v52 & 2) == 0 )
      {
        v52 = *(unsigned int *)(*(_QWORD *)(v56 + 56) + 12LL);
        if ( (v52 & 0x200) == 0 && (v52 & 0x400) == 0 )
        {
          v57 = *(_DWORD *)(v53 + 308);
          if ( (v57 & 0x10) == 0 && (v57 & 8) == 0 && (*(_DWORD *)(v53 + 1916) & 0x80u) == 0 )
          {
LABEL_69:
            v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v53, v49);
            hAllocation = v90[0];
LABEL_70:
            v51[3] = hAllocation;
            v51[4] = v86;
            v16 = -1073741811;
            v51[5] = -1073741811LL;
            goto LABEL_67;
          }
        }
      }
    }
    v58 = v90[0];
    if ( v55 )
    {
      v59 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v93 + 4144),
              (struct DXGPROCESS *)v12,
              v90[0],
              v21,
              0,
              v82,
              v83);
    }
    else
    {
      if ( !*((_DWORD *)v90[0] + 18) )
        ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v90[0] + 13));
      if ( *((struct DXGDEVICE **)v50 + 1) != v58 )
      {
        v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v53, v49);
        v61[3] = v50;
        v61[4] = v58;
        v61[5] = *((_QWORD *)v50 + 1);
        v16 = -1073741811;
        v61[6] = -1073741811LL;
        WdLogEvent5_WdWarning(v61);
LABEL_94:
        v62 = v86;
        if ( v86 )
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)v86 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v62, (__int64)v60) + 247) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v66 = WdLogNewEntry5_WdAssertion(v64, v63);
            *(_QWORD *)(v66 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v66);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v64, v63);
          if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            v68 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
                v68 = *ThreadWin32Thread;
            }
            if ( v68 )
              v72 = *(_QWORD *)(v68 + 80);
            else
              v72 = 0LL;
            if ( v72 )
            {
              v73 = KeGetCurrentThread();
              if ( !v73 )
              {
                v74 = WdLogNewEntry5_WdAssertion(v70, v69);
                *(_QWORD *)(v74 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v74);
              }
              v77 = PsGetCurrentProcessSessionId(v70, v69);
              if ( !v77 || (unsigned int)PsGetThreadSessionId(v73) != v77 )
                goto LABEL_117;
              v78 = 0LL;
              if ( !IsThreadCrossSessionAttached() )
              {
                v79 = (__int64 *)PsGetThreadWin32Thread(v73);
                if ( v79 )
                  v78 = *v79;
              }
              if ( v78 )
                v80 = *(_QWORD *)(v78 + 80);
              else
LABEL_117:
                v80 = 0LL;
              if ( *(_DWORD *)(v80 + 136) )
              {
                v81 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v76, v75);
                v81[3] = 275LL;
                v81[4] = 38LL;
                v81[5] = *(int *)(v80 + 136);
                v81[6] = 0LL;
                v81[7] = 0LL;
                WdLogEvent5_WdCriticalError(v81);
              }
            }
          }
          v58 = v90[0];
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v99);
        if ( v92 )
          ExReleasePushLockSharedEx((char *)v58 + 112, 0LL);
        else
          ExReleaseResourceLite(*((PERESOURCE *)v58 + 13));
        KeLeaveCriticalRegion();
        goto LABEL_125;
      }
      v59 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, PVOID *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 2)
                                                                                               + 544LL)
                                                                                   + 8LL)
                                                                       + 808LL))(
              *(_QWORD *)(*((_QWORD *)v26 + 2) + 552LL),
              *((_QWORD *)v50 + 3),
              0LL,
              &v21->pData);
    }
    v16 = v59;
    if ( v59 >= 0 && v84 )
    {
      v60 = (_QWORD *)(v96 + 16);
      if ( v96 + 16 >= MmUserProbeAddress )
        v60 = (_QWORD *)MmUserProbeAddress;
      *v60 = v21->pData;
    }
    goto LABEL_94;
  }
  COREACCESS::Release((COREACCESS *)v105);
LABEL_58:
  COREACCESS::Release((COREACCESS *)v100);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v99);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v91);
  if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87, v43);
  if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v44, &EventProfilerExit, v45, v87);
  return 3221226166LL;
}
