/*
 * XREFs of ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0107E60
 * Callers:
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C0107280 (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C0107750 (DxgkSignalSynchronizationObjectFromGpu2.c)
 *     DxgkSignalSynchronizationObjectInternal @ 0x1C013CA1C (DxgkSignalSynchronizationObjectInternal.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0229BF0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C022F5CC (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0274FC0 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C0286D14 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0007364 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BDF8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C000CE38 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000CEC4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000CF34 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00238D4 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x1C00240D4 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C00247C8 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     McTemplateK0qPR0qqPR3XR3 @ 0x1C0042F88 (McTemplateK0qPR0qqPR3XR3.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0044D74 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0qPR0qPR2qx @ 0x1C004527C (McTemplateK0qPR0qPR2qx.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C0226B44 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C0248350 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0269B04 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 */

__int64 __fastcall SignalSynchronizationObjectInternal(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        unsigned __int64 a7,
        void **a8,
        struct DXGPROCESS *a9,
        bool a10,
        bool a11)
{
  int v12; // ebx
  unsigned __int64 v13; // rsi
  struct DXGPROCESS *v14; // rax
  void *PoolWithTag; // rcx
  struct DXGCONTEXT **v16; // r13
  char v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct DXGCONTEXT *v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  bool v26; // zf
  bool v27; // r14
  struct _KTHREAD **v28; // r15
  struct _KEVENT *v29; // r14
  struct _KEVENT *v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rcx
  const GUID *v33; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  PERESOURCE *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned int v46; // edi
  unsigned int v47; // r15d
  DXGCONTEXT *v48; // rcx
  unsigned int v49; // r14d
  unsigned int v50; // r12d
  struct DXGCONTEXT **v51; // r9
  __int64 v52; // r10
  _BYTE *v53; // rax
  _QWORD *v54; // rdx
  _BYTE *v55; // r9
  _BYTE *v56; // rdi
  int v57; // r10d
  struct DXGCONTEXT **v58; // r8
  __int64 v59; // r9
  struct DXGCONTEXT *v60; // rcx
  _BYTE *v61; // rcx
  void **v62; // r13
  unsigned int v63; // r12d
  DXGPUSHLOCK *v64; // r14
  unsigned int *v65; // r15
  unsigned int v66; // edi
  __int64 v67; // rax
  unsigned int v68; // edi
  _DWORD *v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  unsigned int v73; // edi
  __int64 v74; // rax
  unsigned int v75; // edi
  __int64 v76; // rdi
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rdx
  void **v81; // rax
  _BYTE *v82; // r9
  _BYTE *v83; // rcx
  unsigned int v84; // r8d
  PVOID v85; // r10
  int v86; // edx
  _BYTE *v87; // r10
  size_t v88; // r8
  void *v89; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  _BYTE *v94; // rcx
  __int64 v95; // r15
  unsigned int v96; // r12d
  __int64 v97; // rdi
  char *v98; // r13
  struct DXGCONTEXT **v99; // rdx
  __int64 v100; // r14
  struct ADAPTER_RENDER *v101; // rcx
  __int64 v102; // rax
  __int64 v103; // r12
  void **v104; // r14
  int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rcx
  const GUID *v108; // r8
  __int64 v109; // rdi
  __int64 v110; // r8
  unsigned int v111; // ecx
  __int64 v112; // r8
  unsigned int v113; // ecx
  __int64 v114; // rcx
  __int64 v115; // rax
  int v116; // eax
  void **v117; // rdi
  __int64 v118; // rcx
  _QWORD *v119; // r14
  const unsigned int *v120; // r15
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // r9
  unsigned int v124; // edx
  __int64 *v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rdx
  const GUID *v129; // r8
  __int64 v130; // rcx
  char v131; // r14
  __int64 v132; // rax
  _QWORD *v133; // rax
  __int64 v134; // rax
  __int64 v135; // rdi
  __int64 v136; // r8
  _QWORD *v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  _QWORD *v140; // rax
  __int64 v141; // rax
  _QWORD *v142; // rax
  __int64 v143; // rax
  _QWORD *v144; // rax
  unsigned int v145; // r11d
  _QWORD *i; // rdx
  void **v147; // rsi
  int v148; // eax
  __int64 v149; // rdx
  __int64 v150; // rcx
  const GUID *v151; // r8
  _QWORD *v152; // rax
  __int64 v153; // rax
  PVOID v154; // rcx
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  _QWORD *v158; // rax
  int v159; // ebx
  __int64 v160; // rax
  PVOID v161; // rcx
  __int64 v162; // rax
  PVOID v163; // rcx
  __int64 v164; // rax
  __int64 v165; // rax
  _QWORD *v166; // rax
  PVOID v167; // rcx
  __int64 v168; // rax
  __int64 v169; // rdx
  _QWORD *v170; // rax
  __int64 v171; // rax
  _QWORD *v172; // rax
  _QWORD *v173; // rax
  char v174; // [rsp+70h] [rbp-3B8h]
  PERESOURCE *v175; // [rsp+78h] [rbp-3B0h] BYREF
  char v176; // [rsp+80h] [rbp-3A8h]
  __int64 v177; // [rsp+88h] [rbp-3A0h] BYREF
  int v178; // [rsp+90h] [rbp-398h]
  char v179; // [rsp+98h] [rbp-390h]
  struct DXGPROCESS *v180; // [rsp+A0h] [rbp-388h]
  PVOID P; // [rsp+A8h] [rbp-380h]
  _BYTE v182[16]; // [rsp+B0h] [rbp-378h] BYREF
  int v183; // [rsp+C0h] [rbp-368h]
  PVOID v184; // [rsp+C8h] [rbp-360h]
  struct DXGCONTEXT *v185[2]; // [rsp+D0h] [rbp-358h] BYREF
  unsigned int v186; // [rsp+E0h] [rbp-348h]
  DXGCONTEXT *v187; // [rsp+E8h] [rbp-340h] BYREF
  char v188; // [rsp+F0h] [rbp-338h]
  unsigned int v189; // [rsp+F8h] [rbp-330h]
  void **v190; // [rsp+100h] [rbp-328h]
  PVOID v191; // [rsp+110h] [rbp-318h]
  _BYTE v192[64]; // [rsp+118h] [rbp-310h] BYREF
  unsigned int v193; // [rsp+158h] [rbp-2D0h]
  struct DXGCONTEXT **v194; // [rsp+160h] [rbp-2C8h]
  PVOID v195; // [rsp+170h] [rbp-2B8h]
  _BYTE v196[64]; // [rsp+178h] [rbp-2B0h] BYREF
  unsigned int v197; // [rsp+1B8h] [rbp-270h]
  _QWORD *v198; // [rsp+1C0h] [rbp-268h]
  unsigned int *v199; // [rsp+1C8h] [rbp-260h]
  PVOID v200; // [rsp+1D0h] [rbp-258h]
  _BYTE v201[16]; // [rsp+1D8h] [rbp-250h] BYREF
  int v202; // [rsp+1E8h] [rbp-240h]
  unsigned int v203; // [rsp+1F0h] [rbp-238h]
  unsigned int v204; // [rsp+1F4h] [rbp-234h]
  struct DXGPROCESS *DxgAdapterSyncObject; // [rsp+1F8h] [rbp-230h]
  int v206; // [rsp+200h] [rbp-228h]
  void *Src; // [rsp+208h] [rbp-220h]
  _BYTE *v208; // [rsp+210h] [rbp-218h]
  void *v209; // [rsp+218h] [rbp-210h] BYREF
  __int128 v210; // [rsp+220h] [rbp-208h] BYREF
  _QWORD v211[4]; // [rsp+230h] [rbp-1F8h] BYREF
  char v212; // [rsp+250h] [rbp-1D8h]
  struct DXGADAPTERSYNCOBJECT *v213; // [rsp+258h] [rbp-1D0h] BYREF
  _BYTE v214[24]; // [rsp+260h] [rbp-1C8h] BYREF
  PVOID v215; // [rsp+278h] [rbp-1B0h]
  _BYTE v216[32]; // [rsp+280h] [rbp-1A8h] BYREF
  unsigned int v217; // [rsp+2A0h] [rbp-188h]
  char v218[8]; // [rsp+2B0h] [rbp-178h] BYREF
  _BYTE v219[16]; // [rsp+2B8h] [rbp-170h] BYREF
  __int64 v220; // [rsp+2C8h] [rbp-160h]
  char v221; // [rsp+2D0h] [rbp-158h]
  int v222; // [rsp+2D4h] [rbp-154h]
  __int64 v223; // [rsp+2D8h] [rbp-150h]
  _BYTE v224[16]; // [rsp+2F8h] [rbp-130h] BYREF
  __int64 v225; // [rsp+308h] [rbp-120h]
  __int64 v226; // [rsp+338h] [rbp-F0h]
  char v227; // [rsp+340h] [rbp-E8h]
  _BYTE v228[144]; // [rsp+350h] [rbp-D8h] BYREF

  v189 = a4;
  v12 = a3;
  v199 = a2;
  v13 = (unsigned int)a1;
  Src = a6;
  v190 = a8;
  v14 = a9;
  v180 = a9;
  DxgAdapterSyncObject = a9;
  if ( !a4 )
  {
    v132 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v132 + 24) = 337LL;
    WdLogEvent5_WdError(v132);
    return -1073741811LL;
  }
  v184 = 0LL;
  v186 = 0;
  if ( a4 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a4 < 8 )
    {
      v16 = 0LL;
      v14 = v180;
      goto LABEL_7;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a4, 0x4B677844u);
    v184 = PoolWithTag;
    v14 = v180;
  }
  else
  {
    PoolWithTag = v185;
    v184 = v185;
  }
  v186 = a4;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8LL * a4);
    PoolWithTag = v184;
    v14 = v180;
  }
  v16 = (struct DXGCONTEXT **)PoolWithTag;
