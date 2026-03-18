/*
 * XREFs of ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C00F47D0
 * Callers:
 *     DxgkCreateSynchronizationObject @ 0x1C00F4730 (DxgkCreateSynchronizationObject.c)
 *     ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x1C0140E40 (-DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z.c)
 *     ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021D400 (-VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateSynchronizationObjectInternal @ 0x1C026B944 (DxgkCreateSynchronizationObjectInternal.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007044 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000B9D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BC50 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C050 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     McTemplateK0ppp @ 0x1C0042D08 (McTemplateK0ppp.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00F3D3C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00F4FA4 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1C0268BBC (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObjectImpl(
        _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a1,
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
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 Value; // rdx
  __int64 v17; // rcx
  __int64 hDevice; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  struct DXGDEVICE *v23; // r13
  __int64 v24; // r12
  volatile signed __int64 *v25; // rsi
  struct DXGDEVICE *v26; // r12
  __int64 v27; // r8
  __int64 v28; // rdx
  int v29; // esi
  __int64 v30; // r8
  unsigned int v31; // ebx
  __int64 v32; // rdx
  ULONG64 p_hSyncObject; // rcx
  __int64 v34; // r8
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *v35; // r9
  const GUID *hSyncObject; // r8
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE Type; // ebx
  ULONG64 p_Fence; // r9
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  _DWORD *p_SharedHandle; // rdx
  __int64 v42; // r9
  int v43; // r12d
  D3DKMT_HANDLE v44; // r13d
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rdx
  const GUID *v50; // r8
  __int64 v51; // rcx
  const GUID *v52; // r8
  __int64 v54; // r8
  __int64 v55; // rcx
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *v56; // r9
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int64 *ThreadProperty; // rax
  __int64 *v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  const GUID *v64; // r8
  bool v65; // zf
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  const GUID *v71; // r8
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rcx
  const GUID *v76; // r8
  __int64 v77; // rdx
  __int64 v78; // rcx
  const GUID *v79; // r8
  __int64 v80; // rax
  __int64 v81; // r8
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rcx
  const GUID *v85; // r8
  struct _KTHREAD **Current; // rax
  __int64 MaxCount; // rbx
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // rax
  DXGADAPTER *v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rdx
  char v94; // [rsp+40h] [rbp-318h]
  int v95; // [rsp+48h] [rbp-310h] BYREF
  __int64 v96; // [rsp+50h] [rbp-308h]
  char v97; // [rsp+58h] [rbp-300h]
  struct DXGDEVICE *v98; // [rsp+60h] [rbp-2F8h] BYREF
  __int64 v99; // [rsp+68h] [rbp-2F0h] BYREF
  struct DXGADAPTER *v100; // [rsp+70h] [rbp-2E8h]
  struct DXGDEVICE *v101; // [rsp+78h] [rbp-2E0h] BYREF
  int v102; // [rsp+80h] [rbp-2D8h]
  DXGADAPTER *v103[2]; // [rsp+88h] [rbp-2D0h] BYREF
  int v104; // [rsp+98h] [rbp-2C0h]
  int v105; // [rsp+9Ch] [rbp-2BCh]
  _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v106; // [rsp+A0h] [rbp-2B8h] BYREF
  __int64 v107; // [rsp+A8h] [rbp-2B0h] BYREF
  struct DXGDEVICE *v108; // [rsp+B0h] [rbp-2A8h] BYREF
  struct DXGSYNCOBJECT *v109; // [rsp+B8h] [rbp-2A0h] BYREF
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v110; // [rsp+C0h] [rbp-298h] BYREF
  __int64 v111; // [rsp+120h] [rbp-238h]
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *v112; // [rsp+128h] [rbp-230h]
  struct DXGADAPTER *v113; // [rsp+130h] [rbp-228h] BYREF
  DXGADAPTER *v114; // [rsp+138h] [rbp-220h] BYREF
  _BYTE v115[144]; // [rsp+150h] [rbp-208h] BYREF
  _BYTE v116[160]; // [rsp+1E0h] [rbp-178h] BYREF
  _BYTE v117[144]; // [rsp+280h] [rbp-D8h] BYREF
  unsigned int v118; // [rsp+368h] [rbp+10h]

  v118 = a2;
  v100 = a4;
  v5 = (int)a3;
  v105 = (int)a3;
  v6 = a2;
  v112 = a1;
  v95 = -1;
  v96 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v97 = 1;
    v95 = 2041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2041);
  }
  else
  {
    v97 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v95, 2041LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v15 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v60 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v15 = *v60;
    }
    v6 = v118;
  }
  v111 = v15;
  if ( !v15 )
  {
    v61 = WdLogNewEntry5_WdError(v13, v12, v14);
    v31 = -1073741811;
    *(_QWORD *)(v61 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v61);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95, v62);
    v65 = v97 == 0;
    goto LABEL_95;
  }
  v94 = *(_BYTE *)(v15 + 299) & 0xC;
  if ( v5 )
  {
    v13 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v13 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v110 = *v13;
    Value = v110.Info.Flags.Value;
    if ( (v6 & 0x7FFFFFFF) == 1 && (v110.Info.Flags.Value & 0x80000000) != 0 )
    {
      v6 = v6 & 0x80000000 | 5;
      v118 = v6;
    }
  }
  else
  {
    v110 = *a1;
    Value = v110.Info.Flags.Value;
  }
  v110.hSyncObject = 0;
  if ( (v110.Info.Flags.Value & 0x7FFFFF00) != 0 )
  {
    v66 = WdLogNewEntry5_WdWarning(v13, Value, v14);
    v31 = -1073741811;
    *(_QWORD *)(v66 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v66);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95, v67);
    v65 = v97 == 0;
    goto LABEL_95;
  }
  v17 = ((unsigned int)Value >> 1) & 1;
  if ( (((unsigned int)Value >> 1) & 1) != 0 && (Value & 1) == 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gDxgkrnlCounterAccumulated);
    v68 = WdLogNewEntry5_WdWarning(v17, Value, v14);
    *(_QWORD *)(v68 + 24) = 391LL;
LABEL_100:
    WdLogEvent5_WdWarning(v68);
LABEL_101:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95, v69);
    if ( v97 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v70, &EventProfilerExit, v71, v95);
    return -1073741811LL;
  }
  if ( (unsigned int)(v110.Info.Type - 5) <= 1 )
  {
    if ( a4 )
    {
      v68 = WdLogNewEntry5_WdWarning(v17, Value, v14);
      *(_QWORD *)(v68 + 24) = 400LL;
      goto LABEL_100;
    }
    if ( (Value & 1) != 0 && !(_DWORD)v17 )
    {
      v68 = WdLogNewEntry5_WdWarning(v17, Value, v14);
      *(_QWORD *)(v68 + 24) = 405LL;
      goto LABEL_100;
    }
    if ( (Value & 0x10) != 0 && (Value & 0x20) != 0 )
    {
      v68 = WdLogNewEntry5_WdWarning(v17, Value, v14);
      *(_QWORD *)(v68 + 24) = 411LL;
      goto LABEL_100;
    }
  }
  else if ( (Value & 0x80u) != 0LL )
  {
    v68 = WdLogNewEntry5_WdWarning(v17, Value, v14);
    *(_QWORD *)(v68 + 24) = 417LL;
    goto LABEL_100;
  }
  hDevice = v110.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v98, v110.hDevice, (struct _KTHREAD **)v15, &v108);
  v23 = v108;
  if ( !v108 && (v5 || (_DWORD)hDevice) )
  {
    v72 = WdLogNewEntry5_WdError(v20, v19, v21);
    *(_QWORD *)(v72 + 24) = hDevice;
    v31 = -1073741811;
    *(_QWORD *)(v72 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v72);
    if ( v98 && _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v98 + 2), v98);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95, v73);
    v65 = v97 == 0;
LABEL_95:
    if ( v65 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v31;
    goto LABEL_158;
  }
  v109 = 0LL;
  v24 = 0LL;
  v107 = 0LL;
  v25 = 0LL;
  v103[0] = 0LL;
  if ( !v100 )
  {
    v26 = v108;
    v101 = v108;
    v102 = 0;
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v116, (__int64)v108, 0, v22, 0);
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v115,
      *(struct DXGADAPTER *const *)(*((_QWORD *)v23 + 2) + 16LL),
      0LL);
    if ( (unsigned int)(v110.Info.Type - 5) <= 1 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v101);
      v29 = COREDEVICEACCESS::AcquireShared((__int64)v116, 0xFFFFFFFF, 0LL);
      if ( v29 >= 0 )
      {
        v55 = *(_QWORD *)(*((_QWORD *)v23 + 2) + 16LL);
        if ( *(int *)(v55 + 2184) < 0x2000 && !*(_BYTE *)(v55 + 2484) )
        {
          v80 = WdLogNewEntry5_WdWarning(v55, v28, v54);
          *(_QWORD *)(v80 + 24) = 466LL;
          WdLogEvent5_WdWarning(v80);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v115);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v116);
          if ( v101 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v101);
          DXGADAPTER_REFERENCE::Assign(v103, 0LL);
          if ( v98 && _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v98 + 2), v98);
          goto LABEL_101;
        }
        v26 = v101;
        goto LABEL_20;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v115);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v116);
      if ( v101 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v101);
      DXGADAPTER_REFERENCE::Assign(v103, 0LL);
      if ( v98 && _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v98 + 2), v98);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95, v77);
      if ( v97 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v78, &EventProfilerExit, v79, v95);
    }
    else
    {
      v29 = COREADAPTERACCESS::AcquireShared((__int64)v115, 0xFFFFFFFFLL, v27);
      if ( v29 >= 0 )
      {
LABEL_20:
        v30 = *((_QWORD *)v23 + 2);
        v25 = *(volatile signed __int64 **)(v30 + 16);
        v103[0] = (DXGADAPTER *)v25;
        if ( v25 )
        {
          _InterlockedIncrement64(v25 + 3);
          v103[1] = (DXGADAPTER *)-1LL;
          v30 = *((_QWORD *)v23 + 2);
          v6 = v118;
          v23 = v108;
          v25 = (volatile signed __int64 *)v103[0];
          v26 = v101;
        }
        v99 = 0LL;
        LOBYTE(v28) = 1;
        v31 = CreateSynchronizationObjectInternal(v23, v28, v30, &v110, v6, &v109, &v99, &v107);
        v100 = (struct DXGADAPTER *)v31;
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v115);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v116);
        if ( v26 && v102 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)v26 + 13));
          KeLeaveCriticalRegion();
        }
        v24 = v107;
LABEL_26:
        if ( (v31 & 0x80000000) != 0 )
        {
          v92 = WdLogNewEntry5_WdWarning(p_hSyncObject, v32, v34);
          *(_QWORD *)(v92 + 24) = (int)v31;
          WdLogEvent5_WdWarning(v92);
          DXGADAPTER_REFERENCE::Assign(v103, 0LL);
          if ( v98 && _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v98 + 2), v98);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95, v93);
          if ( !v97 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
            return v31;
LABEL_158:
          McTemplateK0q(v63, &EventProfilerExit, v64, v95);
          return v31;
        }
        if ( v105 )
        {
          v35 = v112;
          p_hSyncObject = (ULONG64)&v112->hSyncObject;
          if ( (unsigned __int64)&v112->hSyncObject >= MmUserProbeAddress )
            p_hSyncObject = MmUserProbeAddress;
          hSyncObject = (const GUID *)v110.hSyncObject;
          *(_DWORD *)p_hSyncObject = v110.hSyncObject;
          if ( (*(_BYTE *)&v110.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v110.Info.Flags.0 & 2) == 0 || v94) )
          {
            p_SharedHandle = &v35->Info.SharedHandle;
            p_hSyncObject = MmUserProbeAddress;
            if ( (unsigned __int64)&v35->Info.SharedHandle >= MmUserProbeAddress )
              p_SharedHandle = (_DWORD *)MmUserProbeAddress;
            *p_SharedHandle = v110.Info.SharedHandle;
          }
          Type = v110.Info.Type;
          p_Fence = (ULONG64)&v35->Info.Fence;
          if ( v110.Info.Type == D3DDDI_MONITORED_FENCE )
          {
            p_hSyncObject = p_Fence;
            if ( p_Fence >= MmUserProbeAddress )
              p_hSyncObject = MmUserProbeAddress;
            v39 = *(_OWORD *)&v110.Info.SynchronizationMutex.InitialState;
            *(_OWORD *)p_hSyncObject = *(_OWORD *)&v110.Info.SynchronizationMutex.InitialState;
            v40 = *(_OWORD *)&v110.Info.Reserved.Reserved[2];
            *(_OWORD *)(p_hSyncObject + 16) = *(_OWORD *)&v110.Info.Reserved.Reserved[2];
          }
          else
          {
            v40 = *(_OWORD *)&v110.Info.Reserved.Reserved[2];
            v39 = *(_OWORD *)&v110.Info.SynchronizationMutex.InitialState;
          }
          if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
          {
            p_hSyncObject = MmUserProbeAddress;
            if ( p_Fence >= MmUserProbeAddress )
              p_Fence = MmUserProbeAddress;
            *(_OWORD *)p_Fence = v39;
            *(_OWORD *)(p_Fence + 16) = v40;
            *(_QWORD *)(p_Fence + 32) = v110.Info.Reserved.Reserved[4];
          }
        }
        else
        {
          hSyncObject = (const GUID *)v110.hSyncObject;
          v56 = v112;
          v112->hSyncObject = v110.hSyncObject;
          if ( (*(_BYTE *)&v110.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v110.Info.Flags.0 & 2) == 0 || v94) )
            v56->Info.SharedHandle = v110.Info.SharedHandle;
          Type = v110.Info.Type;
          v57 = *(_OWORD *)&v110.Info.SynchronizationMutex.InitialState;
          v58 = *(_OWORD *)&v110.Info.Reserved.Reserved[2];
          if ( v110.Info.Type == D3DDDI_MONITORED_FENCE )
          {
            *(_OWORD *)&v56->Info.SynchronizationMutex.InitialState = *(_OWORD *)&v110.Info.SynchronizationMutex.InitialState;
            *(_OWORD *)&v56->Info.Reserved.Reserved[2] = v58;
          }
          if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
          {
            *(_OWORD *)&v56->Info.SynchronizationMutex.InitialState = v57;
            *(_OWORD *)&v56->Info.Reserved.Reserved[2] = v58;
            v56->Info.Reserved.Reserved[4] = v110.Info.Reserved.Reserved[4];
          }
        }
        if ( bTracingEnabled )
        {
          v42 = v24 ? *(_QWORD *)(v24 + 32) : 0LL;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0ppp(p_hSyncObject, &EventOpenSyncObject, hSyncObject, v42, (unsigned int)hSyncObject, v23);
        }
        if ( Type != D3DDDI_PERIODIC_MONITORED_FENCE )
        {
          v43 = (int)v100;
          goto LABEL_52;
        }
        v113 = 0LL;
        Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
        MaxCount = v110.Info.Semaphore.MaxCount;
        DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
          (DXGADAPTERBYHANDLE *)&v114,
          v110.Info.Semaphore.MaxCount,
          Current,
          &v113,
          1);
        if ( v113 )
        {
          v43 = CreatePeriodicMonitoredFenceNotificationInternal(v113, (struct DXGADAPTER *)v25, v109, &v110, 0);
          v91 = v114;
          if ( v43 < 0 )
          {
            if ( !v114 )
            {
LABEL_52:
              DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v15 + 184));
              v44 = v110.hSyncObject;
              v45 = (v110.hSyncObject >> 6) & 0xFFFFFF;
              if ( (unsigned int)v45 < *(_DWORD *)(v15 + 224) )
              {
                v46 = *(_QWORD *)(v15 + 208);
                if ( ((v110.hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v46 + 16 * v45 + 8) & 0x60)
                  && (*(_DWORD *)(v46 + 16 * v45 + 8) & 0x1F) != 0 )
                {
                  v47 = 2 * ((*(_QWORD *)&v110.hSyncObject >> 6) & 0xFFFFFFLL);
                  if ( (*(_DWORD *)(v46 + 16 * ((*(_QWORD *)&v110.hSyncObject >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
                  {
                    v48 = WdLogNewEntry5_WdAssertion((v110.hSyncObject >> 25) & 0x60, v46);
                    *(_QWORD *)(v48 + 24) = 217LL;
                    WdLogEvent5_WdAssertion(v48);
                    v46 = *(_QWORD *)(v15 + 208);
                  }
                  *(_DWORD *)(v46 + 8 * v47 + 8) &= ~0x2000u;
                  v44 = v110.hSyncObject;
                }
              }
              *(_QWORD *)(v15 + 192) = 0LL;
              ExReleasePushLockExclusiveEx(v15 + 184, 0LL);
              KeLeaveCriticalRegion();
              if ( v43 < 0 )
              {
                v106.hSyncObject = v44;
                DxgkDestroySynchronizationObjectImpl(&v106, 0, v50);
              }
              if ( v25 )
                DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v25);
              if ( v98 && _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v98 + 2), v98);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95, v49);
              if ( v97 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                  McTemplateK0q(v51, &EventProfilerExit, v52, v95);
              }
              return (unsigned int)v43;
            }
LABEL_147:
            DXGADAPTER::ReleaseReferenceNoTracking(v91);
            goto LABEL_52;
          }
        }
        else
        {
          v90 = WdLogNewEntry5_WdWarning(0LL, v88, v89);
          *(_QWORD *)(v90 + 24) = MaxCount;
          v43 = -1073741811;
          *(_QWORD *)(v90 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v90);
          v91 = v114;
        }
        if ( !v91 )
          goto LABEL_52;
        goto LABEL_147;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v115);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v116);
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v101);
      DXGADAPTER_REFERENCE::Assign(v103, 0LL);
      if ( v98 && _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v98 + 2), v98);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95, v74);
      if ( v97 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        McTemplateK0q(v75, &EventProfilerExit, v76, v95);
        return (unsigned int)v29;
      }
    }
    return (unsigned int)v29;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v117, v100, 0LL);
  v104 = COREADAPTERACCESS::AcquireShared((__int64)v117, 0xFFFFFFFFLL, v81);
  if ( v104 >= 0 )
  {
    LOBYTE(v82) = 1;
    v31 = CreateSynchronizationObjectInternal(v23, v82, *((_QWORD *)v100 + 320), &v110, v6, &v109, 0LL, 0LL);
    v100 = (struct DXGADAPTER *)v31;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v117);
    goto LABEL_26;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v117);
  DXGADAPTER_REFERENCE::Assign(v103, 0LL);
  if ( v98 && _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v98 + 2), v98);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95, v83);
  if ( v97 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v84, &EventProfilerExit, v85, v95);
  return (unsigned int)v104;
}
