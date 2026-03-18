/*
 * XREFs of DxgkSetQueuedLimit @ 0x1C01392C0
 * Callers:
 *     ?VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0229340 (-VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1C0139688 (-SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLIMIT@@@Z @ 0x1C02268C0 (-VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 */

__int64 __fastcall DxgkSetQueuedLimit(__int64 a1, __int64 a2, const GUID *a3)
{
  _D3DKMT_SETQUEUEDLIMIT *v3; // r15
  bool v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KTHREAD **v12; // rsi
  _D3DKMT_SETQUEUEDLIMIT *v13; // r12
  _D3DKMT_SETQUEUEDLIMIT *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGDEVICE *v18; // rdi
  struct _KEVENT *v19; // r14
  struct _KEVENT *v20; // r14
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  const GUID *v25; // r8
  struct DXGDEVICE *v26; // r14
  D3DKMT_QUEUEDLIMIT_TYPE Type; // eax
  int v28; // eax
  unsigned int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // rcx
  const GUID *v32; // r8
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  const GUID *v40; // r8
  __int64 v41; // rcx
  char v42; // r14
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  const GUID *v46; // r8
  struct DXGDEVICE *v47; // [rsp+30h] [rbp-128h] BYREF
  struct DXGDEVICE *v48; // [rsp+38h] [rbp-120h] BYREF
  int v49; // [rsp+40h] [rbp-118h] BYREF
  __int64 v50; // [rsp+48h] [rbp-110h]
  char v51; // [rsp+50h] [rbp-108h]
  struct DXGDEVICE *v52; // [rsp+58h] [rbp-100h] BYREF
  int v53; // [rsp+60h] [rbp-F8h]
  _D3DKMT_SETQUEUEDLIMIT v54; // [rsp+68h] [rbp-F0h] BYREF
  _BYTE v55[8]; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v56[16]; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v57; // [rsp+98h] [rbp-C0h]
  char v58; // [rsp+A0h] [rbp-B8h]
  int v59; // [rsp+A4h] [rbp-B4h]
  __int64 v60; // [rsp+A8h] [rbp-B0h]
  _BYTE v61[16]; // [rsp+C8h] [rbp-90h] BYREF
  __int64 v62; // [rsp+D8h] [rbp-80h]
  __int64 v63; // [rsp+108h] [rbp-50h]
  char v64; // [rsp+110h] [rbp-48h]

  v3 = (_D3DKMT_SETQUEUEDLIMIT *)a1;
  v49 = -1;
  v50 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v51 = 1;
    v49 = 2035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2035);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v49, 2035LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v35 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v12 = *v35;
    }
  }
  if ( !v12 )
  {
    v36 = WdLogNewEntry5_WdError(v10, v9, v11);
    v29 = -1073741811;
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v37);
    if ( !v51 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v29;
    goto LABEL_77;
  }
  *(_QWORD *)&v54.hDevice = 0LL;
  v54.8 = 0LL;
  v13 = &v54;
  if ( v4 )
  {
    v14 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v14 = (_D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
    v54 = *v14;
  }
  else
  {
    v13 = v3;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v47, v13->hDevice, v12, &v48);
  v18 = v48;
  if ( !v48 )
  {
    v38 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v38 + 24) = v13->hDevice;
    v29 = -1073741811;
    *(_QWORD *)(v38 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v38);
    if ( v47 && _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v39);
    if ( !v51 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v29;
LABEL_77:
    McTemplateK0q(v31, &EventProfilerExit, v32, v49);
    return v29;
  }
  v52 = v48;
  v19 = (struct _KEVENT *)*((_QWORD *)v48 + 2);
  if ( *((_DWORD *)v48 + 82) == 2 )
  {
    v20 = v19 + 4;
    if ( KeReadStateEvent(v20) )
      goto LABEL_13;
  }
  else
  {
    v20 = v19 + 3;
    if ( KeReadStateEvent(v20) )
      goto LABEL_13;
  }
  KeWaitForSingleObject(v20, Executive, 0, 0, 0LL);
LABEL_13:
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18 + 13), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 96LL));
    v41 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
    if ( *(_DWORD *)(v41 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v41, 0xFFFFFFFFLL);
      v42 = 1;
    }
    else
    {
      v42 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v41, &EventBlockThread, v40, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18 + 13), 1u);
    if ( v42 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v53 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, (__int64)v18, 2, v21, 0);
  if ( v58 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22);
    v43[3] = 275LL;
    v43[4] = 4LL;
    v43[5] = v56;
    v43[6] = 0LL;
    v43[7] = 0LL;
    WdLogEvent5_WdCriticalError(v43);
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v57 + 160) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v57 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v24, &EventBlockThread, v25, 72);
      KeWaitForSingleObject((PVOID)(v57 + 48), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v57, 0xFFFFFFFF, 0LL);
  }
  v59 = -1;
  v60 = 0LL;
  v58 = 1;
  if ( *(_DWORD *)(v63 + 464) != 1 )
    goto LABEL_67;
  if ( !v64 || (COREACCESS::AcquireShared((__int64)v61, 0xFFFFFFFF, 0LL), *(_DWORD *)(v62 + 176) == 1) )
  {
    v26 = v48;
    if ( (*((_BYTE *)v48 + 1749) & 1) != 0 )
    {
      v28 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetQueuedLimit(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 4144LL),
              (struct DXGPROCESS *)v12,
              v48,
              v13);
    }
    else
    {
      Type = v13->Type;
      if ( Type == D3DKMT_SET_QUEUEDLIMIT_PRESENT )
      {
        v28 = DXGDEVICE::SetQueuedPresentLimit(v48, v13->QueuedPresentLimit);
      }
      else
      {
        if ( Type != D3DKMT_GET_QUEUEDLIMIT_PRESENT )
        {
          v29 = -1073741811;
          goto LABEL_30;
        }
        v28 = (*(__int64 (__fastcall **)(_QWORD, union _D3DKMT_SETQUEUEDLIMIT::$A93923BD602231B9E75A21ABFFB5534A *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 520LL) + 8LL) + 176LL))(
                *((_QWORD *)v48 + 82),
                &v13->8);
      }
    }
    v29 = v28;
    if ( v28 >= 0 && v4 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
      *v3 = *v13;
    }
LABEL_30:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
    ExReleaseResourceLite(*((PERESOURCE *)v26 + 13));
    KeLeaveCriticalRegion();
    if ( v47 && _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v30);
    if ( !v51 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v29;
    goto LABEL_77;
  }
  COREACCESS::Release((COREACCESS *)v61);
LABEL_67:
  COREACCESS::Release((COREACCESS *)v56);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
  if ( v47 && _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v44);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v45, &EventProfilerExit, v46, v49);
  return 3221226166LL;
}
