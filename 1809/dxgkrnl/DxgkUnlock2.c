/*
 * XREFs of DxgkUnlock2 @ 0x1C0106F60
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01FA0A0 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C01F79D8 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C021A61C (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 */

__int64 __fastcall DxgkUnlock2(struct _D3DKMT_UNLOCK2 *a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  bool v4; // r12
  int v5; // r13d
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  struct _KTHREAD **v9; // r15
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  const GUID *v14; // r8
  bool v15; // zf
  struct _D3DKMT_UNLOCK2 *v16; // r14
  __int64 v17; // rcx
  struct DXGDEVICE *v18; // rsi
  __int64 v19; // rax
  struct _KEVENT *v20; // rcx
  struct _LIST_ENTRY *Blink; // rax
  int v22; // eax
  int v23; // ebx
  struct _KEVENT *v24; // r12
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned __int8 v27; // bl
  const GUID *v28; // r8
  struct _KEVENT *v29; // r12
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  const GUID *v33; // r8
  __int64 v34; // rcx
  const GUID *v35; // r8
  __int64 v37; // rcx
  unsigned int v38; // ebx
  __int64 v39; // rcx
  const GUID *v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  _QWORD *v43; // rax
  __int64 v44; // r8
  __int64 v45; // rcx
  struct DXGALLOCATION *v46; // rcx
  struct DXGDEVICE *v47; // rbx
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rcx
  const GUID *v53; // r8
  struct DXGALLOCATION *v54; // rcx
  __int64 v55; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v57; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v62; // rax
  struct _KTHREAD *v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rcx
  int v66; // ebx
  __int64 v67; // rbx
  __int64 *v68; // rax
  __int64 v69; // rbx
  _QWORD *v70; // rax
  __int64 v71; // rcx
  const GUID *v72; // r8
  int v73; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v74; // [rsp+38h] [rbp-D0h]
  char v75; // [rsp+40h] [rbp-C8h]
  struct DXGDEVICE *v76; // [rsp+48h] [rbp-C0h] BYREF
  struct DXGDEVICE *v77; // [rsp+50h] [rbp-B8h] BYREF
  int v78; // [rsp+58h] [rbp-B0h]
  struct _D3DKMT_UNLOCK2 v79; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v80[8]; // [rsp+70h] [rbp-98h] BYREF
  struct _KTHREAD **v81[2]; // [rsp+78h] [rbp-90h] BYREF
  DXGADAPTER *v82; // [rsp+88h] [rbp-80h]
  char v83; // [rsp+90h] [rbp-78h]
  struct _KTHREAD **v84[5]; // [rsp+98h] [rbp-70h] BYREF
  char v85; // [rsp+C0h] [rbp-48h]
  int v86; // [rsp+118h] [rbp+10h]
  struct DXGDEVICE *v87; // [rsp+120h] [rbp+18h] BYREF
  struct DXGALLOCATION *v88; // [rsp+128h] [rbp+20h] BYREF

  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v73 = -1;
  v5 = 0;
  v74 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v75 = 1;
    v73 = 2104;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2104);
  }
  else
  {
    v75 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v73, 2104);
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
  if ( !v9 )
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v73);
    v15 = v75 == 0;
