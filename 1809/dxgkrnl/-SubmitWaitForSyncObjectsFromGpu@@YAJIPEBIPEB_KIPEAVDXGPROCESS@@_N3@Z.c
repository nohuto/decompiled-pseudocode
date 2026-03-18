/*
 * XREFs of ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C0216634
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C00B13E0 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C021A218 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00111A4 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C001130C (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0021050 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C003C370 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     McTemplateK0pqPR1XR1 @ 0x1C003C5F8 (McTemplateK0pqPR1XR1.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E0E70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C01DCDB0 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1C01F83B0 (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C0213058 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C0234C88 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall SubmitWaitForSyncObjectsFromGpu(
        unsigned int a1,
        const unsigned int *a2,
        const unsigned __int64 *a3,
        unsigned int a4,
        struct DXGPROCESS *a5,
        bool a6,
        bool a7)
{
  __int64 v7; // rdi
  const unsigned __int64 *v8; // r14
  __int64 v10; // rcx
  __int64 v11; // r9
  struct DXGHWQUEUE *v12; // rsi
  const unsigned int *v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  PVOID v18; // rcx
  size_t v19; // r8
  char *v20; // rbx
  __int64 v21; // rcx
  PERESOURCE *Global; // rax
  const unsigned int *v23; // rax
  struct DXGHWQUEUE *v24; // rdx
  unsigned int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // ecx
  __int64 v29; // rbx
  __int64 v30; // rcx
  unsigned int HostHandle; // eax
  unsigned int v32; // ebx
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // ecx
  DXGSYNCOBJECT *v36; // rbx
  __int64 v37; // rcx
  unsigned __int8 v38; // r8
  unsigned int *v39; // rcx
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // esi
  const unsigned __int64 *v44; // r12
  signed __int64 v45; // rax
  struct DXGSYNCOBJECT *v46; // rbx
  __int64 v47; // r10
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // r8
  _QWORD *v51; // rax
  struct DXGSYNCOBJECT **v52; // [rsp+20h] [rbp-1E8h]
  char v53; // [rsp+50h] [rbp-1B8h]
  unsigned int v54; // [rsp+54h] [rbp-1B4h]
  const unsigned int *v55; // [rsp+58h] [rbp-1B0h]
  char *v56; // [rsp+60h] [rbp-1A8h]
  signed __int64 v57; // [rsp+60h] [rbp-1A8h]
  char v58[8]; // [rsp+68h] [rbp-1A0h] BYREF
  char v59; // [rsp+70h] [rbp-198h]
  __int64 v60; // [rsp+78h] [rbp-190h] BYREF
  int v61; // [rsp+80h] [rbp-188h]
  const unsigned int *v62; // [rsp+88h] [rbp-180h]
  PVOID v63; // [rsp+90h] [rbp-178h] BYREF
  _BYTE v64[32]; // [rsp+98h] [rbp-170h] BYREF
  int v65; // [rsp+B8h] [rbp-150h]
  DXGSYNCOBJECT **v66; // [rsp+C0h] [rbp-148h]
  struct DXGHWQUEUE *i; // [rsp+C8h] [rbp-140h] BYREF
  _BYTE v68[16]; // [rsp+D0h] [rbp-138h] BYREF
  struct DXGHWQUEUE *v69; // [rsp+E0h] [rbp-128h]
  const unsigned __int64 *v70; // [rsp+E8h] [rbp-120h]
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+F0h] [rbp-118h] BYREF
  _BYTE v72[24]; // [rsp+F8h] [rbp-110h] BYREF
  _BYTE v73[96]; // [rsp+110h] [rbp-F8h] BYREF
  PVOID v74; // [rsp+170h] [rbp-98h] BYREF
  _BYTE v75[16]; // [rsp+178h] [rbp-90h] BYREF
  int v76; // [rsp+188h] [rbp-80h]
  PVOID P; // [rsp+190h] [rbp-78h] BYREF
  _BYTE v78[32]; // [rsp+198h] [rbp-70h] BYREF
  unsigned int v79; // [rsp+1B8h] [rbp-50h]

  v7 = a4;
  v8 = a3;
  v62 = a2;
  v70 = a3;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v68, a4, a5, &i, a7);
  v12 = i;
  v69 = i;
  v13 = 0LL;
  if ( !i )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v14[3] = a5;
    v14[4] = v7;
    LODWORD(v15) = -1073741811;
    v14[5] = -1073741811LL;
    WdLogEvent5_WdError(v14);
    goto LABEL_7;
  }
  v16 = *(_QWORD *)(*((_QWORD *)i + 2) + 16LL);
  v60 = v16;
  v61 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v73, v16, 0, v11, a7);
  if ( !a7 )
  {
    LODWORD(v15) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v73);
    if ( (int)v15 < 0 )
      goto LABEL_5;
  }
  P = 0LL;
  v79 = 0;
  if ( a6 )
  {
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&P, a1);
    v18 = P;
    if ( !P )
    {
      P = 0LL;
      v79 = 0;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
      if ( v16 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v60);
LABEL_12:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v68);
      return 3221225495LL;
    }
    v19 = v79;
    if ( &v8[v19] < v8 || (unsigned __int64)&v8[v19] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v18, v8, v19 * 8);
    v8 = (const unsigned __int64 *)P;
    v70 = (const unsigned __int64 *)P;
  }
  v63 = 0LL;
  v65 = 0;
  v20 = 0LL;
  v56 = 0LL;
  v74 = 0LL;
  v76 = 0;
  v53 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 16LL) + 16LL) + 185LL);
  if ( v53 )
  {
    v13 = (const unsigned int *)PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v74, a1);
    if ( !v13 )
    {
      if ( v74 != v75 && v74 )
        ExFreePoolWithTag(v74, 0);
      v74 = 0LL;
      v76 = 0;
      v63 = 0LL;
      v65 = 0;
      if ( P != v78 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v79 = 0;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
      if ( v16 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v60);
      goto LABEL_12;
    }
  }
  else
  {
    v20 = (char *)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(&v63, a1);
    v56 = v20;
    if ( !v20 )
    {
      if ( v74 != v75 && v74 )
        ExFreePoolWithTag(v74, 0);
      v74 = 0LL;
      v76 = 0;
      if ( v63 != v64 && v63 )
        ExFreePoolWithTag(v63, 0);
      v63 = 0LL;
      v65 = 0;
      if ( P != v78 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v79 = 0;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
      if ( v16 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v60);
      LODWORD(v15) = -1073741801;
      goto LABEL_7;
    }
  }
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v21);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v58, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v58);
  v54 = 0;
  if ( !a1 )
  {
LABEL_101:
    if ( v53 )
    {
      LODWORD(v15) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL)
                                                                            + 16LL)
                                                                + 16LL)
                                                    + 4152LL),
                       (struct _KTHREAD **)a5,
                       0LL,
                       v13,
                       0LL,
                       0LL,
                       v8,
                       0LL,
                       a1,
                       v12);
    }
    else
    {
      v43 = 0;
      if ( !a1 )
      {
LABEL_110:
        if ( v59 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v58);
        if ( v74 != v75 && v74 )
          ExFreePoolWithTag(v74, 0);
        v74 = 0LL;
        v76 = 0;
        if ( v63 != v64 && v63 )
          ExFreePoolWithTag(v63, 0);
        v63 = 0LL;
        v65 = 0;
        if ( P != v78 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v79 = 0;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
        if ( v16 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v60);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v68);
        return 0LL;
      }
      v44 = v8;
      v45 = v56 - (char *)v8;
      v57 = v56 - (char *)v8;
      while ( 1 )
      {
        v46 = *(struct DXGSYNCOBJECT **)((char *)v44 + v45);
        DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v72, v46);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v72);
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             v46,
                             *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)v69 + 2) + 16LL) + 16LL));
        v48 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, const unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v47 + 16) + 16LL) + 16LL) + 520LL) + 8LL) + 632LL))(
                *(_QWORD *)(v47 + 40),
                VidSchSyncObject,
                *v44);
        v15 = v48;
        if ( v48 < 0 )
          break;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v52) = 1;
          McTemplateK0pqPR1XR1(
            (__int64)&v8[v43],
            &EventWaitForSynchronizationObjectFromGpu,
            v50,
            v69,
            v52,
            &VidSchSyncObject,
            &v8[v43]);
        }
        DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v72);
        ++v43;
        ++v44;
        v45 = v57;
        if ( v43 >= a1 )
          goto LABEL_110;
      }
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v49);
      v51[3] = a5;
      v51[4] = v62[v43];
      v51[5] = v43;
      v51[6] = v15;
      WdLogEvent5_WdError(v51);
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v72);
    }
    if ( v59 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v58);
    if ( v74 != v75 && v74 )
      ExFreePoolWithTag(v74, 0);
    v76 = 0;
    v74 = 0LL;
    if ( v63 != v64 && v63 )
      ExFreePoolWithTag(v63, 0);
    v65 = 0;
    v63 = 0LL;
    if ( P != v78 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v79 = 0;
LABEL_5:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
    if ( v16 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v60);
    goto LABEL_7;
  }
  v66 = (DXGSYNCOBJECT **)v20;
  v23 = v13;
  v55 = v13;
  v24 = (struct DXGHWQUEUE *)((char *)v62 - (char *)v13);
  for ( i = (struct DXGHWQUEUE *)((char *)v62 - (char *)v13); ; v24 = i )
  {
    v25 = *(const unsigned int *)((char *)v23 + (_QWORD)v24);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a5 + 208));
    v26 = (v25 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *((_DWORD *)a5 + 62)
      && (v27 = *((_QWORD *)a5 + 29),
          v28 = *(_DWORD *)(v27 + 16 * v26 + 8),
          ((v25 >> 25) & 0x60) == (*(_BYTE *)(v27 + 16 * v26 + 8) & 0x60))
      && (v28 & 0x2000) == 0
      && (v28 & 0x1F) == 0xB )
    {
      v29 = *(_QWORD *)(v27 + 16LL * (unsigned int)v26);
    }
    else
    {
      v29 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)a5 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( v29 )
    {
      v30 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL);
      if ( *(_QWORD *)(v29 + 16) != v30 )
      {
        v41 = (_QWORD *)WdLogNewEntry5_WdError(v30);
        v41[3] = *(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL);
        v42 = *(_QWORD *)(v29 + 16);
        goto LABEL_86;
      }
      if ( (*(_DWORD *)(v29 + 72) & 0x20) != 0 )
      {
        v40 = WdLogNewEntry5_WdError(v30);
        *(_QWORD *)(v40 + 24) = v62[v54];
        WdLogEvent5_WdError(v40);
        if ( v59 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v58);
        if ( v74 != v75 && v74 )
          ExFreePoolWithTag(v74, 0);
        v74 = 0LL;
        v76 = 0;
        if ( v63 != v64 && v63 )
          ExFreePoolWithTag(v63, 0);
        v63 = 0LL;
        v65 = 0;
        if ( P != v78 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v79 = 0;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
        if ( v16 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v60);
        LODWORD(v15) = -1073741790;
        goto LABEL_7;
      }
      if ( !v53 )
      {
        *v66 = *(DXGSYNCOBJECT **)(v29 + 32);
        goto LABEL_69;
      }
      HostHandle = *(_DWORD *)(v29 + 44);
      goto LABEL_66;
    }
    v32 = *(const unsigned int *)((char *)v55 + (_QWORD)i);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a5 + 208));
    v33 = (v32 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v33 < *((_DWORD *)a5 + 62)
      && (v34 = *((_QWORD *)a5 + 29),
          v35 = *(_DWORD *)(v34 + 16 * v33 + 8),
          ((v32 >> 25) & 0x60) == (*(_BYTE *)(v34 + 16 * v33 + 8) & 0x60))
      && (v35 & 0x2000) == 0
      && (v35 & 0x1F) == 8 )
    {
      v36 = *(DXGSYNCOBJECT **)(v34 + 16LL * (unsigned int)v33);
    }
    else
    {
      v36 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)a5 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( !v36 && !v53 )
      break;
    if ( v53 )
    {
      v39 = (unsigned int *)v55;
      HostHandle = *(const unsigned int *)((char *)v55 + (char *)v62 - (char *)v13);
      if ( !v36 )
      {
LABEL_67:
        *v39 = HostHandle;
        goto LABEL_69;
      }
      HostHandle = DXGSYNCOBJECT::GetHostHandle(v36, HostHandle, v38);
LABEL_66:
      v39 = (unsigned int *)v55;
      goto LABEL_67;
    }
    *v66 = v36;
LABEL_69:
    ++v54;
    v23 = ++v55;
    ++v66;
    if ( v54 >= a1 )
      goto LABEL_101;
  }
  v41 = (_QWORD *)WdLogNewEntry5_WdError(v37);
  v41[3] = a5;
  v42 = v62[v54];
  v41[5] = v54;
LABEL_86:
  v41[4] = v42;
  WdLogEvent5_WdError(v41);
  if ( v59 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v58);
  if ( v74 != v75 && v74 )
    ExFreePoolWithTag(v74, 0);
  v76 = 0;
  v74 = 0LL;
  if ( v63 != v64 && v63 )
    ExFreePoolWithTag(v63, 0);
  v65 = 0;
  v63 = 0LL;
  if ( P != v78 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v79 = 0;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
  if ( v16 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v60);
  LODWORD(v15) = -1073741811;
LABEL_7:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v68);
  return (unsigned int)v15;
}
