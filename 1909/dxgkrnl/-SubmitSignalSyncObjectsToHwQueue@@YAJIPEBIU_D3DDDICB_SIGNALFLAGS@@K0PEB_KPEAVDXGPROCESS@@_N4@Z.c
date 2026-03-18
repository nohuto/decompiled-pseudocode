/*
 * XREFs of ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0249948
 * Callers:
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0229BF0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C022F5CC (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C0247C4C (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 * Callees:
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007110 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0007364 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00073D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0007424 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BDF8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C000CE38 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017EF8 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0018020 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C001A144 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C00247C8 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$0BA@$0ELGHHIEE@@@QEAAPEAPEAUVIDSCH_HW_QUEUE@@I@Z @ 0x1C0042B70 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$0BA@$0ELGHHIEE@@@QEAAPEAPEAUVI.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0ELGHHIEE@@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C0042C00 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0ELGHHIEE@@@QEAAPEAPEAU.c)
 *     McTemplateK0qPR0qqPR3XR3 @ 0x1C0042F88 (McTemplateK0qPR0qqPR3XR3.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F61DC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0142874 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x1C014E21C (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1C0150058 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C0226B44 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0269A74 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall SubmitSignalSyncObjectsToHwQueue(
        unsigned int a1,
        unsigned int *a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        struct _KTHREAD **a7,
        bool a8,
        bool a9)
{
  struct DXGHWQUEUE **Elements; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // r8
  HANDLE *v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // edi
  __int64 v32; // rdx
  PERESOURCE *Global; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned int v41; // r15d
  _QWORD *v42; // rcx
  struct DXGADAPTERSYNCOBJECT *v43; // r9
  DXGSYNCOBJECT *v44; // r10
  __int64 v45; // rax
  __int64 v46; // rdx
  struct _KTHREAD *v47; // r11
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned int v53; // r15d
  _QWORD *v54; // rax
  struct DXGADAPTERSYNCOBJECT *v55; // rax
  unsigned int *v56; // rcx
  unsigned int v57; // r14d
  __int64 v58; // rax
  unsigned int v59; // r14d
  struct _KTHREAD *v60; // r8
  unsigned int v61; // ecx
  __int64 v62; // r14
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  struct DXGADAPTERSYNCOBJECT *v68; // rcx
  struct DXGADAPTERSYNCOBJECT *v69; // rax
  unsigned int v70; // r14d
  __int64 v71; // rax
  unsigned int v72; // r14d
  struct _KTHREAD *v73; // r8
  unsigned int v74; // ecx
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // r14
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  struct DXGADAPTERSYNCOBJECT *v81; // r14
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  _QWORD *v85; // rax
  PVOID v87; // rcx
  __int64 v88; // rdx
  size_t v89; // r8
  void *v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // rax
  struct _VIDSCH_SYNC_OBJECT **v95; // rax
  __int64 v96; // r15
  unsigned int v97; // r12d
  struct _VIDSCH_SYNC_OBJECT **v98; // r14
  struct DXGADAPTERSYNCOBJECT *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  int v107; // r12d
  int v108; // eax
  __int64 v109; // rdx
  __int64 v110; // rcx
  const GUID *v111; // r8
  __int64 v112; // r14
  _QWORD *v113; // rax
  __int64 v114; // rax
  _QWORD *v115; // rax
  __int64 v116; // rdx
  char v117[8]; // [rsp+70h] [rbp-358h] BYREF
  char v118; // [rsp+78h] [rbp-350h]
  __int64 v119; // [rsp+80h] [rbp-348h] BYREF
  int v120; // [rsp+88h] [rbp-340h]
  PVOID v121; // [rsp+90h] [rbp-338h] BYREF
  _BYTE v122[16]; // [rsp+98h] [rbp-330h] BYREF
  int v123; // [rsp+A8h] [rbp-320h]
  unsigned int v124; // [rsp+B0h] [rbp-318h]
  struct DXGADAPTERSYNCOBJECT *v125; // [rsp+B8h] [rbp-310h] BYREF
  DXGSYNCOBJECT *v126; // [rsp+C0h] [rbp-308h]
  _BYTE v127[16]; // [rsp+C8h] [rbp-300h] BYREF
  unsigned int v128; // [rsp+D8h] [rbp-2F0h]
  struct DXGADAPTERSYNCOBJECT *v129; // [rsp+E0h] [rbp-2E8h]
  unsigned int *v130; // [rsp+E8h] [rbp-2E0h]
  void *Src; // [rsp+F0h] [rbp-2D8h]
  PVOID v132; // [rsp+F8h] [rbp-2D0h] BYREF
  _BYTE v133[16]; // [rsp+100h] [rbp-2C8h] BYREF
  int v134; // [rsp+110h] [rbp-2B8h]
  _QWORD *v135; // [rsp+118h] [rbp-2B0h]
  PVOID P; // [rsp+120h] [rbp-2A8h] BYREF
  _BYTE v137[128]; // [rsp+128h] [rbp-2A0h] BYREF
  int v138; // [rsp+1A8h] [rbp-220h]
  unsigned __int64 *v139; // [rsp+1B0h] [rbp-218h]
  struct _KTHREAD **v140; // [rsp+1B8h] [rbp-210h]
  _QWORD v141[3]; // [rsp+1C0h] [rbp-208h] BYREF
  int v142; // [rsp+1D8h] [rbp-1F0h]
  _QWORD v143[4]; // [rsp+1E0h] [rbp-1E8h] BYREF
  char v144; // [rsp+200h] [rbp-1C8h]
  _BYTE v145[24]; // [rsp+208h] [rbp-1C0h] BYREF
  PVOID v146; // [rsp+220h] [rbp-1A8h] BYREF
  _BYTE v147[32]; // [rsp+228h] [rbp-1A0h] BYREF
  unsigned int v148; // [rsp+248h] [rbp-180h]
  _BYTE v149[160]; // [rsp+250h] [rbp-178h] BYREF
  _BYTE v150[144]; // [rsp+2F0h] [rbp-D8h] BYREF

  v124 = a4;
  v130 = a2;
  v128 = a1;
  Src = a6;
  v139 = a6;
  v140 = a7;
  v141[0] = 0LL;
  v142 = 0;
  Elements = (struct DXGHWQUEUE **)PagedPoolZeroedArray<DXGHWQUEUE *,2>::AllocateElements(v141, a4);
  v13 = (__int64)Elements;
  if ( !Elements )
    goto LABEL_15;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v127, *a5, a7, Elements, a9);
  if ( !*(_QWORD *)v13 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(0LL, v14, v15);
    v16[3] = a7;
    v16[4] = *a5;
    v17 = -1073741811;
    v16[5] = -1073741811LL;
    WdLogEvent5_WdError(v16);
    goto LABEL_144;
  }
  v19 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
  if ( *(_BYTE *)(v19 + 449) )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v150, (struct DXGADAPTER *const)v20, 0LL);
    if ( a9 || (v23 = COREADAPTERACCESS::AcquireShared((__int64)v150, 0xFFFFFFFFLL, v21), v22 = 0LL, v23 >= 0) )
    {
      v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v20 + 4144),
              (struct DXGPROCESS *)a7,
              a1,
              v130,
              a3,
              v124,
              a5,
              (unsigned __int64 *)Src,
              (unsigned __int64)v22,
              v22,
              a8,
              (bool)v22,
              (struct DXGDEVICE *)v22);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v150);
      goto LABEL_144;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v150);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v127, v24);
    v17 = -1073741130;
    goto LABEL_145;
  }
  P = 0LL;
  v138 = 0;
  v135 = NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,16,1265072196>::AllocateElements(&P, a4);
  if ( !v135 )
  {
    if ( P != v137 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v138 = 0;
LABEL_14:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v127, v25);
LABEL_15:
    v17 = -1073741801;
    goto LABEL_145;
  }
  v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL);
  v119 = v27;
  v120 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v149, v27, 0, v26, a9);
  if ( !a9 )
  {
    if ( a8
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 328LL) == 2
      || (*((_BYTE *)a7 + 299) & 8) != 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v119);
    }
    else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v119) )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
      if ( v119 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v119);
      if ( P != v137 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v138 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v127, v30);
      v17 = -2147483631;
      goto LABEL_145;
    }
    v31 = COREDEVICEACCESS::AcquireShared((__int64)v149, 0xFFFFFFFF, 0LL);
    if ( v31 < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
      if ( v119 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v119);
      if ( P != v137 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v138 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v127, v32);
      v17 = v31;
      goto LABEL_145;
    }
    v27 = v119;
  }
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v29, v28);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v117, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v117);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL)
                                                                                     + 16LL)
                                                                         + 16LL)
                                                             + 16LL)) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v35, v34);
    *(_QWORD *)(v37 + 24) = 1492LL;
    WdLogEvent5_WdAssertion(v37);
  }
  if ( (a3.Value & 0x7FFFFFF8) != 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34, v36);
    v38[3] = *a5;
    v38[4] = (a3.Value >> 3) & 0xFFFFFFF;
    v17 = -1073741811;
    v38[5] = -1073741811LL;
    WdLogEvent5_WdError(v38);
    goto LABEL_40;
  }
  if ( (a3.Value & 0x80000000) != 0 )
  {
    v39 = WdLogNewEntry5_WdError(v35, v34, v36);
    *(_QWORD *)(v39 + 24) = 1506LL;
    goto LABEL_50;
  }
  *v135 = *(_QWORD *)(*(_QWORD *)v13 + 40LL);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v145, a7);
  v41 = 1;
  if ( v124 > 1 )
  {
    v42 = v135;
    v43 = (struct DXGADAPTERSYNCOBJECT *)(v135 + 1);
    v129 = (struct DXGADAPTERSYNCOBJECT *)(v135 + 1);
    v44 = (DXGSYNCOBJECT *)(a5 + 1);
    v126 = (DXGSYNCOBJECT *)(a5 + 1);
    v125 = (struct DXGADAPTERSYNCOBJECT *)(v13 - (_QWORD)v135);
    while ( 1 )
    {
      v45 = (*(_DWORD *)v44 >> 6) & 0xFFFFFF;
      v46 = *(_DWORD *)v44 >> 30;
      if ( (unsigned int)v45 >= *((_DWORD *)a7 + 56) )
        goto LABEL_67;
      v47 = a7[26];
      v42 = (_QWORD *)*((unsigned int *)v47 + 4 * v45 + 2);
      if ( (_DWORD)v46 != ((*((_DWORD *)v47 + 4 * v45 + 2) >> 5) & 3)
        || ((unsigned __int16)v42 & 0x2000) != 0
        || ((unsigned __int8)v42 & 0x1F) == 0 )
      {
        goto LABEL_67;
      }
      v42 = (_QWORD *)((unsigned __int8)v42 & 0x1F);
      if ( (_BYTE)v42 != 15 )
        break;
      v49 = *((_QWORD *)v47 + 2 * (unsigned int)v45);
LABEL_68:
      *(_QWORD *)((char *)v43 + (_QWORD)v125) = v49;
      if ( !v49
        || (v46 = *(_QWORD *)(*(_QWORD *)(v49 + 16) + 16LL), v42 = *(_QWORD **)(*(_QWORD *)v13 + 16LL), v46 != v42[2]) )
      {
        v54 = (_QWORD *)WdLogNewEntry5_WdError(v42, v46, v49);
        v54[3] = *a5;
        v54[4] = a5[v41];
        v54[5] = v41;
        v17 = -1073741811;
        v54[6] = -1073741811LL;
        WdLogEvent5_WdError(v54);
        DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v145);
LABEL_136:
        if ( v118 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v117);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
        if ( v27 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v119);
        if ( P != v137 && P )
          ExFreePoolWithTag(P, 0);
        v138 = 0;
        P = 0LL;
        goto LABEL_144;
      }
      *(_QWORD *)v43 = *(_QWORD *)(v49 + 40);
      ++v41;
      v44 = (DXGSYNCOBJECT *)((char *)v44 + 4);
      v126 = v44;
      v43 = (struct DXGADAPTERSYNCOBJECT *)((char *)v43 + 8);
      v129 = v43;
      if ( v41 >= v124 )
        goto LABEL_71;
    }
    v48 = WdLogNewEntry5_WdError(v42, v46, 2LL * (unsigned int)v45);
    *(_QWORD *)(v48 + 24) = 267LL;
    WdLogEvent5_WdError(v48);
    v43 = v129;
    v44 = v126;
LABEL_67:
    v49 = 0LL;
    goto LABEL_68;
  }
LABEL_71:
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v145);
  v53 = 0;
  if ( !a1 )
  {
    v39 = WdLogNewEntry5_WdError(v51, v50, v52);
    *(_QWORD *)(v39 + 24) = 1549LL;
LABEL_50:
    WdLogEvent5_WdError(v39);
    if ( v118 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v117);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
    if ( v27 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v119);
    if ( P != v137 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v138 = 0;
LABEL_58:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v127, v40);
    v17 = -1073741811;
    goto LABEL_145;
  }
  v121 = 0LL;
  v123 = 0;
  v55 = (struct DXGADAPTERSYNCOBJECT *)PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::AllocateElements(&v121, a1);
  v129 = v55;
  if ( !v55 )
  {
    if ( v121 != v122 && v121 )
      ExFreePoolWithTag(v121, 0);
    v121 = 0LL;
    v123 = 0;
    if ( v118 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v117);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
    if ( v27 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v119);
    if ( P != v137 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v138 = 0;
    goto LABEL_14;
  }
  v125 = v55;
  v56 = v130;
  v126 = (DXGSYNCOBJECT *)v130;
  do
  {
    v57 = *v56;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a7 + 23));
    v58 = (v57 >> 6) & 0xFFFFFF;
    v59 = v57 >> 30;
    if ( (unsigned int)v58 < *((_DWORD *)a7 + 56)
      && (v60 = a7[26], v61 = *((_DWORD *)v60 + 4 * v58 + 2), v59 == ((v61 >> 5) & 3))
      && (v61 & 0x2000) == 0
      && (v61 & 0x1F) == 0xB )
    {
      v62 = *((_QWORD *)v60 + 2 * (unsigned int)v58);
    }
    else
    {
      v62 = 0LL;
    }
    ExReleasePushLockSharedEx(a7 + 23, 0LL);
    KeLeaveCriticalRegion();
    if ( v62 )
    {
      if ( (*(_DWORD *)(v62 + 72) & 0x10) != 0 )
      {
        v83 = WdLogNewEntry5_WdError(v64, v63, v65);
        *(_QWORD *)(v83 + 24) = v130[v53];
        WdLogEvent5_WdError(v83);
        if ( v121 != v122 && v121 )
          ExFreePoolWithTag(v121, 0);
        v121 = 0LL;
        v123 = 0;
        if ( v118 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v117);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
        if ( v27 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v119);
        if ( P != v137 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v138 = 0;
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v127, v84);
        v17 = -1073741790;
        goto LABEL_145;
      }
      v66 = *(_QWORD *)(v62 + 16);
      v67 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
      if ( v66 != *(_QWORD *)(v67 + 16) )
      {
        v82 = WdLogNewEntry5_WdError(v67, v66, v65);
        *(_QWORD *)(v82 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL);
        *(_QWORD *)(v82 + 32) = *(_QWORD *)(v62 + 16);
        WdLogEvent5_WdError(v82);
        if ( v121 != v122 && v121 )
          ExFreePoolWithTag(v121, 0);
        v121 = 0LL;
        v123 = 0;
        if ( v118 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v117);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
        if ( v27 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v119);
        if ( P != v137 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v138 = 0;
        goto LABEL_58;
      }
      v68 = v125;
      *(_QWORD *)v125 = *(_QWORD *)(v62 + 32);
      v69 = v68;
      goto LABEL_107;
    }
    v70 = *(_DWORD *)v126;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a7 + 23));
    v71 = (v70 >> 6) & 0xFFFFFF;
    v72 = v70 >> 30;
    if ( (unsigned int)v71 < *((_DWORD *)a7 + 56) )
    {
      v73 = a7[26];
      v74 = *((_DWORD *)v73 + 4 * v71 + 2);
      if ( v72 == ((v74 >> 5) & 3) && (v74 & 0x2000) == 0 && (v74 & 0x1F) != 0 )
      {
        v75 = v74 & 0x1F;
        if ( (_BYTE)v75 == 8 )
        {
          v77 = *((_QWORD *)v73 + 2 * (unsigned int)v71);
          goto LABEL_105;
        }
        v76 = WdLogNewEntry5_WdError(v75, 2LL * (unsigned int)v71, v73);
        *(_QWORD *)(v76 + 24) = 267LL;
        WdLogEvent5_WdError(v76);
      }
    }
    v77 = 0LL;
LABEL_105:
    ExReleasePushLockSharedEx(a7 + 23, 0LL);
    KeLeaveCriticalRegion();
    if ( !v77 )
    {
      v85 = (_QWORD *)WdLogNewEntry5_WdError(v79, v78, v80);
      v85[3] = a7;
      v85[4] = v130[v53];
      v85[5] = v53;
      v17 = -1073741811;
      v85[6] = -1073741811LL;
      WdLogEvent5_WdError(v85);
      if ( v121 != v122 && v121 )
        ExFreePoolWithTag(v121, 0);
      v121 = 0LL;
      v123 = 0;
      goto LABEL_136;
    }
    v69 = v125;
    *(_QWORD *)v125 = v77;
LABEL_107:
    ++v53;
    v56 = (unsigned int *)((char *)v126 + 4);
    v126 = (DXGSYNCOBJECT *)((char *)v126 + 4);
    v125 = (struct DXGADAPTERSYNCOBJECT *)((char *)v69 + 8);
  }
  while ( v53 < a1 );
  v81 = v129;
  v146 = 0LL;
  v148 = 0;
  if ( a8 )
  {
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&v146, a1);
    v87 = v146;
    if ( !v146 )
    {
      v146 = 0LL;
      v148 = 0;
      if ( v121 != v122 && v121 )
        ExFreePoolWithTag(v121, 0);
      v121 = 0LL;
      v123 = 0;
      if ( v118 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v117);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
      if ( v27 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v119);
      if ( P != v137 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v138 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v127, v88);
      PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)v141);
      return 3221225495LL;
    }
    v89 = 8LL * v148;
    v90 = Src;
    if ( (char *)Src + v89 < Src || (unsigned __int64)Src + v89 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v87, v90, v89);
    Src = v146;
    v139 = (unsigned __int64 *)v146;
  }
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v143,
    v81,
    a1);
  if ( !v144 )
  {
    v132 = 0LL;
    v134 = 0;
    v95 = (struct _VIDSCH_SYNC_OBJECT **)NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,1265072196>::AllocateElements(
                                           &v132,
                                           a1);
    v96 = (__int64)v95;
    v97 = 0;
    if ( !v128 )
    {
LABEL_199:
      v107 = v128;
      v108 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD, __int64, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 16LL) + 520LL) + 8LL) + 648LL))(
               v124,
               v135,
               v128,
               v96,
               a3.0,
               Src);
      v112 = v108;
      if ( v108 < 0 )
      {
        v113 = (_QWORD *)WdLogNewEntry5_WdError(v110, v109, v111);
        v113[3] = a7;
        v113[4] = *v130;
        v113[5] = 0LL;
        v113[6] = v112;
        WdLogEvent5_WdError(v113);
        if ( v132 != v133 && v132 )
          ExFreePoolWithTag(v132, 0);
        v132 = 0LL;
        v134 = 0;
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v143);
        if ( v146 != v147 && v146 )
          ExFreePoolWithTag(v146, 0);
        v146 = 0LL;
        v148 = 0;
        if ( v121 != v122 && v121 )
          ExFreePoolWithTag(v121, 0);
        v121 = 0LL;
        v123 = 0;
        if ( v118 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v117);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
        if ( v27 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v119);
        if ( P != v137 && P )
          ExFreePoolWithTag(P, 0);
        v17 = v112;
        goto LABEL_47;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qPR0qqPR3XR3(v110, v109, v111, v124, v13, *(_BYTE *)&a3.0, v107, v96, (__int64)Src);
      if ( v132 != v133 && v132 )
        ExFreePoolWithTag(v132, 0);
      v132 = 0LL;
      v134 = 0;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v143);
      if ( v146 != v147 && v146 )
        ExFreePoolWithTag(v146, 0);
      v146 = 0LL;
      v148 = 0;
      if ( v121 != v122 && v121 )
        ExFreePoolWithTag(v121, 0);
      v121 = 0LL;
      v123 = 0;
      if ( v118 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v117);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
      if ( v27 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v119);
      if ( P != v137 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v138 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v127, v116);
      PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)v141);
      return 0LL;
    }
    v98 = v95;
    v99 = (struct DXGADAPTERSYNCOBJECT *)(v129 - (struct DXGADAPTERSYNCOBJECT *)v95);
    v129 = v99;
    while ( 1 )
    {
      v126 = *(struct _VIDSCH_SYNC_OBJECT **)((char *)v98 + (_QWORD)v99);
      LODWORD(v125) = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                        v126,
                        *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 16LL),
                        &v125);
      if ( (int)v125 < 0 )
        break;
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           v126,
                           *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 16LL));
      *v98 = VidSchSyncObject;
      if ( !VidSchSyncObject )
      {
        v114 = WdLogNewEntry5_WdError(v105, v104, v106);
        *(_QWORD *)(v114 + 24) = v126;
        WdLogEvent5_WdError(v114);
        if ( v132 != v133 && v132 )
          ExFreePoolWithTag(v132, 0);
        v132 = 0LL;
        v134 = 0;
        goto LABEL_180;
      }
      ++v97;
      ++v98;
      v99 = v129;
      if ( v97 >= v128 )
        goto LABEL_199;
    }
    v115 = (_QWORD *)WdLogNewEntry5_WdError(v101, v100, v102);
    v115[3] = a7;
    v115[4] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 16LL) + 16LL);
    v17 = (unsigned int)v125;
    v115[5] = (int)v125;
    WdLogEvent5_WdError(v115);
    if ( v132 != v133 && v132 )
      ExFreePoolWithTag(v132, 0);
    v132 = 0LL;
    v134 = 0;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v143);
    if ( v146 != v147 && v146 )
      ExFreePoolWithTag(v146, 0);
    v146 = 0LL;
    v148 = 0;
    if ( v121 != v122 && v121 )
      ExFreePoolWithTag(v121, 0);
    v121 = 0LL;
    v123 = 0;
LABEL_40:
    if ( v118 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v117);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
    if ( v27 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v119);
    if ( P != v137 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_47;
  }
  if ( v143[0] )
  {
    v94 = WdLogNewEntry5_WdError(v92, v91, v93);
    *(_QWORD *)(v94 + 24) = 1668LL;
    WdLogEvent5_WdError(v94);
LABEL_180:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v143);
    if ( v146 != v147 && v146 )
      ExFreePoolWithTag(v146, 0);
    v148 = 0;
    v146 = 0LL;
    if ( v121 != v122 && v121 )
      ExFreePoolWithTag(v121, 0);
    v123 = 0;
    v121 = 0LL;
    if ( v118 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v117);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
    if ( v27 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v119);
    if ( P != v137 && P )
      ExFreePoolWithTag(P, 0);
    v17 = -1073741811;
  }
  else
  {
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v143);
    if ( v146 != v147 && v146 )
      ExFreePoolWithTag(v146, 0);
    v146 = 0LL;
    v148 = 0;
    if ( v121 != v122 && v121 )
      ExFreePoolWithTag(v121, 0);
    v121 = 0LL;
    v123 = 0;
    if ( v118 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v117);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v149);
    if ( v27 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v119);
    if ( P != v137 && P )
      ExFreePoolWithTag(P, 0);
    v17 = -1073741801;
  }
LABEL_47:
  P = 0LL;
  v138 = 0;
LABEL_144:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v127, v18);
LABEL_145:
  PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)v141);
  return v17;
}
