/*
 * XREFs of ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C00B1870 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C00B22D0 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     DxgkMarkDeviceAsError @ 0x1C00B2E60 (DxgkMarkDeviceAsError.c)
 *     DxgkGetDeviceStateInternal @ 0x1C00D7D70 (DxgkGetDeviceStateInternal.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C00DA660 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C00E76FC (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C00E9B5C (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F0408 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C00F0EB0 (DxgkQueryResourceInfoFromNtHandle.c)
 *     DxgkQueryResourceInfo @ 0x1C00F3940 (DxgkQueryResourceInfo.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F3E74 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00F4BC8 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 *     DxgkCreateContext @ 0x1C00F56C0 (DxgkCreateContext.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C00F7BA0 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00F8010 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     DxgkConfigureSharedResource @ 0x1C00F9BD0 (DxgkConfigureSharedResource.c)
 *     DxgkLock @ 0x1C00FE020 (DxgkLock.c)
 *     DxgkLock2 @ 0x1C0102FB0 (DxgkLock2.c)
 *     DxgkUnlock2 @ 0x1C0106F60 (DxgkUnlock2.c)
 *     DxgkOfferAllocations @ 0x1C01079F0 (DxgkOfferAllocations.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C010D030 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D60C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkSetDisplayMode @ 0x1C011E5E0 (DxgkSetDisplayMode.c)
 *     DxgkShutdownBootGraphics @ 0x1C011EE80 (DxgkShutdownBootGraphics.c)
 *     DxgkSetQueuedLimit @ 0x1C01216D0 (DxgkSetQueuedLimit.c)
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C0123460 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C01234E0 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C0124710 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     DxgkUnlock @ 0x1C0124840 (DxgkUnlock.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C01262F0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0126C60 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkReclaimAllocations @ 0x1C01271D0 (DxgkReclaimAllocations.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C0127550 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C0134FC8 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C0136230 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C0138524 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C013EC74 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     DxgkPinDirectFlipResources @ 0x1C013F0D0 (DxgkPinDirectFlipResources.c)
 *     DxgkUnpinDirectFlipResources @ 0x1C013F510 (DxgkUnpinDirectFlipResources.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C01D6F90 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkGetAllocationPriority @ 0x1C01DA300 (DxgkGetAllocationPriority.c)
 *     DxgkGetResourcePresentPrivateDriverData @ 0x1C01DA690 (DxgkGetResourcePresentPrivateDriverData.c)
 *     DxgkQueryAllocationResidency @ 0x1C01DAFC0 (DxgkQueryAllocationResidency.c)
 *     DxgkSetAllocationPriority @ 0x1C01DB370 (DxgkSetAllocationPriority.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01DB6D0 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkInvalidateCache @ 0x1C01DC670 (DxgkInvalidateCache.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C01DCFE0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C01DD9C0 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EAA20 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EF740 (-VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F04D0 (-VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F09E0 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F14A0 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F8730 (-VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F93A0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1C0200760 (DxgkCheckMultiPlaneOverlaySupport.c)
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C0200D60 (DxgkCheckMultiPlaneOverlaySupport2.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C0201390 (DxgkCheckMultiPlaneOverlaySupport3.c)
 *     DxgkSetGammaRamp @ 0x1C02029B0 (DxgkSetGammaRamp.c)
 *     DxgkWaitForIdle @ 0x1C0202FA0 (DxgkWaitForIdle.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkCreateOverlay @ 0x1C021FAE0 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C0220160 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C0220700 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0220BA0 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0221190 (DxgkUpdateOverlay.c)
 *     DxgkPresentRedirected @ 0x1C0227800 (DxgkPresentRedirected.c)
 *     DxgkCreateProtectedSession @ 0x1C022CFB0 (DxgkCreateProtectedSession.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0237C70 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     DxgkCreateSwapChain @ 0x1C0253130 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C0253B80 (DxgkOpenSwapChain.c)
 *     NtDxgkDestroyTrackedWorkload @ 0x1C0260B80 (NtDxgkDestroyTrackedWorkload.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C0260E80 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C0261130 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkload @ 0x1C0261400 (NtDxgkResetTrackedWorkload.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C02615D0 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

DXGDEVICEBYHANDLE *__fastcall DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
        DXGDEVICEBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGDEVICE **a4)
{
  char *v4; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  struct _KTHREAD *v12; // r8
  int v13; // ecx
  __int64 v14; // rcx
  volatile signed __int64 *v15; // rax
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rax

  v4 = (char *)(a3 + 26);
  if ( a3 != (struct _KTHREAD **)-208LL && a3[27] == KeGetCurrentThread() )
  {
    v17 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v17 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v17);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v4, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v18 = *((unsigned int *)v4 + 4);
      if ( (_DWORD)v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v9, &EventBlockThread, v10, v18);
    }
    ExAcquirePushLockSharedEx(v4, 0LL);
  }
  v11 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 < *((_DWORD *)a3 + 62) )
  {
    v12 = a3[29];
    v13 = *((_DWORD *)v12 + 4 * v11 + 2);
    if ( ((a2 >> 25) & 0x60) == (*((_BYTE *)v12 + 16 * v11 + 8) & 0x60) && (v13 & 0x2000) == 0 && (v13 & 0x1F) != 0 )
    {
      v14 = v13 & 0x1F;
      if ( (_BYTE)v14 == 3 )
      {
        v15 = (volatile signed __int64 *)*((_QWORD *)v12 + 2 * (unsigned int)v11);
        goto LABEL_11;
      }
      v19 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v19 + 24) = 316LL;
      WdLogEvent5_WdError(v19);
    }
  }
  v15 = 0LL;
LABEL_11:
  *(_QWORD *)this = v15;
  if ( v15 )
  {
    _InterlockedIncrement64(v15 + 8);
    v15 = *(volatile signed __int64 **)this;
  }
  *a4 = (struct DXGDEVICE *)v15;
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return this;
}
