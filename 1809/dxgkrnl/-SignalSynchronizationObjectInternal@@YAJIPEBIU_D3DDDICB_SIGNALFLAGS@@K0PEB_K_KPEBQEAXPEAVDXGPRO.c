/*
 * XREFs of ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0103B30
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C00B13E0 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C0101800 (DxgkSignalSynchronizationObjectFromGpu2.c)
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C01292D0 (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 *     DxgkSignalSynchronizationObjectInternal @ 0x1C0129F38 (DxgkSignalSynchronizationObjectInternal.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F93A0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C023F550 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C0250C24 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0010FE0 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0011778 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0011C28 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0011D38 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x1C0021750 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C0021A64 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0021B28 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??1?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ @ 0x1C003C1E4 (--1-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ.c)
 *     McTemplateK0qPR0qqPR3XR3 @ 0x1C003C694 (McTemplateK0qPR0qqPR3XR3.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C003E154 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1?$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$07$0ELGHHIEE@@@QEAA@XZ @ 0x1C003E2C4 (--1-$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$07$0ELGHHIEE@@@QEAA@XZ.c)
 *     McTemplateK0qPR0qPR2qx @ 0x1C003E3A4 (McTemplateK0qPR0qPR2qx.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C01F64A4 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ @ 0x1C0212E40 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C0214184 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0234B88 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 */

