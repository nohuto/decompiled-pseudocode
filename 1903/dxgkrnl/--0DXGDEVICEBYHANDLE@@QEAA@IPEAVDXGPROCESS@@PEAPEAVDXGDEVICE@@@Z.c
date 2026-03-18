/*
 * XREFs of ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CB238 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkShutdownBootGraphics @ 0x1C00CC170 (DxgkShutdownBootGraphics.c)
 *     DxgkSetDisplayMode @ 0x1C00CC7E0 (DxgkSetDisplayMode.c)
 *     DxgkLock @ 0x1C00E0860 (DxgkLock.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EAD1C (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C00ECD30 (DxgkQueryResourceInfoFromNtHandle.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00ED9A4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C00EEBA0 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00EF070 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     DxgkQueryResourceInfo @ 0x1C00EF550 (DxgkQueryResourceInfo.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00EFBC8 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C00F2030 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C00F47D0 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0100A10 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkUnlock2 @ 0x1C0103EA0 (DxgkUnlock2.c)
 *     DxgkLock2 @ 0x1C0104A40 (DxgkLock2.c)
 *     DxgkOfferAllocations @ 0x1C010BA10 (DxgkOfferAllocations.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C010EAF0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     DxgkConfigureSharedResource @ 0x1C011F210 (DxgkConfigureSharedResource.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C011FE74 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C0120394 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 *     DxgkCreateContext @ 0x1C0123590 (DxgkCreateContext.c)
 *     DxgkGetDeviceStateInternal @ 0x1C012F1F0 (DxgkGetDeviceStateInternal.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C012F708 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C0130D60 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     DxgkUnlock @ 0x1C0130ED0 (DxgkUnlock.c)
 *     DxgkReclaimAllocations @ 0x1C0131850 (DxgkReclaimAllocations.c)
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z @ 0x1C0131BD0 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z @ 0x1C0131CB0 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0133090 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0134F10 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkSetQueuedLimit @ 0x1C0135570 (DxgkSetQueuedLimit.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C0146750 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C01497D4 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkPinDirectFlipResourcesInternal@@YAJPEBU_D3DKMT_PINDIRECTFLIPRESOURCES@@@Z @ 0x1C014F8E0 (-DxgkPinDirectFlipResourcesInternal@@YAJPEBU_D3DKMT_PINDIRECTFLIPRESOURCES@@@Z.c)
 *     DxgkUnpinDirectFlipResources @ 0x1C014FD70 (DxgkUnpinDirectFlipResources.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0150AD0 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C0204E40 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkGetAllocationPriority @ 0x1C0208820 (DxgkGetAllocationPriority.c)
 *     DxgkGetResourcePresentPrivateDriverData @ 0x1C0208B80 (DxgkGetResourcePresentPrivateDriverData.c)
 *     DxgkQueryAllocationResidency @ 0x1C02094E0 (DxgkQueryAllocationResidency.c)
 *     DxgkSetAllocationPriority @ 0x1C0209870 (DxgkSetAllocationPriority.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C0209BB0 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkInvalidateCache @ 0x1C020AB90 (DxgkInvalidateCache.c)
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C020B410 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C020B720 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C020BAE0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C020C5B0 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C020C790 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021A360 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021F160 (-VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0220010 (-VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02205C0 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0221140 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0228890 (-VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0229580 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1C0230FC0 (DxgkCheckMultiPlaneOverlaySupport.c)
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C02315D0 (DxgkCheckMultiPlaneOverlaySupport2.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C0231C10 (DxgkCheckMultiPlaneOverlaySupport3.c)
 *     DxgkEnableUnorderedWaitsForDevice @ 0x1C0232850 (DxgkEnableUnorderedWaitsForDevice.c)
 *     DxgkMarkDeviceAsError @ 0x1C0232DA0 (DxgkMarkDeviceAsError.c)
 *     DxgkSetGammaRamp @ 0x1C02331C0 (DxgkSetGammaRamp.c)
 *     DxgkWaitForIdle @ 0x1C02337C0 (DxgkWaitForIdle.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02386DC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkCreateOverlay @ 0x1C0254080 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C02546C0 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C0254C70 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0255100 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0255680 (DxgkUpdateOverlay.c)
 *     DxgkPresentRedirected @ 0x1C025C2C0 (DxgkPresentRedirected.c)
 *     DxgkCreateProtectedSession @ 0x1C0261850 (DxgkCreateProtectedSession.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C026C550 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     DxgkCreateSwapChain @ 0x1C0289110 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C0289BA0 (DxgkOpenSwapChain.c)
 *     NtDxgkDestroyTrackedWorkload @ 0x1C0297CD0 (NtDxgkDestroyTrackedWorkload.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C0297F50 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C02982D0 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkload @ 0x1C02985F0 (NtDxgkResetTrackedWorkload.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C0298810 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 */

DXGDEVICEBYHANDLE *__fastcall DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
        DXGDEVICEBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGDEVICE **a4)
{
  char *v4; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct _KTHREAD *v11; // r8
  int v12; // ecx
  __int64 v13; // rcx
  volatile signed __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v17; // rax

  v4 = (char *)(a3 + 23);
  if ( a3 != (struct _KTHREAD **)-184LL && a3[24] == KeGetCurrentThread() )
  {
    v17 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v17 + 24) = 1448LL;
    WdLogEvent5_WdAssertion(v17);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v4, 0LL) )
  {
    if ( bTracingEnabled && *((_DWORD *)v4 + 4) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v9, &EventBlockThread);
    ExAcquirePushLockSharedEx(v4, 0LL);
  }
  v10 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 < *((_DWORD *)a3 + 56) )
  {
    v11 = a3[26];
    v12 = *((_DWORD *)v11 + 4 * v10 + 2);
    if ( ((a2 >> 25) & 0x60) == (*((_BYTE *)v11 + 16 * v10 + 8) & 0x60) && (v12 & 0x2000) == 0 && (v12 & 0x1F) != 0 )
    {
      v13 = v12 & 0x1F;
      if ( (_BYTE)v13 == 3 )
      {
        v14 = (volatile signed __int64 *)*((_QWORD *)v11 + 2 * (unsigned int)v10);
        goto LABEL_13;
      }
      v15 = WdLogNewEntry5_WdError(v13, 2LL * (unsigned int)v10, v11);
      *(_QWORD *)(v15 + 24) = 267LL;
      WdLogEvent5_WdError(v15);
    }
  }
  v14 = 0LL;
LABEL_13:
  *(_QWORD *)this = v14;
  if ( v14 )
  {
    _InterlockedIncrement64(v14 + 8);
    v14 = *(volatile signed __int64 **)this;
  }
  *a4 = (struct DXGDEVICE *)v14;
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return this;
}
