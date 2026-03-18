/*
 * XREFs of ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C0127CC0
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C0127550 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00109E8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001AF20 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0021B28 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C003E154 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0pqPR1XR1pq @ 0x1C003E200 (McTemplateK0pqPR1XR1pq.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0106CB0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromCpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        void *a4)
{
  _BYTE *v6; // r14
  struct DXGDEVICE *v8; // r12
  __int64 v9; // rcx
  __int64 v10; // r10
  volatile signed __int64 *v11; // rax
  volatile signed __int64 *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rax
  PERESOURCE *v25; // rbx
  _BYTE *v26; // r9
  HANDLE hAsyncEvent; // rcx
  NTSTATUS v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  PVOID v33; // rcx
  bool v34; // zf
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 ObjectCount; // rdi
  _BYTE *PoolWithTag; // rax
  _BYTE *v42; // rdi
  __int64 v43; // rdi
  _BYTE *v44; // rax
  UINT v45; // ebx
  __int64 v46; // rsi
  D3DKMT_HANDLE v47; // ebx
  __int64 v48; // rcx
  const GUID *v49; // r8
  int v50; // r9d
  __int64 v51; // rax
  __int64 v52; // r8
  int v53; // ecx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  _BYTE *v57; // rcx
  unsigned int v58; // r9d
  _QWORD *v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rdx
  int v63; // r10d
  unsigned __int64 i; // rdi
  __int64 v65; // rbx
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rax
  int v69; // eax
  __int64 v70; // rcx
  const GUID *v71; // r8
  int v72; // r9d
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned int v75; // r9d
  _BYTE *v76; // r11
  __int64 v77; // rcx
  __int64 v78; // rax
  _QWORD *v79; // rcx
  unsigned __int64 v80; // rdi
  __int64 v81; // rbx
  _QWORD *v82; // rax
  int v83; // eax
  __int64 v84; // rax
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  const GUID *v88; // r8
  struct DXGADAPTER *v89; // rcx
  DXGADAPTER *v90; // rcx
  __int64 v91; // rax
  PVOID v92; // rax
  PRKEVENT v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rax
  __int64 v98; // rax
  PVOID v99; // rsi
  int Timeout; // [rsp+20h] [rbp-E0h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  __int64 v103; // [rsp+40h] [rbp-C0h]
  PERESOURCE *v104; // [rsp+50h] [rbp-B0h] BYREF
  char v105; // [rsp+58h] [rbp-A8h]
  PVOID v106; // [rsp+60h] [rbp-A0h]
  _BYTE v107[32]; // [rsp+68h] [rbp-98h] BYREF
  int v108; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h]
  _BYTE v110[32]; // [rsp+98h] [rbp-68h] BYREF
  int v111; // [rsp+B8h] [rbp-48h]
  PRKEVENT Event; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v113; // [rsp+C8h] [rbp-38h]
  _BYTE v114[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v115; // [rsp+E0h] [rbp-20h]
  struct _KTHREAD **v116[2]; // [rsp+F8h] [rbp-8h] BYREF
  DXGADAPTER *v117; // [rsp+108h] [rbp+8h]
  char v118; // [rsp+110h] [rbp+10h]
  struct _KTHREAD **v119[2]; // [rsp+118h] [rbp+18h] BYREF
  struct DXGADAPTER *v120; // [rsp+128h] [rbp+28h]
  char v121; // [rsp+130h] [rbp+30h]
  struct DXGDEVICE *v122; // [rsp+138h] [rbp+38h]
  char v123; // [rsp+140h] [rbp+40h]
  void *Base; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v125[16]; // [rsp+158h] [rbp+58h] BYREF
  size_t NumOfElements; // [rsp+168h] [rbp+68h]
  char v127; // [rsp+170h] [rbp+70h]
  PVOID Object; // [rsp+178h] [rbp+78h] BYREF
  char v129[8]; // [rsp+180h] [rbp+80h] BYREF
  int v130; // [rsp+188h] [rbp+88h] BYREF
  __int64 v131; // [rsp+190h] [rbp+90h]
  __int64 v132; // [rsp+198h] [rbp+98h]
  int v133; // [rsp+1A0h] [rbp+A0h]
  __int128 v134; // [rsp+1A8h] [rbp+A8h]

  v6 = 0LL;
  Event = 0LL;
  v113 = 0LL;
  v8 = a3;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v114, a3);
  v10 = *((_QWORD *)v8 + 2);
  v11 = *(volatile signed __int64 **)(v10 + 16);
  v117 = (DXGADAPTER *)v11;
  v118 = 0;
  if ( v11 )
  {
    _InterlockedIncrement64(v11 + 3);
    v10 = *((_QWORD *)v8 + 2);
    v116[1] = (struct _KTHREAD **)-1LL;
  }
  v12 = *(volatile signed __int64 **)(v10 + 16);
  v120 = (struct DXGADAPTER *)v12;
  v121 = 0;
  if ( v12 )
  {
    _InterlockedIncrement64(v12 + 3);
    v119[1] = (struct _KTHREAD **)-1LL;
  }
  v122 = v8;
  v123 = 0;
  if ( v118 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9);
    v13[5] = v116;
    v13[3] = 275LL;
    v13[4] = 4LL;
    v13[6] = 0LL;
    v13[7] = 0LL;
    WdLogEvent5_WdCriticalError(v13);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v117 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v117 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v14, &EventBlockThread, v15, 72);
      KeWaitForSingleObject((char *)v117 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v117);
  }
  v118 = 1;
  v16 = *((unsigned int *)v122 + 116);
  if ( (_DWORD)v16 != 1 )
    goto LABEL_18;
  if ( v123 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)v119);
    v16 = *((unsigned int *)v120 + 44);
    if ( (_DWORD)v16 != 1 )
    {
      COREACCESS::Release(v119);
LABEL_18:
      COREACCESS::Release(v116);
      COREACCESS::~COREACCESS((COREACCESS *)v119);
      COREACCESS::~COREACCESS((COREACCESS *)v116);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v114);
      LODWORD(v17) = -1073741130;
      return (unsigned int)v17;
    }
  }
  Global = DXGGLOBAL::GetGlobal(v16);
  v104 = (PERESOURCE *)Global;
  v105 = 0;
  if ( !Global )
  {
    v21 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v21 + 24) = 2306LL;
    WdLogEvent5_WdAssertion(v21);
    Global = (struct DXGGLOBAL *)v104;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 43)) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v22);
    *(_QWORD *)(v23 + 24) = 2311LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( v105 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22);
    v24[5] = &v104;
    v24[3] = 275LL;
    v24[4] = 4LL;
    v24[6] = 0LL;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  v25 = v104;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v25[43], 1u);
  v105 = 1;
  v26 = 0LL;
  v111 = 0;
  v106 = 0LL;
  v108 = 0;
  P = 0LL;
  if ( !a4 )
  {
    hAsyncEvent = a1->hAsyncEvent;
    if ( hAsyncEvent )
    {
      v28 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v17 = v28;
      v113 = Object;
      if ( v28 < 0 )
      {
        v32 = WdLogNewEntry5_WdWarning(v30, v29, v31);
        *(_QWORD *)(v32 + 24) = a1->hAsyncEvent;
        *(_QWORD *)(v32 + 32) = v17;
        WdLogEvent5_WdWarning(v32);
        if ( P != v110 && P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_32;
      }
    }
    else
    {
      v130 = 48;
      v131 = 0LL;
      v133 = 512;
      v132 = 0LL;
      v134 = 0LL;
      v35 = ObCreateObject(0LL, ExEventObjectType, &v130, 0LL, 0LL, 24, 0, 0, &Event);
      v17 = v35;
      if ( v35 < 0 )
      {
        v39 = WdLogNewEntry5_WdWarning(v37, v36, v38);
        *(_QWORD *)(v39 + 24) = v17;
        WdLogEvent5_WdWarning(v39);
        if ( P != v110 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v111 = 0;
        if ( v106 != v107 && v106 )
          ExFreePoolWithTag(v106, 0);
        v106 = 0LL;
        v108 = 0;
        if ( v105 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v104);
        COREACCESS::~COREACCESS((COREACCESS *)v119);
        COREACCESS::~COREACCESS((COREACCESS *)v116);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v114);
        return (unsigned int)v17;
      }
      KeInitializeEvent(Event, SynchronizationEvent, 0);
      v113 = Event;
    }
    v6 = P;
    v26 = v106;
  }
  ObjectCount = a1->ObjectCount;
  if ( (unsigned int)ObjectCount <= 4 )
  {
    v26 = v107;
    v106 = v107;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)ObjectCount < 8 )
      goto LABEL_56;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * ObjectCount, 0x4B677844u);
    v6 = P;
    v26 = PoolWithTag;
    v106 = PoolWithTag;
  }
  v108 = ObjectCount;
  if ( v26 && (_DWORD)ObjectCount )
  {
    memset(v26, 0, 8 * ObjectCount);
    v26 = v106;
    v6 = P;
  }
  v115 = v26;
  v42 = v26;
  if ( !v26 )
  {
LABEL_56:
    LODWORD(v17) = -1073741801;
    if ( v6 != v110 && v6 )
    {
      ExFreePoolWithTag(v6, 0);
      v26 = v106;
    }
    P = 0LL;
    v111 = 0;
    if ( v26 != v107 && v26 )
    {
      v33 = v26;
      goto LABEL_34;
    }
    goto LABEL_35;
  }
  if ( (*((_BYTE *)a2 + 323) & 0xC) != 0 && a1->ObjectCount == 1 && !*a1->ObjectHandleArray )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 544LL) + 8LL) + 976LL))(
      *((_QWORD *)v8 + 81),
      0LL,
      v129);
LABEL_143:
    if ( Event )
      ObfReferenceObject(Event);
    LOBYTE(HandleInformation) = a4 == 0LL;
    LOBYTE(Timeout) = *(_BYTE *)&a1->Flags.0 & 1;
    LODWORD(v17) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, const UINT64 *, PVOID, int, int, _QWORD, void *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 520LL) + 8LL) + 664LL))(
                     a1->ObjectCount,
                     v42,
                     a1->FenceValueArray,
                     v113,
                     Timeout,
                     HandleInformation,
                     *((_QWORD *)v8 + 82),
                     a4);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v103) = a1->Flags.0;
      LODWORD(Timeouta) = a1->ObjectCount;
      McTemplateK0pqPR1XR1pq(v87, v86, v88, v8, Timeouta, v42, a1->FenceValueArray, a1->hAsyncEvent, v103);
    }
    if ( P != v110 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v111 = 0;
    if ( v106 != v107 && v106 )
      ExFreePoolWithTag(v106, 0);
    v106 = 0LL;
    v108 = 0;
    if ( v105 )
    {
      v105 = 0;
      ExReleaseResourceLite(v104[43]);
      KeLeaveCriticalRegion();
    }
    v89 = v120;
    if ( v120 )
    {
      if ( v121 )
      {
        COREACCESS::Release(v119);
        v89 = v120;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v89 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v89 + 2), v89);
    }
    v90 = v117;
    if ( v117 )
    {
      if ( v118 )
      {
        v118 = 0;
        v90 = v117;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v117 + 20) )
        {
          DXGADAPTER::ReleaseCoreResource(v117);
          v90 = v117;
        }
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v90 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v90 + 2), v90);
    }
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v114);
    if ( (int)v17 < 0 )
    {
      if ( Event )
        ObfDereferenceObject(Event);
      goto LABEL_193;
    }
    v92 = v113;
    if ( v113 )
    {
      v93 = Event;
      if ( v113 == Event )
      {
        do
        {
          LODWORD(v17) = KeWaitForSingleObject(v92, Executive, 0, 1u, 0LL);
          if ( PsIsThreadTerminating(KeGetCurrentThread()) )
          {
            v98 = WdLogNewEntry5_WdWarning(v95, v94, v96);
            *(_QWORD *)(v98 + 24) = 4687LL;
            WdLogEvent5_WdWarning(v98);
            LODWORD(v17) = -1073741130;
            goto LABEL_193;
          }
          v92 = v113;
        }
        while ( (_DWORD)v17 == 257 );
        if ( (int)v17 >= 0 )
          goto LABEL_178;
        v97 = WdLogNewEntry5_WdAssertion(v95);
        *(_QWORD *)(v97 + 24) = 4696LL;
        WdLogEvent5_WdAssertion(v97);
        goto LABEL_193;
      }
    }
    else
    {
LABEL_178:
      v93 = Event;
    }
    if ( v93 )
      ObfDereferenceObject(v93);
    return 0LL;
  }
  v43 = a1->ObjectCount;
  if ( (unsigned int)v43 <= 4 )
  {
    v6 = v110;
    P = v110;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v43 < 8 )
      goto LABEL_56;
    v44 = ExAllocatePoolWithTag(PagedPool, 8 * v43, 0x4B677844u);
    v26 = v106;
    v6 = v44;
    P = v44;
  }
  v111 = v43;
  if ( !v6 )
    goto LABEL_56;
  memset(v6, 0, 8 * v43);
  v6 = P;
  v26 = v106;
  if ( !P )
    goto LABEL_56;
  v45 = a1->ObjectCount;
  v46 = 0LL;
  if ( !v45 )
  {
LABEL_91:
    LODWORD(NumOfElements) = 0;
    v57 = 0LL;
    Base = 0LL;
    v58 = 0;
    if ( v45 <= 2 )
    {
      v57 = v125;
      Base = v125;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v45 < 8 )
        goto LABEL_105;
      v57 = ExAllocatePoolWithTag(PagedPool, 8LL * v45, 0x4B677844u);
      Base = v57;
    }
    LODWORD(NumOfElements) = v45;
    v58 = v45;
    if ( v57 )
    {
      memset(v57, 0, 8LL * v45);
      v58 = NumOfElements;
      v57 = Base;
    }
LABEL_105:
    v127 = 1;
    if ( v57 )
    {
      memmove(v57, v6, 8LL * v58);
      qsort(Base, (unsigned int)NumOfElements, 8uLL, (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
      v63 = NumOfElements;
      for ( i = 0LL; i < (unsigned int)NumOfElements; v63 = NumOfElements )
      {
        v65 = *((_QWORD *)Base + i);
        KeEnterCriticalRegion();
        if ( *(struct _KTHREAD **)(v65 + 40) == KeGetCurrentThread() )
        {
          v67 = *(_DWORD *)(v65 + 56);
          if ( v67 <= 0 )
          {
            v68 = WdLogNewEntry5_WdAssertion(v66);
            *(_QWORD *)(v68 + 24) = 409LL;
            WdLogEvent5_WdAssertion(v68);
            v67 = *(_DWORD *)(v65 + 56);
          }
          v69 = v67 + 1;
        }
        else
        {
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v65 + 48, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v72 = *(_DWORD *)(v65 + 60);
              if ( v72 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v70, &EventBlockThread, v71, v72);
            }
            _InterlockedIncrement64((volatile signed __int64 *)(v65 + 32));
            ExAcquirePushLockExclusiveEx(v65 + 48, 0LL);
          }
          if ( *(_QWORD *)(v65 + 40) )
          {
            v73 = WdLogNewEntry5_WdAssertion(v70);
            *(_QWORD *)(v73 + 24) = 433LL;
            WdLogEvent5_WdAssertion(v73);
          }
          if ( *(_DWORD *)(v65 + 56) )
          {
            v74 = WdLogNewEntry5_WdAssertion(v70);
            *(_QWORD *)(v74 + 24) = 434LL;
            WdLogEvent5_WdAssertion(v74);
          }
          *(_QWORD *)(v65 + 40) = KeGetCurrentThread();
          v69 = 1;
        }
        *(_DWORD *)(v65 + 56) = v69;
        ++i;
      }
      v75 = 0;
      v127 = 0;
      if ( !a1->ObjectCount )
      {
LABEL_130:
        v79 = Base;
        if ( Base )
        {
          v80 = 0LL;
          if ( v63 )
          {
            do
            {
              v81 = v79[v80] + 32LL;
              if ( *(struct _KTHREAD **)(v79[v80] + 40LL) != KeGetCurrentThread() )
              {
                v82 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v79);
                v82[3] = 275LL;
                v82[4] = 4LL;
                v82[5] = v81;
                v82[6] = 0LL;
                v82[7] = 0LL;
                WdLogEvent5_WdCriticalError(v82);
              }
              v83 = *(_DWORD *)(v81 + 24);
              if ( v83 <= 0 )
              {
                v84 = WdLogNewEntry5_WdAssertion(v79);
                *(_QWORD *)(v84 + 24) = 453LL;
                WdLogEvent5_WdAssertion(v84);
                v83 = *(_DWORD *)(v81 + 24);
              }
              v85 = v83 - 1;
              *(_DWORD *)(v81 + 24) = v85;
              if ( !v85 )
              {
                *(_QWORD *)(v81 + 8) = 0LL;
                ExReleasePushLockExclusiveEx(v81 + 16, 0LL);
              }
              KeLeaveCriticalRegion();
              ++v80;
              v79 = Base;
            }
            while ( v80 < (unsigned int)NumOfElements );
          }
        }
        if ( v79 != (_QWORD *)v125 && v79 )
          ExFreePoolWithTag(v79, 0);
        v42 = v115;
        goto LABEL_143;
      }
      v76 = v115;
      while ( 1 )
      {
        v17 = v75;
        v77 = *(_QWORD *)&v6[8 * v75];
        v78 = (*(_DWORD *)(v77 + 172) & 4) != 0
            ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                            (DXGSYNCOBJECTCA *)v77,
                            *((struct ADAPTER_RENDER **)v8 + 2))
              + 4)
            : *(_QWORD *)(v77 + 296);
        *(_QWORD *)&v76[8 * v17] = v78;
        if ( !v78 )
          break;
        if ( ++v75 >= a1->ObjectCount )
          goto LABEL_130;
      }
      v91 = WdLogNewEntry5_WdError(v77);
      *(_QWORD *)(v91 + 24) = a1->ObjectHandleArray[v17];
      WdLogEvent5_WdError(v91);
      LODWORD(v17) = -1073741811;
    }
    else
    {
      LODWORD(v17) = -1073741801;
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)&Base);
    if ( P != v110 && P )
      ExFreePoolWithTag(P, 0);
    v111 = 0;
    P = 0LL;
    if ( v106 != v107 && v106 )
      ExFreePoolWithTag(v106, 0);
    v34 = v105 == 0;
    v108 = 0;
    v106 = 0LL;
    goto LABEL_190;
  }
  while ( 1 )
  {
    v47 = a1->ObjectHandleArray[v46];
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a2 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v50 = *((_DWORD *)a2 + 56);
        if ( v50 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v48, &EventBlockThread, v49, v50);
      }
      ExAcquirePushLockSharedEx((char *)a2 + 208, 0LL);
    }
    v51 = (v47 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v51 >= *((_DWORD *)a2 + 62) )
      goto LABEL_85;
    v52 = *((_QWORD *)a2 + 29);
    v53 = *(_DWORD *)(v52 + 16 * v51 + 8);
    if ( ((v47 >> 25) & 0x60) != (*(_BYTE *)(v52 + 16 * v51 + 8) & 0x60) || (v53 & 0x2000) != 0 || (v53 & 0x1F) == 0 )
      goto LABEL_85;
    v54 = v53 & 0x1F;
    if ( (_BYTE)v54 != 11 )
    {
      v55 = WdLogNewEntry5_WdError(v54);
      *(_QWORD *)(v55 + 24) = 316LL;
      WdLogEvent5_WdError(v55);
LABEL_85:
      v17 = 0LL;
      goto LABEL_86;
    }
    v17 = *(_QWORD *)(v52 + 16LL * (unsigned int)v51);
LABEL_86:
    ExReleasePushLockSharedEx((char *)a2 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( !v17 )
      break;
    if ( (*(_DWORD *)(v17 + 72) & 0x20) != 0 )
    {
      v60 = WdLogNewEntry5_WdError(v56);
      *(_QWORD *)(v60 + 24) = a1->ObjectHandleArray[v46];
      WdLogEvent5_WdError(v60);
      LODWORD(v17) = -1073741790;
      goto LABEL_96;
    }
    if ( *(struct DXGDEVICE **)(v17 + 16) != a3 )
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdError(v56);
      v59[3] = a1->ObjectHandleArray[v46];
      v59[4] = *(_QWORD *)(v17 + 16);
      v59[5] = a3;
      WdLogEvent5_WdError(v59);
      LODWORD(v17) = -1073741811;
      goto LABEL_96;
    }
    *(_QWORD *)&v6[8 * v46] = *(_QWORD *)(v17 + 32);
    v46 = (unsigned int)(v46 + 1);
    v45 = a1->ObjectCount;
    if ( (unsigned int)v46 >= v45 )
    {
      v8 = a3;
      goto LABEL_91;
    }
  }
  v61 = (_QWORD *)WdLogNewEntry5_WdError(v56);
  LODWORD(v17) = -1073741811;
  v61[3] = a2;
  v62 = a1->ObjectHandleArray[v46];
  v61[5] = (unsigned int)v46;
  v61[4] = v62;
  v61[6] = -1073741811LL;
  WdLogEvent5_WdError(v61);
LABEL_96:
  if ( P != v110 && P )
    ExFreePoolWithTag(P, 0);
LABEL_32:
  v33 = v106;
  v111 = 0;
  P = 0LL;
  if ( v106 != v107 && v106 )
LABEL_34:
    ExFreePoolWithTag(v33, 0);
LABEL_35:
  v34 = v105 == 0;
  v106 = 0LL;
  v108 = 0;
LABEL_190:
  if ( !v34 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v104);
  COREACCESS::~COREACCESS((COREACCESS *)v119);
  COREACCESS::~COREACCESS((COREACCESS *)v116);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v114);
LABEL_193:
  v99 = v113;
  if ( v113 )
  {
    KeSetEvent((PRKEVENT)v113, 0, 0);
    ObfDereferenceObject(v99);
  }
  return (unsigned int)v17;
}