__int64 __fastcall SignalSynchronizationObjectInternal(
        __int64 a1,
        unsigned int *a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        unsigned __int64 a7,
        void **a8,
        struct DXGPROCESS *a9,
        bool a10,
        bool a11)
{
  __int64 v11; // rsi
  void *const *v13; // r12
  __int64 v14; // rax
  struct DXGCONTEXT **PoolWithTag; // r13
  struct DXGCONTEXT **v17; // r13
  char v18; // si
  __int64 v19; // rcx
  __int64 v20; // r9
  struct DXGCONTEXT *v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // rax
  char v24; // al
  __int64 v25; // rdi
  __int64 v26; // rdi
  unsigned int v27; // ebx
  __int64 v28; // rcx
  bool v29; // r14
  __int64 v30; // rcx
  struct _KEVENT *v31; // rsi
  struct _KEVENT *v32; // rsi
  __int64 v33; // rcx
  unsigned __int8 v34; // si
  const GUID *v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // rcx
  const GUID *v38; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // rax
  struct DXGGLOBAL *v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rax
  unsigned int v54; // edi
  unsigned int v55; // r10d
  _QWORD *v56; // rsi
  const unsigned int *v57; // r14
  __int64 v58; // rax
  struct DXGPROCESS *v59; // rcx
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned int v63; // r14d
  unsigned int v64; // r11d
  DXGCONTEXT **v65; // r9
  __int64 v66; // r10
  unsigned int RenderHwQueueCount; // eax
  int v68; // r11d
  _QWORD *v69; // rax
  char *v70; // r15
  __int64 v71; // rdi
  char *v72; // r14
  int v73; // r11d
  __int64 v74; // r10
  __int64 v75; // rdi
  __int64 v76; // rcx
  int v77; // r8d
  _QWORD *v78; // rdx
  _QWORD *v79; // r9
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  const GUID *v83; // r8
  _QWORD *v84; // rax
  __int64 v85; // rax
  char *v86; // rdi
  char v87; // r14
  __int64 v88; // r15
  char *v89; // rsi
  unsigned int *v90; // r12
  char *v91; // r13
  unsigned int v92; // edi
  __int64 v93; // rcx
  const GUID *v94; // r8
  int v95; // r9d
  __int64 v96; // rax
  unsigned int v97; // edi
  __int64 v98; // r8
  unsigned int v99; // ecx
  __int64 v100; // rdi
  __int64 v101; // rcx
  int v102; // eax
  __int64 v103; // rax
  __int64 v104; // rax
  _QWORD *v105; // rax
  unsigned int v106; // edi
  __int64 v107; // rcx
  const GUID *v108; // r8
  int v109; // r9d
  __int64 v110; // rax
  unsigned int v111; // edi
  __int64 v112; // r8
  unsigned int v113; // ecx
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rdi
  __int64 v117; // rax
  char *v118; // rdi
  unsigned __int64 v119; // rsi
  void *v120; // rcx
  __int64 v121; // r8
  int v122; // edx
  __int64 *v123; // r13
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  _BYTE *v128; // rcx
  size_t v129; // r8
  void *v130; // rdx
  __int64 v131; // rax
  __int64 v132; // r12
  _BYTE *v133; // rcx
  unsigned int v134; // r15d
  unsigned int v135; // r9d
  _QWORD *v136; // r14
  char *v137; // rdi
  __int64 v138; // rsi
  struct DXGCONTEXT **v139; // rdx
  __int64 v140; // rcx
  _QWORD *v141; // rax
  _QWORD *v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rsi
  int v146; // eax
  __int64 v147; // rdx
  __int64 v148; // rcx
  const GUID *v149; // r8
  _QWORD *v150; // rax
  __int64 v151; // rcx
  char v152; // [rsp+70h] [rbp-338h]
  unsigned int v153; // [rsp+74h] [rbp-334h]
  struct DXGPROCESS *v155; // [rsp+80h] [rbp-328h]
  _BYTE v156[16]; // [rsp+88h] [rbp-320h] BYREF
  struct DXGGLOBAL *v157; // [rsp+98h] [rbp-310h] BYREF
  char v158; // [rsp+A0h] [rbp-308h]
  __int64 v159; // [rsp+A8h] [rbp-300h] BYREF
  int v160; // [rsp+B0h] [rbp-2F8h]
  struct DXGCONTEXT **v161; // [rsp+B8h] [rbp-2F0h]
  unsigned int v162; // [rsp+C0h] [rbp-2E8h]
  struct DXGCONTEXT **v163; // [rsp+C8h] [rbp-2E0h] BYREF
  char v164; // [rsp+D0h] [rbp-2D8h] BYREF
  int v165; // [rsp+E0h] [rbp-2C8h]
  unsigned int v166; // [rsp+E8h] [rbp-2C0h]
  char *v167; // [rsp+F0h] [rbp-2B8h]
  unsigned int *v168; // [rsp+F8h] [rbp-2B0h]
  PVOID P; // [rsp+100h] [rbp-2A8h]
  _BYTE v170[16]; // [rsp+108h] [rbp-2A0h] BYREF
  unsigned int v171; // [rsp+118h] [rbp-290h]
  char *v172; // [rsp+120h] [rbp-288h] BYREF
  char v173; // [rsp+128h] [rbp-280h] BYREF
  unsigned int v174; // [rsp+138h] [rbp-270h]
  char *v175; // [rsp+140h] [rbp-268h]
  char *v176; // [rsp+148h] [rbp-260h]
  void *Src; // [rsp+150h] [rbp-258h]
  char v178[8]; // [rsp+160h] [rbp-248h] BYREF
  struct _KTHREAD **v179[2]; // [rsp+168h] [rbp-240h] BYREF
  DXGADAPTER *v180; // [rsp+178h] [rbp-230h]
  char v181; // [rsp+180h] [rbp-228h]
  struct _KTHREAD **v182[5]; // [rsp+188h] [rbp-220h] BYREF
  char v183; // [rsp+1B0h] [rbp-1F8h]
  unsigned __int64 v184; // [rsp+1C0h] [rbp-1E8h]
  char *v185; // [rsp+1D0h] [rbp-1D8h] BYREF
  char v186; // [rsp+1D8h] [rbp-1D0h] BYREF
  unsigned int v187; // [rsp+218h] [rbp-190h]
  char *v188; // [rsp+220h] [rbp-188h] BYREF
  char v189; // [rsp+228h] [rbp-180h] BYREF
  unsigned int v190; // [rsp+268h] [rbp-140h]
  _QWORD v191[2]; // [rsp+270h] [rbp-138h] BYREF
  __int128 v192; // [rsp+280h] [rbp-128h] BYREF
  _QWORD v193[4]; // [rsp+290h] [rbp-118h] BYREF
  char v194; // [rsp+2B0h] [rbp-F8h]
  struct DXGADAPTERSYNCOBJECT *v195; // [rsp+2B8h] [rbp-F0h] BYREF
  _BYTE v196[32]; // [rsp+2C0h] [rbp-E8h] BYREF
  _BYTE v197[80]; // [rsp+2E0h] [rbp-C8h] BYREF
  void *v198; // [rsp+330h] [rbp-78h] BYREF
  _BYTE v199[32]; // [rsp+338h] [rbp-70h] BYREF
  unsigned int v200; // [rsp+358h] [rbp-50h]

  v11 = a4;
  v168 = a2;
  v153 = a1;
  Src = a6;
  v13 = a8;
  v155 = a9;
  v191[1] = a9;
  if ( !a4 )
  {
    v14 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v14 + 24) = 353LL;
    WdLogEvent5_WdError(v14);
    return -1073741811LL;
  }
  v163 = 0LL;
  v165 = 0;
  if ( a4 <= 2 )
  {
    PoolWithTag = (struct DXGCONTEXT **)&v164;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a4 < 8 )
    {
LABEL_225:
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v163);
      return 3221225495LL;
    }
    PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * a4, 0x4B677844u);
  }
  v163 = PoolWithTag;
  v161 = PoolWithTag;
  v165 = v11;
  if ( !PoolWithTag )
    goto LABEL_225;
  memset(PoolWithTag, 0, 8 * v11);
  v17 = v163;
  v161 = v163;
  v18 = a11;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156, *a5, (struct _KTHREAD **)v155, v163, a11);
  v21 = *v17;
  if ( !*v17 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v22[3] = v155;
    v22[4] = *a5;
    v22[5] = -1073741811LL;
    WdLogEvent5_WdError(v22);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v163);
    return 3221225485LL;
  }
  if ( (*(_BYTE *)&a3.0 & 2) != 0 )
  {
    if ( v153 )
    {
      v23 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v23 + 24) = 383LL;
LABEL_13:
      WdLogEvent5_WdError(v23);
      goto LABEL_14;
    }
    if ( !*v13 )
    {
      v23 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v23 + 24) = 388LL;
      goto LABEL_13;
    }
  }
  v24 = *((_BYTE *)v21 + 433);
  v25 = *((_QWORD *)v21 + 2);
  if ( v24 )
  {
    v26 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v197, (struct DXGADAPTER *const)v26, 0LL);
    if ( v18 || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v197) >= 0 )
    {
      v27 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v26 + 4152),
              v155,
              v153,
              v168,
              a3,
              a4,
              a5,
              a6,
              a7,
              v13,
              a10,
              0,
              0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v197);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v163);
      return v27;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v197);
