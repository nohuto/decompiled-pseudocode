/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C011CFBC
 * Callers:
 *     ?SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z @ 0x1C0012F40 (-SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z.c)
 *     ?AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z @ 0x1C0054010 (-AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z.c)
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F9080 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E0E70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C011D214 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z @ 0x1C01F6404 (-VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuByReference(
        unsigned int *a1,
        unsigned __int64 a2,
        unsigned int a3)
{
  struct DXGPROCESS *Current; // r15
  __int64 v6; // rcx
  struct DXGCONTEXT *v7; // rsi
  char *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  PERESOURCE *Global; // rax
  __int64 v15; // rcx
  unsigned int *v16; // rdi
  int DxgAdapterSyncObject; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v32[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v33[16]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v34[2]; // [rsp+88h] [rbp-78h] BYREF
  struct DXGADAPTERSYNCOBJECT *v35; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v36[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v37[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v38[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  char v41; // [rsp+D0h] [rbp-30h]
  _BYTE v42[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  char v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  char v47; // [rsp+100h] [rbp+0h]
  unsigned __int64 v48; // [rsp+158h] [rbp+58h] BYREF
  struct DXGCONTEXT *v49; // [rsp+168h] [rbp+68h] BYREF

  v48 = a2;
  v49 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v36, a3, (struct _KTHREAD **)Current, &v49, 0);
  v7 = v49;
  if ( !v49 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v6);
    LODWORD(v19) = -1073741811;
    v24[3] = Current;
    v24[4] = 0LL;
    v24[5] = -1073741811LL;
    WdLogEvent5_WdError(v24);
    goto LABEL_23;
  }
  v8 = (char *)v49 + 16;
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v34,
    *((struct DXGDEVICE **)v49 + 2));
  v9 = *(_QWORD *)v8;
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 16LL);
  v40 = v10;
  v41 = 0;
  if ( v10 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v10 + 24));
    v7 = v49;
    v39 = -1LL;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
  v44 = v11;
  v45 = 0;
  if ( v11 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24));
    v7 = v49;
    v43 = -1LL;
  }
  v46 = v9;
  v47 = 0;
  v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v37);
  if ( v12 >= 0 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v13);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v33, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v33);
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 16LL)) )
    {
      v25 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v25 + 24) = 1315LL;
      WdLogEvent5_WdAssertion(v25);
    }
    if ( (*((_BYTE *)Current + 323) & 0xC) != 0 )
    {
      v16 = a1;
    }
    else
    {
      v16 = *(unsigned int **)a1;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 253LL) )
      {
        LODWORD(v19) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalFenceNtSharedByRef(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 16LL) + 4152LL),
                         Current,
                         v7,
                         a1[2],
                         v48);
LABEL_19:
        if ( v33[8] )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v33);
        goto LABEL_21;
      }
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v32, (struct DXGFASTMUTEX *const)(v16 + 8), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
    DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                             (DXGSYNCOBJECT *)v16,
                             *(struct ADAPTER_RENDER **)(*(_QWORD *)v8 + 16LL),
                             &v35);
    v19 = DxgAdapterSyncObject;
    if ( DxgAdapterSyncObject < 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v26[3] = Current;
      v26[4] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 16LL);
      v26[5] = v19;
      WdLogEvent5_WdError(v26);
    }
    else
    {
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           (DXGSYNCOBJECT *)v16,
                           *(struct ADAPTER_RENDER **)(*(_QWORD *)v8 + 16LL));
      if ( VidSchSyncObject )
      {
        if ( (*((_DWORD *)v7 + 99) & 0x10) != 0 )
        {
          v30 = *((_QWORD *)v7 + 36);
          v21 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 520LL) + 8LL) + 648LL))(
                  1LL,
                  &v30,
                  1LL,
                  &VidSchSyncObject,
                  0,
                  &v48);
        }
        else
        {
          v31 = *((_QWORD *)v7 + 32);
          v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, int, struct _VIDSCH_SYNC_OBJECT **, _DWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 520LL) + 8LL) + 640LL))(
                  0LL,
                  0LL,
                  1LL,
                  &v31,
                  1,
                  &VidSchSyncObject,
                  0,
                  &v48);
        }
        LODWORD(v19) = v21;
        if ( v21 < 0 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v22);
          *(_QWORD *)(v28 + 24) = 1405LL;
          WdLogEvent5_WdAssertion(v28);
        }
      }
      else
      {
        v27 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v27 + 24) = v16;
        WdLogEvent5_WdError(v27);
        LODWORD(v19) = -1073741811;
      }
    }
    if ( v32[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
    goto LABEL_19;
  }
  LODWORD(v19) = v12;
LABEL_21:
  COREACCESS::~COREACCESS((COREACCESS *)v42);
  COREACCESS::~COREACCESS((COREACCESS *)v38);
  if ( v34[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
LABEL_23:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v36);
  return (unsigned int)v19;
}
