/*
 * XREFs of DxgkOfferAllocations @ 0x1C01079F0
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
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C0105790 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkOfferAllocations(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // rdi
  _OWORD *v8; // rcx
  struct _KTHREAD **v9; // r8
  __int64 hDevice; // rdi
  __int64 v11; // rcx
  struct DXGDEVICE *v12; // rsi
  __int64 v13; // rcx
  int v14; // edi
  struct _KEVENT *v15; // r15
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  const GUID *v21; // r8
  UINT *v22; // r14
  unsigned __int64 Value; // rdi
  struct DXGDEVICE *v24; // rsi
  unsigned int v25; // edi
  __int64 v26; // rcx
  const GUID *v27; // r8
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rcx
  const GUID *v33; // r8
  bool v34; // zf
  __int64 v35; // rax
  struct _KEVENT *v36; // rcx
  unsigned __int8 v37; // al
  __int64 v38; // rcx
  const GUID *v39; // r8
  unsigned __int8 v40; // di
  unsigned __int8 v41; // di
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rcx
  const GUID *v48; // r8
  __int64 v49; // rax
  __int64 v50; // rcx
  const GUID *v51; // r8
  int v52; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v53; // [rsp+38h] [rbp-D0h]
  char v54; // [rsp+40h] [rbp-C8h]
  struct DXGDEVICE *v55; // [rsp+48h] [rbp-C0h] BYREF
  int v56; // [rsp+50h] [rbp-B8h]
  _D3DKMT_OFFERALLOCATIONS v57; // [rsp+58h] [rbp-B0h] BYREF
  char v58[8]; // [rsp+80h] [rbp-88h] BYREF
  struct _KTHREAD **v59[2]; // [rsp+88h] [rbp-80h] BYREF
  DXGADAPTER *v60; // [rsp+98h] [rbp-70h]
  char v61; // [rsp+A0h] [rbp-68h]
  struct _KTHREAD **v62[5]; // [rsp+A8h] [rbp-60h] BYREF
  char v63; // [rsp+D0h] [rbp-38h]
  struct DXGDEVICE *v64; // [rsp+118h] [rbp+10h] BYREF
  struct DXGDEVICE *v65; // [rsp+120h] [rbp+18h] BYREF

  v52 = -1;
  v53 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v54 = 1;
    v52 = 2070;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2070);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v52, 2070);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v30 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v7 = *v30;
      }
    }
  }
  if ( !v7 )
  {
    v31 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v31 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    v34 = v54 == 0;
    goto LABEL_45;
  }
  memset(&v57, 0, sizeof(v57));
  v8 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&v57.hDevice = *v8;
  *(_OWORD *)&v57.HandleList = v8[1];
  v9 = v7;
  hDevice = v57.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v64, v57.hDevice, v9, &v65);
  v12 = v65;
  if ( !v65 )
  {
    v35 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v35 + 24) = hDevice;
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    if ( v64 && _InterlockedExchangeAdd64((volatile signed __int64 *)v64 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v64 + 2), v64);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    v34 = v54 == 0;
LABEL_45:
    if ( v34 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_81;
  }
  v55 = v65;
  v13 = *(_QWORD *)(*((_QWORD *)v65 + 2) + 16LL);
  if ( *(int *)(v13 + 2160) >= 0x2000 || *(_BYTE *)(v13 + 2452) )
  {
    v14 = *((_DWORD *)DXGGLOBAL::GetGlobal(v13) + 255);
    v56 = v14;
  }
  else
  {
    v14 = 0;
    v56 = 0;
  }
  v15 = (struct _KEVENT *)*((_QWORD *)v12 + 2);
  if ( *((_DWORD *)v12 + 82) == 2 )
  {
    if ( KeReadStateEvent(v15 + 4) )
      goto LABEL_13;
    v36 = v15 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v15 + 3) )
      goto LABEL_13;
    v36 = v15 + 3;
  }
  KeWaitForSingleObject(v36, Executive, 0, 0, 0LL);
LABEL_13:
  KeEnterCriticalRegion();
  if ( v14 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v12 + 112, 0LL) )
      goto LABEL_15;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 96LL));
    v41 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v12 + 112));
    if ( !v41 )
      goto LABEL_62;
    goto LABEL_61;
  }
  if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v12 + 13), 0) )
    goto LABEL_15;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 96LL));
  v37 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
  v40 = v37;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0q(v38, &EventBlockThread, v39, 40);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v12 + 13), 1u);
  if ( v40 )
LABEL_61:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
LABEL_62:
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_15:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v58, (__int64)v12, 0, v16, 0);
  if ( v61 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18);
    v42[3] = 275LL;
    v42[4] = 4LL;
    v42[5] = v59;
    v42[6] = 0LL;
    v42[7] = 0LL;
    WdLogEvent5_WdCriticalError(v42);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v60 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v60 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v20, &EventBlockThread, v21, 72);
      KeWaitForSingleObject((char *)v60 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v60);
  }
  v61 = 1;
  if ( *((_DWORD *)v62[4] + 116) != 1 )
    goto LABEL_69;
  if ( v63 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)v62);
    if ( *((_DWORD *)v62[2] + 44) != 1 )
    {
      COREACCESS::Release(v62);
LABEL_69:
      COREACCESS::Release(v59);
      v46 = WdLogNewEntry5_WdWarning(v44, v43, v45);
      *(_QWORD *)(v46 + 24) = v65;
      *(_QWORD *)(v46 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v46);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v58);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v55);
      if ( v64 && _InterlockedExchangeAdd64((volatile signed __int64 *)v64 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v64 + 2), v64);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
      if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v47, &EventProfilerExit, v48, v52);
      return 3221226166LL;
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 1712LL) >= 0x5010u )
  {
    v22 = (UINT *)(a1 + 32);
    if ( (unsigned __int64)v22 >= MmUserProbeAddress )
      v22 = (UINT *)MmUserProbeAddress;
    v57.Flags.Value = *v22;
    Value = v57.Flags.Value;
    if ( v57.Flags.Value >= 4 )
    {
      v49 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v17, v19);
      *(_QWORD *)(v49 + 24) = Value >> 2;
      WdLogEvent5_WdWarning(v49);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v58);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v55);
      if ( v64 && _InterlockedExchangeAdd64((volatile signed __int64 *)v64 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v64 + 2), v64);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
      if ( !v54 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
LABEL_81:
      McTemplateK0q(v32, &EventProfilerExit, v33, v52);
      return 3221225485LL;
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 185LL) )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v58);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v55);
    if ( v64 && _InterlockedExchangeAdd64((volatile signed __int64 *)v64 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v64 + 2), v64);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v50, &EventProfilerExit, v51, v52);
    return 0LL;
  }
  else
  {
    v24 = v65;
    v25 = DXGDEVICE::OfferAllocations(v65, &v57);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v58);
    if ( v56 )
      ExReleasePushLockSharedEx((char *)v24 + 112, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v24 + 13));
    KeLeaveCriticalRegion();
    if ( v64 && _InterlockedExchangeAdd64((volatile signed __int64 *)v64 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v64 + 2), v64);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( v54 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v26, &EventProfilerExit, v27, v52);
    }
    return v25;
  }
}