LABEL_21:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v163);
    return 3221226166LL;
  }
  v159 = v25;
  v160 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v178, v25, 0, v20, v18);
  v29 = a10;
  if ( !v18 )
  {
    if ( a10 || *(_DWORD *)(*((_QWORD *)*v161 + 2) + 328LL) == 2 || (*((_BYTE *)v155 + 323) & 8) != 0 )
    {
      v31 = *(struct _KEVENT **)(v25 + 16);
      if ( *(_DWORD *)(v25 + 328) == 2 )
        v32 = v31 + 4;
      else
        v32 = v31 + 3;
      if ( !KeReadStateEvent(v32) )
        KeWaitForSingleObject(v32, Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v25 + 104), 0) )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL) + 96LL));
        v34 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v25 + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v33, &EventBlockThread, v35, 40);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v25 + 104), 1u);
        if ( v34 )
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v25 + 16) + 16LL));
        ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL) + 96LL, 0LL);
        KeLeaveCriticalRegion();
      }
      v160 = 1;
    }
    else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159) )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v178);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v163);
      return 2147483665LL;
    }
    if ( v181 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30);
      v36[3] = 275LL;
      v36[4] = 4LL;
      v36[5] = v179;
      v36[6] = 0LL;
      v36[7] = 0LL;
      WdLogEvent5_WdCriticalError(v36);
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v180 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v180 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v37, &EventBlockThread, v38, 72);
        KeWaitForSingleObject((char *)v180 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v180);
    }
    v181 = 1;
    v28 = *((unsigned int *)v182[4] + 116);
    if ( (_DWORD)v28 != 1 )
      goto LABEL_55;
    if ( v183 )
    {
      COREACCESS::AcquireShared((DXGADAPTER **)v182);
      v28 = *((unsigned int *)v182[2] + 44);
      if ( (_DWORD)v28 != 1 )
      {
        COREACCESS::Release(v182);
LABEL_55:
        COREACCESS::Release(v179);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v178);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159);
        goto LABEL_21;
      }
    }
  }
  Global = DXGGLOBAL::GetGlobal(v28);
  v157 = Global;
  v158 = 0;
  if ( !Global )
  {
    v41 = WdLogNewEntry5_WdAssertion(v40);
    *(_QWORD *)(v41 + 24) = 2306LL;
    WdLogEvent5_WdAssertion(v41);
    Global = v157;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 43)) )
  {
    v43 = WdLogNewEntry5_WdAssertion(v42);
    *(_QWORD *)(v43 + 24) = 2311LL;
    WdLogEvent5_WdAssertion(v43);
  }
  if ( v158 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v42);
    v44[3] = 275LL;
    v44[4] = 4LL;
    v44[5] = &v157;
    v44[6] = 0LL;
    v44[7] = 0LL;
    WdLogEvent5_WdCriticalError(v44);
  }
  v45 = v157;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v45 + 43), 1u);
  v158 = 1;
  v46 = (__int64)v161;
  v47 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v161 + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v47 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v47 + 144)) )
  {
    v49 = WdLogNewEntry5_WdAssertion(v48);
    *(_QWORD *)(v49 + 24) = 462LL;
    WdLogEvent5_WdAssertion(v49);
  }
  if ( v29 )
  {
    v50 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46 + 16LL) + 16LL) + 16LL) + 192LL)
                    + 64LL);
    if ( *(_DWORD *)(*(_QWORD *)(v50 + 40) + 28LL) > 0x1052u )
    {
      if ( (a3.Value & 0x7FFFFFF8) != 0 )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdError(v50);
        v51[3] = *a5;
        v51[4] = (a3.Value >> 3) & 0xFFFFFFF;
        LODWORD(v52) = -1073741811;
        v51[5] = -1073741811LL;
        WdLogEvent5_WdError(v51);
LABEL_69:
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v157);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v178);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
        PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v163);
        return (unsigned int)v52;
      }
      if ( (a3.Value & 0x80000000) != 0 )
      {
        v53 = WdLogNewEntry5_WdError(v50);
        *(_QWORD *)(v53 + 24) = 480LL;
        WdLogEvent5_WdError(v53);
        goto LABEL_72;
      }
    }
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v196, (struct _KTHREAD **)v155);
  v54 = 1;
  v55 = a4;
  if ( a4 > 1 )
  {
    v56 = (_QWORD *)(v46 + 8);
    v57 = a5 + 1;
    while ( 1 )
    {
      v58 = (*v57 >> 6) & 0xFFFFFF;
      v59 = v155;
      if ( (unsigned int)v58 >= *((_DWORD *)v155 + 62) )
        goto LABEL_81;
      v60 = *((_QWORD *)v155 + 29);
      v59 = (struct DXGPROCESS *)*(unsigned int *)(v60 + 16 * v58 + 8);
      if ( *v57 >> 30 != ((*(_DWORD *)(v60 + 16 * v58 + 8) >> 5) & 3)
        || ((unsigned __int16)v59 & 0x2000) != 0
        || ((unsigned __int8)v59 & 0x1F) == 0 )
      {
        goto LABEL_81;
      }
      v59 = (struct DXGPROCESS *)((unsigned __int8)v59 & 0x1F);
      if ( (_BYTE)v59 != 7 )
        break;
      v62 = *(_QWORD *)(v60 + 16LL * (unsigned int)v58);
LABEL_82:
      *v56 = v62;
      if ( !v62 || *(_QWORD *)(v62 + 16) != *((_QWORD *)*v161 + 2) )
      {
        v69 = (_QWORD *)WdLogNewEntry5_WdError(v59);
        v69[3] = *a5;
        v69[4] = a5[v54];
        v69[5] = v54;
        LODWORD(v52) = -1073741811;
        v69[6] = -1073741811LL;
        WdLogEvent5_WdError(v69);
        DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v196);
        goto LABEL_69;
      }
      ++v54;
      ++v57;
      ++v56;
      if ( v54 >= v55 )
      {
        v46 = (__int64)v161;
        goto LABEL_86;
      }
    }
    v61 = WdLogNewEntry5_WdError(v59);
    *(_QWORD *)(v61 + 24) = 316LL;
    WdLogEvent5_WdError(v61);
    v55 = a4;
