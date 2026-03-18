/*
 * XREFs of ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0235450
 * Callers:
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00DEF20 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F14A0 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAX@Z @ 0x1C02510CC (-OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C02513E4 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E760 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C0010080 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C0010B20 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00DF410 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGGLOBAL::OpenSyncObject(
        PERESOURCE *this,
        unsigned int a2,
        struct DXGSYNCOBJECT **a3,
        unsigned int *a4,
        struct DXGADAPTERSYNCOBJECT **a5)
{
  __int64 v5; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 Current; // rax
  char v14; // cl
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // edx
  __int64 v20; // rax
  DXGSYNCOBJECT *ObjectA; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v27; // rax
  __int64 result; // rax
  _BYTE v29[16]; // [rsp+60h] [rbp-18h] BYREF

  v5 = a2;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 2601LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 2602LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(this) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 2603LL;
    WdLogEvent5_WdAssertion(v12);
  }
  *a3 = 0LL;
  *a4 = 0;
  Current = (unsigned __int64)DXGPROCESS::GetCurrent();
  v14 = *(_BYTE *)(Current + 323);
  if ( (v14 & 0xC) != 0 )
  {
    if ( (v14 & 8) != 0 )
      v15 = *(_QWORD *)(Current + 456);
    else
      v15 = Current & -(__int64)((v14 & 4) != 0);
    v16 = v15 + 208;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 208));
    v17 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v17 < *(_DWORD *)(v15 + 248) )
    {
      v18 = *(_QWORD *)(v15 + 232);
      v19 = *(_DWORD *)(v18 + 16 * v17 + 8);
      if ( (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
        && (v19 & 0x2000) == 0
        && (v19 & 0x1F) != 0 )
      {
        if ( (v19 & 0x1F) == 8 )
        {
          ObjectA = *(DXGSYNCOBJECT **)(v18 + 16LL * (unsigned int)v17);
          goto LABEL_18;
        }
        v20 = WdLogNewEntry5_WdError(((unsigned int)v5 >> 25) & 0x60);
        *(_QWORD *)(v20 + 24) = 316LL;
        WdLogEvent5_WdError(v20);
      }
    }
    ObjectA = 0LL;
LABEL_18:
    ExReleasePushLockSharedEx(v16, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_22;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v29);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  Global = DXGGLOBAL::GetGlobal(v25);
  ObjectA = (DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA((__int64)Global, v5, 8);
  if ( v29[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
LABEL_22:
  if ( !ObjectA )
  {
    v27 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v27 + 24) = v5;
LABEL_28:
    WdLogEvent5_WdWarning(v27);
    return 3221225485LL;
  }
  if ( (unsigned int)(*((_DWORD *)ObjectA + 42) - 5) <= 1 )
  {
    v27 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v27 + 24) = 2636LL;
    goto LABEL_28;
  }
  result = DXGSYNCOBJECT::Open(
             ObjectA,
             0LL,
             0LL,
             0LL,
             a4,
             0LL,
             0LL,
             0,
             a5,
             0,
             (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
  if ( (int)result >= 0 )
    *a3 = ObjectA;
  return result;
}