LABEL_7:
  v194 = v16;
  if ( !v16 )
    return 3221225495LL;
  v17 = a11;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v187, *a5, (struct _KTHREAD **)v14, v16, a11);
  v22 = *v16;
  if ( !*v16 )
  {
    v133 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18, v20);
    v133[3] = v180;
    v133[4] = *a5;
    v159 = -1073741811;
    v133[5] = -1073741811LL;
    WdLogEvent5_WdError(v133);
    goto LABEL_212;
  }
  v206 = v12 & 2;
  if ( (v12 & 2) != 0 )
  {
    if ( (_DWORD)v13 )
    {
      v134 = WdLogNewEntry5_WdError(v19, v18, v20);
      *(_QWORD *)(v134 + 24) = 367LL;
    }
    else
    {
      if ( *v190 )
        goto LABEL_10;
      v134 = WdLogNewEntry5_WdError(v19, v18, v20);
      *(_QWORD *)(v134 + 24) = 372LL;
    }
    WdLogEvent5_WdError(v134);
    goto LABEL_219;
  }
LABEL_10:
  if ( *((_BYTE *)v22 + 449) )
  {
    v135 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 2) + 16LL) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v228, (struct DXGADAPTER *const)v135, 0LL);
    if ( v17 || (int)COREADAPTERACCESS::AcquireShared((__int64)v228, (unsigned int)(v136 - 1), v136) >= 0 )
    {
      v159 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v135 + 4144),
               v180,
               v13,
               v199,
               (struct _D3DDDICB_SIGNALFLAGS)v12,
               v189,
               a5,
               a6,
               a7,
               v190,
               a10,
               0,
               0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v228);
      goto LABEL_212;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v228);
