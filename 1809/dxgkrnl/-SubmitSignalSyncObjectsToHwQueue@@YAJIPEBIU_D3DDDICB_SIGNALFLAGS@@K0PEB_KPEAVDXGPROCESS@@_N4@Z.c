/*
 * XREFs of ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0214F1C
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C00B13E0 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F93A0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C0213A90 (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 * Callees:
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B8B0 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0010FE0 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00111A4 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C001130C (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C0021A64 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0021B28 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$0BA@$0ELGHHIEE@@@QEAAPEAPEAUVIDSCH_HW_QUEUE@@I@Z @ 0x1C003C254 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$0BA@$0ELGHHIEE@@@QEAAPEAPEAUVI.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0ELGHHIEE@@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C003C2E4 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0ELGHHIEE@@@QEAAPEAPEAU.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C003C370 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     McTemplateK0qPR0qqPR3XR3 @ 0x1C003C694 (McTemplateK0qPR0qqPR3XR3.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E0E70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C011D214 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x1C0139C90 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1C013BA00 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C01F64A4 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C02130E0 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 */

__int64 __fastcall SubmitSignalSyncObjectsToHwQueue(
        unsigned int a1,
        unsigned int *a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        struct DXGPROCESS *a7,
        bool a8,
        bool a9)
{
  struct DXGHWQUEUE **Elements; // rax
  __int64 v13; // rsi
  _QWORD *v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rdi
  HANDLE *v18; // r9
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rcx
  int v23; // edi
  PERESOURCE *Global; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  unsigned int v29; // r15d
  _QWORD *v30; // rcx
  struct DXGADAPTERSYNCOBJECT *v31; // r9
  const unsigned int *v32; // r10
  __int64 v33; // rax
  __int64 v34; // r11
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rcx
  unsigned int v38; // r15d
  _QWORD *v39; // rax
  unsigned int *v40; // rax
  unsigned int v41; // r14d
  __int64 v42; // rax
  unsigned int v43; // r14d
  __int64 v44; // r8
  unsigned int v45; // ecx
  __int64 v46; // r14
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // r14
  unsigned int v50; // r14d
  __int64 v51; // rax
  unsigned int v52; // r14d
  __int64 v53; // r8
  unsigned int v54; // ecx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  DXGSYNCOBJECT *v58; // rcx
  const unsigned int *v59; // r14
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  PVOID v64; // rcx
  size_t v65; // r8
  void *v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  struct _VIDSCH_SYNC_OBJECT **v69; // rax
  __int64 v70; // r15
  unsigned int v71; // r12d
  struct _VIDSCH_SYNC_OBJECT **v72; // r14
  const unsigned int *v73; // rax
  __int64 v74; // rcx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v76; // rcx
  int v77; // r12d
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  const GUID *v81; // r8
  __int64 v82; // r14
  _QWORD *v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rax
  char v86[8]; // [rsp+70h] [rbp-2D8h] BYREF
  char v87; // [rsp+78h] [rbp-2D0h]
  __int64 v88; // [rsp+80h] [rbp-2C8h] BYREF
  int v89; // [rsp+88h] [rbp-2C0h]
  PVOID v90; // [rsp+90h] [rbp-2B8h] BYREF
  _BYTE v91[16]; // [rsp+98h] [rbp-2B0h] BYREF
  int v92; // [rsp+A8h] [rbp-2A0h]
  unsigned int v93; // [rsp+B0h] [rbp-298h]
  struct DXGADAPTERSYNCOBJECT *v94; // [rsp+B8h] [rbp-290h] BYREF
  _BYTE v95[16]; // [rsp+C0h] [rbp-288h] BYREF
  const unsigned int *v96; // [rsp+D0h] [rbp-278h]
  unsigned int v97; // [rsp+D8h] [rbp-270h]
  DXGSYNCOBJECT *v98; // [rsp+E0h] [rbp-268h]
  unsigned int *v99; // [rsp+E8h] [rbp-260h]
  void *Src; // [rsp+F0h] [rbp-258h]
  PVOID v101; // [rsp+F8h] [rbp-250h] BYREF
  _BYTE v102[16]; // [rsp+100h] [rbp-248h] BYREF
  int v103; // [rsp+110h] [rbp-238h]
  _QWORD *v104; // [rsp+118h] [rbp-230h]
  PVOID P; // [rsp+120h] [rbp-228h] BYREF
  _BYTE v106[128]; // [rsp+128h] [rbp-220h] BYREF
  int v107; // [rsp+1A8h] [rbp-1A0h]
  unsigned __int64 *v108; // [rsp+1B0h] [rbp-198h]
  struct DXGPROCESS *v109; // [rsp+1B8h] [rbp-190h]
  _QWORD v110[3]; // [rsp+1C0h] [rbp-188h] BYREF
  int v111; // [rsp+1D8h] [rbp-170h]
  _BYTE v112[96]; // [rsp+1E0h] [rbp-168h] BYREF
  _QWORD v113[4]; // [rsp+240h] [rbp-108h] BYREF
  char v114; // [rsp+260h] [rbp-E8h]
  _BYTE v115[24]; // [rsp+268h] [rbp-E0h] BYREF
  _BYTE v116[80]; // [rsp+280h] [rbp-C8h] BYREF
  PVOID v117; // [rsp+2D0h] [rbp-78h] BYREF
  _BYTE v118[32]; // [rsp+2D8h] [rbp-70h] BYREF
  unsigned int v119; // [rsp+2F8h] [rbp-50h]

  v93 = a4;
  v99 = a2;
  v97 = a1;
  Src = a6;
  v108 = a6;
  v109 = a7;
  v110[0] = 0LL;
  v111 = 0;
  Elements = (struct DXGHWQUEUE **)PagedPoolZeroedArray<DXGHWQUEUE *,2>::AllocateElements(v110, a4);
  v13 = (__int64)Elements;
  if ( !Elements )
    goto LABEL_15;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95, *a5, a7, Elements, a9);
  if ( !*(_QWORD *)v13 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
    v14[3] = a7;
    v14[4] = *a5;
    v15 = -1073741811;
    v14[5] = -1073741811LL;
    WdLogEvent5_WdError(v14);
    goto LABEL_143;
  }
  v16 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
  if ( *(_BYTE *)(v16 + 433) )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v116, (struct DXGADAPTER *const)v17, 0LL);
    if ( a9 || (v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v116), v18 = 0LL, v19 >= 0) )
    {
      v15 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v17 + 4152),
              a7,
              a1,
              v99,
              a3,
              v93,
              a5,
              (unsigned __int64 *)Src,
              (unsigned __int64)v18,
              v18,
              a8,
              (bool)v18,
              (struct DXGDEVICE *)v18);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v116);
      goto LABEL_143;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v116);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95);
    v15 = -1073741130;
    goto LABEL_144;
  }
  P = 0LL;
  v107 = 0;
  v104 = NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,16,1265072196>::AllocateElements(&P, a4);
  if ( !v104 )
  {
    if ( P != v106 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v107 = 0;
LABEL_14:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95);
LABEL_15:
    v15 = -1073741801;
    goto LABEL_144;
  }
  v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL);
  v88 = v21;
  v89 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v112, v21, 0, v20, a9);
  if ( !a9 )
  {
    if ( a8
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 328LL) == 2
      || (*((_BYTE *)a7 + 323) & 8) != 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
    }
    else if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88) )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
      if ( v88 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
      if ( P != v106 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v107 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95);
      v15 = -2147483631;
      goto LABEL_144;
    }
    v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v112);
    if ( v23 < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
      if ( v88 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
      if ( P != v106 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v107 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95);
      v15 = v23;
      goto LABEL_144;
    }
    v21 = v88;
  }
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v22);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v86, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v86);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL)
                                                                                     + 16LL)
                                                                         + 16LL)
                                                             + 16LL)) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v25);
    *(_QWORD *)(v26 + 24) = 1463LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( (a3.Value & 0x7FFFFFF8) != 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v27[3] = *a5;
    v27[4] = (a3.Value >> 3) & 0xFFFFFFF;
    v15 = -1073741811;
    v27[5] = -1073741811LL;
    WdLogEvent5_WdError(v27);
    goto LABEL_40;
  }
  if ( (a3.Value & 0x80000000) != 0 )
  {
    v28 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v28 + 24) = 1477LL;
    goto LABEL_50;
  }
  *v104 = *(_QWORD *)(*(_QWORD *)v13 + 40LL);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v115, (struct _KTHREAD **)a7);
  v29 = 1;
  if ( v93 > 1 )
  {
    v30 = v104;
    v31 = (struct DXGADAPTERSYNCOBJECT *)(v104 + 1);
    v94 = (struct DXGADAPTERSYNCOBJECT *)(v104 + 1);
    v32 = a5 + 1;
    v96 = a5 + 1;
    v98 = (DXGSYNCOBJECT *)(v13 - (_QWORD)v104);
    while ( 1 )
    {
      v33 = (*v32 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v33 >= *((_DWORD *)a7 + 62) )
        goto LABEL_67;
      v34 = *((_QWORD *)a7 + 29);
      v30 = (_QWORD *)*(unsigned int *)(v34 + 16 * v33 + 8);
      if ( *v32 >> 30 != ((*(_DWORD *)(v34 + 16 * v33 + 8) >> 5) & 3)
        || ((unsigned __int16)v30 & 0x2000) != 0
        || ((unsigned __int8)v30 & 0x1F) == 0 )
      {
        goto LABEL_67;
      }
      v30 = (_QWORD *)((unsigned __int8)v30 & 0x1F);
      if ( (_BYTE)v30 != 15 )
        break;
      v36 = *(_QWORD *)(v34 + 16LL * (unsigned int)v33);
LABEL_68:
      *(_QWORD *)((char *)v31 + (_QWORD)v98) = v36;
      if ( !v36 || (v30 = *(_QWORD **)(*(_QWORD *)v13 + 16LL), *(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) != v30[2]) )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdError(v30);
        v39[3] = *a5;
        v39[4] = a5[v29];
        v39[5] = v29;
        v15 = -1073741811;
        v39[6] = -1073741811LL;
        WdLogEvent5_WdError(v39);
        DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v115);
LABEL_135:
        if ( v87 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
        if ( v21 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
        if ( P != v106 && P )
          ExFreePoolWithTag(P, 0);
        v107 = 0;
        P = 0LL;
        goto LABEL_143;
      }
      *(_QWORD *)v31 = *(_QWORD *)(v36 + 40);
      ++v29;
      v96 = ++v32;
      v31 = (struct DXGADAPTERSYNCOBJECT *)((char *)v31 + 8);
      v94 = v31;
      if ( v29 >= v93 )
        goto LABEL_71;
    }
    v35 = WdLogNewEntry5_WdError(v30);
    *(_QWORD *)(v35 + 24) = 316LL;
    WdLogEvent5_WdError(v35);
    v31 = v94;
    v32 = v96;
LABEL_67:
    v36 = 0LL;
    goto LABEL_68;
  }
