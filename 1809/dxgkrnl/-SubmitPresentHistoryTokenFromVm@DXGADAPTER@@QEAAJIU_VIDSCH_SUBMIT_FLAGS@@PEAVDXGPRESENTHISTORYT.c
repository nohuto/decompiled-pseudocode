/*
 * XREFs of ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@I@Z @ 0x1C01EA108
 * Callers:
 *     ?VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F9D00 (-VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0010A14 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C001137C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0011984 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E0E70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01DEB48 (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0226FA0 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE.c)
 */

__int64 __fastcall DXGADAPTER::SubmitPresentHistoryTokenFromVm(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v10; // rsi
  struct _KTHREAD **Current; // rax
  struct DXGPROCESS *v12; // r13
  unsigned int v13; // r12d
  __int64 v14; // r9
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rax
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  __int64 v21; // r9
  __int64 v22; // rdi
  bool v23; // zf
  __int64 v24; // rcx
  PERESOURCE *Global; // rax
  __int64 v26; // rdx
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdi
  DXGCONTEXT *v31; // r15
  __int64 v32; // r13
  struct VIDSCH_SUBMIT_DATA_BASE *v33; // r14
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v39; // r9
  _BYTE v40[16]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v41[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+58h] [rbp-B0h]
  DXGCONTEXT *v43; // [rsp+60h] [rbp-A8h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v44[2]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v45[16]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v46[8]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v47[32]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v48[56]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v49[16]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v50[80]; // [rsp+F8h] [rbp-10h] BYREF

  v10 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45, a2, Current, &v43, 0);
  v12 = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v50, (struct _KTHREAD **)v12);
  v13 = (a7 >> 6) & 0xFFFFFF;
  if ( v13 < *((_DWORD *)v12 + 62) )
  {
    v14 = *((_QWORD *)v12 + 29);
    v15 = *(_DWORD *)(v14 + 16LL * v13 + 8);
    if ( ((a7 >> 25) & 0x60) == (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x60) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
    {
      if ( (v15 & 0x1F) == 0xB )
      {
        v17 = *(_QWORD *)(v14 + 16LL * v13);
        if ( v17 )
          v10 = *(_QWORD *)(v17 + 16);
      }
      else
      {
        v16 = WdLogNewEntry5_WdError((a7 >> 25) & 0x60);
        *(_QWORD *)(v16 + 24) = 316LL;
        WdLogEvent5_WdError(v16);
      }
    }
  }
  if ( v43 || v10 )
  {
    if ( !v10 )
      v10 = *((_QWORD *)v43 + 2);
    _m_prefetchw((const void *)(v10 + 64));
    v18 = *(_QWORD *)(v10 + 64);
    do
    {
      if ( !v18 )
        goto LABEL_16;
      v19 = v18;
      v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 64), v18 + 1, v18);
    }
    while ( v19 != v18 );
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v50);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v49,
      (struct DXGDEVICE *)v10);
    v41[1] = a1;
    LOBYTE(v42) = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v41);
    if ( *(_DWORD *)(a1 + 176) != 1 )
    {
      LODWORD(v22) = -1073741130;
LABEL_19:
      v23 = (_BYTE)v42 == 0;
LABEL_47:
      if ( !v23 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v41);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v49);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
      return (unsigned int)v22;
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v46, v10, 2, v21, 0);
    LODWORD(v22) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v46);
    if ( (int)v22 < 0 )
    {
      COREACCESS::~COREACCESS((COREACCESS *)v48);
      COREACCESS::~COREACCESS((COREACCESS *)v47);
      goto LABEL_19;
    }
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v24);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v40, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v40);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v12 + 208));
    if ( v13 < *((_DWORD *)v12 + 62) )
    {
      v26 = *((_QWORD *)v12 + 29);
      v27 = *(_DWORD *)(v26 + 16LL * v13 + 8);
      if ( ((a7 >> 25) & 0x60) == (*(_BYTE *)(v26 + 16LL * v13 + 8) & 0x60) && (v27 & 0x2000) == 0 && (v27 & 0x1F) != 0 )
      {
        v28 = v27 & 0x1F;
        if ( (_BYTE)v28 == 11 )
        {
          v30 = *(_QWORD *)(v26 + 16LL * v13);
LABEL_29:
          ExReleasePushLockSharedEx((char *)v12 + 208, 0LL);
          KeLeaveCriticalRegion();
          v31 = v43;
          if ( v30 )
          {
            if ( *(_QWORD *)(v30 + 16) != v10 )
            {
LABEL_31:
              LODWORD(v22) = -1073741811;
LABEL_44:
              if ( v40[8] )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v40);
              COREACCESS::~COREACCESS((COREACCESS *)v48);
              COREACCESS::~COREACCESS((COREACCESS *)v47);
              v23 = (_BYTE)v42 == 0;
              goto LABEL_47;
            }
          }
          else if ( !v43 )
          {
            goto LABEL_31;
          }
          v44[0] = 0LL;
          v32 = *(_QWORD *)(a1 + 2528);
          v44[1] = (struct VIDSCH_SUBMIT_DATA_BASE *)v32;
          CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v44);
          v33 = v44[0];
          if ( !v44[0] )
          {
            LODWORD(v22) = -1073741801;
LABEL_43:
            CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v44);
            goto LABEL_44;
          }
          *((_DWORD *)v44[0] + 31) = -1;
          *(_DWORD *)v33 = a3 & 0x20 | *(_DWORD *)v33 & 0xFFFFFFDF | 0x40000;
          *((_QWORD *)v33 + 13) = a4;
          *((_QWORD *)v33 + 14) = a5;
          *((_QWORD *)v33 + 69) = a6;
          *((_QWORD *)v33 + 68) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 80) + 96LL) + 88LL);
          if ( v31 )
          {
            if ( (*((_DWORD *)v31 + 99) & 0x10) != 0 )
            {
              v34 = DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v31, 0LL, 0, 0LL);
              v22 = v34;
              if ( v34 < 0 )
              {
                v36 = WdLogNewEntry5_WdError(v35);
                *(_QWORD *)(v36 + 24) = v31;
                *(_QWORD *)(v36 + 32) = v22;
                WdLogEvent5_WdError(v36);
                goto LABEL_43;
              }
            }
            v37 = DXGCONTEXT::SubmitCommandToImplicitQueue(v31, v33);
          }
          else
          {
            VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                                 *(DXGSYNCOBJECT **)(v30 + 32),
                                 *(struct ADAPTER_RENDER **)(*(_QWORD *)(v30 + 16) + 16LL));
            v37 = (*(__int64 (__fastcall **)(struct VIDSCH_SUBMIT_DATA_BASE *, _QWORD, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*(_QWORD *)(v32 + 520) + 8LL) + 1008LL))(
                    v33,
                    *(_QWORD *)(v39 + 656),
                    VidSchSyncObject);
          }
          LODWORD(v22) = v37;
          goto LABEL_43;
        }
        v29 = WdLogNewEntry5_WdError(v28);
        *(_QWORD *)(v29 + 24) = 316LL;
        WdLogEvent5_WdError(v29);
      }
    }
    v30 = 0LL;
    goto LABEL_29;
  }
LABEL_16:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v50);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45);
  return 3221225485LL;
}