LABEL_228:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v187);
    if ( v184 != v185 && v184 )
      ExFreePoolWithTag(v184, 0);
    return 3221226166LL;
  }
  v23 = *((_QWORD *)v22 + 2);
  v177 = v23;
  v178 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v218, v23, 0, v21, v17);
  v26 = v17 == 0;
  v27 = a10;
  v28 = (struct _KTHREAD **)v180;
  if ( !v26 )
    goto LABEL_24;
  if ( !a10 && *(_DWORD *)(*((_QWORD *)*v16 + 2) + 328LL) != 2 && (*((_BYTE *)v180 + 299) & 8) == 0 )
  {
    if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v177) )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v218);
      if ( v177 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v177);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v187);
      if ( v184 != v185 && v184 )
        ExFreePoolWithTag(v184, 0);
      return 2147483665LL;
    }
    goto LABEL_17;
  }
  v29 = *(struct _KEVENT **)(v23 + 16);
  if ( *(_DWORD *)(v23 + 328) == 2 )
  {
    v30 = v29 + 4;
    if ( KeReadStateEvent(v30) )
      goto LABEL_15;
LABEL_241:
    KeWaitForSingleObject(v30, Executive, 0, 0, 0LL);
    goto LABEL_15;
  }
  v30 = v29 + 3;
  if ( !KeReadStateEvent(v30) )
    goto LABEL_241;
LABEL_15:
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 104), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 96LL));
    v130 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL);
    if ( *(_DWORD *)(v130 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v130, 0xFFFFFFFFLL);
      v131 = 1;
    }
    else
    {
      v131 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v130, &EventBlockThread, v129, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 104), 1u);
    if ( v131 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v178 = 1;
  v27 = a10;
LABEL_17:
  if ( v221 )
  {
    v137 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v24);
    v137[3] = 275LL;
    v137[4] = 4LL;
    v137[5] = v219;
    v137[6] = 0LL;
    v137[7] = 0LL;
    WdLogEvent5_WdCriticalError(v137);
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v220 + 160) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v220 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v32, &EventBlockThread, v33, 72);
      KeWaitForSingleObject((PVOID)(v220 + 48), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v220, 2044LL, 0LL);
  }
  v222 = 2044;
  v223 = 0LL;
  v221 = 1;
  v25 = *(unsigned int *)(v226 + 464);
  if ( (_DWORD)v25 != 1 )
    goto LABEL_248;
  if ( v227 )
  {
    COREACCESS::AcquireShared((__int64)v224, 0xFFFFFFFF, 0LL);
    v25 = *(unsigned int *)(v225 + 176);
    if ( (_DWORD)v25 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v224);
LABEL_248:
      COREACCESS::Release((COREACCESS *)v219);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v218);
      if ( v177 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v177);
      goto LABEL_228;
    }
  }
LABEL_24:
  Global = DXGGLOBAL::GetGlobal(v25, v24);
  v175 = (PERESOURCE *)Global;
  v176 = 0;
  if ( !Global )
  {
    v138 = WdLogNewEntry5_WdAssertion(v36, v35);
    *(_QWORD *)(v138 + 24) = 2313LL;
    WdLogEvent5_WdAssertion(v138);
    Global = (struct DXGGLOBAL *)v175;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 43)) )
  {
    v139 = WdLogNewEntry5_WdAssertion(v38, v37);
    *(_QWORD *)(v139 + 24) = 2318LL;
    WdLogEvent5_WdAssertion(v139);
  }
  if ( v176 )
  {
    v140 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v37);
    v140[3] = 275LL;
    v140[4] = 4LL;
    v140[5] = &v175;
    v140[6] = 0LL;
    v140[7] = 0LL;
    WdLogEvent5_WdCriticalError(v140);
  }
  v39 = v175;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v39[43], 1u);
  v176 = 1;
  v42 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v16 + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v42 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v42 + 144)) )
  {
    v141 = WdLogNewEntry5_WdAssertion(v43, v40);
    *(_QWORD *)(v141 + 24) = 446LL;
    WdLogEvent5_WdAssertion(v141);
  }
  if ( v27 )
  {
    v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v16 + 2) + 16LL) + 16LL) + 192LL) + 64LL);
    if ( *(_DWORD *)(*(_QWORD *)(v44 + 40) + 28LL) > 0x1052u )
    {
      if ( (v12 & 0x7FFFFFF8) != 0 )
      {
        v142 = (_QWORD *)WdLogNewEntry5_WdError(v44, v40, v41);
        v142[3] = *a5;
        v142[4] = ((unsigned int)v12 >> 3) & 0xFFFFFFF;
        v159 = -1073741811;
        v142[5] = -1073741811LL;
        WdLogEvent5_WdError(v142);
        if ( !v176 )
          goto LABEL_255;
LABEL_252:
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v175);
        goto LABEL_255;
      }
      if ( v12 < 0 )
      {
        v143 = WdLogNewEntry5_WdError(v44, v40, v41);
        *(_QWORD *)(v143 + 24) = 464LL;
        WdLogEvent5_WdError(v143);
        if ( v176 )
          goto LABEL_258;
        goto LABEL_259;
      }
    }
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v214, v28);
  v46 = 1;
  v47 = v189;
  if ( v189 > 1 )
  {
    v119 = v16 + 1;
    v120 = a5 + 1;
    while ( 1 )
    {
      v121 = (*v120 >> 6) & 0xFFFFFF;
      v122 = *v120 >> 30;
      if ( (unsigned int)v121 >= *((_DWORD *)v180 + 56) )
        goto LABEL_191;
      v45 = (unsigned int)v121;
      v123 = *((_QWORD *)v180 + 26);
      v124 = *(_DWORD *)(v123 + 16 * v121 + 8);
      if ( (_DWORD)v122 != ((v124 >> 5) & 3) || (v124 & 0x2000) != 0 || (v124 & 0x1F) == 0 )
        goto LABEL_191;
      v45 = 2LL * (unsigned int)v121;
      v125 = (__int64 *)(v123 + 16LL * (unsigned int)v121);
      v126 = v124 & 0x1F;
      if ( (_BYTE)v126 != 7 )
        break;
      v128 = *v125;
LABEL_192:
      *v119 = v128;
      if ( !v128 || (v128 = *(_QWORD *)(v128 + 16), v128 != *((_QWORD *)*v16 + 2)) )
      {
        v144 = (_QWORD *)WdLogNewEntry5_WdError(v122, v128, v45);
        v144[3] = *a5;
        v144[4] = a5[v46];
        v144[5] = v46;
        v159 = -1073741811;
        v144[6] = -1073741811LL;
        WdLogEvent5_WdError(v144);
        DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v214);
        if ( !v176 )
          goto LABEL_255;
        goto LABEL_252;
      }
      ++v46;
      ++v120;
      ++v119;
      if ( v46 >= v189 )
      {
        v47 = v189;
        goto LABEL_38;
      }
    }
    v127 = WdLogNewEntry5_WdError(v122, v126, v45);
    *(_QWORD *)(v127 + 24) = 267LL;
    WdLogEvent5_WdError(v127);
