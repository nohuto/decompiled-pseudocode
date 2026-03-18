/*
 * XREFs of DxgkSetQueuedLimit @ 0x1C01216D0
 * Callers:
 *     ?VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F8AE0 (-VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0011778 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1C0121A70 (-SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLIMIT@@@Z @ 0x1C01F6220 (-VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 */

__int64 __fastcall DxgkSetQueuedLimit(__int64 a1, __int64 a2, const GUID *a3)
{
  _D3DKMT_SETQUEUEDLIMIT *v3; // r15
  bool v4; // r13
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  struct _KTHREAD **v8; // rsi
  _D3DKMT_SETQUEUEDLIMIT *v9; // r12
  _D3DKMT_SETQUEUEDLIMIT *v10; // rcx
  __int64 v11; // rcx
  struct DXGDEVICE *v12; // rdi
  struct _KEVENT *v13; // r14
  struct _KEVENT *v14; // r14
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rcx
  const GUID *v18; // r8
  struct DXGDEVICE *v19; // r14
  D3DKMT_QUEUEDLIMIT_TYPE Type; // eax
  int v21; // eax
  unsigned int v22; // edi
  __int64 v23; // rcx
  const GUID *v24; // r8
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  const GUID *v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  const GUID *v33; // r8
  unsigned __int8 v34; // r14
  _QWORD *v35; // rax
  __int64 v36; // rcx
  const GUID *v37; // r8
  struct DXGDEVICE *v38; // [rsp+30h] [rbp-E8h] BYREF
  struct DXGDEVICE *v39; // [rsp+38h] [rbp-E0h] BYREF
  int v40; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v41; // [rsp+48h] [rbp-D0h]
  char v42; // [rsp+50h] [rbp-C8h]
  struct DXGDEVICE *v43; // [rsp+58h] [rbp-C0h] BYREF
  int v44; // [rsp+60h] [rbp-B8h]
  _BYTE v45[8]; // [rsp+70h] [rbp-A8h] BYREF
  struct _KTHREAD **v46[2]; // [rsp+78h] [rbp-A0h] BYREF
  DXGADAPTER *v47; // [rsp+88h] [rbp-90h]
  char v48; // [rsp+90h] [rbp-88h]
  struct _KTHREAD **v49[5]; // [rsp+98h] [rbp-80h] BYREF
  char v50; // [rsp+C0h] [rbp-58h]
  _D3DKMT_SETQUEUEDLIMIT v51; // [rsp+D0h] [rbp-48h] BYREF

  v3 = (_D3DKMT_SETQUEUEDLIMIT *)a1;
  v40 = -1;
  v41 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v42 = 1;
    v40 = 2035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2035);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2035);
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
    v22 = -1073741811;
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( !v42 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v22;
    goto LABEL_49;
  }
  v9 = &v51;
  if ( v4 )
  {
    v10 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v10 = (_D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
    v51 = *v10;
  }
  else
  {
    v9 = v3;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v38, v9->hDevice, v8, &v39);
  v12 = v39;
  if ( !v39 )
  {
    v31 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v31 + 24) = v9->hDevice;
    v22 = -1073741811;
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( !v42 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v22;
LABEL_49:
    McTemplateK0q(v29, &EventProfilerExit, v30, v40);
    return v22;
  }
  v43 = v39;
  v13 = (struct _KEVENT *)*((_QWORD *)v39 + 2);
  if ( *((_DWORD *)v39 + 82) == 2 )
  {
    v14 = v13 + 4;
    if ( KeReadStateEvent(v14) )
      goto LABEL_13;
  }
  else
  {
    v14 = v13 + 3;
    if ( KeReadStateEvent(v14) )
      goto LABEL_13;
  }
  KeWaitForSingleObject(v14, Executive, 0, 0, 0LL);
LABEL_13:
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v12 + 13), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 96LL));
    v34 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v32, &EventBlockThread, v33, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v12 + 13), 1u);
    if ( v34 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v44 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, (__int64)v12, 2, v15, 0);
  if ( v48 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16);
    v35[3] = 275LL;
    v35[4] = 4LL;
    v35[5] = v46;
    v35[6] = 0LL;
    v35[7] = 0LL;
    WdLogEvent5_WdCriticalError(v35);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v47 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v47 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v17, &EventBlockThread, v18, 72);
      KeWaitForSingleObject((char *)v47 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v47);
  }
  v48 = 1;
  if ( *((_DWORD *)v49[4] + 116) != 1 )
    goto LABEL_64;
  if ( !v50 || (COREACCESS::AcquireShared((DXGADAPTER **)v49), *((_DWORD *)v49[2] + 44) == 1) )
  {
    v19 = v39;
    if ( (*((_BYTE *)v39 + 1749) & 1) != 0 )
    {
      v21 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetQueuedLimit(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 4152LL),
              (struct DXGPROCESS *)v8,
              v39,
              v9);
    }
    else
    {
      Type = v9->Type;
      if ( Type == D3DKMT_SET_QUEUEDLIMIT_PRESENT )
      {
        v21 = DXGDEVICE::SetQueuedPresentLimit(v39, v9->QueuedPresentLimit);
      }
      else
      {
        if ( Type != D3DKMT_GET_QUEUEDLIMIT_PRESENT )
        {
          v22 = -1073741811;
          goto LABEL_30;
        }
        v21 = (*(__int64 (__fastcall **)(_QWORD, union _D3DKMT_SETQUEUEDLIMIT::$A93923BD602231B9E75A21ABFFB5534A *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 520LL) + 8LL) + 176LL))(
                *((_QWORD *)v39 + 82),
                &v9->8);
      }
    }
    v22 = v21;
    if ( v21 >= 0 && v4 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
      *v3 = *v9;
    }
LABEL_30:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
    ExReleaseResourceLite(*((PERESOURCE *)v19 + 13));
    KeLeaveCriticalRegion();
    if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    {
      McTemplateK0q(v23, &EventProfilerExit, v24, v40);
      return v22;
    }
    return v22;
  }
  COREACCESS::Release(v49);
LABEL_64:
  COREACCESS::Release(v46);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v43);
  if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v36, &EventProfilerExit, v37, v40);
  return 3221226166LL;
}