LABEL_71:
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v115);
  v38 = 0;
  if ( !a1 )
  {
    v28 = WdLogNewEntry5_WdError(v37);
    *(_QWORD *)(v28 + 24) = 1520LL;
LABEL_50:
    WdLogEvent5_WdError(v28);
    if ( v87 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
    if ( v21 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
    if ( P != v106 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v107 = 0;
LABEL_58:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95);
    v15 = -1073741811;
    goto LABEL_144;
  }
  v90 = 0LL;
  v92 = 0;
  v96 = (const unsigned int *)PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::AllocateElements(&v90, a1);
  if ( !v96 )
  {
    if ( v90 != v91 && v90 )
      ExFreePoolWithTag(v90, 0);
    v90 = 0LL;
    v92 = 0;
    if ( v87 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
    if ( v21 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
    if ( P != v106 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v107 = 0;
    goto LABEL_14;
  }
  v98 = 0LL;
  v40 = v99;
  v94 = (struct DXGADAPTERSYNCOBJECT *)v99;
  do
  {
    v41 = *v40;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a7 + 208));
    v42 = (v41 >> 6) & 0xFFFFFF;
    v43 = v41 >> 30;
    if ( (unsigned int)v42 < *((_DWORD *)a7 + 62)
      && (v44 = *((_QWORD *)a7 + 29), v45 = *(_DWORD *)(v44 + 16 * v42 + 8), v43 == ((v45 >> 5) & 3))
      && (v45 & 0x2000) == 0
      && (v45 & 0x1F) == 0xB )
    {
      v46 = *(_QWORD *)(v44 + 16LL * (unsigned int)v42);
    }
    else
    {
      v46 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)a7 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( v46 )
    {
      if ( (*(_DWORD *)(v46 + 72) & 0x10) != 0 )
      {
        v61 = WdLogNewEntry5_WdError(v47);
        *(_QWORD *)(v61 + 24) = v99[v38];
        WdLogEvent5_WdError(v61);
        if ( v90 != v91 && v90 )
          ExFreePoolWithTag(v90, 0);
        v90 = 0LL;
        v92 = 0;
        if ( v87 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
        if ( v21 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
        if ( P != v106 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v107 = 0;
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95);
        v15 = -1073741790;
        goto LABEL_144;
      }
      v48 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
      if ( *(_QWORD *)(v46 + 16) != *(_QWORD *)(v48 + 16) )
      {
        v60 = WdLogNewEntry5_WdError(v48);
        *(_QWORD *)(v60 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL);
        *(_QWORD *)(v60 + 32) = *(_QWORD *)(v46 + 16);
        WdLogEvent5_WdError(v60);
        if ( v90 != v91 && v90 )
          ExFreePoolWithTag(v90, 0);
        v90 = 0LL;
        v92 = 0;
        if ( v87 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
        if ( v21 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
        if ( P != v106 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v107 = 0;
        goto LABEL_58;
      }
      v49 = *(_QWORD *)(v46 + 32);
      goto LABEL_106;
    }
    v50 = *(_DWORD *)v94;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a7 + 208));
    v51 = (v50 >> 6) & 0xFFFFFF;
    v52 = v50 >> 30;
    if ( (unsigned int)v51 >= *((_DWORD *)a7 + 62) )
      goto LABEL_104;
    v53 = *((_QWORD *)a7 + 29);
    v54 = *(_DWORD *)(v53 + 16 * v51 + 8);
    if ( v52 != ((v54 >> 5) & 3) || (v54 & 0x2000) != 0 || (v54 & 0x1F) == 0 )
      goto LABEL_104;
    v55 = v54 & 0x1F;
    if ( (_BYTE)v55 != 8 )
    {
      v56 = WdLogNewEntry5_WdError(v55);
      *(_QWORD *)(v56 + 24) = 316LL;
      WdLogEvent5_WdError(v56);
LABEL_104:
      v49 = 0LL;
      goto LABEL_105;
    }
    v49 = *(_QWORD *)(v53 + 16LL * (unsigned int)v51);
LABEL_105:
    ExReleasePushLockSharedEx((char *)a7 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( !v49 )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdError(v57);
      v62[3] = a7;
      v62[4] = v99[v38];
      v62[5] = v38;
      v15 = -1073741811;
      v62[6] = -1073741811LL;
      WdLogEvent5_WdError(v62);
      if ( v90 != v91 && v90 )
        ExFreePoolWithTag(v90, 0);
      v90 = 0LL;
      v92 = 0;
      goto LABEL_135;
    }
LABEL_106:
    v58 = v98;
    *(_QWORD *)((char *)v98 + (_QWORD)v96) = v49;
    ++v38;
    v40 = (unsigned int *)((char *)v94 + 4);
    v94 = (struct DXGADAPTERSYNCOBJECT *)((char *)v94 + 4);
    v98 = (DXGSYNCOBJECT *)((char *)v58 + 8);
  }
  while ( v38 < a1 );
  v59 = v96;
  v117 = 0LL;
  v119 = 0;
  if ( a8 )
  {
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&v117, a1);
    v64 = v117;
    if ( !v117 )
    {
      v117 = 0LL;
      v119 = 0;
      if ( v90 != v91 && v90 )
        ExFreePoolWithTag(v90, 0);
      v90 = 0LL;
      v92 = 0;
      if ( v87 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
      if ( v21 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
      if ( P != v106 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v107 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95);
      PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)v110);
      return 3221225495LL;
    }
    v65 = 8LL * v119;
    v66 = Src;
    if ( (char *)Src + v65 < Src || (unsigned __int64)Src + v65 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v64, v66, v65);
    Src = v117;
    v108 = (unsigned __int64 *)v117;
  }
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v113,
    v59,
    a1);
  if ( !v114 )
  {
    v101 = 0LL;
    v103 = 0;
    v69 = (struct _VIDSCH_SYNC_OBJECT **)NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,1265072196>::AllocateElements(
                                           &v101,
                                           a1);
    v70 = (__int64)v69;
    v71 = 0;
    if ( !v97 )
    {
LABEL_198:
      v77 = v97;
      v78 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD, __int64, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 16LL) + 520LL) + 8LL) + 648LL))(
              v93,
              v104,
              v97,
              v70,
              a3.0,
              Src);
      v82 = v78;
      if ( v78 < 0 )
      {
        v83 = (_QWORD *)WdLogNewEntry5_WdError(v80);
        v83[3] = a7;
        v83[4] = *v99;
        v83[5] = 0LL;
        v83[6] = v82;
        WdLogEvent5_WdError(v83);
        if ( v101 != v102 && v101 )
          ExFreePoolWithTag(v101, 0);
        v101 = 0LL;
        v103 = 0;
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v113);
        if ( v117 != v118 && v117 )
          ExFreePoolWithTag(v117, 0);
        v117 = 0LL;
        v119 = 0;
        if ( v90 != v91 && v90 )
          ExFreePoolWithTag(v90, 0);
        v90 = 0LL;
        v92 = 0;
        if ( v87 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
        if ( v21 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
        if ( P != v106 && P )
          ExFreePoolWithTag(P, 0);
        v15 = v82;
        goto LABEL_47;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qPR0qqPR3XR3(v80, v79, v81, v93, v13, *(_BYTE *)&a3.0, v77, v70, (__int64)Src);
      if ( v101 != v102 && v101 )
        ExFreePoolWithTag(v101, 0);
      v101 = 0LL;
      v103 = 0;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v113);
      if ( v117 != v118 && v117 )
        ExFreePoolWithTag(v117, 0);
      v117 = 0LL;
      v119 = 0;
      if ( v90 != v91 && v90 )
        ExFreePoolWithTag(v90, 0);
      v90 = 0LL;
      v92 = 0;
      if ( v87 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
      if ( v21 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
      if ( P != v106 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v107 = 0;
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95);
      PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)v110);
      return 0LL;
    }
    v72 = v69;
    v73 = (const unsigned int *)((char *)v96 - (char *)v69);
    v96 = v73;
    while ( 1 )
    {
      v98 = *(struct _VIDSCH_SYNC_OBJECT **)((char *)v72 + (_QWORD)v73);
      LODWORD(v94) = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                       v98,
                       *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 16LL),
                       &v94);
      if ( (int)v94 < 0 )
        break;
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           v98,
                           *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 16LL));
      *v72 = VidSchSyncObject;
      if ( !VidSchSyncObject )
      {
        v84 = WdLogNewEntry5_WdError(v76);
        *(_QWORD *)(v84 + 24) = v98;
        WdLogEvent5_WdError(v84);
        if ( v101 != v102 && v101 )
          ExFreePoolWithTag(v101, 0);
        v101 = 0LL;
        v103 = 0;
        goto LABEL_179;
      }
      ++v71;
      ++v72;
      v73 = v96;
      if ( v71 >= v97 )
        goto LABEL_198;
    }
    v85 = (_QWORD *)WdLogNewEntry5_WdError(v74);
    v85[3] = a7;
    v85[4] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 16LL) + 16LL) + 16LL) + 16LL);
    v15 = (unsigned int)v94;
    v85[5] = (int)v94;
    WdLogEvent5_WdError(v85);
    if ( v101 != v102 && v101 )
      ExFreePoolWithTag(v101, 0);
    v101 = 0LL;
    v103 = 0;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v113);
    if ( v117 != v118 && v117 )
      ExFreePoolWithTag(v117, 0);
    v117 = 0LL;
    v119 = 0;
    if ( v90 != v91 && v90 )
      ExFreePoolWithTag(v90, 0);
    v90 = 0LL;
    v92 = 0;