LABEL_191:
    v128 = 0LL;
    goto LABEL_192;
  }
LABEL_38:
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v214);
  v49 = 0;
  v203 = 0;
  v50 = 0;
  v204 = 0;
  if ( v47 )
  {
    v51 = v16;
    v52 = v47;
    do
    {
      v48 = *v51;
      if ( (*((_DWORD *)*v51 + 103) & 0x10) != 0 )
        v50 += DXGCONTEXT::GetRenderHwQueueCount(v48);
      else
        ++v49;
      ++v51;
      --v52;
    }
    while ( v52 );
    v204 = v50;
    v203 = v49;
  }
  v195 = 0LL;
  v197 = 0;
  if ( v49 > 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v49 < 8 )
    {
      v54 = 0LL;
      goto LABEL_50;
    }
    v53 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v49, 0x4B677844u);
  }
  else
  {
    v53 = v196;
  }
  v195 = v53;
  v197 = v49;
  v48 = (DXGCONTEXT *)v53;
  if ( v53 && v49 )
    memset(v53, 0, 8LL * v49);
  v54 = v195;
LABEL_50:
  v198 = v54;
  v55 = 0LL;
  v191 = 0LL;
  v193 = 0;
  if ( v50 > 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v50 < 8 )
    {
      v56 = 0LL;
      v54 = v198;
      goto LABEL_56;
    }
    v55 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v50, 0x4B677844u);
    v191 = v55;
    v54 = v198;
  }
  else
  {
    v55 = v192;
    v191 = v192;
  }
  v193 = v50;
  if ( v55 && v50 )
  {
    memset(v55, 0, 8LL * v50);
    v55 = v191;
    v54 = v198;
  }
  v56 = v55;
