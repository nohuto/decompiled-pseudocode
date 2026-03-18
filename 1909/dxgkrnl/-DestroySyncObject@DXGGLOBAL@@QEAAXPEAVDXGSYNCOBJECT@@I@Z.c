/*
 * XREFs of ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9E80
 * Callers:
 *     ??1DXGPROTECTEDSESSION@@QEAA@XZ @ 0x1C00448F0 (--1DXGPROTECTEDSESSION@@QEAA@XZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E94A8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00F02B0 (DxgkOpenResourceFromNtHandle.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00F426C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00F6204 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     DxgkShareObjectsInternal @ 0x1C013D1F0 (DxgkShareObjectsInternal.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C0140630 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C014E3A0 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0153238 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01F5034 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01F6870 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0219E3C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0229420 (-VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0229650 (-VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateProtectedSession @ 0x1C0261EE0 (DxgkCreateProtectedSession.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C027171C (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C0286388 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C028641C (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00088C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C00F9FD0 (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00FA124 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::DestroySyncObject(PERESOURCE *this, struct DXGSYNCOBJECT *a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  PERESOURCE *v13; // rbx
  int v14; // eax
  struct DXGSYNCOBJECT *v15; // rdx
  struct DXGSYNCOBJECT **v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  struct DXGSYNCOBJECT *v22; // rax
  char *v23; // rdx
  __int64 v24; // rax
  PERESOURCE *v25; // [rsp+50h] [rbp-20h] BYREF
  char v26; // [rsp+58h] [rbp-18h]
  _BYTE v27[16]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+38h] BYREF

  if ( !a2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v17 + 24) = 2530LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( ExIsResourceAcquiredExclusiveLite(this[43]) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v18 + 24) = 2531LL;
    WdLogEvent5_WdAssertion(v18);
  }
  Global = DXGGLOBAL::GetGlobal(v7, v6);
  v25 = (PERESOURCE *)Global;
  v26 = 0;
  if ( !Global )
  {
    v19 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v19 + 24) = 2313LL;
    WdLogEvent5_WdAssertion(v19);
    Global = (struct DXGGLOBAL *)v25;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 43)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v20 + 24) = 2318LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( v26 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
    v21[5] = &v25;
    v21[3] = 275LL;
    v21[4] = 4LL;
    v21[6] = 0LL;
    v21[7] = 0LL;
    WdLogEvent5_WdCriticalError(v21);
  }
  v13 = v25;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v13[43], 1u);
  v14 = *((_DWORD *)a2 + 49) >> 2;
  v26 = 1;
  if ( (v14 & 1) != 0 && (unsigned int)(*((_DWORD *)a2 + 48) - 5) > 1 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGSYNCOBJECT *)((char *)a2 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
    v22 = (struct DXGSYNCOBJECT *)*((_QWORD *)a2 + 36);
    v23 = (char *)v22 - 40;
    if ( v22 == (struct DXGSYNCOBJECT *)((char *)a2 + 288) )
      v23 = 0LL;
    if ( v23 )
    {
      v29 = *((_QWORD *)v23 + 4);
      if ( v29 )
      {
        v24 = *((_QWORD *)v23 + 2);
        v28 = -1LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v24 + 520) + 8LL)
                                                                                                  + 640LL))(
          0LL,
          0LL,
          0LL,
          0LL,
          1,
          &v29,
          0,
          &v28);
      }
    }
    if ( v27[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
  }
  if ( DXGSYNCOBJECT::Close(a2, a3) )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 36));
    v15 = *(struct DXGSYNCOBJECT **)a2;
    if ( *(struct DXGSYNCOBJECT **)(*(_QWORD *)a2 + 8LL) != a2
      || (v16 = (struct DXGSYNCOBJECT **)*((_QWORD *)a2 + 1), *v16 != a2) )
    {
      __fastfail(3u);
    }
    *v16 = v15;
    *((_QWORD *)v15 + 1) = v16;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 36);
    DXGSYNCOBJECT::Destroy(a2);
  }
  if ( v26 )
  {
    v26 = 0;
    ExReleaseResourceLite(v25[43]);
    KeLeaveCriticalRegion();
  }
}
