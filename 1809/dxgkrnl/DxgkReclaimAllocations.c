/*
 * XREFs of DxgkReclaimAllocations @ 0x1C01271D0
 * Callers:
 *     <none>
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
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C0105F90 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReclaimAllocations(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // rdi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rcx
  struct DXGDEVICE *v10; // rsi
  __int64 v11; // rcx
  int v12; // edi
  struct _KEVENT *v13; // r14
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  const GUID *v17; // r8
  struct DXGDEVICE *v18; // rdi
  unsigned int v19; // esi
  __int64 v20; // rcx
  const GUID *v21; // r8
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v24; // r14
  __int64 v25; // rax
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v28; // rax
  struct _KEVENT *v29; // rcx
  __int64 v30; // rcx
  unsigned __int8 v31; // di
  const GUID *v32; // r8
  unsigned __int8 v33; // di
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  const GUID *v40; // r8
  int v41; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v42; // [rsp+38h] [rbp-F0h]
  char v43; // [rsp+40h] [rbp-E8h]
  struct DXGDEVICE *v44; // [rsp+48h] [rbp-E0h] BYREF
  int v45; // [rsp+50h] [rbp-D8h]
  unsigned int v46[4]; // [rsp+58h] [rbp-D0h]
  __int128 v47; // [rsp+68h] [rbp-C0h]
  __int64 v48; // [rsp+78h] [rbp-B0h]
  struct _D3DKMT_RECLAIMALLOCATIONS2 v49; // [rsp+80h] [rbp-A8h] BYREF
  _BYTE v50[8]; // [rsp+B0h] [rbp-78h] BYREF
  struct _KTHREAD **v51[2]; // [rsp+B8h] [rbp-70h] BYREF
  DXGADAPTER *v52; // [rsp+C8h] [rbp-60h]
  char v53; // [rsp+D0h] [rbp-58h]
  struct _KTHREAD **v54[5]; // [rsp+D8h] [rbp-50h] BYREF
  char v55; // [rsp+100h] [rbp-28h]
  struct DXGDEVICE *v56; // [rsp+138h] [rbp+10h] BYREF
  struct DXGDEVICE *v57; // [rsp+140h] [rbp+18h] BYREF

  v3 = a1;
  v41 = -1;
  v42 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v43 = 1;
    v41 = 2071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2071);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2071);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v24 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v7 = *v24;
      }
    }
  }
  if ( !v7 )
  {
    v25 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( !v43 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_42;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v46 = *(_OWORD *)v3;
  v47 = *(_OWORD *)(v3 + 16);
  v48 = *(_QWORD *)(v3 + 32);
  v49.hPagingQueue = 0;
  v49.NumAllocations = v48;
  v49.pResources = *(D3DKMT_HANDLE **)&v46[2];
  *(_OWORD *)&v49.HandleList = v47;
  v49.PagingFenceValue = 0LL;
  v8 = v46[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v56, v46[0], v7, &v57);
  v10 = v57;
  if ( !v57 )
  {
    v28 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v28 + 24) = v8;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    if ( v56 && _InterlockedExchangeAdd64((volatile signed __int64 *)v56 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v56 + 2), v56);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( !v43 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_42:
    McTemplateK0q(v26, &EventProfilerExit, v27, v41);
    return 3221225485LL;
  }
  v44 = v57;
  v11 = *(_QWORD *)(*((_QWORD *)v57 + 2) + 16LL);
  if ( *(int *)(v11 + 2160) >= 0x2000 || *(_BYTE *)(v11 + 2452) )
  {
    v12 = *((_DWORD *)DXGGLOBAL::GetGlobal(v11) + 255);
    v45 = v12;
  }
  else
  {
    v12 = 0;
    v45 = 0;
  }
  v13 = (struct _KEVENT *)*((_QWORD *)v10 + 2);
  if ( *((_DWORD *)v10 + 82) == 2 )
  {
    if ( KeReadStateEvent(v13 + 4) )
      goto LABEL_14;
    v29 = v13 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v13 + 3) )
      goto LABEL_14;
    v29 = v13 + 3;
  }
  KeWaitForSingleObject(v29, Executive, 0, 0, 0LL);
LABEL_14:
  KeEnterCriticalRegion();
  if ( !v12 )
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 13), 0) )
      goto LABEL_16;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 96LL));
    v31 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v30, &EventBlockThread, v32, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 13), 1u);
    if ( !v31 )
      goto LABEL_57;
    goto LABEL_56;
  }
  if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 112, 0LL) )
    goto LABEL_16;
  KeLeaveCriticalRegion();
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 96LL));
  v33 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
  DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v10 + 112));
  if ( v33 )
LABEL_56:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
LABEL_57:
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_16:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v50, (__int64)v10, 0, v14, 0);
  if ( v53 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15);
    v34[3] = 275LL;
    v34[4] = 4LL;
    v34[5] = v51;
    v34[6] = 0LL;
    v34[7] = 0LL;
    WdLogEvent5_WdCriticalError(v34);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v52 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v52 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v16, &EventBlockThread, v17, 72);
      KeWaitForSingleObject((char *)v52 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v52);
  }
  v53 = 1;
  if ( *((_DWORD *)v54[4] + 116) != 1 )
    goto LABEL_64;
  if ( v55 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)v54);
    if ( *((_DWORD *)v54[2] + 44) != 1 )
    {
      COREACCESS::Release(v54);
LABEL_64:
      COREACCESS::Release(v51);
      v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
      *(_QWORD *)(v38 + 24) = v57;
      *(_QWORD *)(v38 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v38);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v44);
      if ( v56 && _InterlockedExchangeAdd64((volatile signed __int64 *)v56 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v56 + 2), v56);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
      if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v39, &EventProfilerExit, v40, v41);
      return 3221226166LL;
    }
  }
  v18 = v57;
  v19 = DXGDEVICE::ReclaimAllocations(v57, 0LL, &v49);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
  if ( v45 )
    ExReleasePushLockSharedEx((char *)v18 + 112, 0LL);
  else
    ExReleaseResourceLite(*((PERESOURCE *)v18 + 13));
  KeLeaveCriticalRegion();
  if ( v56 && _InterlockedExchangeAdd64((volatile signed __int64 *)v56 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v56 + 2), v56);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v20, &EventProfilerExit, v21, v41);
  }
  return v19;
}
