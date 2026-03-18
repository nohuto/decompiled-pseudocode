/*
 * XREFs of ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C00F8F00
 * Callers:
 *     DxgkCreateSynchronizationObject @ 0x1C00F6330 (DxgkCreateSynchronizationObject.c)
 *     ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x1C0144890 (-DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z.c)
 *     ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021DA70 (-VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateSynchronizationObjectInternal @ 0x1C026BFD4 (DxgkCreateSynchronizationObjectInternal.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007110 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C00076FC (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000BBC0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BE40 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     McTemplateK0ppp @ 0x1C0042E68 (McTemplateK0ppp.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00F426C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00F9C74 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1C026924C (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObjectImpl(
        ULONG64 a1,
        unsigned int a2,
        const GUID *a3,
        struct DXGADAPTER *a4)
{
  int v5; // r12d
  unsigned int v6; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r15
  __int64 *ThreadProperty; // rax
  __int64 *v17; // rbx
  __int64 v18; // rax
  int v19; // ebx
  __int64 v20; // rdx
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *v21; // rax
  __int64 Value; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  const GUID *v26; // r8
  bool v27; // zf
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  const GUID *v32; // r8
  bool v33; // zf
  __int64 hDevice; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  struct DXGDEVICE *v40; // r13
  __int64 v41; // rax
  volatile signed __int64 *v42; // r12
  __int64 v43; // r8
  __int64 v44; // rdx
  int v45; // r12d
  __int64 v46; // rdx
  __int64 v47; // rcx
  const GUID *v48; // r8
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  const GUID *v52; // r8
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rdx
  ULONG64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  const GUID *v64; // r8
  _DWORD *v65; // rdx
  const GUID *hSyncObject; // r8
  _DWORD *v67; // rdx
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE Type; // r14d
  ULONG64 v69; // rsi
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  _OWORD *v72; // rax
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  struct _KTHREAD **Current; // rax
  __int64 MaxCount; // rbx
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // rax
  __int64 v80; // rcx
  const GUID *v81; // r8
  int v82; // r9d
  D3DKMT_HANDLE v83; // r12d
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rsi
  __int64 v87; // rax
  const GUID *v88; // r8
  __int64 v89; // rax
  char v90; // [rsp+40h] [rbp-308h]
  int v91; // [rsp+48h] [rbp-300h] BYREF
  __int64 v92; // [rsp+50h] [rbp-2F8h]
  char v93; // [rsp+58h] [rbp-2F0h]
  struct DXGDEVICE *v94; // [rsp+60h] [rbp-2E8h] BYREF
  __int64 v95; // [rsp+68h] [rbp-2E0h] BYREF
  struct DXGDEVICE *v96; // [rsp+70h] [rbp-2D8h] BYREF
  int v97; // [rsp+78h] [rbp-2D0h]
  DXGADAPTER *v98[2]; // [rsp+80h] [rbp-2C8h] BYREF
  int v99; // [rsp+90h] [rbp-2B8h]
  int v100; // [rsp+94h] [rbp-2B4h]
  _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v101; // [rsp+98h] [rbp-2B0h] BYREF
  struct DXGDEVICE *v102; // [rsp+A0h] [rbp-2A8h] BYREF
  struct DXGSYNCOBJECT *v103; // [rsp+A8h] [rbp-2A0h] BYREF
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v104; // [rsp+B0h] [rbp-298h] BYREF
  struct DXGADAPTER *v105; // [rsp+110h] [rbp-238h]
  __int64 v106; // [rsp+118h] [rbp-230h]
  __int64 v107; // [rsp+120h] [rbp-228h] BYREF
  struct DXGADAPTER *v108; // [rsp+128h] [rbp-220h] BYREF
  DXGADAPTER *v109; // [rsp+130h] [rbp-218h] BYREF
  _BYTE v110[144]; // [rsp+140h] [rbp-208h] BYREF
  _BYTE v111[160]; // [rsp+1D0h] [rbp-178h] BYREF
  _BYTE v112[144]; // [rsp+270h] [rbp-D8h] BYREF
  unsigned int v113; // [rsp+358h] [rbp+10h]

  v113 = a2;
  v105 = a4;
  v5 = (int)a3;
  v100 = (int)a3;
  v6 = a2;
  v91 = -1;
  v92 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v93 = 1;
    v91 = 2041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2041);
  }
  else
  {
    v93 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v91, 2041LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v15 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v17 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v15 = *v17;
    }
    v6 = v113;
  }
  v106 = v15;
  if ( !v15 )
  {
    v18 = WdLogNewEntry5_WdError(v13, v12, v14);
    v19 = -1073741811;
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
LABEL_142:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v20);
    v27 = v93 == 0;
    goto LABEL_143;
  }
  v90 = *(_BYTE *)(v15 + 299) & 0xC;
  if ( v5 )
  {
    v21 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v21 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v104 = *v21;
    Value = v104.Info.Flags.Value;
    if ( (v6 & 0x7FFFFFFF) == 1 && (v104.Info.Flags.Value & 0x80000000) != 0 )
    {
      v6 = v6 & 0x80000000 | 5;
      v113 = v6;
    }
  }
  else
  {
    v104 = *(_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)a1;
    Value = v104.Info.Flags.Value;
  }
  v104.hSyncObject = 0;
  if ( (v104.Info.Flags.Value & 0x7FFFFF00) != 0 )
  {
    v23 = WdLogNewEntry5_WdWarning(Value, v12, v14);
    v19 = -1073741811;
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v24);
    v27 = v93 == 0;
LABEL_143:
    if ( !v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v25, &EventProfilerExit, v26, v91);
    return (unsigned int)v19;
  }
  v28 = ((unsigned int)Value >> 1) & 1;
  if ( (((unsigned int)Value >> 1) & 1) != 0 && (Value & 1) == 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gDxgkrnlCounterAccumulated);
    v29 = WdLogNewEntry5_WdWarning(Value, v28, v14);
    *(_QWORD *)(v29 + 24) = 391LL;
LABEL_25:
    WdLogEvent5_WdWarning(v29);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v30);
    v33 = v93 == 0;
LABEL_26:
    if ( !v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v31, &EventProfilerExit, v32, v91);
    return -1073741811LL;
  }
  if ( (unsigned int)(v104.Info.Type - 5) <= 1 )
  {
    if ( a4 )
    {
      v29 = WdLogNewEntry5_WdWarning(Value, v28, v14);
      *(_QWORD *)(v29 + 24) = 400LL;
      goto LABEL_25;
    }
    if ( (Value & 1) != 0 && !(_DWORD)v28 )
    {
      v29 = WdLogNewEntry5_WdWarning(Value, v28, v14);
      *(_QWORD *)(v29 + 24) = 405LL;
      goto LABEL_25;
    }
    if ( (Value & 0x10) != 0 && (Value & 0x20) != 0 )
    {
      v29 = WdLogNewEntry5_WdWarning(Value, v28, v14);
      *(_QWORD *)(v29 + 24) = 411LL;
      goto LABEL_25;
    }
  }
  else if ( (Value & 0x80u) != 0LL )
  {
    v29 = WdLogNewEntry5_WdWarning(Value, v28, v14);
    *(_QWORD *)(v29 + 24) = 417LL;
    goto LABEL_25;
  }
  hDevice = v104.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v94, v104.hDevice, (struct _KTHREAD **)v15, &v102);
  v40 = v102;
  if ( !v102 && (v5 || (_DWORD)hDevice) )
  {
    v41 = WdLogNewEntry5_WdError(v37, v36, v38);
    *(_QWORD *)(v41 + 24) = hDevice;
    v19 = -1073741811;
    *(_QWORD *)(v41 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v41);
    if ( v94 && _InterlockedExchangeAdd64((volatile signed __int64 *)v94 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v94 + 2), v94);
    goto LABEL_142;
  }
  v103 = 0LL;
  v107 = 0LL;
  v42 = 0LL;
  v98[0] = 0LL;
  v96 = v102;
  v97 = 0;
  if ( !v105 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v111, (__int64)v102, 0, v39, 0);
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v110,
      *(struct DXGADAPTER *const *)(*((_QWORD *)v40 + 2) + 16LL),
      0LL);
    if ( (unsigned int)(v104.Info.Type - 5) <= 1 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v96);
      v45 = COREDEVICEACCESS::AcquireShared((__int64)v111, 0xFFFFFFFF, 0LL);
      if ( v45 < 0 )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v111);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v96);
        DXGADAPTER_REFERENCE::Assign(v98, 0LL);
        if ( v94 && _InterlockedExchangeAdd64((volatile signed __int64 *)v94 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v94 + 2), v94);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v50);
        if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v51, &EventProfilerExit, v52, v91);
        return (unsigned int)v45;
      }
      v53 = *(_QWORD *)(*((_QWORD *)v40 + 2) + 16LL);
      if ( *(int *)(v53 + 2184) < 0x2000 && !*(_BYTE *)(v53 + 2484) )
      {
        v54 = WdLogNewEntry5_WdWarning(v53, v44, v49);
        *(_QWORD *)(v54 + 24) = 466LL;
        WdLogEvent5_WdWarning(v54);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v111);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v96);
        DXGADAPTER_REFERENCE::Assign(v98, 0LL);
        if ( v94 && _InterlockedExchangeAdd64((volatile signed __int64 *)v94 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v94 + 2), v94);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v55);
        v33 = v93 == 0;
        goto LABEL_26;
      }
    }
    else
    {
      v45 = COREADAPTERACCESS::AcquireShared((__int64)v110, 0xFFFFFFFFLL, v43);
      if ( v45 < 0 )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v111);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v96);
        DXGADAPTER_REFERENCE::Assign(v98, 0LL);
        if ( v94 && _InterlockedExchangeAdd64((volatile signed __int64 *)v94 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v94 + 2), v94);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v46);
        if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        {
          McTemplateK0q(v47, &EventProfilerExit, v48, v91);
          return (unsigned int)v45;
        }
        return (unsigned int)v45;
      }
    }
    v56 = *((_QWORD *)v40 + 2);
    v42 = *(volatile signed __int64 **)(v56 + 16);
    v98[0] = (DXGADAPTER *)v42;
    if ( v42 )
    {
      _InterlockedIncrement64(v42 + 3);
      v98[1] = (DXGADAPTER *)-1LL;
      v56 = *((_QWORD *)v40 + 2);
      v6 = v113;
      v40 = v102;
      v42 = (volatile signed __int64 *)v98[0];
    }
    v95 = 0LL;
    LOBYTE(v44) = 1;
    v19 = CreateSynchronizationObjectInternal(v40, v44, v56, &v104, v6, &v103, &v95, &v107);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v111);
LABEL_83:
    if ( v19 < 0 )
    {
      v89 = WdLogNewEntry5_WdWarning(v58, v57, v59);
      *(_QWORD *)(v89 + 24) = v19;
      WdLogEvent5_WdWarning(v89);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v96);
      DXGADAPTER_REFERENCE::Assign(v98, 0LL);
      if ( v94 && _InterlockedExchangeAdd64((volatile signed __int64 *)v94 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v94 + 2), v94);
    }
    else
    {
      if ( v100 )
      {
        v65 = (_DWORD *)(a1 + 88);
        v58 = MmUserProbeAddress;
        if ( a1 + 88 >= MmUserProbeAddress )
          v65 = (_DWORD *)MmUserProbeAddress;
        hSyncObject = (const GUID *)v104.hSyncObject;
        *v65 = v104.hSyncObject;
        if ( (*(_BYTE *)&v104.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v104.Info.Flags.0 & 2) == 0 || v90) )
        {
          v67 = (_DWORD *)(a1 + 80);
          v58 = MmUserProbeAddress;
          if ( a1 + 80 >= MmUserProbeAddress )
            v67 = (_DWORD *)MmUserProbeAddress;
          *v67 = v104.Info.SharedHandle;
        }
        Type = v104.Info.Type;
        v69 = a1 + 16;
        v70 = *(_OWORD *)&v104.Info.SynchronizationMutex.InitialState;
        v71 = *(_OWORD *)&v104.Info.Reserved.Reserved[2];
        if ( v104.Info.Type == D3DDDI_MONITORED_FENCE )
        {
          v58 = MmUserProbeAddress;
          v72 = (_OWORD *)v69;
          if ( v69 >= MmUserProbeAddress )
            v72 = (_OWORD *)MmUserProbeAddress;
          *v72 = *(_OWORD *)&v104.Info.SynchronizationMutex.InitialState;
          v72[1] = v71;
        }
        if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
        {
          v58 = MmUserProbeAddress;
          if ( v69 >= MmUserProbeAddress )
            v69 = MmUserProbeAddress;
          *(_OWORD *)v69 = v70;
          *(_OWORD *)(v69 + 16) = v71;
          *(_QWORD *)(v69 + 32) = v104.Info.Reserved.Reserved[4];
        }
      }
      else
      {
        hSyncObject = (const GUID *)v104.hSyncObject;
        *(_DWORD *)(a1 + 88) = v104.hSyncObject;
        if ( (*(_BYTE *)&v104.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v104.Info.Flags.0 & 2) == 0 || v90) )
          *(_DWORD *)(a1 + 80) = v104.Info.SharedHandle;
        Type = v104.Info.Type;
        v73 = *(_OWORD *)&v104.Info.SynchronizationMutex.InitialState;
        v74 = *(_OWORD *)&v104.Info.Reserved.Reserved[2];
        if ( v104.Info.Type == D3DDDI_MONITORED_FENCE )
        {
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v104.Info.SynchronizationMutex.InitialState;
          *(_OWORD *)(a1 + 32) = v74;
        }
        if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
        {
          *(_OWORD *)(a1 + 16) = v73;
          *(_OWORD *)(a1 + 32) = v74;
          *(_QWORD *)(a1 + 48) = v104.Info.Reserved.Reserved[4];
        }
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppp(v58, &EventOpenSyncObject, hSyncObject);
      if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
      {
        v108 = 0LL;
        Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
        MaxCount = v104.Info.Semaphore.MaxCount;
        DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
          (DXGADAPTERBYHANDLE *)&v109,
          v104.Info.Semaphore.MaxCount,
          Current,
          &v108,
          1);
        if ( v108 )
        {
          v19 = CreatePeriodicMonitoredFenceNotificationInternal(v108, (struct DXGADAPTER *)v42, v103, &v104, 0);
        }
        else
        {
          v79 = WdLogNewEntry5_WdWarning(0LL, v77, v78);
          *(_QWORD *)(v79 + 24) = MaxCount;
          v19 = -1073741811;
          *(_QWORD *)(v79 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v79);
        }
        if ( v109 )
          DXGADAPTER::ReleaseReferenceNoTracking(v109);
      }
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v96);
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v15 + 184, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v82 = *(_DWORD *)(v15 + 200);
          if ( v82 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v80, &EventBlockThread, v81, v82);
        }
        ExAcquirePushLockExclusiveEx(v15 + 184, 0LL);
      }
      *(_QWORD *)(v15 + 192) = KeGetCurrentThread();
      v83 = v104.hSyncObject;
      v84 = (v104.hSyncObject >> 6) & 0xFFFFFF;
      if ( (unsigned int)v84 < *(_DWORD *)(v15 + 224) )
      {
        v85 = *(_QWORD *)(v15 + 208);
        if ( ((v104.hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v85 + 16 * v84 + 8) & 0x60)
          && (*(_DWORD *)(v85 + 16 * v84 + 8) & 0x1F) != 0 )
        {
          v86 = 2 * ((*(_QWORD *)&v104.hSyncObject >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v85 + 16 * ((*(_QWORD *)&v104.hSyncObject >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
          {
            v87 = WdLogNewEntry5_WdAssertion((v104.hSyncObject >> 25) & 0x60, v85);
            *(_QWORD *)(v87 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v87);
            v85 = *(_QWORD *)(v15 + 208);
          }
          *(_DWORD *)(v85 + 8 * v86 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v15 + 192) = 0LL;
      ExReleasePushLockExclusiveEx(v15 + 184, 0LL);
      KeLeaveCriticalRegion();
      if ( v19 < 0 )
      {
        v101.hSyncObject = v83;
        DxgkDestroySynchronizationObjectImpl(&v101, 0, v88);
      }
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v96);
      if ( v98[0] )
        DXGADAPTER::ReleaseReferenceNoTracking(v98[0]);
      if ( v94 && _InterlockedExchangeAdd64((volatile signed __int64 *)v94 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v94 + 2), v94);
    }
    goto LABEL_142;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v112, v105, 0LL);
  v99 = COREADAPTERACCESS::AcquireShared((__int64)v112, 0xFFFFFFFFLL, v60);
  if ( v99 >= 0 )
  {
    LOBYTE(v61) = 1;
    v19 = CreateSynchronizationObjectInternal(v40, v61, *((_QWORD *)v105 + 320), &v104, v6, &v103, 0LL, 0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v112);
    goto LABEL_83;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v112);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v96);
  DXGADAPTER_REFERENCE::Assign(v98, 0LL);
  if ( v94 && _InterlockedExchangeAdd64((volatile signed __int64 *)v94 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v94 + 2), v94);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v62);
  if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v63, &EventProfilerExit, v64, v91);
  return (unsigned int)v99;
}