LABEL_81:
    v62 = 0LL;
    goto LABEL_82;
  }
LABEL_86:
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v196);
  v63 = 0;
  v166 = 0;
  v64 = 0;
  v162 = 0;
  if ( a4 )
  {
    v65 = (DXGCONTEXT **)v46;
    v66 = a4;
    do
    {
      if ( (*((_DWORD *)*v65 + 99) & 0x10) != 0 )
      {
        RenderHwQueueCount = DXGCONTEXT::GetRenderHwQueueCount(*v65);
        v64 = RenderHwQueueCount + v68;
      }
      else
      {
        ++v63;
      }
      ++v65;
      --v66;
    }
    while ( v66 );
    v162 = v64;
    v166 = v63;
  }
  v188 = 0LL;
  v190 = 0;
  if ( v63 <= 8 )
  {
    v70 = &v189;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v63 < 8 )
    {
      v70 = 0LL;
      v175 = 0LL;
      goto LABEL_104;
    }
    v70 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v63, 0x4B677844u);
  }
  v188 = v70;
  v175 = v70;
  v190 = v63;
  if ( v70 && v63 )
  {
    memset(v70, 0, 8LL * v63);
    v70 = v188;
    v175 = v188;
  }
  v64 = v162;
LABEL_104:
  v185 = 0LL;
  v187 = 0;
  v71 = v64;
  if ( v64 <= 8 )
  {
    v72 = &v186;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v64 < 8 )
    {
      v72 = 0LL;
      v176 = 0LL;
      goto LABEL_112;
    }
    v72 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v64, 0x4B677844u);
    v64 = v162;
  }
  v185 = v72;
  v176 = v72;
  v187 = v64;
  if ( v72 && v64 )
  {
    memset(v72, 0, 8 * v71);
    v72 = v185;
    v176 = v185;
  }
