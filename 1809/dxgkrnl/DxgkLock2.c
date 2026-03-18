/*
 * XREFs of DxgkLock2 @ 0x1C0102FB0
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F03B0 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
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
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     ?VidMmLock@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0021EA8 (-VidMmLock@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C01F4B14 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C01F79D8 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C021A61C (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 */

__int64 __fastcall DxgkLock2(ULONG64 a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  bool v4; // r15
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  struct _KTHREAD **v8; // r13
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  const GUID *v14; // r8
  bool v15; // zf
  struct _D3DKMT_LOCK2 *v16; // r12
  struct _D3DKMT_LOCK2 *v17; // rax
  __int64 v18; // rcx
  struct DXGDEVICE *v19; // r15
  __int64 v20; // rax
  struct _KEVENT *v21; // rcx
  struct _LIST_ENTRY *Blink; // rax
  int v23; // eax
  int v24; // ebx
  struct _KEVENT *v25; // rsi
  struct _KEVENT *v26; // rsi
  __int64 v27; // r9
  __int64 v28; // rcx
  unsigned __int8 v29; // bl
  const GUID *v30; // r8
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  const GUID *v34; // r8
  __int64 v35; // rcx
  const GUID *v36; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  struct DXGALLOCATION *v41; // rbx
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r9
  struct DXGDEVICE *hAllocation; // rcx
  __int64 v47; // rax
  int v48; // eax
  struct DXGALLOCATION *v49; // rcx
  struct DXGDEVICE *v50; // rsi
  int v51; // eax
  _QWORD *v52; // rax
  _QWORD *v53; // rdx
  struct DXGALLOCATION *v54; // rcx
  __int64 v55; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v57; // rax
  int CurrentProcessSessionId; // esi
  __int64 v59; // rsi
  __int64 v60; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v62; // rax
  struct _KTHREAD *v63; // r15
  __int64 v64; // rax
  __int64 v65; // rcx
  int v66; // esi
  __int64 v67; // rsi
  __int64 *v68; // rax
  __int64 v69; // rsi
  _QWORD *v70; // rax
  __int64 v71; // rcx
  const GUID *v72; // r8
  unsigned int v73; // [rsp+28h] [rbp-140h]
  unsigned int v74; // [rsp+30h] [rbp-138h]
  struct DXGDEVICE *v75; // [rsp+40h] [rbp-128h] BYREF
  struct DXGALLOCATION *v76; // [rsp+48h] [rbp-120h] BYREF
  int v77; // [rsp+50h] [rbp-118h] BYREF
  __int64 v78; // [rsp+58h] [rbp-110h]
  char v79; // [rsp+60h] [rbp-108h]
  struct DXGDEVICE *v80; // [rsp+68h] [rbp-100h] BYREF
  struct DXGDEVICE *v81; // [rsp+70h] [rbp-F8h] BYREF
  int v82; // [rsp+78h] [rbp-F0h]
  __int64 v83; // [rsp+88h] [rbp-E0h]
  struct _KTHREAD **v84; // [rsp+90h] [rbp-D8h]
  struct _D3DKMT_LOCK2 *v85; // [rsp+98h] [rbp-D0h]
  struct _LIST_ENTRY *v86; // [rsp+A0h] [rbp-C8h]
  char v87[8]; // [rsp+B0h] [rbp-B8h] BYREF
  struct _KTHREAD **v88[2]; // [rsp+B8h] [rbp-B0h] BYREF
  DXGADAPTER *v89; // [rsp+C8h] [rbp-A0h]
  char v90; // [rsp+D0h] [rbp-98h]
  struct _KTHREAD **v91[5]; // [rsp+D8h] [rbp-90h] BYREF
  char v92; // [rsp+100h] [rbp-68h]
  struct _D3DKMT_LOCK2 v93; // [rsp+110h] [rbp-58h] BYREF
  bool v95; // [rsp+178h] [rbp+10h]
  int v96; // [rsp+180h] [rbp+18h]
  int v97; // [rsp+188h] [rbp+20h]

  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v95 = v4;
  v77 = -1;
  v78 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v79 = 1;
    v77 = 2103;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2103);
  }
  else
  {
    v79 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v77, 2103);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v10 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v10;
      }
    }
  }
  v84 = v8;
  if ( !v8 )
  {
    v11 = WdLogNewEntry5_WdError(v7);
    v12 = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v77);
    v15 = v79 == 0;