LABEL_56:
  v208 = v56;
  if ( !v54 || !v56 )
  {
    if ( v56 != v192 && v56 )
      ExFreePoolWithTag(v55, 0);
    v191 = 0LL;
    v193 = 0;
    if ( v195 != v196 && v195 )
      ExFreePoolWithTag(v195, 0);
    v195 = 0LL;
    v197 = 0;
    if ( v176 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v175);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v218);
    if ( v177 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v177);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v187);
    v154 = v184;
    if ( v184 == v185 || !v184 )
      return 3221225495LL;
    goto LABEL_521;
  }
  v57 = 0;
  if ( v47 )
  {
    v58 = v16;
    v59 = v47;
    do
    {
      v60 = *v58;
      if ( (*((_DWORD *)*v58 + 103) & 0x10) != 0 )
      {
        DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)v60 + 52, &v210);
        for ( i = (_QWORD *)*((_QWORD *)&v210 + 1); i != (_QWORD *)v210 && i; i = (_QWORD *)*i )
        {
          v48 = (DXGCONTEXT *)v145;
          *(_QWORD *)&v56[8 * v145++] = i[5];
        }
        v210 = 0LL;
        v54 = v198;
      }
      else
      {
        v48 = (DXGCONTEXT *)*((_QWORD *)v60 + 34);
        v54[v57++] = v48;
      }
      ++v58;
      --v59;
    }
    while ( v59 );
    v55 = v191;
  }
  if ( !v206 )
  {
    if ( !(_DWORD)v13 )
    {
      v153 = WdLogNewEntry5_WdError(v48, v54, 0LL);
      *(_QWORD *)(v153 + 24) = 582LL;
      WdLogEvent5_WdError(v153);
      if ( v191 != v192 && v191 )
        ExFreePoolWithTag(v191, 0);
      v191 = 0LL;
      v193 = 0;
      if ( v195 != v196 && v195 )
        ExFreePoolWithTag(v195, 0);
      v195 = 0LL;
      v197 = 0;
      if ( v176 )
        goto LABEL_313;
      goto LABEL_314;
    }
    P = 0LL;
    v183 = 0;
    if ( (unsigned int)v13 > 2 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v13 < 8 )
      {
        v62 = 0LL;
LABEL_71:
        if ( !v62 )
        {
          P = 0LL;
          v183 = 0;
          if ( v55 != v192 && v55 )
            ExFreePoolWithTag(v55, 0);
          v191 = 0LL;
          v193 = 0;
          if ( v195 != v196 && v195 )
            ExFreePoolWithTag(v195, 0);
          v195 = 0LL;
          v197 = 0;
          if ( v176 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v175);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v218);
          if ( v177 )
            goto LABEL_328;
          goto LABEL_329;
        }
        v174 = 0;
        v179 = 0;
        v63 = 0;
        v64 = (struct DXGPROCESS *)((char *)v180 + 184);
        v190 = v62;
        v65 = v199;
        while ( 1 )
        {
          v66 = *v65;
          DXGPUSHLOCK::AcquireShared(v64);
          v67 = (v66 >> 6) & 0xFFFFFF;
          v68 = v66 >> 30;
          if ( (unsigned int)v67 < *((_DWORD *)v180 + 56)
            && (v110 = *((_QWORD *)v180 + 26), v111 = *(_DWORD *)(v110 + 16 * v67 + 8), v68 == ((v111 >> 5) & 3))
            && (v111 & 0x2000) == 0
            && (v111 & 0x1F) == 8 )
          {
            v69 = *(_DWORD **)(v110 + 16LL * (unsigned int)v67);
          }
          else
          {
            v69 = 0LL;
          }
          ExReleasePushLockSharedEx(v64, 0LL);
          KeLeaveCriticalRegion();
          if ( v69 )
          {
            v116 = v69[48];
            if ( v116 == 5 )
            {
              v155 = WdLogNewEntry5_WdAssertion(v71, v70);
              *(_QWORD *)(v155 + 24) = 616LL;
              WdLogEvent5_WdAssertion(v155);
              v116 = v69[48];
            }
            if ( v116 == 6 )
            {
              v156 = WdLogNewEntry5_WdAssertion(v71, v70);
              *(_QWORD *)(v156 + 24) = 617LL;
              WdLogEvent5_WdAssertion(v156);
            }
            v174 = 1;
            if ( v179 )
            {
              v160 = WdLogNewEntry5_WdError(v71, v70, v72);
              *(_QWORD *)(v160 + 24) = v180;
              WdLogEvent5_WdError(v160);
              if ( P != v182 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v183 = 0;
              if ( v191 != v192 && v191 )
                ExFreePoolWithTag(v191, 0);
              v191 = 0LL;
              v193 = 0;
              v161 = v195;
              if ( v195 != v196 && v195 )
                goto LABEL_351;
              goto LABEL_352;
            }
            if ( v69[48] == 3 && (_DWORD)v13 != 1 )
            {
              v158 = (_QWORD *)WdLogNewEntry5_WdError(v71, v70, v72);
              v158[3] = v180;
              v158[4] = v199[v63];
              v158[5] = v13;
              v159 = -1073741811;
              v158[6] = -1073741811LL;
              WdLogEvent5_WdError(v158);
              if ( P != v182 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v183 = 0;
              if ( v191 != v192 && v191 )
                ExFreePoolWithTag(v191, 0);
              v191 = 0LL;
              v193 = 0;
              if ( v195 != v196 && v195 )
                ExFreePoolWithTag(v195, 0);
              v195 = 0LL;
              v197 = 0;
              if ( v176 )
                goto LABEL_254;
              goto LABEL_255;
            }
            goto LABEL_84;
          }
          v73 = *v65;
          DXGPUSHLOCK::AcquireShared(v64);
          v74 = (v73 >> 6) & 0xFFFFFF;
          v75 = v73 >> 30;
          if ( (unsigned int)v74 < *((_DWORD *)v180 + 56) )
          {
            v112 = *((_QWORD *)v180 + 26);
            v113 = *(_DWORD *)(v112 + 16 * v74 + 8);
            if ( v75 == ((v113 >> 5) & 3) && (v113 & 0x2000) == 0 && (v113 & 0x1F) != 0 )
            {
              v114 = v113 & 0x1F;
              if ( (_BYTE)v114 == 11 )
              {
                v76 = *(_QWORD *)(v112 + 16LL * (unsigned int)v74);
                goto LABEL_78;
              }
              v115 = WdLogNewEntry5_WdError(v114, 2LL * (unsigned int)v74, v112);
              *(_QWORD *)(v115 + 24) = 267LL;
              WdLogEvent5_WdError(v115);
            }
          }
          v76 = 0LL;
LABEL_78:
          ExReleasePushLockSharedEx(v64, 0LL);
          KeLeaveCriticalRegion();
          if ( !v76 )
          {
            v166 = (_QWORD *)WdLogNewEntry5_WdError(v78, v77, v79);
            v166[3] = v180;
            v166[4] = v199[v63];
            v166[5] = v63;
            v159 = -1073741811;
            v166[6] = -1073741811LL;
            WdLogEvent5_WdError(v166);
            if ( P != v182 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v183 = 0;
            if ( v191 != v192 && v191 )
              ExFreePoolWithTag(v191, 0);
            v191 = 0LL;
            v193 = 0;
            v167 = v195;
            if ( v195 != v196 && v195 )
LABEL_394:
              ExFreePoolWithTag(v167, 0);
LABEL_395:
            v195 = 0LL;
            v197 = 0;
            if ( v176 )
LABEL_254:
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v175);
LABEL_255:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v218);
            if ( v177 )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v177);
LABEL_212:
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v187);
            if ( v184 != v185 && v184 )
              ExFreePoolWithTag(v184, 0);
            return (unsigned int)v159;
          }
          v179 = 1;
          if ( v174 )
          {
            v165 = WdLogNewEntry5_WdError(v78, v77, v79);
            *(_QWORD *)(v165 + 24) = v180;
            WdLogEvent5_WdError(v165);
            if ( P != v182 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v183 = 0;
            v163 = v191;
            if ( v191 != v192 && v191 )
              goto LABEL_382;
LABEL_383:
            v191 = 0LL;
            v193 = 0;
            v161 = v195;
            if ( v195 != v196 && v195 )
LABEL_351:
              ExFreePoolWithTag(v161, 0);
LABEL_352:
            v195 = 0LL;
            v197 = 0;
            if ( v176 )
LABEL_313:
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v175);
LABEL_314:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v218);
            if ( v177 )
              goto LABEL_315;
            goto LABEL_219;
          }
          if ( (*(_DWORD *)(v76 + 72) & 0x10) != 0 )
          {
            v164 = WdLogNewEntry5_WdError(v78, v77, v79);
            *(_QWORD *)(v164 + 24) = v199[v63];
            WdLogEvent5_WdError(v164);
            if ( P != v182 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v183 = 0;
            if ( v191 != v192 && v191 )
              ExFreePoolWithTag(v191, 0);
            v191 = 0LL;
            v193 = 0;
            if ( v195 != v196 && v195 )
              ExFreePoolWithTag(v195, 0);
            v195 = 0LL;
            v197 = 0;
            if ( v176 )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v175);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v218);
            if ( v177 )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v177);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v187);
            if ( v184 != v185 && v184 )
              ExFreePoolWithTag(v184, 0);
            return 3221225506LL;
          }
          v80 = *(_QWORD *)(v76 + 16);
          if ( v80 != *((_QWORD *)*v194 + 2) )
          {
            v162 = WdLogNewEntry5_WdError(v78, v80, v79);
            *(_QWORD *)(v162 + 24) = *((_QWORD *)*v194 + 2);
            *(_QWORD *)(v162 + 32) = *(_QWORD *)(v76 + 16);
            WdLogEvent5_WdError(v162);
            if ( P != v182 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v183 = 0;
            v163 = v191;
            if ( v191 == v192 || !v191 )
              goto LABEL_383;
LABEL_382:
            ExFreePoolWithTag(v163, 0);
            goto LABEL_383;
          }
          v69 = *(_DWORD **)(v76 + 32);
          if ( (unsigned int)(v69[48] - 5) > 1 )
          {
            v157 = WdLogNewEntry5_WdAssertion(v78, v80);
            *(_QWORD *)(v157 + 24) = 689LL;
            WdLogEvent5_WdAssertion(v157);
          }
LABEL_84:
          v81 = v190;
          *v190 = v69;
          ++v63;
          ++v65;
          v190 = v81 + 1;
          if ( v63 >= (unsigned int)v13 )
          {
            v82 = v191;
            v83 = P;
            v84 = 0;
            v85 = 0LL;
            v215 = 0LL;
            v217 = 0;
            v86 = *((_DWORD *)*v62 + 48);
            if ( (unsigned int)(v86 - 5) > 1 )
            {
              v117 = (void **)&a7;
              if ( v86 != 3 )
                v117 = 0LL;
              v190 = v117;
            }
            else if ( a10 )
            {
              if ( (unsigned int)v13 <= 4 )
              {
                v87 = v216;
                v215 = v216;
                goto LABEL_89;
              }
              if ( 0xFFFFFFFFFFFFFFFFuLL / v13 >= 8 )
              {
                v87 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v13, 0x4B677844u);
                v215 = v87;
                v82 = v191;
                v83 = P;
LABEL_89:
                v217 = v13;
                if ( v87 )
                {
                  memset(v87, 0, 8 * v13);
                  v82 = v191;
                  v83 = P;
                  v84 = v217;
                  v85 = v215;
                  goto LABEL_91;
                }
LABEL_97:
                v215 = 0LL;
                v217 = 0;
                if ( v83 != v182 && v83 )
                {
                  ExFreePoolWithTag(v83, 0);
                  v82 = v191;
                }
                P = 0LL;
                v183 = 0;
                if ( v82 != v192 && v82 )
                  ExFreePoolWithTag(v82, 0);
                v191 = 0LL;
                v193 = 0;
                if ( v195 != v196 && v195 )
                  ExFreePoolWithTag(v195, 0);
                v195 = 0LL;
                v197 = 0;
                if ( v176 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v175);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v218);
                if ( v177 )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v177);
                DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v187);
                if ( v184 != v185 && v184 )
                  ExFreePoolWithTag(v184, 0);
                v184 = 0LL;
                v186 = 0;
                return 3221225495LL;
              }