LABEL_112:
  if ( !v70 || !v72 )
    goto LABEL_224;
  v73 = 0;
  if ( a4 )
  {
    v74 = v46;
    v75 = a4;
    do
    {
      v76 = *(_QWORD *)v74;
      if ( (*(_DWORD *)(*(_QWORD *)v74 + 396LL) & 0x10) != 0 )
      {
        DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)(v76 + 400), &v192);
        v78 = (_QWORD *)*((_QWORD *)&v192 + 1);
        v79 = (_QWORD *)v192;
        while ( v78 != v79 && v78 )
        {
          *(_QWORD *)&v72[8 * v77++] = v78[5];
          v78 = (_QWORD *)*v78;
        }
        v192 = 0LL;
      }
      else
      {
        *(_QWORD *)&v70[8 * v73++] = *(_QWORD *)(v76 + 256);
      }
      v74 += 8LL;
      --v75;
    }
    while ( v75 );
  }
  if ( (*(_BYTE *)&a3.0 & 2) != 0 )
  {
    v80 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, char *, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, void *const))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46 + 16LL) + 16LL) + 520LL) + 8LL) + 832LL))(
            v162,
            v72,
            v166,
            v70,
            a3.0,
            *v13);
    v52 = v80;
    if ( v80 >= 0 )
    {
      if ( bTracingEnabled )
      {
        v191[0] = *v13;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qPR0qPR2qx(v82, v81, v83, a4, v46, 1, (__int64)v191, *(_BYTE *)&a3.0, 0);
      }
      goto LABEL_131;
    }
    v84 = (_QWORD *)WdLogNewEntry5_WdError(v82);
    v84[3] = v155;
    v84[4] = *v13;
    v84[5] = v52;
    WdLogEvent5_WdError(v84);
    goto LABEL_127;
  }
  if ( !v153 )
  {
    v85 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v85 + 24) = 598LL;
    WdLogEvent5_WdError(v85);
    goto LABEL_134;
  }
  v172 = 0LL;
  v174 = 0;
  v184 = v153;
  if ( v153 <= 2 )
  {
    v86 = &v173;
    v184 = v153;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v153 < 8 )
      goto LABEL_223;
    v86 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * v153, 0x4B677844u);
  }
  v172 = v86;
  v167 = v86;
  v174 = v153;
  if ( !v86 || (memset(v86, 0, 8LL * v153), (v167 = v172) == 0LL) )
  {
LABEL_223:
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v172);
LABEL_224:
    NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v185);
    NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v188);
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v157);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v178);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
    goto LABEL_225;
  }
  v152 = 0;
  v87 = 0;
  v88 = 0LL;
  v89 = (char *)v155 + 208;
  v90 = v168;
  v91 = v172;
  do
  {
    v92 = *v90;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v89, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v95 = *((_DWORD *)v155 + 56);
        if ( v95 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v93, &EventBlockThread, v94, v95);
      }
      ExAcquirePushLockSharedEx(v89, 0LL);
    }
    v96 = (v92 >> 6) & 0xFFFFFF;
    v97 = v92 >> 30;
    if ( (unsigned int)v96 < *((_DWORD *)v155 + 62)
      && (v98 = *((_QWORD *)v155 + 29), v99 = *(_DWORD *)(v98 + 16 * v96 + 8), v97 == ((v99 >> 5) & 3))
      && (v99 & 0x2000) == 0
      && (v99 & 0x1F) == 8 )
    {
      v100 = *(_QWORD *)(v98 + 16LL * (unsigned int)v96);
    }
    else
    {
      v100 = 0LL;
    }
    ExReleasePushLockSharedEx(v89, 0LL);
    KeLeaveCriticalRegion();
    if ( v100 )
    {
      v102 = *(_DWORD *)(v100 + 168);
      if ( v102 == 5 )
      {
        v103 = WdLogNewEntry5_WdAssertion(v101);
        *(_QWORD *)(v103 + 24) = 632LL;
        WdLogEvent5_WdAssertion(v103);
        v102 = *(_DWORD *)(v100 + 168);
      }
      if ( v102 == 6 )
      {
        v104 = WdLogNewEntry5_WdAssertion(v101);
        *(_QWORD *)(v104 + 24) = 633LL;
        WdLogEvent5_WdAssertion(v104);
      }
      v152 = 1;
      if ( v87 )
      {
LABEL_192:
        v126 = WdLogNewEntry5_WdError(v101);
        *(_QWORD *)(v126 + 24) = v155;
LABEL_193:
        WdLogEvent5_WdError(v126);
        PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v172);
        goto LABEL_134;
      }
      if ( *(_DWORD *)(v100 + 168) == 3 && v153 != 1 )
      {
        v105 = (_QWORD *)WdLogNewEntry5_WdError(v101);
        v105[3] = v155;
        v105[4] = v168[v88];
        v105[5] = v153;
        goto LABEL_163;
      }
      goto LABEL_183;
    }
    v106 = *v90;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v89, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v109 = *((_DWORD *)v155 + 56);
        if ( v109 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v107, &EventBlockThread, v108, v109);
      }
      ExAcquirePushLockSharedEx(v89, 0LL);
    }
    v110 = (v106 >> 6) & 0xFFFFFF;
    v111 = v106 >> 30;
    if ( (unsigned int)v110 < *((_DWORD *)v155 + 62) )
    {
      v112 = *((_QWORD *)v155 + 29);
      v113 = *(_DWORD *)(v112 + 16 * v110 + 8);
      if ( v111 == ((v113 >> 5) & 3) && (v113 & 0x2000) == 0 && (v113 & 0x1F) != 0 )
      {
        v114 = v113 & 0x1F;
        if ( (_BYTE)v114 == 11 )
        {
          v116 = *(_QWORD *)(v112 + 16LL * (unsigned int)v110);
          goto LABEL_177;
        }
        v115 = WdLogNewEntry5_WdError(v114);
        *(_QWORD *)(v115 + 24) = 316LL;
        WdLogEvent5_WdError(v115);
      }
    }
    v116 = 0LL;