LABEL_79:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v13, &EventProfilerExit, v14, v77);
    return v12;
  }
  v16 = &v93;
  v85 = &v93;
  if ( v4 )
  {
    v17 = (struct _D3DKMT_LOCK2 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v17 = (struct _D3DKMT_LOCK2 *)MmUserProbeAddress;
    v93 = *v17;
  }
  else
  {
    v16 = (struct _D3DKMT_LOCK2 *)a1;
    v85 = (struct _D3DKMT_LOCK2 *)a1;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v75, v16->hDevice, v8, &v80);
  v19 = v80;
  if ( !v80 )
  {
    v20 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v20 + 24) = v16->hDevice;
    v12 = -1073741811;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    goto LABEL_75;
  }
  v21 = (struct _KEVENT *)*((_QWORD *)v80 + 2);
  Blink = v21->Header.WaitListHead.Blink;
  v83 = (__int64)Blink;
  v86 = Blink;
  v81 = v80;
  if ( SLODWORD(Blink[135].Flink) >= 0x2000 || BYTE4(Blink[153].Flink) )
  {
    v23 = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v21) + 255);
    v82 = v23;
    v21 = (struct _KEVENT *)*((_QWORD *)v19 + 2);
    v24 = v23;
    v96 = v23;
    v97 = v23;
  }
  else
  {
    v82 = 0;
    v23 = 0;
    v24 = 0;
    v96 = 0;
    v97 = 0;
  }
  if ( *((_DWORD *)v19 + 82) == 2 )
  {
    v25 = v21 + 4;
    if ( !KeReadStateEvent(v21 + 4) )
    {
      KeWaitForSingleObject(v25, Executive, 0, 0, 0LL);
      v24 = v96;
    }
  }
  else
  {
    v26 = v21 + 3;
    v24 = v23;
    if ( !KeReadStateEvent(v21 + 3) )
    {
      KeWaitForSingleObject(v26, Executive, 0, 0, 0LL);
      v24 = v97;
    }
  }
  KeEnterCriticalRegion();
  if ( v24 )
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v19 + 112, 0LL) )
    {
      KeLeaveCriticalRegion();
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 96LL));
      v29 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
      DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v19 + 112));
LABEL_35:
      if ( v29 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v19 + 13), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 96LL));
    v29 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v28, &EventBlockThread, v30, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v19 + 13), 1u);
    goto LABEL_35;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v87, (__int64)v19, 0, v27, 0);
  if ( v90 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31);
    v32[3] = 275LL;
    v32[4] = 4LL;
    v32[5] = v88;
    v32[6] = 0LL;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v89 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v89 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v33, &EventBlockThread, v34, 72);
      KeWaitForSingleObject((char *)v89 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v89);
  }
  v90 = 1;
  if ( *((_DWORD *)v91[4] + 116) != 1 )
    goto LABEL_51;
  if ( v92 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)v91);
    if ( *((_DWORD *)v91[2] + 44) != 1 )
    {
      COREACCESS::Release(v91);
LABEL_51:
      COREACCESS::Release(v88);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v81);
      if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v77);
      if ( v79 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v35, &EventProfilerExit, v36, v77);
      return 3221226166LL;
    }
  }
  DXGPROCESS::GetAllocationSafe((__int64)v8, (DXGALLOCATIONREFERENCE *)&v76, v16->hAllocation);
  v41 = v76;
  if ( !v76 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40);
    v42[3] = v16->hAllocation;
    v12 = -1073741811;
    v42[4] = -1073741811LL;
LABEL_74:
    WdLogEvent5_WdWarning(v42);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v76);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v81);
LABEL_75:
    if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v77);
    v15 = v79 == 0;
    goto LABEL_79;
  }
  v43 = *(_QWORD *)(*((_QWORD *)v76 + 1) + 16LL);
  v44 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL);
  if ( *(_QWORD *)(v43 + 16) != v44 )
    goto LABEL_72;
  v45 = v83;
  v40 = *(unsigned __int8 *)(v83 + 185);
  if ( !(_BYTE)v40 && !*((_QWORD *)v76 + 3) )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v44, v40);
    hAllocation = (struct DXGDEVICE *)v16->hAllocation;