LABEL_40:
    if ( v87 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
    if ( v21 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
    if ( P != v106 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_47;
  }
  if ( v113[0] )
  {
    v68 = WdLogNewEntry5_WdError(v67);
    *(_QWORD *)(v68 + 24) = 1639LL;
    WdLogEvent5_WdError(v68);
LABEL_179:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v113);
    if ( v117 != v118 && v117 )
      ExFreePoolWithTag(v117, 0);
    v119 = 0;
    v117 = 0LL;
    if ( v90 != v91 && v90 )
      ExFreePoolWithTag(v90, 0);
    v92 = 0;
    v90 = 0LL;
    if ( v87 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
    if ( v21 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
    if ( P != v106 && P )
      ExFreePoolWithTag(P, 0);
    v15 = -1073741811;
  }
  else
  {
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v113);
    if ( v117 != v118 && v117 )
      ExFreePoolWithTag(v117, 0);
    v117 = 0LL;
    v119 = 0;
    if ( v90 != v91 && v90 )
      ExFreePoolWithTag(v90, 0);
    v90 = 0LL;
    v92 = 0;
    if ( v87 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v86);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
    if ( v21 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v88);
    if ( P != v106 && P )
      ExFreePoolWithTag(P, 0);
    v15 = -1073741801;
  }
LABEL_47:
  P = 0LL;
  v107 = 0;
LABEL_143:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v95);
LABEL_144:
  PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)v110);
  return v15;
}