LABEL_78:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v13, &EventProfilerExit, v14, v73);
    return 3221225485LL;
  }
  v16 = &v79;
  if ( v4 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (struct _D3DKMT_UNLOCK2 *)MmUserProbeAddress;
    v79 = *a1;
  }
  else
  {
    v16 = a1;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v87, v16->hDevice, v9, &v76);
  v18 = v76;
  if ( !v76 )
  {
    v19 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v19 + 24) = v16->hDevice;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    goto LABEL_74;
  }
  v77 = v76;
  v20 = (struct _KEVENT *)*((_QWORD *)v76 + 2);
  Blink = v20->Header.WaitListHead.Blink;
  if ( SLODWORD(Blink[135].Flink) >= 0x2000 || BYTE4(Blink[153].Flink) )
  {
    v22 = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v20) + 255);
    v78 = v22;
    v20 = (struct _KEVENT *)*((_QWORD *)v18 + 2);
    v23 = v22;
    v5 = v22;
  }
  else
  {
    v78 = 0;
    v22 = 0;
    v23 = 0;
  }
  v86 = v22;
  if ( *((_DWORD *)v18 + 82) == 2 )
  {
    v24 = v20 + 4;
    if ( !KeReadStateEvent(v20 + 4) )
    {
      KeWaitForSingleObject(v24, Executive, 0, 0, 0LL);
      v23 = v5;
    }
  }
  else
  {
    v29 = v20 + 3;
    v23 = v22;
    if ( !KeReadStateEvent(v20 + 3) )
    {
      KeWaitForSingleObject(v29, Executive, 0, 0, 0LL);
      v23 = v86;
    }
  }
  KeEnterCriticalRegion();
  if ( v23 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v18 + 112, 0LL) )
      goto LABEL_38;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 96LL));
    v27 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v18 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18 + 13), 0) )
      goto LABEL_38;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 96LL));
    v27 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v26, &EventBlockThread, v28, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18 + 13), 1u);
  }
  if ( v27 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_38:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v80, (__int64)v18, 0, v25, 0);
  if ( v83 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30);
    v31[3] = 275LL;
    v31[4] = 4LL;
    v31[5] = v81;
    v31[6] = 0LL;
    v31[7] = 0LL;
    WdLogEvent5_WdCriticalError(v31);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v82 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v82 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v32, &EventBlockThread, v33, 72);
      KeWaitForSingleObject((char *)v82 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v82);
  }
  v83 = 1;
  if ( *((_DWORD *)v84[4] + 116) != 1 )
    goto LABEL_51;
  if ( v85 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)v84);
    if ( *((_DWORD *)v84[2] + 44) != 1 )
    {
      COREACCESS::Release(v84);
LABEL_51:
      COREACCESS::Release(v81);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v77);
      if ( v87 && _InterlockedExchangeAdd64((volatile signed __int64 *)v87 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v87 + 2), v87);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v73);
      if ( v75 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v34, &EventProfilerExit, v35, v73);
      return 3221226166LL;
    }
  }
  v37 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
  if ( *(_BYTE *)(v37 + 185) )
  {
    v38 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v37 + 4152),
            (struct DXGPROCESS *)v9,
            v76,
            v16,
            0);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v77);
    if ( v87 && _InterlockedExchangeAdd64((volatile signed __int64 *)v87 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v87 + 2), v87);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v73);
    if ( v75 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v39, &EventProfilerExit, v40, v73);
    return v38;
  }
  DXGPROCESS::GetAllocationSafe((__int64)v9, (DXGALLOCATIONREFERENCE *)&v88, v16->hAllocation);
  if ( !v88 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, 0LL, v42);
    v43[3] = v16->hAllocation;
LABEL_73:
    WdLogEvent5_WdWarning(v43);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v88);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v77);
LABEL_74:
    if ( v87 && _InterlockedExchangeAdd64((volatile signed __int64 *)v87 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v87 + 2), v87);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v73);
    v15 = v75 == 0;
    goto LABEL_78;
  }
  v44 = *(_QWORD *)(*((_QWORD *)v88 + 1) + 16LL);
  v45 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
  if ( *(_QWORD *)(v44 + 16) != v45 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v88, v44);
    v43[3] = v76;
    v46 = v88;
    v43[5] = -1073741811LL;
LABEL_72:
    v43[4] = v46;
    goto LABEL_73;
  }
  if ( !*((_QWORD *)v88 + 3) )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v88, v44);
    v43[3] = v16->hAllocation;
    v46 = v88;
    goto LABEL_72;
  }
  v47 = v76;
  v48 = DXGDEVICE::Unlock2(v76, v88, 1);
  v50 = v48;
  if ( v48 >= 0 )
  {
    v54 = v88;
    if ( v88 )
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)v88 + 11);
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
            goto LABEL_113;
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
LABEL_113:
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
      v47 = v76;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
    if ( v78 )
      ExReleasePushLockSharedEx((char *)v47 + 112, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v47 + 13));
    KeLeaveCriticalRegion();
    if ( v87 && _InterlockedExchangeAdd64((volatile signed __int64 *)v87 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v87 + 2), v87);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v73);
    if ( v75 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v71, &EventProfilerExit, v72, v73);
    return 0LL;
  }
  else
  {
    v51 = WdLogNewEntry5_WdError(v49);
    *(_QWORD *)(v51 + 24) = v88;
    *(_QWORD *)(v51 + 32) = v50;
    WdLogEvent5_WdError(v51);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v88);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v80);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v77);
    if ( v87 && _InterlockedExchangeAdd64((volatile signed __int64 *)v87 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v87 + 2), v87);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v73);
    if ( v75 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v52, &EventProfilerExit, v53, v73);
    return (unsigned int)v50;
  }
}