LABEL_91:
              if ( !v85 )
                goto LABEL_97;
              v88 = 8LL * v84;
              v89 = Src;
              if ( (char *)Src + v88 < Src || (unsigned __int64)Src + v88 > MmUserProbeAddress )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v85, v89, v88);
              v190 = (void **)v215;
              Src = v215;
            }
            else
            {
              v190 = (void **)Src;
            }
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
              (__int64)v211,
              v62,
              v13);
            if ( !v212 )
            {
              v200 = 0LL;
              v202 = 0;
              if ( (unsigned int)v13 <= 2 )
              {
                v94 = v201;
                v200 = v201;
                goto LABEL_119;
              }
              if ( 0xFFFFFFFFFFFFFFFFuLL / v13 >= 8 )
              {
                v94 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v13, 0x4B677844u);
                v200 = v94;
LABEL_119:
                v202 = v13;
                if ( v94 )
                {
                  memset(v94, 0, 8 * v13);
                  v94 = v200;
                }
                v95 = (__int64)v94;
              }
              else
              {
                v95 = 0LL;
              }
              if ( v95 )
              {
                v96 = 0;
                v97 = v95;
                v98 = (char *)v62 - v95;
                v99 = v194;
                while ( 1 )
                {
                  v100 = *(_QWORD *)&v98[v97];
                  v101 = *(struct ADAPTER_RENDER **)(*((_QWORD *)*v99 + 2) + 16LL);
                  DxgAdapterSyncObject = v101;
                  if ( (*(_DWORD *)(v100 + 196) & 4) != 0 )
                  {
                    DxgAdapterSyncObject = (struct DXGPROCESS *)DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                                                                  (DXGSYNCOBJECTCA *)v100,
                                                                  v101,
                                                                  &v213);
                    if ( (int)DxgAdapterSyncObject < 0 )
                    {
                      v159 = (int)DxgAdapterSyncObject;
                      goto LABEL_467;
                    }
                    v99 = v194;
                  }
                  else if ( v101 && *(struct ADAPTER_RENDER **)(v100 + 304) != v101 )
                  {
                    v170 = (_QWORD *)WdLogNewEntry5_WdError(v101, v99, v93);
                    v170[3] = v100;
                    v170[4] = *(_QWORD *)(v100 + 304);
                    v170[5] = DxgAdapterSyncObject;
                    v159 = -1073741811;
                    v170[6] = -1073741811LL;
                    WdLogEvent5_WdError(v170);
LABEL_467:
                    v172 = (_QWORD *)WdLogNewEntry5_WdError(v101, v169, v93);
                    v172[3] = v180;
                    v172[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v194 + 2) + 16LL) + 16LL);
                    v172[5] = v159;
                    WdLogEvent5_WdError(v172);
                    if ( v200 != v201 && v200 )
                      ExFreePoolWithTag(v200, 0);
                    v200 = 0LL;
                    v202 = 0;
                    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v211);
                    if ( v215 != v216 && v215 )
                      ExFreePoolWithTag(v215, 0);
                    v215 = 0LL;
                    v217 = 0;
                    if ( P != v182 && P )
                      ExFreePoolWithTag(P, 0);
                    P = 0LL;
                    v183 = 0;
                    if ( v191 != v192 && v191 )
                      ExFreePoolWithTag(v191, 0);
                    v191 = 0LL;
                    v193 = 0;
                    v167 = v195;
                    if ( v195 == v196 || !v195 )
                      goto LABEL_395;
                    goto LABEL_394;
                  }
                  if ( (*(_DWORD *)(v100 + 196) & 4) != 0 )
                  {
                    v102 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                                         (DXGSYNCOBJECTCA *)v100,
                                         *(struct ADAPTER_RENDER **)(*((_QWORD *)*v99 + 2) + 16LL))
                           + 4);
                    v99 = v194;
                  }
                  else
                  {
                    v102 = *(_QWORD *)(v100 + 320);
                  }
                  *(_QWORD *)v97 = v102;
                  if ( !v102 )
                  {
                    v171 = WdLogNewEntry5_WdError(v101, v99, v93);
                    *(_QWORD *)(v171 + 24) = v100;
                    WdLogEvent5_WdError(v171);
                    if ( v200 != v201 && v200 )
                      ExFreePoolWithTag(v200, 0);
                    v200 = 0LL;
                    v202 = 0;
                    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v211);
                    if ( v215 != v216 && v215 )
                      ExFreePoolWithTag(v215, 0);
                    v215 = 0LL;
                    v217 = 0;
                    if ( P != v182 && P )
                      ExFreePoolWithTag(P, 0);
                    P = 0LL;
                    v183 = 0;
                    if ( v191 != v192 && v191 )
                      ExFreePoolWithTag(v191, 0);
                    v191 = 0LL;
                    v193 = 0;
                    if ( v195 != v196 && v195 )
                      ExFreePoolWithTag(v195, 0);
                    v195 = 0LL;
                    v197 = 0;
                    if ( !v176 )
                      goto LABEL_259;
                    goto LABEL_258;
                  }
                  ++v96;
                  v97 += 8LL;
                  if ( v96 >= (unsigned int)v13 )
                  {
                    v103 = (__int64)v194;
                    v104 = v190;
                    v105 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD, _QWORD *, _DWORD, __int64, int, void **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v194 + 2) + 16LL) + 520LL) + 8LL) + 640LL))(
                             v204,
                             v208,
                             v203,
                             v198,
                             v13,
                             v95,
                             v12,
                             v190);
                    v109 = v105;
                    if ( v105 >= 0 )
                    {
                      if ( v174 )
                      {
                        if ( bTracingEnabled )
                        {
                          v118 = 0LL;
                          if ( v104 )
                            v118 = (__int64)*v104;
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                            McTemplateK0qPR0qPR2qx(v118, v106, v108, v189, v103, v13, v95, v12, v118);
                        }
                      }
                      else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      {
                        McTemplateK0qPR0qqPR3XR3(v107, v106, v108, v189, v103, v12, v13, v95, (__int64)v104);
                      }
                      if ( v200 != v201 && v200 )
                        ExFreePoolWithTag(v200, 0);
                      v200 = 0LL;
                      v202 = 0;
                      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v211);
                      if ( v215 != v216 && v215 )
                        ExFreePoolWithTag(v215, 0);
                      v215 = 0LL;
                      v217 = 0;
                      if ( P != v182 && P )
                        ExFreePoolWithTag(P, 0);
                      P = 0LL;
                      v183 = 0;
                      if ( v191 != v192 && v191 )
                        ExFreePoolWithTag(v191, 0);
                      v191 = 0LL;
                      v193 = 0;
                      if ( v195 != v196 && v195 )
                        ExFreePoolWithTag(v195, 0);
                      v195 = 0LL;
                      v197 = 0;
                      if ( v176 )
                      {
                        v176 = 0;
                        ExReleaseResourceLite(v175[43]);
                        KeLeaveCriticalRegion();
                      }
                      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v218);
                      if ( v177 && v178 )
                      {
                        ExReleaseResourceLite(*(PERESOURCE *)(v177 + 104));
                        KeLeaveCriticalRegion();
                      }
                      if ( v187 && !v188 )
                        DXGCONTEXT::ReleaseReference(v187);
                      goto LABEL_149;
                    }
                    v173 = (_QWORD *)WdLogNewEntry5_WdError(v107, v106, v108);
                    v173[3] = v180;
                    v173[4] = *v199;
                    v173[5] = 0LL;
                    v173[6] = v109;
                    WdLogEvent5_WdError(v173);
                    if ( v200 != v201 && v200 )
                      ExFreePoolWithTag(v200, 0);
                    v200 = 0LL;
                    v202 = 0;
                    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v211);
                    if ( v215 != v216 && v215 )
                      ExFreePoolWithTag(v215, 0);
                    v215 = 0LL;
                    v217 = 0;
                    if ( P != v182 && P )
                      ExFreePoolWithTag(P, 0);
                    P = 0LL;
                    v183 = 0;
                    if ( v191 != v192 && v191 )
                      ExFreePoolWithTag(v191, 0);
                    v191 = 0LL;
                    v193 = 0;
                    if ( v195 != v196 && v195 )
                      ExFreePoolWithTag(v195, 0);
                    v195 = 0LL;
                    v197 = 0;
                    if ( v176 )
                      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v175);
                    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v218);
                    if ( !v177 )
                      goto LABEL_286;
