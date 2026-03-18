/*
 * XREFs of ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00F62B0
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C00ED610 (DxgkOpenResourceFromNtHandle.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00F5BA0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C012F708 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C014F588 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0221140 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C0252CA0 (DxgkOpenSyncObjectFromNtHandle.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C0273424 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000C9C4 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000CA30 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C00F1624 (--0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C00F1918 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00FB100 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C022560C (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0269474 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C026CE0C (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGADAPTERSYNCOBJECT *v19; // rdi
  __int64 v20; // r15
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // ebx
  int v26; // eax
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int *v31; // r14
  struct DXGGLOBAL *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rdi
  unsigned int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // edx
  __int64 v41; // rax
  int v42; // r8d
  __int64 v43; // rdx
  _QWORD *v44; // rbx
  __int64 v45; // rax
  unsigned int v46; // edi
  DXGDEVICESYNCOBJECT *PoolWithQuotaTag; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned int *v53; // r12
  DXGDEVICESYNCOBJECT *v54; // r14
  __int64 v55; // rdx
  __int64 v56; // rcx
  int v57; // edi
  __int64 v58; // rax
  unsigned __int64 v59; // rcx
  _QWORD *v60; // rbx
  __int64 v61; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  int DxgAdapterSyncObject; // eax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned int v75; // edi
  struct DXGGLOBAL *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  unsigned int v79; // edi
  struct DXGGLOBAL *Global; // rax
  DXGFASTMUTEX *v81; // [rsp+50h] [rbp-30h] BYREF
  char v82; // [rsp+58h] [rbp-28h]
  char v83[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v84; // [rsp+68h] [rbp-18h]
  int v85; // [rsp+70h] [rbp-10h]
  struct DXGADAPTERSYNCOBJECT *v86; // [rsp+C0h] [rbp+40h] BYREF
  struct DXGDEVICE *v87; // [rsp+D0h] [rbp+50h]

  v87 = a3;
  CurrentProcess = PsGetCurrentProcess(this, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v19 = 0LL;
  v20 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v63 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v20 = *v63;
    }
  }
  v82 = 0;
  v81 = (DXGSYNCOBJECT *)((char *)this + 32);
  if ( this == (DXGSYNCOBJECT *)-32LL )
  {
    v64 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v64 + 24) = 659LL;
    WdLogEvent5_WdAssertion(v64);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v81 + 2) == CurrentThread )
  {
    v65 = WdLogNewEntry5_WdAssertion(CurrentThread, v17);
    *(_QWORD *)(v65 + 24) = 666LL;
    WdLogEvent5_WdAssertion(v65);
  }
  if ( v82 )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v17);
    v66[5] = &v81;
    v66[3] = 275LL;
    v66[4] = 4LL;
    v66[6] = 0LL;
    v66[7] = 0LL;
    WdLogEvent5_WdCriticalError(v66);
  }
  DXGFASTMUTEX::Acquire(v81);
  v25 = -1073741811;
  v26 = *((_DWORD *)this + 49) >> 2;
  v82 = 1;
  v86 = 0LL;
  if ( (v26 & 1) != 0 )
  {
    DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2, &v86);
    v19 = v86;
    v25 = DxgAdapterSyncObject;
    if ( DxgAdapterSyncObject >= 0 )
      goto LABEL_13;
  }
  else
  {
    if ( !a2 || *((struct ADAPTER_RENDER **)this + 38) == a2 )
    {
      v19 = (DXGSYNCOBJECT *)((char *)this + 288);
      v86 = (DXGSYNCOBJECT *)((char *)this + 288);
      goto LABEL_13;
    }
    v67 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24);
    v67[3] = this;
    v67[4] = *((_QWORD *)this + 38);
    v67[5] = a2;
    v67[6] = -1073741811LL;
    WdLogEvent5_WdError(v67);
  }
  if ( a2 )
    goto LABEL_53;
LABEL_13:
  if ( a9 )
    *a9 = v19;
  v27 = a11.0;
  if ( ((*(_BYTE *)&a11.0 ^ *((_BYTE *)this + 196)) & 0x80u) != 0 )
  {
    v61 = WdLogNewEntry5_WdError(v23, v22, v24);
    *(_QWORD *)(v61 + 24) = 2052LL;
    WdLogEvent5_WdError(v61);
    v25 = -1073741811;
    goto LABEL_53;
  }
  if ( !v82 )
  {
    v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22);
    v69[5] = &v81;
    v69[3] = 275LL;
    v69[4] = 4LL;
    v69[6] = 0LL;
    v69[7] = 0LL;
    WdLogEvent5_WdCriticalError(v69);
  }
  v82 = 0;
  DXGFASTMUTEX::Release((struct _KTHREAD **)v81);
  if ( v19 && *((_BYTE *)v19 + 25) )
  {
    v70 = WdLogNewEntry5_WdEvent(v29);
    v25 = -1073741823;
    *(_QWORD *)(v70 + 24) = this;
    *(_QWORD *)(v70 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v70);
    goto LABEL_53;
  }
  if ( *((_BYTE *)this + 278) && (*(_BYTE *)(v20 + 299) & 0xC) == 0 && !*((_BYTE *)this + 279) )
  {
    v71 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v71 + 24) = this;
    *(_QWORD *)(v71 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v71);
    v25 = -1073741823;
    goto LABEL_53;
  }
  if ( (unsigned int)(*((_DWORD *)this + 48) - 5) <= 1 )
  {
    if ( !a3 || !a2 )
    {
      v77 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v77 + 24) = 2092LL;
      WdLogEvent5_WdAssertion(v77);
    }
    PoolWithQuotaTag = (DXGDEVICESYNCOBJECT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x60uLL, 0x4B677844u);
    v53 = a5;
    if ( PoolWithQuotaTag )
      v54 = DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(PoolWithQuotaTag, v87, a10, a5 != 0LL);
    else
      v54 = 0LL;
    if ( v54 )
    {
      v57 = DXGDEVICESYNCOBJECT::Initialize(v54, this, (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v27, a8);
      if ( v57 >= 0 )
      {
        v58 = *((_QWORD *)v54 + 4);
        if ( !*(_BYTE *)(v58 + 277)
          || *((_DWORD *)this + 6) <= 1u
          || (v79 = *(_DWORD *)(v58 + 76),
              Global = DXGGLOBAL::GetGlobal(v56, v55),
              v57 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                      *((DXG_GUEST_GLOBAL_VMBUS **)Global + 164),
                      (struct DXGPROCESS *)v20,
                      v87,
                      0,
                      0LL,
                      v54,
                      v79,
                      a8,
                      (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v27),
              v57 >= 0) )
        {
          if ( v53 )
            *v53 = *((_DWORD *)v54 + 10);
          *a6 = (void *)*((_QWORD *)v54 + 7);
          v59 = *((_QWORD *)v54 + 6);
          *a7 = v59;
          v60 = (_QWORD *)WdLogNewEntry5_WdEvent(v59);
          v60[3] = this;
          v60[4] = *((unsigned int *)v54 + 10);
          v60[5] = DXGPROCESS::GetCurrent();
          WdLogEvent5_WdEvent(v60);
          if ( a4 )
            *a4 = v54;
          v25 = 0;
          goto LABEL_53;
        }
      }
      DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(v54);
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v54);
    }
    else
    {
      v57 = -1073741801;
      v78 = WdLogNewEntry5_WdLowResource(v50, v49, v51, v52);
      *(_QWORD *)(v78 + 24) = this;
      *(_QWORD *)(v78 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v78);
    }
    if ( a4 )
      *a4 = 0LL;
    v25 = v57;
LABEL_53:
    v46 = v25;
    goto LABEL_38;
  }
  v31 = a5;
  if ( !a5 )
    goto LABEL_35;
  v32 = DXGGLOBAL::GetGlobal(v29, v28);
  if ( !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v32 + 43)) )
  {
    v72 = WdLogNewEntry5_WdAssertion(v34, v33);
    *(_QWORD *)(v72 + 24) = 2198LL;
    WdLogEvent5_WdAssertion(v72);
  }
  v84 = v20 + 184;
  if ( v20 != -184 && *(struct _KTHREAD **)(v20 + 192) == KeGetCurrentThread() )
  {
    v73 = WdLogNewEntry5_WdAssertion(v34, v33);
    *(_QWORD *)(v73 + 24) = 1448LL;
    WdLogEvent5_WdAssertion(v73);
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v20 + 184));
  v35 = (_QWORD *)(v20 + 208);
  v85 = 2;
  v36 = HMGRTABLE::AllocHandle(v20 + 208, this, 8LL);
  *v31 = v36;
  v40 = v36;
  if ( v36 )
  {
    v41 = (v36 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v41 < *(_DWORD *)(v20 + 224) )
    {
      v42 = *(_DWORD *)(*v35 + 16 * v41 + 8);
      if ( ((v40 >> 25) & 0x60) == (*(_BYTE *)(*v35 + 16 * v41 + 8) & 0x60) && (v42 & 0x2000) == 0 && (v42 & 0x1F) != 0 )
        *(_DWORD *)(*v35 + 16 * (((unsigned __int64)v40 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v83);
    if ( *((_BYTE *)this + 277) )
    {
      if ( *((_DWORD *)this + 6) )
      {
        v75 = *((_DWORD *)this + 19);
        v76 = DXGGLOBAL::GetGlobal(v29, v43);
        v25 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                *((DXG_GUEST_GLOBAL_VMBUS **)v76 + 164),
                (struct DXGPROCESS *)v20,
                0LL,
                *v31,
                this,
                0LL,
                v75,
                0,
                (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v27);
        if ( v25 < 0 )
        {
          DXGPROCESS::FreeHandleSafe((DXGPROCESS *)v20, *v31);
          *v31 = 0;
          goto LABEL_53;
        }
      }
    }
LABEL_35:
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    v44 = (_QWORD *)WdLogNewEntry5_WdEvent(v29);
    v44[3] = this;
    if ( v31 )
      v45 = *v31;
    else
      v45 = 0LL;
    v44[4] = v45;
    v44[5] = DXGPROCESS::GetCurrent();
    WdLogEvent5_WdEvent(v44);
    v46 = 0;
    goto LABEL_38;
  }
  v74 = WdLogNewEntry5_WdLowResource(v37, 0LL, v38, v39);
  v46 = -1073741801;
  *(_QWORD *)(v74 + 24) = this;
  *(_QWORD *)(v74 + 32) = -1073741801LL;
  WdLogEvent5_WdLowResource(v74);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v83);
LABEL_38:
  if ( v82 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v81);
  return v46;
}