LABEL_177:
    ExReleasePushLockSharedEx(v89, 0LL);
    KeLeaveCriticalRegion();
    if ( !v116 )
    {
      v105 = (_QWORD *)WdLogNewEntry5_WdError(v101);
      v105[3] = v155;
      v105[4] = v168[v88];
      v105[5] = (unsigned int)v88;
LABEL_163:
      LODWORD(v52) = -1073741811;
      v105[6] = -1073741811LL;
      WdLogEvent5_WdError(v105);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v172);
LABEL_127:
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v185);
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v188);
      goto LABEL_69;
    }
    v87 = 1;
    if ( v152 )
      goto LABEL_192;
    if ( (*(_DWORD *)(v116 + 72) & 0x10) != 0 )
    {
      v127 = WdLogNewEntry5_WdError(v101);
      *(_QWORD *)(v127 + 24) = v168[v88];
      WdLogEvent5_WdError(v127);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v172);
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v185);
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v188);
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v157);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v178);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v163);
      return 3221225506LL;
    }
    if ( *(_QWORD *)(v116 + 16) != *((_QWORD *)*v161 + 2) )
    {
      v126 = WdLogNewEntry5_WdError(v101);
      *(_QWORD *)(v126 + 24) = *((_QWORD *)*v161 + 2);
      *(_QWORD *)(v126 + 32) = *(_QWORD *)(v116 + 16);
      goto LABEL_193;
    }
    v100 = *(_QWORD *)(v116 + 32);
    if ( (unsigned int)(*(_DWORD *)(v100 + 168) - 5) > 1 )
    {
      v117 = WdLogNewEntry5_WdAssertion(v101);
      *(_QWORD *)(v117 + 24) = 705LL;
      WdLogEvent5_WdAssertion(v117);
    }
