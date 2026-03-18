/*
 * XREFs of ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@I@Z @ 0x1C021A0A8
 * Callers:
 *     ?VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C022A4D0 (-VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EE8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00073D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0007424 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007664 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000C6AC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000CEC4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000CF34 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017DA0 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F61DC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C020E280 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE@@_N@Z @ 0x1C025BFC8 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE.c)
 */

__int64 __fastcall DXGADAPTER::SubmitPresentHistoryTokenFromVm(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  unsigned int v8; // edi
  __int64 v10; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGPROCESS *v14; // r13
  unsigned int v15; // r12d
  __int64 v16; // r9
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  __int64 v24; // r9
  __int64 v25; // rdi
  bool v26; // zf
  __int64 v27; // rdx
  __int64 v28; // rcx
  PERESOURCE *Global; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdi
  DXGCONTEXT *v36; // r15
  __int64 v37; // r13
  struct VIDSCH_SUBMIT_DATA_BASE *v38; // r14
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  int v44; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v46; // r9
  _BYTE v47[16]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v48[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+48h] [rbp-B8h]
  char v50; // [rsp+50h] [rbp-B0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v51[2]; // [rsp+58h] [rbp-A8h] BYREF
  DXGCONTEXT *v52; // [rsp+68h] [rbp-98h] BYREF
  __int64 v53; // [rsp+70h] [rbp-90h]
  __int64 v54; // [rsp+78h] [rbp-88h]
  _BYTE v55[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v56[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v57[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v58[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v59[64]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v60[88]; // [rsp+108h] [rbp+8h] BYREF

  v53 = a4;
  v8 = a2;
  v54 = a1;
  v10 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v55, v8, Current, &v52, 0);
  v14 = DXGPROCESS::GetCurrent(v13, v12);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v57, (struct _KTHREAD **)v14);
  v15 = (a7 >> 6) & 0xFFFFFF;
  if ( v15 < *((_DWORD *)v14 + 56) )
  {
    v16 = *((_QWORD *)v14 + 26);
    v17 = *(_DWORD *)(v16 + 16LL * v15 + 8);
    if ( ((a7 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x60) && (v17 & 0x2000) == 0 && (v17 & 0x1F) != 0 )
    {
      v18 = v17 & 0x1F;
      if ( (_BYTE)v18 == 11 )
      {
        v20 = *(_QWORD *)(v16 + 16LL * v15);
        if ( v20 )
          v10 = *(_QWORD *)(v20 + 16);
      }
      else
      {
        v19 = WdLogNewEntry5_WdError((a7 >> 25) & 0x60, v18, 2LL * v15);
        *(_QWORD *)(v19 + 24) = 267LL;
        WdLogEvent5_WdError(v19);
      }
    }
  }
  if ( v52 || v10 )
  {
    if ( !v10 )
      v10 = *((_QWORD *)v52 + 2);
    _m_prefetchw((const void *)(v10 + 64));
    v21 = *(_QWORD *)(v10 + 64);
    do
    {
      if ( !v21 )
        goto LABEL_16;
      v22 = v21;
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 64), v21 + 1, v21);
    }
    while ( v22 != v21 );
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v57);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v56,
      (struct DXGDEVICE *)v10);
    v49 = a1;
    v50 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
    if ( *(_DWORD *)(a1 + 176) != 1 )
    {
      LODWORD(v25) = -1073741130;
LABEL_19:
      v26 = v50 == 0;
LABEL_47:
      if ( !v26 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v56);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v55);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
      return (unsigned int)v25;
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v58, v10, 2, v24, 0);
    LODWORD(v25) = COREDEVICEACCESS::AcquireShared((__int64)v58, 0xFFFFFFFF, 0LL);
    if ( (int)v25 < 0 )
    {
      COREACCESS::~COREACCESS((COREACCESS *)v60);
      COREACCESS::~COREACCESS((COREACCESS *)v59);
      goto LABEL_19;
    }
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v28, v27);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v47, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v47);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v14 + 184));
    if ( v15 < *((_DWORD *)v14 + 56) )
    {
      v31 = *((_QWORD *)v14 + 26);
      v32 = *(_DWORD *)(v31 + 16LL * v15 + 8);
      if ( ((a7 >> 25) & 0x60) == (*(_BYTE *)(v31 + 16LL * v15 + 8) & 0x60) && (v32 & 0x2000) == 0 && (v32 & 0x1F) != 0 )
      {
        v33 = v32 & 0x1F;
        if ( (_BYTE)v33 == 11 )
        {
          v35 = *(_QWORD *)(v31 + 16LL * v15);
LABEL_29:
          ExReleasePushLockSharedEx((char *)v14 + 184, 0LL);
          KeLeaveCriticalRegion();
          v36 = v52;
          if ( v35 )
          {
            if ( *(_QWORD *)(v35 + 16) != v10 )
            {
LABEL_31:
              LODWORD(v25) = -1073741811;
LABEL_44:
              if ( v47[8] )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v47);
              COREACCESS::~COREACCESS((COREACCESS *)v60);
              COREACCESS::~COREACCESS((COREACCESS *)v59);
              v26 = v50 == 0;
              goto LABEL_47;
            }
          }
          else if ( !v52 )
          {
            goto LABEL_31;
          }
          v51[0] = 0LL;
          v37 = *(_QWORD *)(v54 + 2560);
          v51[1] = (struct VIDSCH_SUBMIT_DATA_BASE *)v37;
          CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v51);
          v38 = v51[0];
          if ( !v51[0] )
          {
            LODWORD(v25) = -1073741801;
LABEL_43:
            CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v51);
            goto LABEL_44;
          }
          *((_DWORD *)v51[0] + 31) = -1;
          *(_DWORD *)v38 = a3 & 0x20 | *(_DWORD *)v38 & 0xFFFFFFDF | 0x40000;
          *((_QWORD *)v38 + 13) = v53;
          *((_QWORD *)v38 + 14) = a5;
          *((_QWORD *)v38 + 3) = a6;
          *((_QWORD *)v38 + 68) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 80) + 96LL) + 88LL);
          if ( v36 )
          {
            if ( (*((_DWORD *)v36 + 103) & 0x10) != 0 )
            {
              v39 = DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v36, 0LL, 0, 0LL, 1);
              v25 = v39;
              if ( v39 < 0 )
              {
                v43 = WdLogNewEntry5_WdError(v41, v40, v42);
                *(_QWORD *)(v43 + 24) = v36;
                *(_QWORD *)(v43 + 32) = v25;
                WdLogEvent5_WdError(v43);
                goto LABEL_43;
              }
            }
            v44 = DXGCONTEXT::SubmitCommandToImplicitQueue(v36, v38);
          }
          else
          {
            VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                                 *(DXGSYNCOBJECT **)(v35 + 32),
                                 *(struct ADAPTER_RENDER **)(*(_QWORD *)(v35 + 16) + 16LL));
            v44 = (*(__int64 (__fastcall **)(struct VIDSCH_SUBMIT_DATA_BASE *, _QWORD, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*(_QWORD *)(v37 + 520) + 8LL) + 1008LL))(
                    v38,
                    *(_QWORD *)(v46 + 656),
                    VidSchSyncObject);
          }
          LODWORD(v25) = v44;
          goto LABEL_43;
        }
        v34 = WdLogNewEntry5_WdError(v33, v31, v30);
        *(_QWORD *)(v34 + 24) = 267LL;
        WdLogEvent5_WdError(v34);
      }
    }
    v35 = 0LL;
    goto LABEL_29;
  }
LABEL_16:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v57);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v55);
  return 3221225485LL;
}