LABEL_285:
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v177);
LABEL_286:
                    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v187);
                    if ( v184 != v185 && v184 )
                      ExFreePoolWithTag(v184, 0);
                    return (unsigned int)v109;
                  }
                }
              }
              v200 = 0LL;
              v202 = 0;
              DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v211);
              if ( v215 != v216 && v215 )
                ExFreePoolWithTag(v215, 0);
              v215 = 0LL;
              v217 = 0;
              if ( P != v182 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v183 = 0;
              if ( v191 != v192 && v191 )
                ExFreePoolWithTag(v191, 0);
              v191 = 0LL;
              v193 = 0;
              if ( v195 != v196 && v195 )
                ExFreePoolWithTag(v195, 0);
              v195 = 0LL;
              v197 = 0;
              if ( v176 )
LABEL_411:
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v175);
LABEL_412:
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v218);
              if ( v177 )
LABEL_328:
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v177);
LABEL_329:
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v187);
              v154 = v184;
              if ( v184 == v185 || !v184 )
                return 3221225495LL;
LABEL_521:
              ExFreePoolWithTag(v154, 0);
              return 3221225495LL;
            }
            if ( !v211[0] )
            {
              DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v211);
              if ( v215 != v216 && v215 )
                ExFreePoolWithTag(v215, 0);
              v215 = 0LL;
              v217 = 0;
              if ( P != v182 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v183 = 0;
              if ( v191 != v192 && v191 )
                ExFreePoolWithTag(v191, 0);
              v191 = 0LL;
              v193 = 0;
              if ( v195 != v196 && v195 )
                ExFreePoolWithTag(v195, 0);
              v195 = 0LL;
              v197 = 0;
              if ( v176 )
                goto LABEL_411;
              goto LABEL_412;
            }
            v168 = WdLogNewEntry5_WdError(v92, v91, v93);
            *(_QWORD *)(v168 + 24) = 758LL;
            WdLogEvent5_WdError(v168);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v211);
            if ( v215 != v216 && v215 )
              ExFreePoolWithTag(v215, 0);
            v215 = 0LL;
            v217 = 0;
            if ( P != v182 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v183 = 0;
            if ( v191 != v192 && v191 )
              ExFreePoolWithTag(v191, 0);
            v191 = 0LL;
            v193 = 0;
            if ( v195 != v196 && v195 )
              ExFreePoolWithTag(v195, 0);
            v195 = 0LL;
            v197 = 0;
            if ( v176 )
LABEL_258:
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v175);
LABEL_259:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v218);
            if ( v177 )
