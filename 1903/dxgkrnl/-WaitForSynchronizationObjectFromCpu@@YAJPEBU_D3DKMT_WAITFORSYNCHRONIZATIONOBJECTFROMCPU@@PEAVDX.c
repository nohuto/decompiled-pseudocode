/*
 * XREFs of ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C00F26D8
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C00F2030 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006810 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C000721C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007260 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C00072B4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000735C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00074E4 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001B8A0 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0044C14 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0pqPR1XR1pq @ 0x1C0044FB4 (McTemplateK0pqPR1XR1pq.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F2680 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C013ECC4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0241BC8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromCpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        void *a4)
{
  _BYTE *PoolWithTag; // rdi
  struct _KEVENT *v7; // r12
  __int64 v10; // rcx
  volatile signed __int64 *v11; // rax
  volatile signed __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  PERESOURCE *Global; // rax
  HANDLE hAsyncEvent; // rcx
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  UINT ObjectCount; // r15d
  PVOID v29; // rcx
  _QWORD *v30; // r15
  __int64 v31; // rdx
  __int64 v32; // r13
  DXGPUSHLOCK *v33; // rcx
  D3DKMT_HANDLE v34; // ebx
  __int64 v35; // rax
  __int64 v36; // r8
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // r8
  unsigned __int64 i; // rbx
  unsigned int v46; // r9d
  __int64 v47; // rcx
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  const GUID *v55; // r8
  struct DXGADAPTER *v56; // rcx
  struct DXGADAPTER *v57; // rcx
  __int64 v58; // rax
  PRKEVENT v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rax
  __int64 v64; // rax
  int Object; // [rsp+20h] [rbp-E0h]
  PVOID *Objecta; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  __int64 v69; // [rsp+40h] [rbp-C0h]
  _BYTE v70[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v71; // [rsp+58h] [rbp-A8h]
  PVOID v72; // [rsp+60h] [rbp-A0h]
  _BYTE v73[32]; // [rsp+68h] [rbp-98h] BYREF
  UINT v74; // [rsp+88h] [rbp-78h]
  PRKEVENT Event; // [rsp+90h] [rbp-70h] BYREF
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v77[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v78; // [rsp+C0h] [rbp-40h]
  _BYTE v79[16]; // [rsp+C8h] [rbp-38h] BYREF
  struct DXGPROCESS *v80; // [rsp+D8h] [rbp-28h]
  DXGPUSHLOCK *v81; // [rsp+E0h] [rbp-20h]
  void *v82; // [rsp+F0h] [rbp-10h]
  void *Base[3]; // [rsp+F8h] [rbp-8h] BYREF
  size_t NumOfElements; // [rsp+110h] [rbp+10h]
  char v85; // [rsp+118h] [rbp+18h]
  PVOID v86; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v87[8]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v88[4]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v89; // [rsp+150h] [rbp+50h]
  _BYTE v90[8]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v91[8]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v92; // [rsp+170h] [rbp+70h]
  struct DXGADAPTER *v93; // [rsp+178h] [rbp+78h]
  char v94; // [rsp+180h] [rbp+80h]
  int v95; // [rsp+184h] [rbp+84h]
  __int64 v96; // [rsp+188h] [rbp+88h]
  _BYTE v97[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v98; // [rsp+1B0h] [rbp+B0h]
  struct DXGADAPTER *v99; // [rsp+1B8h] [rbp+B8h]
  char v100; // [rsp+1C0h] [rbp+C0h]
  int v101; // [rsp+1C4h] [rbp+C4h]
  __int64 v102; // [rsp+1C8h] [rbp+C8h]
  struct DXGDEVICE *v103; // [rsp+1E8h] [rbp+E8h]
  char v104; // [rsp+1F0h] [rbp+F0h]

  v80 = a2;
  v82 = a4;
  PoolWithTag = 0LL;
  Event = 0LL;
  v7 = 0LL;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v79, a3);
  v10 = *((_QWORD *)a3 + 2);
  v11 = *(volatile signed __int64 **)(v10 + 16);
  v93 = (struct DXGADAPTER *)v11;
  v94 = 0;
  v95 = -1;
  v96 = 0LL;
  if ( v11 )
  {
    _InterlockedIncrement64(v11 + 3);
    v10 = *((_QWORD *)a3 + 2);
    v92 = -1LL;
  }
  v12 = *(volatile signed __int64 **)(v10 + 16);
  v99 = (struct DXGADAPTER *)v12;
  v100 = 0;
  v101 = -1;
  v102 = 0LL;
  if ( v12 )
  {
    _InterlockedIncrement64(v12 + 3);
    v98 = -1LL;
  }
  v103 = a3;
  v104 = 0;
  LODWORD(v15) = COREDEVICEACCESS::AcquireShared((__int64)v90, 0x7FBu, 0LL);
  if ( (int)v15 < 0 )
    goto LABEL_6;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v14, v13);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v70, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v70);
  v72 = 0LL;
  v74 = 0;
  P = 0LL;
  v78 = 0;
  if ( !a4 )
  {
    hAsyncEvent = a1->hAsyncEvent;
    if ( hAsyncEvent )
    {
      v18 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v86, 0LL);
      v7 = (struct _KEVENT *)v86;
      v15 = v18;
      if ( v18 < 0 )
      {
        v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
        *(_QWORD *)(v22 + 24) = a1->hAsyncEvent;
        *(_QWORD *)(v22 + 32) = v15;
        WdLogEvent5_WdWarning(v22);
LABEL_109:
        if ( P != v77 && P )
          ExFreePoolWithTag(P, 0);
        v29 = v72;
        P = 0LL;
        v78 = 0;
        if ( v72 == v73 || !v72 )
          goto LABEL_115;
        goto LABEL_114;
      }
    }
    else
    {
      v88[0] = 48LL;
      v88[3] = 512LL;
      v88[1] = 0LL;
      v88[2] = 0LL;
      v89 = 0LL;
      v23 = ObCreateObject(0LL, ExEventObjectType, v88, 0LL, 0LL, 24, 0, 0, &Event);
      v15 = v23;
      if ( v23 < 0 )
      {
        v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
        *(_QWORD *)(v27 + 24) = v15;
        WdLogEvent5_WdWarning(v27);
        if ( P != v77 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v78 = 0;
        if ( v72 != v73 && v72 )
          ExFreePoolWithTag(v72, 0);
        v72 = 0LL;
        v74 = 0;
        if ( v71 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v70);
LABEL_6:
        COREACCESS::~COREACCESS((COREACCESS *)v97);
        COREACCESS::~COREACCESS((COREACCESS *)v91);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v79);
        return (unsigned int)v15;
      }
      KeInitializeEvent(Event, SynchronizationEvent, 0);
      v7 = Event;
    }
    PoolWithTag = v72;
  }
  ObjectCount = a1->ObjectCount;
  if ( ObjectCount <= 4 )
  {
    PoolWithTag = v73;
    v72 = v73;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / ObjectCount < 8 )
    {
LABEL_34:
      LODWORD(v15) = -1073741801;
      if ( P != v77 && P )
      {
        ExFreePoolWithTag(P, 0);
        PoolWithTag = v72;
      }
      P = 0LL;
      v78 = 0;
      if ( PoolWithTag == v73 || !PoolWithTag )
        goto LABEL_115;
      v29 = PoolWithTag;
LABEL_114:
      ExFreePoolWithTag(v29, 0);
LABEL_115:
      v74 = 0;
      v72 = 0LL;
      if ( v71 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v70);
      COREACCESS::~COREACCESS((COREACCESS *)v97);
      COREACCESS::~COREACCESS((COREACCESS *)v91);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v79);
LABEL_118:
      if ( v7 )
      {
        KeSetEvent(v7, 0, 0);
        ObfDereferenceObject(v7);
      }
      return (unsigned int)v15;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * ObjectCount, 0x4B677844u);
    v72 = PoolWithTag;
  }
  v74 = ObjectCount;
  if ( PoolWithTag && ObjectCount )
  {
    memset(PoolWithTag, 0, 8LL * ObjectCount);
    PoolWithTag = v72;
  }
  if ( !PoolWithTag )
    goto LABEL_34;
  if ( (*((_BYTE *)a2 + 299) & 0xC) != 0 && a1->ObjectCount == 1 && !*a1->ObjectHandleArray )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _BYTE *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 544LL) + 8LL)
                                                             + 976LL))(
      *((_QWORD *)a3 + 81),
      0LL,
      v87,
      PoolWithTag);
    goto LABEL_69;
  }
  v30 = PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(&P, a1->ObjectCount);
  if ( !v30 )
  {
    LODWORD(v15) = -1073741801;
    goto LABEL_109;
  }
  v31 = a1->ObjectCount;
  v32 = 0LL;
  if ( (_DWORD)v31 )
  {
    v33 = (struct DXGPROCESS *)((char *)v80 + 184);
    v81 = (struct DXGPROCESS *)((char *)v80 + 184);
    while ( 1 )
    {
      v34 = a1->ObjectHandleArray[v32];
      DXGPUSHLOCK::AcquireShared(v33);
      v35 = (v34 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v35 >= *((_DWORD *)v80 + 56) )
        goto LABEL_50;
      v36 = *((_QWORD *)v80 + 26);
      v37 = *(_DWORD *)(v36 + 16 * v35 + 8);
      if ( ((v34 >> 25) & 0x60) != (*(_BYTE *)(v36 + 16 * v35 + 8) & 0x60) || (v37 & 0x2000) != 0 || (v37 & 0x1F) == 0 )
        goto LABEL_50;
      v38 = v37 & 0x1F;
      if ( (_BYTE)v38 != 11 )
        break;
      v15 = *(_QWORD *)(v36 + 16LL * (unsigned int)v35);
LABEL_51:
      ExReleasePushLockSharedEx(v81, 0LL);
      KeLeaveCriticalRegion();
      if ( !v15 )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40, v42);
        LODWORD(v15) = -1073741811;
        v51[3] = v80;
        v52 = a1->ObjectHandleArray[v32];
        v51[5] = (unsigned int)v32;
        v51[4] = v52;
        v51[6] = -1073741811LL;
        WdLogEvent5_WdError(v51);
        goto LABEL_109;
      }
      if ( (*(_DWORD *)(v15 + 72) & 0x20) != 0 )
      {
        v50 = WdLogNewEntry5_WdError(v41, v40, v42);
        *(_QWORD *)(v50 + 24) = a1->ObjectHandleArray[v32];
        WdLogEvent5_WdError(v50);
        LODWORD(v15) = -1073741790;
        goto LABEL_109;
      }
      if ( *(struct DXGDEVICE **)(v15 + 16) != a3 )
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40, v42);
        v49[3] = a1->ObjectHandleArray[v32];
        v49[4] = *(_QWORD *)(v15 + 16);
        v49[5] = a3;
        WdLogEvent5_WdError(v49);
        LODWORD(v15) = -1073741811;
        goto LABEL_109;
      }
      v33 = v81;
      v30[v32] = *(_QWORD *)(v15 + 32);
      v32 = (unsigned int)(v32 + 1);
      v31 = a1->ObjectCount;
      if ( (unsigned int)v32 >= (unsigned int)v31 )
        goto LABEL_55;
    }
    v39 = WdLogNewEntry5_WdError(v38, 2LL * (unsigned int)v35, v36);
    *(_QWORD *)(v39 + 24) = 267LL;
    WdLogEvent5_WdError(v39);
LABEL_50:
    v15 = 0LL;
    goto LABEL_51;
  }
LABEL_55:
  Base[0] = 0LL;
  LODWORD(NumOfElements) = 0;
  PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::AllocateElements(Base, v31);
  v85 = 1;
  if ( !Base[0] )
  {
    LODWORD(v15) = -1073741801;
LABEL_108:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)Base);
    goto LABEL_109;
  }
  memmove(Base[0], v30, 8LL * (unsigned int)NumOfElements);
  qsort(Base[0], (unsigned int)NumOfElements, 8uLL, (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
  for ( i = 0LL; i < (unsigned int)NumOfElements; DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(*((_QWORD *)Base[0] + i++)
                                                                                       + 32LL)) )
    ;
  v46 = 0;
  v85 = 0;
  if ( a1->ObjectCount )
  {
    while ( 1 )
    {
      v15 = v46;
      v47 = v30[v46];
      v48 = (*(_DWORD *)(v47 + 196) & 4) != 0
          ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v47, *((struct ADAPTER_RENDER **)a3 + 2))
            + 4)
          : *(_QWORD *)(v47 + 320);
      *(_QWORD *)&PoolWithTag[8 * v15] = v48;
      if ( !v48 )
        break;
      if ( ++v46 >= a1->ObjectCount )
        goto LABEL_68;
    }
    v58 = WdLogNewEntry5_WdError(v47, v43, v44);
    *(_QWORD *)(v58 + 24) = a1->ObjectHandleArray[v15];
    WdLogEvent5_WdError(v58);
    LODWORD(v15) = -1073741811;
    goto LABEL_108;
  }
LABEL_68:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)Base);
LABEL_69:
  if ( Event )
    ObfReferenceObject(Event);
  LOBYTE(HandleInformation) = v82 == 0LL;
  LOBYTE(Object) = *(_BYTE *)&a1->Flags.0 & 1;
  LODWORD(v15) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, const UINT64 *, struct _KEVENT *, int, int, _QWORD, void *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 520LL) + 8LL) + 664LL))(
                   a1->ObjectCount,
                   PoolWithTag,
                   a1->FenceValueArray,
                   v7,
                   Object,
                   HandleInformation,
                   *((_QWORD *)a3 + 82),
                   v82);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v69) = a1->Flags.0;
    LODWORD(Objecta) = a1->ObjectCount;
    McTemplateK0pqPR1XR1pq(v54, v53, v55, a3, Objecta, PoolWithTag, a1->FenceValueArray, a1->hAsyncEvent, v69);
  }
  if ( P != v77 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v78 = 0;
  if ( v72 != v73 && v72 )
    ExFreePoolWithTag(v72, 0);
  v72 = 0LL;
  v74 = 0;
  if ( v71 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v70);
  v56 = v99;
  if ( v99 )
  {
    if ( v100 )
    {
      COREACCESS::Release((COREACCESS *)v97);
      v56 = v99;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v56 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v56 + 2), v56);
  }
  v57 = v93;
  if ( v93 )
  {
    if ( v94 )
    {
      COREACCESS::Release((COREACCESS *)v91);
      v57 = v93;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v57 + 2), v57);
  }
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v79);
  if ( (int)v15 < 0 )
  {
    if ( Event )
      ObfDereferenceObject(Event);
    goto LABEL_118;
  }
  if ( v7 )
  {
    v59 = Event;
    if ( v7 == Event )
    {
      do
      {
        LODWORD(v15) = KeWaitForSingleObject(v7, Executive, 0, 1u, 0LL);
        if ( PsIsThreadTerminating(KeGetCurrentThread()) )
        {
          v64 = WdLogNewEntry5_WdWarning(v61, v60, v62);
          *(_QWORD *)(v64 + 24) = 4673LL;
          WdLogEvent5_WdWarning(v64);
          LODWORD(v15) = -1073741130;
          goto LABEL_118;
        }
      }
      while ( (_DWORD)v15 == 257 );
      if ( (int)v15 >= 0 )
        goto LABEL_103;
      v63 = WdLogNewEntry5_WdAssertion(v61, v60);
      *(_QWORD *)(v63 + 24) = 4682LL;
      WdLogEvent5_WdAssertion(v63);
      goto LABEL_118;
    }
  }
  else
  {
LABEL_103:
    v59 = Event;
  }
  if ( v59 )
    ObfDereferenceObject(v59);
  return 0LL;
}