LABEL_73:
    v42[3] = hAllocation;
    v49 = v76;
    v12 = -1073741811;
    v42[5] = -1073741811LL;
    v42[4] = v49;
    goto LABEL_74;
  }
  v47 = *((_QWORD *)v76 + 5);
  if ( v47 )
  {
    v43 = *(unsigned int *)(v47 + 4);
    if ( (v43 & 1) != 0 && (v43 & 2) == 0 )
    {
      v43 = *(unsigned int *)(*(_QWORD *)(v47 + 56) + 12LL);
      if ( (v43 & 0x200) == 0 && (v43 & 0x400) == 0 )
      {
        v48 = *(_DWORD *)(v44 + 308);
        if ( (v48 & 0x10) == 0 && (v48 & 8) == 0 && (*(_DWORD *)(v44 + 1892) & 0x80u) == 0 )
        {
LABEL_72:
          v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v44, v40);
          hAllocation = v80;
          goto LABEL_73;
        }
      }
    }
  }
  v50 = v80;
  if ( (_BYTE)v40 )
  {
    v51 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v83 + 4152),
            (struct DXGPROCESS *)v8,
            v80,
            v16,
            0,
            v73,
            v74);
LABEL_90:
    v12 = v51;
    if ( v51 >= 0 && v95 )
    {
      v53 = (_QWORD *)(a1 + 16);
      if ( a1 + 16 >= MmUserProbeAddress )
        v53 = (_QWORD *)MmUserProbeAddress;
      *v53 = v16->pData;
    }
    goto LABEL_95;
  }
  if ( !*((_DWORD *)v80 + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v80 + 13));
  if ( *((struct DXGDEVICE **)v41 + 1) == v50 )
  {
    v51 = VIDMM_EXPORT::VidMmLock(
            *(VIDMM_EXPORT **)(*((_QWORD *)v19 + 2) + 544LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)v19 + 2) + 552LL),
            *((struct _VIDMM_MULTI_ALLOC **)v41 + 3),
            v45,
            &v16->pData);
    goto LABEL_90;
  }
  v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v44, v40);
  v52[3] = v41;
  v52[4] = v50;
  v52[5] = *((_QWORD *)v41 + 1);
  v12 = -1073741811;
  v52[6] = -1073741811LL;
  WdLogEvent5_WdWarning(v52);
LABEL_95:
  v54 = v76;
  if ( v76 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v76 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v54) + 255) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v57 = WdLogNewEntry5_WdAssertion(v55);
      *(_QWORD *)(v57 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v57);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v55);
    if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
    {
      v59 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v59 = *ThreadWin32Thread;
      }
      if ( v59 )
        v62 = *(_QWORD *)(v59 + 80);
      else
        v62 = 0LL;
      if ( v62 )
      {
        v63 = KeGetCurrentThread();
        if ( !v63 )
        {
          v64 = WdLogNewEntry5_WdAssertion(v60);
          *(_QWORD *)(v64 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v64);
        }
        v66 = PsGetCurrentProcessSessionId(v60);
        if ( !v66 || (unsigned int)PsGetThreadSessionId(v63) != v66 )
          goto LABEL_118;
        v67 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          v68 = (__int64 *)PsGetThreadWin32Thread(v63);
          if ( v68 )
            v67 = *v68;
        }
        if ( v67 )
          v69 = *(_QWORD *)(v67 + 80);
        else
LABEL_118:
          v69 = 0LL;
        if ( *(_DWORD *)(v69 + 136) )
        {
          v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v65);
          v70[3] = 275LL;
          v70[4] = 38LL;
          v70[5] = *(int *)(v69 + 136);
          v70[6] = 0LL;
          v70[7] = 0LL;
          WdLogEvent5_WdCriticalError(v70);
        }
      }
    }
    v50 = v80;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
  if ( v82 )
    ExReleasePushLockSharedEx((char *)v50 + 112, 0LL);
  else
    ExReleaseResourceLite(*((PERESOURCE *)v50 + 13));
  KeLeaveCriticalRegion();
  if ( v75 && _InterlockedExchangeAdd64((volatile signed __int64 *)v75 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v77);
  if ( !v79 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
    return v12;
  McTemplateK0q(v71, &EventProfilerExit, v72, v77);
  return v12;
}