LABEL_183:
    *(_QWORD *)v91 = v100;
    v88 = (unsigned int)(v88 + 1);
    ++v90;
    v91 += 8;
  }
  while ( (unsigned int)v88 < v153 );
  v118 = v167;
  v119 = v184;
  v120 = 0LL;
  v198 = 0LL;
  v121 = 0LL;
  v200 = 0;
  v122 = *(_DWORD *)(*(_QWORD *)v167 + 168LL);
  if ( (unsigned int)(v122 - 5) > 1 )
  {
    v123 = (__int64 *)&a7;
    if ( v122 != 3 )
      v123 = 0LL;
    goto LABEL_187;
  }
  if ( a10 )
  {
    if ( v153 <= 4 )
    {
      v128 = v199;
      v198 = v199;
LABEL_202:
      v200 = v153;
      if ( v128 )
      {
        memset(v128, 0, 8LL * v153);
        v121 = v200;
        v120 = v198;
        goto LABEL_204;
      }
LABEL_205:
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((__int64)&v198);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v172);
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v185);
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v188);
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v157);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v178);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v163);
      return 3221225495LL;
    }
    if ( 0xFFFFFFFFFFFFFFFFuLL / v153 >= 8 )
    {
      v128 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v153, 0x4B677844u);
      v198 = v128;
      goto LABEL_202;
    }
LABEL_204:
    if ( !v120 )
      goto LABEL_205;
    v129 = 8 * v121;
    v130 = Src;
    if ( (char *)Src + v129 < Src || (unsigned __int64)Src + v129 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v120, v130, v129);
    v123 = (__int64 *)v198;
    Src = v198;
    v118 = v167;
  }
  else
  {
    v123 = (__int64 *)Src;
    if ( !Src )
    {
      v131 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v131 + 24) = 747LL;
      WdLogEvent5_WdError(v131);
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((__int64)&v198);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v172);
      goto LABEL_134;
    }
  }
LABEL_187:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v193,
    v118,
    v153);
  if ( v194 )
  {
    if ( v193[0] )
    {
      v125 = WdLogNewEntry5_WdError(v124);
      *(_QWORD *)(v125 + 24) = 780LL;
      WdLogEvent5_WdError(v125);
      goto LABEL_190;
    }
LABEL_222:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v193);
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((__int64)&v198);
    goto LABEL_223;
  }
  P = 0LL;
  v171 = 0;
  if ( v153 <= 2 )
  {
    v133 = v170;
    P = v170;
    v119 = v153;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v119 < 8 )
    {
      v132 = 0LL;
      goto LABEL_220;
    }
    v133 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v119, 0x4B677844u);
    P = v133;
  }
  v171 = v153;
  if ( v133 )
  {
    memset(v133, 0, 8 * v119);
    v133 = P;
  }
  v132 = (__int64)v133;