LABEL_315:
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v177);
LABEL_219:
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v187);
            if ( v184 != v185 && v184 )
              ExFreePoolWithTag(v184, 0);
            return -1073741811LL;
          }
        }
      }
      v61 = ExAllocatePoolWithTag(PagedPool, 8 * v13, 0x4B677844u);
      P = v61;
      v55 = v191;
    }
    else
    {
      v61 = v182;
      P = v182;
    }
    v183 = v13;
    if ( v61 )
    {
      memset(v61, 0, 8 * v13);
      v55 = v191;
      v61 = P;
    }
    v62 = (void **)v61;
    goto LABEL_71;
  }
  v147 = v190;
  v148 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD, _QWORD *, int, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v16 + 2) + 16LL) + 520LL)
                                                                                               + 8LL)
                                                                                   + 832LL))(
           v50,
           v56,
           v49,
           v54,
           v12,
           *v190);
  v109 = v148;
  if ( v148 < 0 )
  {
    v152 = (_QWORD *)WdLogNewEntry5_WdError(v150, v149, v151);
    v152[3] = v180;
    v152[4] = *v147;
    v152[5] = v109;
    WdLogEvent5_WdError(v152);
    if ( v191 != v192 && v191 )
      ExFreePoolWithTag(v191, 0);
    v191 = 0LL;
    v193 = 0;
    if ( v195 != v196 && v195 )
      ExFreePoolWithTag(v195, 0);
    v195 = 0LL;
    v197 = 0;
    if ( v176 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v175);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v218);
    if ( v177 )
      goto LABEL_285;
    goto LABEL_286;
  }
  if ( bTracingEnabled )
  {
    v209 = *v147;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qPR0qPR2qx(v150, v149, v151, v47, (__int64)v16, 1, (__int64)&v209, v12, 0);
  }
  if ( v191 != v192 && v191 )
    ExFreePoolWithTag(v191, 0);
  v191 = 0LL;
  v193 = 0;
  if ( v195 != v196 && v195 )
    ExFreePoolWithTag(v195, 0);
  v195 = 0LL;
  v197 = 0;
  if ( v176 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v175);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v218);
  if ( v177 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v177);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v187);
LABEL_149:
  if ( v184 != v185 )
  {
    if ( v184 )
      ExFreePoolWithTag(v184, 0);
  }
  return 0LL;
}
