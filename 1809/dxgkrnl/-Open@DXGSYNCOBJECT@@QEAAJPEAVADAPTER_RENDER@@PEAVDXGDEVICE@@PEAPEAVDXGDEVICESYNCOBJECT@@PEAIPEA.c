/*
 * XREFs of ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00DF410
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00DDED4 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00F17E0 (DxgkOpenResourceFromNtHandle.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C0134FC8 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F14A0 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C021E760 (DxgkOpenSyncObjectFromNtHandle.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0235450 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C023E10C (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000E548 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0021980 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0035970 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?AllocHandleUnsafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C00359A4 (-AllocHandleUnsafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C00AD6D0 (--0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C00E06A0 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01F55F8 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0234B88 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C02384FC (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Open(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        struct DXGDEVICESYNCOBJECT **a4,
        unsigned int *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int a8,
        struct DXGADAPTERSYNCOBJECT **a9,
        char a10,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a11)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 *ThreadProperty; // rax
  __int64 *v20; // rbx
  __int64 v21; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rax
  struct _KTHREAD **v25; // rbx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  const GUID *v30; // r8
  int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  _QWORD *v35; // rax
  __int64 v36; // rdi
  struct DXGADAPTERSYNCOBJECT **v37; // rcx
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E v38; // ebx
  __int64 v39; // rax
  _QWORD *v40; // rax
  struct _KTHREAD **v41; // rdi
  _QWORD *v42; // rax
  int v43; // eax
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rax
  unsigned int *v57; // r14
  struct DXGGLOBAL *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  unsigned int v61; // eax
  __int64 v62; // rcx
  unsigned int v63; // edx
  __int64 v64; // rax
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // r9
  int v68; // r8d
  int v69; // eax
  _BOOL8 v70; // rcx
  unsigned int v71; // edi
  struct DXGGLOBAL *v72; // rax
  int v73; // ebx
  int v74; // eax
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  _QWORD *v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 *v82; // rax
  __int64 *v83; // rsi
  __int64 v84; // rax
  DXGDEVICESYNCOBJECT *PoolWithQuotaTag; // rax
  __int64 v86; // rcx
  unsigned int *v87; // r14
  DXGDEVICESYNCOBJECT *v88; // rax
  DXGDEVICESYNCOBJECT *v89; // rbp
  unsigned int v90; // r12d
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rax
  unsigned int v94; // edi
  struct DXGGLOBAL *Global; // rax
  unsigned __int64 v96; // rcx
  _QWORD *v97; // rbx
  __int64 v98; // rax
  struct _KTHREAD **v100; // [rsp+50h] [rbp-68h] BYREF
  char v101; // [rsp+58h] [rbp-60h]
  _BYTE v102[88]; // [rsp+60h] [rbp-58h] BYREF
  struct DXGADAPTERSYNCOBJECT *v103; // [rsp+C0h] [rbp+8h] BYREF
  struct DXGDEVICE *v104; // [rsp+D0h] [rbp+18h]

  v104 = a3;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v18 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v20 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v18 = *v20;
      }
    }
  }
  v101 = 0;
  v100 = (struct _KTHREAD **)((char *)this + 32);
  if ( this == (DXGSYNCOBJECT *)-32LL )
  {
    v21 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v21 + 24) = 511LL;
    WdLogEvent5_WdAssertion(v21);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v100[1] == CurrentThread )
  {
    v23 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v23 + 24) = 518LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( v101 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
    v24[5] = &v100;
    v24[3] = 275LL;
    v24[4] = 4LL;
    v24[6] = 0LL;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  v25 = v100;
  KeEnterCriticalRegion();
  if ( v25[1] == KeGetCurrentThread() )
  {
    v27 = *((_DWORD *)v25 + 6);
    if ( v27 <= 0 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v28 + 24) = 409LL;
      WdLogEvent5_WdAssertion(v28);
      v27 = *((_DWORD *)v25 + 6);
    }
    v29 = v27 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v25 + 2, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v31 = *((_DWORD *)v25 + 7);
        if ( v31 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v26, &EventBlockThread, v30, v31);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v25);
      ExAcquirePushLockExclusiveEx(v25 + 2, 0LL);
    }
    if ( v25[1] )
    {
      v32 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v32 + 24) = 433LL;
      WdLogEvent5_WdAssertion(v32);
    }
    if ( *((_DWORD *)v25 + 6) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v33 + 24) = 434LL;
      WdLogEvent5_WdAssertion(v33);
    }
    v25[1] = KeGetCurrentThread();
    v29 = 1;
  }
  *((_DWORD *)v25 + 6) = v29;
  v34 = *((_DWORD *)this + 43) >> 2;
  v101 = 1;
  v103 = 0LL;
  if ( (v34 & 1) != 0 )
  {
    LODWORD(v36) = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2, &v103);
    if ( (int)v36 >= 0 )
      goto LABEL_33;
  }
  else
  {
    if ( !a2 || *((struct ADAPTER_RENDER **)this + 35) == a2 )
    {
      v103 = (DXGSYNCOBJECT *)((char *)this + 264);
      goto LABEL_33;
    }
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v35[3] = this;
    v35[4] = *((_QWORD *)this + 35);
    v35[5] = a2;
    v35[6] = -1073741811LL;
    WdLogEvent5_WdError(v35);
    LODWORD(v36) = -1073741811;
  }
  if ( a2 )
    goto LABEL_102;
LABEL_33:
  v37 = a9;
  if ( a9 )
    *a9 = v103;
  v38 = a11.0;
  if ( ((*(_BYTE *)&a11.0 ^ *((_BYTE *)this + 172)) & 0x80u) != 0 )
  {
    v39 = WdLogNewEntry5_WdError(v37);
    *(_QWORD *)(v39 + 24) = 2030LL;
    WdLogEvent5_WdError(v39);
    LODWORD(v36) = -1073741811;
    goto LABEL_102;
  }
  if ( !v101 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37);
    v40[5] = &v100;
    v40[3] = 275LL;
    v40[4] = 4LL;
    v40[6] = 0LL;
    v40[7] = 0LL;
    WdLogEvent5_WdCriticalError(v40);
  }
  v41 = v100;
  v101 = 0;
  if ( v100[1] != KeGetCurrentThread() )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37);
    v42[3] = 275LL;
    v42[4] = 4LL;
    v42[5] = v41;
    v42[6] = 0LL;
    v42[7] = 0LL;
    WdLogEvent5_WdCriticalError(v42);
  }
  v43 = *((_DWORD *)v41 + 6);
  if ( v43 <= 0 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v37);
    *(_QWORD *)(v44 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v44);
    v43 = *((_DWORD *)v41 + 6);
  }
  v45 = v43 - 1;
  *((_DWORD *)v41 + 6) = v45;
  if ( !v45 )
  {
    v41[1] = 0LL;
    ExReleasePushLockExclusiveEx(v41 + 2, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v103 && *((_BYTE *)v103 + 25) )
  {
    v49 = WdLogNewEntry5_WdEvent(v47, v46);
    LODWORD(v36) = -1073741823;
    *(_QWORD *)(v49 + 24) = this;
    *(_QWORD *)(v49 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v49);
    goto LABEL_102;
  }
  if ( *((_BYTE *)this + 254) && (*(_BYTE *)(v18 + 323) & 0xC) == 0 && !*((_BYTE *)this + 255) )
  {
    v50 = WdLogNewEntry5_WdWarning(v47, v46, v48);
    *(_QWORD *)(v50 + 24) = this;
    *(_QWORD *)(v50 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v50);
    LODWORD(v36) = -1073741823;
    goto LABEL_102;
  }
  if ( (unsigned int)(*((_DWORD *)this + 42) - 5) <= 1 )
  {
    if ( !a3 || !a2 )
    {
      v84 = WdLogNewEntry5_WdAssertion(v47);
      *(_QWORD *)(v84 + 24) = 2070LL;
      WdLogEvent5_WdAssertion(v84);
    }
    PoolWithQuotaTag = (DXGDEVICESYNCOBJECT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x60uLL, 0x4B677844u);
    if ( PoolWithQuotaTag
      && (v87 = a5,
          v88 = DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(PoolWithQuotaTag, a3, a10, a5 != 0LL),
          (v89 = v88) != 0LL) )
    {
      v90 = a8;
      LODWORD(v36) = DXGDEVICESYNCOBJECT::Initialize(v88, this, (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v38, a8);
      if ( (int)v36 >= 0 )
      {
        v93 = *((_QWORD *)v89 + 4);
        if ( !*(_BYTE *)(v93 + 253)
          || *((_DWORD *)this + 6) <= 1u
          || (v94 = *(_DWORD *)(v93 + 76),
              Global = DXGGLOBAL::GetGlobal(v92),
              LODWORD(v36) = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                               *((DXG_GUEST_GLOBAL_VMBUS **)Global + 168),
                               (struct DXGPROCESS *)v18,
                               v104,
                               0,
                               0LL,
                               v89,
                               v94,
                               v90,
                               (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v38),
              (int)v36 >= 0) )
        {
          if ( v87 )
            *v87 = *((_DWORD *)v89 + 10);
          *a6 = (void *)*((_QWORD *)v89 + 7);
          v96 = *((_QWORD *)v89 + 6);
          *a7 = v96;
          v97 = (_QWORD *)WdLogNewEntry5_WdEvent(v96, v91);
          v97[3] = this;
          v97[4] = *((unsigned int *)v89 + 10);
          v97[5] = DXGPROCESS::GetCurrent();
          WdLogEvent5_WdEvent(v97);
          if ( a4 )
            *a4 = v89;
          LODWORD(v36) = 0;
          goto LABEL_102;
        }
      }
      DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(v89);
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v89);
    }
    else
    {
      LODWORD(v36) = -1073741801;
      v98 = WdLogNewEntry5_WdLowResource(v86);
      *(_QWORD *)(v98 + 24) = this;
      *(_QWORD *)(v98 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v98);
    }
    if ( a4 )
      *a4 = 0LL;
  }
  else
  {
    LOBYTE(v51) = EvaluateCurrentState((int **)&g_Feature_2267854136_57775487_FeatureDescriptorDetails);
    if ( v51 )
    {
      v53 = DXGSYNCOBJECT::AddReference(this);
      v36 = v53;
      if ( v53 < 0 )
      {
        v56 = WdLogNewEntry5_WdWarning(v52, v54, v55);
        *(_QWORD *)(v56 + 24) = this;
        *(_QWORD *)(v56 + 32) = v36;
        WdLogEvent5_WdWarning(v56);
        goto LABEL_102;
      }
    }
    v57 = a5;
    if ( !a5 )
      goto LABEL_74;
    v58 = DXGGLOBAL::GetGlobal(v52);
    if ( !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v58 + 43)) )
    {
      v60 = WdLogNewEntry5_WdAssertion(v59);
      *(_QWORD *)(v60 + 24) = 2193LL;
      WdLogEvent5_WdAssertion(v60);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v102,
      (struct _KTHREAD **)v18);
    v61 = DXGPROCESS::AllocHandleUnsafe(v18, (__int64)this, 8LL);
    *v57 = v61;
    v63 = v61;
    if ( !v61 )
    {
      v64 = WdLogNewEntry5_WdLowResource(v62);
      LODWORD(v36) = -1073741801;
      *(_QWORD *)(v64 + 24) = this;
      *(_QWORD *)(v64 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v64);
      LOBYTE(v65) = EvaluateCurrentState((int **)&g_Feature_2267854136_57775487_FeatureDescriptorDetails);
      if ( v65 )
        _InterlockedDecrement((volatile signed __int32 *)this + 6);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v102);
      goto LABEL_102;
    }
    v66 = (v61 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v66 < *(_DWORD *)(v18 + 248) )
    {
      v67 = *(_QWORD *)(v18 + 232);
      v68 = *(_DWORD *)(v67 + 16 * v66 + 8);
      if ( ((v63 >> 25) & 0x60) == (*(_BYTE *)(v67 + 16 * v66 + 8) & 0x60) && (v68 & 0x2000) == 0 && (v68 & 0x1F) != 0 )
        *(_DWORD *)(v67 + 16LL * ((v63 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v102);
    if ( *((_BYTE *)this + 253)
      && (LOBYTE(v69) = EvaluateCurrentState((int **)&g_Feature_2267854136_57775487_FeatureDescriptorDetails),
          v70 = v69 != 0,
          *((_DWORD *)this + 6) > (unsigned int)v70)
      && (v71 = *((_DWORD *)this + 19),
          v72 = DXGGLOBAL::GetGlobal(v70),
          v73 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                  *((DXG_GUEST_GLOBAL_VMBUS **)v72 + 168),
                  (struct DXGPROCESS *)v18,
                  0LL,
                  *v57,
                  this,
                  0LL,
                  v71,
                  0,
                  (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v38),
          v73 < 0) )
    {
      DXGPROCESS::FreeResourceHandleNoRefSafe((DXGPROCESS *)v18, *v57);
      *v57 = 0;
      LOBYTE(v74) = EvaluateCurrentState((int **)&g_Feature_2267854136_57775487_FeatureDescriptorDetails);
      if ( v74 )
        _InterlockedDecrement((volatile signed __int32 *)this + 6);
      LODWORD(v36) = v73;
    }
    else
    {
LABEL_74:
      LOBYTE(v75) = EvaluateCurrentState((int **)&g_Feature_2267854136_57775487_FeatureDescriptorDetails);
      if ( !v75 )
        _InterlockedIncrement((volatile signed __int32 *)this + 6);
      v78 = (_QWORD *)WdLogNewEntry5_WdEvent(v77, v76);
      v78[3] = this;
      if ( v57 )
        v79 = *v57;
      else
        v79 = 0LL;
      v78[4] = v79;
      v80 = PsGetCurrentProcess();
      v81 = PsGetProcessDxgProcess(v80);
      v36 = v81;
      if ( v81 )
      {
        if ( (*(_BYTE *)(v81 + 323) & 4) != 0 )
        {
          v82 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
          v83 = v82;
          if ( v82 )
          {
            ObfDereferenceObject(v82);
            v36 = *v83;
          }
        }
      }
      v78[5] = v36;
      WdLogEvent5_WdEvent(v78);
      LODWORD(v36) = 0;
    }
  }
LABEL_102:
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v100);
  return (unsigned int)v36;
}