LABEL_220:
  if ( !v132 )
  {
    P = 0LL;
    v171 = 0;
    goto LABEL_222;
  }
  v134 = 0;
  v135 = v153;
  v136 = (_QWORD *)v132;
  v137 = &v118[-v132];
  v167 = v137;
  while ( 2 )
  {
    v138 = *(_QWORD *)((char *)v136 + (_QWORD)v137);
    v139 = v161;
    v140 = *((_QWORD *)*v161 + 2);
    v52 = *(_QWORD *)(v140 + 16);
    if ( (*(_DWORD *)(v138 + 172) & 4) != 0 )
    {
      LODWORD(v52) = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                       (DXGSYNCOBJECTCA *)v138,
                       *(struct ADAPTER_RENDER **)(v140 + 16),
                       &v195);
      if ( (int)v52 < 0 )
        goto LABEL_231;
      v139 = v161;
      v135 = v153;
    }
    else if ( v52 && *(_QWORD *)(v138 + 280) != v52 )
    {
      v141 = (_QWORD *)WdLogNewEntry5_WdError(v140);
      v141[3] = v138;
      v141[4] = *(_QWORD *)(v138 + 280);
      v141[5] = v52;
      LODWORD(v52) = -1073741811;
      v141[6] = -1073741811LL;
      WdLogEvent5_WdError(v141);
LABEL_231:
      v142 = (_QWORD *)WdLogNewEntry5_WdError(v140);
      v142[3] = v155;
      v142[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v161 + 2) + 16LL) + 16LL);
      v142[5] = (int)v52;
      WdLogEvent5_WdError(v142);
      if ( P != v170 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v171 = 0;
LABEL_235:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v193);
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((__int64)&v198);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v172);
      goto LABEL_127;
    }
    if ( (*(_DWORD *)(v138 + 172) & 4) != 0 )
      v143 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                           (DXGSYNCOBJECTCA *)v138,
                           *(struct ADAPTER_RENDER **)(*((_QWORD *)*v139 + 2) + 16LL))
             + 4);
    else
      v143 = *(_QWORD *)(v138 + 296);
    *v136 = v143;
    if ( v143 )
    {
      ++v134;
      ++v136;
      if ( v134 < v135 )
      {
        v137 = v167;
        continue;
      }
      v145 = (__int64)v161;
      v146 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, char *, unsigned int, __int64, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v161 + 2) + 16LL) + 520LL) + 8LL) + 640LL))(
               v162,
               v176,
               v166,
               v175,
               v135,
               v132,
               a3.0,
               v123);
      v52 = v146;
      if ( v146 < 0 )
      {
        v150 = (_QWORD *)WdLogNewEntry5_WdError(v148);
        v150[3] = v155;
        v150[4] = *v168;
        v150[5] = 0LL;
        v150[6] = v52;
        WdLogEvent5_WdError(v150);
        if ( P != v170 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v171 = 0;
        goto LABEL_235;
      }
      if ( v152 )
      {
        if ( bTracingEnabled )
        {
          v151 = 0LL;
          if ( v123 )
            v151 = *v123;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0qPR0qPR2qx(v151, v147, v149, a4, v145, v153, v132, *(_BYTE *)&a3.0, v151);
        }
      }
      else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0qPR0qqPR3XR3(v148, v147, v149, a4, v145, *(_BYTE *)&a3.0, v153, v132, (__int64)v123);
      }
      if ( P != v170 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v171 = 0;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v193);
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((__int64)&v198);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v172);
LABEL_131:
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v185);
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v188);
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v157);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v178);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v163);
      return 0LL;
    }
    break;
  }
  v144 = WdLogNewEntry5_WdError(v140);
  *(_QWORD *)(v144 + 24) = v138;
  WdLogEvent5_WdError(v144);
  if ( P != v170 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v171 = 0;
LABEL_190:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v193);
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((__int64)&v198);
  PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v172);
LABEL_134:
  NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v185);
  NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v188);
LABEL_72:
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v157);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v178);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v159);
LABEL_14:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
  PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v163);
  return -1073741811LL;
}
