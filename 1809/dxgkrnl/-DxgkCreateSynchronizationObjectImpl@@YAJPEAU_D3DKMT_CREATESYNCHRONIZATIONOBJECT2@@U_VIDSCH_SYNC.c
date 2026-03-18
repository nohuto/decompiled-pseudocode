/*
 * XREFs of ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C00DA660
 * Callers:
 *     DxgkCreateSynchronizationObject @ 0x1C00DA640 (DxgkCreateSynchronizationObject.c)
 *     ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x1C01369E0 (-DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z.c)
 *     ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EDA30 (-VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateSynchronizationObjectInternal @ 0x1C0237070 (DxgkCreateSynchronizationObjectInternal.c)
 * Callees:
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C0004034 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B8B0 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001112C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0011C28 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00120CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     McTemplateK0ppp @ 0x1C003C574 (McTemplateK0ppp.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00AD028 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C01143A0 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@_KI@Z @ 0x1C0234554 (-CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@_KI@Z.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObjectImpl(
        ULONG64 a1,
        unsigned int a2,
        const GUID *a3,
        ADAPTER_RENDER **a4)
{
  int v5; // r15d
  unsigned int v6; // ebx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 *ThreadProperty; // rax
  __int64 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  const GUID *v19; // r8
  bool v20; // zf
  _OWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // r15d
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rcx
  __int64 v33; // r9
  struct DXGDEVICE *v34; // r13
  __int64 v35; // rax
  int v36; // r14d
  __int64 v37; // rcx
  const GUID *v38; // r8
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  const GUID *v45; // r8
  __int64 v46; // rdx
  ULONG64 v47; // rcx
  const GUID *v48; // r8
  _DWORD *v49; // rdx
  D3DKMT_HANDLE v50; // r15d
  _DWORD *v51; // rdx
  ULONG64 v52; // rdi
  unsigned int v53; // r14d
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  _OWORD *v56; // rax
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int64 v59; // r9
  struct _KTHREAD **Current; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  DXGADAPTER *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdx
  struct DXGADAPTER *v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  int PairingAdapters; // eax
  __int64 v71; // rcx
  __int64 v72; // rax
  struct DXGADAPTER *v73; // rdi
  DXGADAPTER *v74; // r14
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rax
  ADAPTER_DISPLAY *v79; // r11
  __int64 v80; // rdi
  unsigned int v81; // eax
  __int64 v82; // rcx
  DXGADAPTER **v83; // r11
  __int64 v84; // rax
  unsigned __int64 v85; // rcx
  __int64 v86; // r8
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rdx
  unsigned __int64 v90; // rtt
  __int64 v91; // rdi
  __int64 v92; // rax
  int PeriodicFrameNotification; // eax
  __int64 v94; // rax
  int v95; // eax
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rdi
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rdi
  __int64 v103; // rax
  __int64 v104; // rax
  struct DXGADAPTER **v105; // [rsp+20h] [rbp-2B8h]
  struct DXGADAPTER **v106; // [rsp+20h] [rbp-2B8h]
  char v107; // [rsp+40h] [rbp-298h]
  int v108; // [rsp+48h] [rbp-290h] BYREF
  __int64 v109; // [rsp+50h] [rbp-288h]
  char v110; // [rsp+58h] [rbp-280h]
  char v111[8]; // [rsp+60h] [rbp-278h] BYREF
  struct DXGDEVICE *v112; // [rsp+68h] [rbp-270h] BYREF
  int v113; // [rsp+70h] [rbp-268h]
  DXGADAPTER *v114; // [rsp+78h] [rbp-260h] BYREF
  _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v115; // [rsp+88h] [rbp-250h] BYREF
  DXGSYNCOBJECT *v116[2]; // [rsp+90h] [rbp-248h] BYREF
  unsigned int v117[4]; // [rsp+A0h] [rbp-238h] BYREF
  unsigned int v118[4]; // [rsp+B0h] [rbp-228h]
  __int128 v119; // [rsp+C0h] [rbp-218h]
  __int128 v120; // [rsp+D0h] [rbp-208h]
  __int128 v121; // [rsp+E0h] [rbp-1F8h]
  __int128 v122; // [rsp+F0h] [rbp-1E8h]
  struct DXGDEVICE *v123[2]; // [rsp+100h] [rbp-1D8h] BYREF
  __int64 v124; // [rsp+110h] [rbp-1C8h] BYREF
  DXGADAPTER *v125; // [rsp+118h] [rbp-1C0h] BYREF
  __int64 v126; // [rsp+120h] [rbp-1B8h] BYREF
  struct DXGADAPTER *v127; // [rsp+128h] [rbp-1B0h] BYREF
  struct DXGADAPTER *v128; // [rsp+130h] [rbp-1A8h] BYREF
  unsigned __int64 v129; // [rsp+138h] [rbp-1A0h] BYREF
  unsigned __int64 v130; // [rsp+140h] [rbp-198h] BYREF
  _BYTE v131[80]; // [rsp+150h] [rbp-188h] BYREF
  _BYTE v132[80]; // [rsp+1A0h] [rbp-138h] BYREF
  _BYTE v133[96]; // [rsp+1F0h] [rbp-E8h] BYREF
  _BYTE v134[136]; // [rsp+250h] [rbp-88h] BYREF
  int v136; // [rsp+2F0h] [rbp+18h]

  v136 = (int)a3;
  v5 = (int)a3;
  v6 = a2;
  v108 = -1;
  v109 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v110 = 1;
    v108 = 2041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2041);
  }
  else
  {
    v110 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v108, 2041);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v15 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v13 = *v15;
    }
    v6 = a2;
  }
  v123[1] = (struct DXGDEVICE *)v13;
  if ( !v13 )
  {
    v16 = WdLogNewEntry5_WdError(v11);
    LODWORD(v17) = -1073741811;
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v108);
    v20 = v110 == 0;
    goto LABEL_135;
  }
  v107 = *(_BYTE *)(v13 + 323) & 0xC;
  if ( v5 )
  {
    v21 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v21 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v117 = *v21;
    *(_OWORD *)v118 = v21[1];
    v119 = v21[2];
    v120 = v21[3];
    v121 = v21[4];
    v122 = v21[5];
    v22 = v117[3];
    if ( (v6 & 0x7FFFFFFF) == 1 && (v117[3] & 0x80000000) != 0 )
      v6 = v6 & 0x80000000 | 5;
  }
  else
  {
    *(_OWORD *)v117 = *(_OWORD *)a1;
    *(_OWORD *)v118 = *(_OWORD *)(a1 + 16);
    v119 = *(_OWORD *)(a1 + 32);
    v120 = *(_OWORD *)(a1 + 48);
    v121 = *(_OWORD *)(a1 + 64);
    v122 = *(_OWORD *)(a1 + 80);
    v22 = v117[3];
  }
  DWORD2(v122) = 0;
  if ( (v117[3] & 0x7FFFFF00) != 0 )
  {
    v23 = WdLogNewEntry5_WdWarning(v22, v10, v12);
    LODWORD(v17) = -1073741811;
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
LABEL_134:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v108);
    v20 = v110 == 0;
LABEL_135:
    if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v18, &EventProfilerExit, v19, v108);
    return (unsigned int)v17;
  }
  v24 = ((unsigned int)v22 >> 1) & 1;
  if ( (((unsigned int)v22 >> 1) & 1) != 0 && (v22 & 1) == 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gDxgkrnlCounterAccumulated);
    v25 = WdLogNewEntry5_WdWarning(v22, v24, v12);
    *(_QWORD *)(v25 + 24) = 282LL;
    WdLogEvent5_WdWarning(v25);
    goto LABEL_52;
  }
  v26 = v117[2];
  if ( v117[2] - 5 <= 1 )
  {
    if ( a4 )
    {
      v28 = WdLogNewEntry5_WdWarning(v22, v24, v12);
      *(_QWORD *)(v28 + 24) = 291LL;
      WdLogEvent5_WdWarning(v28);
      goto LABEL_52;
    }
    if ( (v22 & 1) != 0 && !(_DWORD)v24 )
    {
      v29 = WdLogNewEntry5_WdWarning(v22, v24, v12);
      *(_QWORD *)(v29 + 24) = 296LL;
      WdLogEvent5_WdWarning(v29);
      goto LABEL_52;
    }
    if ( (v22 & 0x10) != 0 && (v22 & 0x20) != 0 )
    {
      v30 = WdLogNewEntry5_WdWarning(v22, v24, v12);
      *(_QWORD *)(v30 + 24) = 302LL;
      WdLogEvent5_WdWarning(v30);
      goto LABEL_52;
    }
  }
  else if ( (v22 & 0x80u) != 0LL )
  {
    v27 = WdLogNewEntry5_WdWarning(v22, v24, v12);
    *(_QWORD *)(v27 + 24) = 308LL;
    WdLogEvent5_WdWarning(v27);
    goto LABEL_52;
  }
  v31 = v117[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v111, v117[0], (struct _KTHREAD **)v13, v123);
  v34 = v123[0];
  if ( !v123[0] && (v136 || (_DWORD)v31) )
  {
    v35 = WdLogNewEntry5_WdError(v32);
    *(_QWORD *)(v35 + 24) = v31;
    LODWORD(v17) = -1073741811;
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v35);
LABEL_133:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v111);
    goto LABEL_134;
  }
  v116[0] = 0LL;
  v124 = 0LL;
  v112 = v123[0];
  v113 = 0;
  if ( !a4 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v133, (__int64)v123[0], 0, v33, 0);
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v132,
      *(struct DXGADAPTER *const *)(*((_QWORD *)v34 + 2) + 16LL),
      0LL);
    if ( v26 - 5 > 1 )
    {
      v36 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v132);
      if ( v36 < 0 )
      {
LABEL_43:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v132);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
        goto LABEL_44;
      }
LABEL_56:
      v126 = 0LL;
      LODWORD(v106) = v6;
      LODWORD(v17) = CreateSynchronizationObjectInternal(
                       (__int64)v34,
                       1,
                       *((ADAPTER_RENDER **)v34 + 2),
                       (__int64)v117,
                       (POBJECT_HANDLE_INFORMATION)v106,
                       v116,
                       &v126,
                       (__int64)&v124);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v132);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
      goto LABEL_60;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v112);
    v36 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v133);
    if ( v36 < 0 )
      goto LABEL_43;
    v42 = *(_QWORD *)(*((_QWORD *)v34 + 2) + 16LL);
    if ( *(int *)(v42 + 2160) >= 0x2000 || *(_BYTE *)(v42 + 2452) )
      goto LABEL_56;
    v43 = WdLogNewEntry5_WdWarning(v42, v40, v41);
    *(_QWORD *)(v43 + 24) = 356LL;
    WdLogEvent5_WdWarning(v43);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v132);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v112);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v111);
LABEL_52:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v108);
    if ( v110 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v44, &EventProfilerExit, v45, v108);
    LODWORD(v17) = -1073741811;
    return (unsigned int)v17;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v134, (struct DXGADAPTER *const)a4, 0LL);
  v36 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v134);
  if ( v36 >= 0 )
  {
    LODWORD(v105) = v6;
    LODWORD(v17) = CreateSynchronizationObjectInternal(
                     (__int64)v34,
                     1,
                     a4[316],
                     (__int64)v117,
                     (POBJECT_HANDLE_INFORMATION)v105,
                     v116,
                     0LL,
                     0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v134);
LABEL_60:
    if ( (int)v17 < 0 )
    {
      v104 = WdLogNewEntry5_WdWarning(v47, v46, v48);
      *(_QWORD *)(v104 + 24) = (int)v17;
      WdLogEvent5_WdWarning(v104);
LABEL_132:
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v112);
      goto LABEL_133;
    }
    if ( v136 )
    {
      v49 = (_DWORD *)(a1 + 88);
      v47 = MmUserProbeAddress;
      if ( a1 + 88 >= MmUserProbeAddress )
        v49 = (_DWORD *)MmUserProbeAddress;
      v50 = DWORD2(v122);
      *v49 = DWORD2(v122);
      if ( (v117[3] & 1) != 0 && ((v117[3] & 2) == 0 || v107) )
      {
        v51 = (_DWORD *)(a1 + 80);
        v47 = MmUserProbeAddress;
        if ( a1 + 80 >= MmUserProbeAddress )
          v51 = (_DWORD *)MmUserProbeAddress;
        *v51 = v122;
      }
      v52 = a1 + 16;
      v53 = v117[2];
      v54 = *(_OWORD *)v118;
      v55 = v119;
      if ( v117[2] == 5 )
      {
        v47 = MmUserProbeAddress;
        v56 = (_OWORD *)v52;
        if ( v52 >= MmUserProbeAddress )
          v56 = (_OWORD *)MmUserProbeAddress;
        *v56 = *(_OWORD *)v118;
        v56[1] = v55;
      }
      if ( v53 == 6 )
      {
        v47 = MmUserProbeAddress;
        if ( v52 >= MmUserProbeAddress )
          v52 = MmUserProbeAddress;
        *(_OWORD *)v52 = v54;
        *(_OWORD *)(v52 + 16) = v55;
        *(_QWORD *)(v52 + 32) = v120;
      }
    }
    else
    {
      v50 = DWORD2(v122);
      *(_DWORD *)(a1 + 88) = DWORD2(v122);
      if ( (v117[3] & 1) != 0 && ((v117[3] & 2) == 0 || v107) )
        *(_DWORD *)(a1 + 80) = v122;
      v53 = v117[2];
      v57 = *(_OWORD *)v118;
      v58 = v119;
      if ( v117[2] == 5 )
      {
        *(_OWORD *)(a1 + 16) = *(_OWORD *)v118;
        *(_OWORD *)(a1 + 32) = v58;
      }
      if ( v53 == 6 )
      {
        *(_OWORD *)(a1 + 16) = v57;
        *(_OWORD *)(a1 + 32) = v58;
        *(_QWORD *)(a1 + 48) = v120;
      }
    }
    if ( bTracingEnabled )
    {
      v59 = v124 ? *(_QWORD *)(v124 + 32) : 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppp(v47, &EventOpenSyncObject, v48, v59, v50, v34);
    }
    if ( v53 != 6 )
    {
LABEL_114:
      LOBYTE(v95) = EvaluateCurrentState((int **)&g_Feature_2884940088_57713524_FeatureDescriptorDetails);
      if ( v95 )
      {
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v13 + 208));
        v96 = (v50 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v96 < *(_DWORD *)(v13 + 248) )
        {
          v97 = *(_QWORD *)(v13 + 232);
          if ( ((v50 >> 25) & 0x60) == (*(_BYTE *)(v97 + 16 * v96 + 8) & 0x60)
            && (*(_DWORD *)(v97 + 16 * v96 + 8) & 0x1F) != 0 )
          {
            v98 = 2 * ((*((_QWORD *)&v122 + 1) >> 6) & 0xFFFFFFLL);
            if ( (*(_DWORD *)(v97 + 16 * ((*((_QWORD *)&v122 + 1) >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
            {
              v99 = WdLogNewEntry5_WdAssertion((v50 >> 25) & 0x60);
              *(_QWORD *)(v99 + 24) = 222LL;
              WdLogEvent5_WdAssertion(v99);
              v97 = *(_QWORD *)(v13 + 232);
            }
            *(_DWORD *)(v97 + 8 * v98 + 8) &= ~0x2000u;
          }
        }
        *(_QWORD *)(v13 + 216) = 0LL;
        ExReleasePushLockExclusiveEx(v13 + 208, 0LL);
        KeLeaveCriticalRegion();
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v112);
      }
      else
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v112);
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v13 + 208));
        v100 = (v50 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v100 < *(_DWORD *)(v13 + 248) )
        {
          v101 = *(_QWORD *)(v13 + 232);
          if ( ((v50 >> 25) & 0x60) == (*(_BYTE *)(v101 + 16 * v100 + 8) & 0x60)
            && (*(_DWORD *)(v101 + 16 * v100 + 8) & 0x1F) != 0 )
          {
            v102 = 2 * ((*((_QWORD *)&v122 + 1) >> 6) & 0xFFFFFFLL);
            if ( (*(_DWORD *)(v101 + 16 * ((*((_QWORD *)&v122 + 1) >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
            {
              v103 = WdLogNewEntry5_WdAssertion((v50 >> 25) & 0x60);
              *(_QWORD *)(v103 + 24) = 222LL;
              WdLogEvent5_WdAssertion(v103);
              v101 = *(_QWORD *)(v13 + 232);
            }
            *(_DWORD *)(v101 + 8 * v102 + 8) &= ~0x2000u;
          }
        }
        *(_QWORD *)(v13 + 216) = 0LL;
        ExReleasePushLockExclusiveEx(v13 + 208, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( (int)v17 < 0 )
      {
        v115.hSyncObject = v50;
        DxgkDestroySynchronizationObjectImpl(&v115, 0);
      }
      goto LABEL_132;
    }
    v125 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    v17 = v118[0];
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v114, v118[0], Current, &v125, 1);
    v64 = v125;
    if ( !v125 )
    {
      v65 = WdLogNewEntry5_WdWarning(v62, v61, v63);
      *(_QWORD *)(v65 + 24) = v17;
      LODWORD(v17) = -1073741811;
      *(_QWORD *)(v65 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v65);
      goto LABEL_112;
    }
    if ( !DXGADAPTER::IsDxgmms2(v125) )
    {
      v69 = WdLogNewEntry5_WdWarning(v67, v66, v68);
      *(_QWORD *)(v69 + 24) = 492LL;
      WdLogEvent5_WdWarning(v69);
      LODWORD(v17) = -1073741811;
      goto LABEL_112;
    }
    PairingAdapters = DxgkpGetPairingAdapters(v67, 0, &v128, &v130, &v127, &v129);
    v17 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v72 = WdLogNewEntry5_WdError(v71);
      *(_QWORD *)(v72 + 24) = v64;
      *(_QWORD *)(v72 + 32) = v17;
      WdLogEvent5_WdError(v72);
      goto LABEL_112;
    }
    v73 = v127;
    v74 = v128;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v131, v128, v127);
    v17 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v131);
    DXGADAPTER::ReleaseReference(v74);
    DXGADAPTER::ReleaseReference(v73);
    if ( (int)v17 >= 0 )
    {
      v79 = (ADAPTER_DISPLAY *)*((_QWORD *)v73 + 315);
      v80 = v118[1];
      v81 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v79, v118[1]);
      v17 = v81;
      if ( v81 == -1 )
      {
        v84 = WdLogNewEntry5_WdError(v82);
        *(_QWORD *)(v84 + 24) = v80;
        WdLogEvent5_WdError(v84);
        LODWORD(v17) = -1073741811;
        goto LABEL_111;
      }
      v85 = *((_QWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(v83, v81) + 2);
      v87 = HIDWORD(v85);
      if ( !HIDWORD(v85) || !(_DWORD)v85 )
      {
        v94 = WdLogNewEntry5_WdError(v85);
        *(_QWORD *)(v94 + 24) = v17;
        WdLogEvent5_WdError(v94);
        LODWORD(v17) = -1073741676;
        goto LABEL_111;
      }
      v90 = 10000000 * v87;
      v88 = 10000000 * v87 / (unsigned int)v85;
      v89 = v90 % (unsigned int)v85;
      v91 = *(_QWORD *)&v118[2];
      if ( *(_QWORD *)&v118[2] > v88 )
      {
        v92 = WdLogNewEntry5_WdWarning((unsigned int)v85, v89, v86);
        *(_QWORD *)(v92 + 24) = v91;
        LODWORD(v17) = -1073741811;
        *(_QWORD *)(v92 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v92);
        goto LABEL_111;
      }
      PeriodicFrameNotification = DXGSYNCOBJECT::CreatePeriodicFrameNotification(v116[0], v74, v88, v17);
      v17 = PeriodicFrameNotification;
      if ( PeriodicFrameNotification >= 0 )
        goto LABEL_111;
    }
    v78 = WdLogNewEntry5_WdWarning(v76, v75, v77);
    *(_QWORD *)(v78 + 24) = v17;
    WdLogEvent5_WdWarning(v78);
LABEL_111:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v131);
LABEL_112:
    if ( v114 )
      DXGADAPTER::ReleaseReference(v114);
    goto LABEL_114;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v134);
LABEL_44:
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v112);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v111);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v108);
  if ( v110 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v37, &EventProfilerExit, v38, v108);
  return (unsigned int)v36;
}
