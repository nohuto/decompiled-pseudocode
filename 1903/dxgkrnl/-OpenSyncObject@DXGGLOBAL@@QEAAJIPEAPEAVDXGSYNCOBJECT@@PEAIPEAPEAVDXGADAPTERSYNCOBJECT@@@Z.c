/*
 * XREFs of ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C014F588
 * Callers:
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C014F378 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0221140 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAX@Z @ 0x1C0286DFC (-OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C0287114 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006FC4 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001C37C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C001C438 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00F62B0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGGLOBAL::OpenSyncObject(
        PERESOURCE *this,
        __int64 a2,
        struct DXGSYNCOBJECT **a3,
        unsigned int *a4,
        struct DXGADAPTERSYNCOBJECT **a5)
{
  __int64 v5; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rax
  char v12; // cl
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  DXGSYNCOBJECT *ObjectA; // rbx
  __int64 v19; // r8
  __int64 result; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rbx
  int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  _BYTE v32[16]; // [rsp+60h] [rbp-18h] BYREF

  v5 = (unsigned int)a2;
  if ( !a3 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v21 + 24) = 2586LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a4 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v22 + 24) = 2587LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(this) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v23 + 24) = 2588LL;
    WdLogEvent5_WdAssertion(v23);
  }
  *a3 = 0LL;
  *a4 = 0;
  Current = DXGPROCESS::GetCurrent(v10, v9);
  v12 = *((_BYTE *)Current + 299);
  if ( (v12 & 0xC) != 0 )
  {
    if ( (v12 & 8) != 0 )
      v24 = *((_QWORD *)Current + 54);
    else
      v24 = (unsigned __int64)Current & -(__int64)((v12 & 4) != 0);
    v25 = v24 + 184;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v24 + 184));
    v26 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *(_DWORD *)(v24 + 224) )
    {
      v27 = *(_QWORD *)(v24 + 208);
      v28 = *(_DWORD *)(v27 + 16 * v26 + 8);
      if ( (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v27 + 16 * v26 + 8) & 0x60)
        && (v28 & 0x2000) == 0
        && (v28 & 0x1F) != 0 )
      {
        v29 = v28 & 0x1F;
        if ( (_BYTE)v29 == 8 )
        {
          ObjectA = *(DXGSYNCOBJECT **)(v27 + 16LL * (unsigned int)v26);
          goto LABEL_25;
        }
        v30 = WdLogNewEntry5_WdError(((unsigned int)v5 >> 25) & 0x60, v29, 2LL * (unsigned int)v26);
        *(_QWORD *)(v30 + 24) = 267LL;
        WdLogEvent5_WdError(v30);
      }
    }
    ObjectA = 0LL;
LABEL_25:
    ExReleasePushLockSharedEx(v25, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_10;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v32);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
  Global = DXGGLOBAL::GetGlobal(v14, v13);
  ObjectA = (DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA((__int64)Global, (unsigned int)v5, 8);
  if ( v32[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
LABEL_10:
  if ( !ObjectA )
  {
    v31 = WdLogNewEntry5_WdWarning(v17, v16, v19);
    *(_QWORD *)(v31 + 24) = v5;
LABEL_29:
    WdLogEvent5_WdWarning(v31);
    return 3221225485LL;
  }
  if ( (unsigned int)(*((_DWORD *)ObjectA + 48) - 5) <= 1 )
  {
    v31 = WdLogNewEntry5_WdWarning(v17, v16, v19);
    *(_QWORD *)(v31 + 24) = 2621LL;
    goto LABEL_29;
  }
  result = DXGSYNCOBJECT::Open(ObjectA, 0LL, 0LL, 0LL, a4, 0LL, 0LL, 0, a5, 0, DXGSYNCOBJECT::FlagsDefault);
  if ( (int)result >= 0 )
    *a3 = ObjectA;
  return result;
}
