/*
 * XREFs of ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C024B070
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C022F5CC (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C024E888 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 * Callees:
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00073D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0007424 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017EF8 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0018020 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C001A144 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0023B9C (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     McTemplateK0pqPR1XR1 @ 0x1C0042EEC (McTemplateK0pqPR1XR1.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F58CC (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F61DC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01449F0 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1C0228B80 (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C0269C04 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall SubmitWaitForSyncObjectsFromGpu(
        unsigned int a1,
        const unsigned int *a2,
        unsigned __int64 *a3,
        unsigned int a4,
        struct DXGPROCESS *a5,
        bool a6,
        bool a7)
{
  __int64 v7; // rdi
  __int64 v8; // r14
  const unsigned int *v9; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGHWQUEUE *v15; // r13
  _QWORD *v16; // rax
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rdi
  char *v21; // rbx
  PVOID v22; // rcx
  __int64 v23; // rdx
  size_t v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  PERESOURCE *Global; // rax
  unsigned int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // ecx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  unsigned int HostHandle; // eax
  DXGSYNCOBJECT **v37; // rcx
  unsigned int v38; // ebx
  __int64 v39; // rax
  __int64 v40; // r8
  int v41; // ecx
  DXGSYNCOBJECT *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  DXGSYNCOBJECT **v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rcx
  unsigned int v50; // esi
  struct DXGHWQUEUE *v51; // rbx
  char *v52; // rax
  struct DXGSYNCOBJECT *v53; // rbx
  struct DXGHWQUEUE *v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rdx
  _QWORD *v59; // rax
  struct DXGSYNCOBJECT **v60; // [rsp+20h] [rbp-218h]
  char v61; // [rsp+50h] [rbp-1E8h]
  unsigned int v62; // [rsp+54h] [rbp-1E4h]
  int v63; // [rsp+54h] [rbp-1E4h]
  struct DXGHWQUEUE *v64; // [rsp+58h] [rbp-1E0h] BYREF
  DXGSYNCOBJECT **v65; // [rsp+60h] [rbp-1D8h]
  char v66[8]; // [rsp+68h] [rbp-1D0h] BYREF
  char v67; // [rsp+70h] [rbp-1C8h]
  __int64 v68; // [rsp+78h] [rbp-1C0h] BYREF
  int v69; // [rsp+80h] [rbp-1B8h]
  const unsigned int *v70; // [rsp+88h] [rbp-1B0h]
  unsigned int *v71; // [rsp+90h] [rbp-1A8h]
  PVOID v72; // [rsp+98h] [rbp-1A0h] BYREF
  _BYTE v73[32]; // [rsp+A0h] [rbp-198h] BYREF
  int v74; // [rsp+C0h] [rbp-178h]
  char *v75; // [rsp+C8h] [rbp-170h]
  _BYTE v76[16]; // [rsp+D0h] [rbp-168h] BYREF
  const unsigned __int64 *v77; // [rsp+E0h] [rbp-158h]
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+E8h] [rbp-150h] BYREF
  _BYTE v79[16]; // [rsp+F0h] [rbp-148h] BYREF
  PVOID v80; // [rsp+100h] [rbp-138h] BYREF
  _BYTE v81[16]; // [rsp+108h] [rbp-130h] BYREF
  int v82; // [rsp+118h] [rbp-120h]
  PVOID P; // [rsp+120h] [rbp-118h] BYREF
  _BYTE v84[32]; // [rsp+128h] [rbp-110h] BYREF
  unsigned int v85; // [rsp+148h] [rbp-F0h]
  _BYTE v86[160]; // [rsp+150h] [rbp-E8h] BYREF

  v7 = a4;
  v8 = (__int64)a3;
  v9 = a2;
  v70 = a2;
  v77 = a3;
  v71 = (unsigned int *)a5;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v76, a4, (struct _KTHREAD **)a5, &v64, a7);
  v15 = v64;
  if ( !v64 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
    v16[3] = a5;
    v16[4] = v7;
    v17 = -1073741811;
    v16[5] = -1073741811LL;
    WdLogEvent5_WdError(v16);
    goto LABEL_7;
  }
  v19 = *(_QWORD *)(*((_QWORD *)v64 + 2) + 16LL);
  v68 = v19;
  v69 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v86, v19, 0, v14, a7);
  if ( !a7 )
  {
    v17 = COREDEVICEACCESS::AcquireShared((__int64)v86, 0xFFFFFFFF, 0LL);
    if ( v17 < 0 )
      goto LABEL_5;
  }
  v21 = 0LL;
  P = 0LL;
  v85 = 0;
  if ( a6 )
  {
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&P, a1);
    v22 = P;
    if ( !P )
    {
      P = 0LL;
      v85 = 0;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
      if ( v19 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v68);
LABEL_12:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v76, v23);
      return 3221225495LL;
    }
    v24 = 8LL * v85;
    if ( v8 + v24 < v8 || v8 + v24 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v22, (const void *)v8, v24);
    v8 = (__int64)P;
    v77 = (const unsigned __int64 *)P;
  }
  v72 = 0LL;
  v74 = 0;
  v75 = 0LL;
  v80 = 0LL;
  v82 = 0;
  v71 = 0LL;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 16LL) + 16LL) + 185LL) )
  {
    v61 = 1;
    v71 = (unsigned int *)PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v80, a1);
    if ( !v71 )
    {
      if ( v80 != v81 && v80 )
        ExFreePoolWithTag(v80, 0);
      v80 = 0LL;
      v82 = 0;
      if ( v72 != v73 && v72 )
        ExFreePoolWithTag(v72, 0);
      v72 = 0LL;
      v74 = 0;
      if ( P != v84 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v85 = 0;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
      if ( v19 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v68);
      goto LABEL_12;
    }
    v9 = v70;
  }
  else
  {
    v61 = 0;
    v21 = (char *)PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(&v72, a1);
    v75 = v21;
    if ( !v21 )
    {
      if ( v80 != v81 && v80 )
        ExFreePoolWithTag(v80, 0);
      v80 = 0LL;
      v82 = 0;
      if ( v72 != v73 && v72 )
        ExFreePoolWithTag(v72, 0);
      v72 = 0LL;
      v74 = 0;
      if ( P != v84 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v85 = 0;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
      if ( v19 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v68);
      v17 = -1073741801;
      goto LABEL_7;
    }
  }
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v26, v25);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v66, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v66);
  v62 = 0;
  if ( !a1 )
  {
LABEL_74:
    if ( v61 )
    {
      v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
              (struct _KTHREAD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 16LL) + 16LL)
                                 + 4144LL),
              (struct _KTHREAD **)a5,
              0LL,
              v71,
              0LL,
              0LL,
              (const unsigned __int64 *)v8,
              0LL,
              a1,
              v15);
    }
    else
    {
      v50 = 0;
      if ( !a1 )
      {
LABEL_113:
        if ( v67 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v66);
        if ( v80 != v81 && v80 )
          ExFreePoolWithTag(v80, 0);
        v80 = 0LL;
        v82 = 0;
        if ( v72 != v73 && v72 )
          ExFreePoolWithTag(v72, 0);
        v72 = 0LL;
        v74 = 0;
        if ( P != v84 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v85 = 0;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
        if ( v19 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v68);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v76, v58);
        return 0LL;
      }
      v51 = (struct DXGHWQUEUE *)v8;
      v64 = (struct DXGHWQUEUE *)v8;
      v52 = &v75[-v8];
      v75 -= v8;
      while ( 1 )
      {
        v53 = *(struct DXGSYNCOBJECT **)((char *)v51 + (_QWORD)v52);
        DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v79, v53);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v79);
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             v53,
                             *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 16LL));
        v54 = v64;
        v63 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 16LL) + 520LL)
                                                                                                  + 8LL)
                                                                                      + 632LL))(
                *((_QWORD *)v15 + 5),
                VidSchSyncObject,
                *(_QWORD *)v64);
        if ( v63 < 0 )
          break;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v60) = 1;
          McTemplateK0pqPR1XR1(
            v8 + 8LL * v50,
            &EventWaitForSynchronizationObjectFromGpu,
            v57,
            v15,
            v60,
            &VidSchSyncObject,
            v8 + 8LL * v50);
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v79);
        ++v50;
        v51 = (struct DXGHWQUEUE *)((char *)v54 + 8);
        v64 = v51;
        v52 = v75;
        if ( v50 >= a1 )
          goto LABEL_113;
      }
      v59 = (_QWORD *)WdLogNewEntry5_WdError(v56, v55, v57);
      v59[3] = a5;
      v59[4] = v70[v50];
      v59[5] = v50;
      v17 = v63;
      v59[6] = v63;
      WdLogEvent5_WdError(v59);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v79);
    }
    if ( v67 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v66);
    if ( v80 != v81 && v80 )
      ExFreePoolWithTag(v80, 0);
    v82 = 0;
    v80 = 0LL;
    if ( v72 != v73 && v72 )
      ExFreePoolWithTag(v72, 0);
    v74 = 0;
    v72 = 0LL;
    if ( P != v84 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v85 = 0;
LABEL_5:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
    if ( v19 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v68);
    goto LABEL_7;
  }
  v65 = (DXGSYNCOBJECT **)v21;
  v64 = (struct DXGHWQUEUE *)((char *)v71 - (char *)v70);
  while ( 1 )
  {
    v28 = *v9;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a5 + 184));
    v29 = (v28 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v29 < *((_DWORD *)a5 + 56)
      && (v30 = *((_QWORD *)a5 + 26),
          v31 = *(_DWORD *)(v30 + 16 * v29 + 8),
          ((v28 >> 25) & 0x60) == (*(_BYTE *)(v30 + 16 * v29 + 8) & 0x60))
      && (v31 & 0x2000) == 0
      && (v31 & 0x1F) == 0xB )
    {
      v32 = *(_QWORD *)(v30 + 16LL * (unsigned int)v29);
    }
    else
    {
      v32 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)a5 + 184, 0LL);
    KeLeaveCriticalRegion();
    if ( !v32 )
      break;
    v35 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
    if ( *(_QWORD *)(v32 + 16) != v35 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v35, v33, v34);
      v48[3] = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
      v49 = *(_QWORD *)(v32 + 16);
      goto LABEL_91;
    }
    if ( (*(_DWORD *)(v32 + 72) & 0x20) != 0 )
    {
      v47 = WdLogNewEntry5_WdError(v35, v33, v34);
      *(_QWORD *)(v47 + 24) = v70[v62];
      WdLogEvent5_WdError(v47);
      if ( v67 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v66);
      if ( v80 != v81 && v80 )
        ExFreePoolWithTag(v80, 0);
      v80 = 0LL;
      v82 = 0;
      if ( v72 != v73 && v72 )
        ExFreePoolWithTag(v72, 0);
      v72 = 0LL;
      v74 = 0;
      if ( P != v84 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v85 = 0;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
      if ( v19 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v68);
      v17 = -1073741790;
      goto LABEL_7;
    }
    if ( v61 )
    {
      HostHandle = *(_DWORD *)(v32 + 44);
LABEL_71:
      *(_DWORD *)((char *)v64 + (_QWORD)v9) = HostHandle;
      v37 = v65;
      goto LABEL_73;
    }
    v37 = v65;
    *v65 = *(DXGSYNCOBJECT **)(v32 + 32);
LABEL_73:
    ++v62;
    ++v9;
    v65 = v37 + 1;
    if ( v62 >= a1 )
      goto LABEL_74;
  }
  v38 = *v9;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a5 + 184));
  v39 = (v38 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v39 < *((_DWORD *)a5 + 56)
    && (v40 = *((_QWORD *)a5 + 26),
        v41 = *(_DWORD *)(v40 + 16 * v39 + 8),
        ((v38 >> 25) & 0x60) == (*(_BYTE *)(v40 + 16 * v39 + 8) & 0x60))
    && (v41 & 0x2000) == 0
    && (v41 & 0x1F) == 8 )
  {
    v42 = *(DXGSYNCOBJECT **)(v40 + 16LL * (unsigned int)v39);
  }
  else
  {
    v42 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)a5 + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( v42 || v61 )
  {
    if ( !v61 )
    {
      v46 = v65;
      *v65 = v42;
      v37 = v46;
      goto LABEL_73;
    }
    if ( v42 )
      HostHandle = DXGSYNCOBJECT::GetHostHandle(v42, *v9, v45);
    else
      HostHandle = *v9;
    goto LABEL_71;
  }
  v48 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43, v45);
  v48[3] = a5;
  v49 = v70[v62];
  v48[5] = v62;
LABEL_91:
  v48[4] = v49;
  WdLogEvent5_WdError(v48);
  if ( v67 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v66);
  if ( v80 != v81 && v80 )
    ExFreePoolWithTag(v80, 0);
  v82 = 0;
  v80 = 0LL;
  if ( v72 != v73 && v72 )
    ExFreePoolWithTag(v72, 0);
  v74 = 0;
  v72 = 0LL;
  if ( P != v84 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v85 = 0;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
  if ( v19 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v68);
  v17 = -1073741811;
LABEL_7:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v76, v18);
  return (unsigned int)v17;
}
