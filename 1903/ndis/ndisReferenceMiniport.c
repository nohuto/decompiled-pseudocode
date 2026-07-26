/*
 * XREFs of ndisReferenceMiniport @ 0x1C0002B20
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0001230 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004CE0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisQueueRequestWorkItem @ 0x1C001A984 (ndisQueueRequestWorkItem.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C001CB1C (ndisSetMediaDisconnectTimer.c)
 *     ndisCreatePMRejectWorkItem @ 0x1C001D65C (ndisCreatePMRejectWorkItem.c)
 *     ndisDoDirectOidRequest @ 0x1C001DB3C (ndisDoDirectOidRequest.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C001F590 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ndisRequestWaitWake @ 0x1C0032E8C (ndisRequestWaitWake.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0037D9C (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisAllocateIoWorkItem @ 0x1C003E1B0 (NdisAllocateIoWorkItem.c)
 *     ndisReferenceMiniportByHandle @ 0x1C003F99C (ndisReferenceMiniportByHandle.c)
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C005E400 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisSetReceiveFilter @ 0x1C0060DE8 (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C00618A0 (NdisMAllocatePort.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C006F920 (ndisQueueRequestOnTopAsync.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C006FA74 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisCreatePMAddRemoveWorkItem @ 0x1C0072AC4 (ndisCreatePMAddRemoveWorkItem.c)
 *     ndisCreatePMPdcTaskClientWorkItem @ 0x1C0072C8C (ndisCreatePMPdcTaskClientWorkItem.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C0077168 (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisDmaAddCpuNotify @ 0x1C0078F80 (ndisDmaAddCpuNotify.c)
 *     ?ndisCsResiliencyCallback@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C007BE30 (-ndisCsResiliencyCallback@@YAJPEBU_GUID@@PEAXK1@Z.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C007C108 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisMapOpenByName@@YAPEAU_NDIS_OPEN_BLOCK@@PEBU_UNICODE_STRING@@PEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_MP_REFTAG@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C007C6D8 (-ndisMapOpenByName@@YAPEAU_NDIS_OPEN_BLOCK@@PEBU_UNICODE_STRING@@PEAU_NDIS_PROTOCOL_BLOCK@@W4_ND.c)
 *     ?ndisPktMonRegisterComponentsCallback@@YAXXZ @ 0x1C007C9F0 (-ndisPktMonRegisterComponentsCallback@@YAXXZ.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1C007CC40 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@.c)
 *     ?ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C007CE60 (-ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisWnfPdcCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C007D0D0 (-ndisWnfPdcCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@.c)
 *     ndisEnableWppTracingCallback @ 0x1C007E41C (ndisEnableWppTracingCallback.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C0086260 (NdisMCmRegisterAddressFamilyEx.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0092120 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     NdisMResetMiniport @ 0x1C0098800 (NdisMResetMiniport.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C009D330 (NdisIMDeInitializeDeviceInstance.c)
 *     NdisLWMStartNetworkInterface @ 0x1C009DA50 (NdisLWMStartNetworkInterface.c)
 *     NdisMAllocateSharedMemoryAsync @ 0x1C009DD70 (NdisMAllocateSharedMemoryAsync.c)
 *     NdisWdfMiniportTryReference @ 0x1C009EE60 (NdisWdfMiniportTryReference.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C00A44A0 (NdisMReenumerateFailedAdapter.c)
 *     ndisPnPIrpStopDevice @ 0x1C00A4DBC (ndisPnPIrpStopDevice.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C00A6D84 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00AA9D0 (-ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ndisNdkPcwAddCounter @ 0x1C00AB750 (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C00AB8D8 (ndisNdkPcwEnumerateInstances.c)
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00AF3B4 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00AF50C (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisSSIdleTimerDpc @ 0x1C00B8E70 (ndisSSIdleTimerDpc.c)
 *     ndisSubmitIdleRequest @ 0x1C00B9E74 (ndisSubmitIdleRequest.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C00BAF9C (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00BCB14 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00BCFA8 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00FFA44 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C0103950 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ndisMStartInitMode @ 0x1C010B520 (ndisMStartInitMode.c)
 *     ndisOidPrePDOpenProvider @ 0x1C0122830 (ndisOidPrePDOpenProvider.c)
 *     ndisReferenceMiniportByName @ 0x1C012B290 (ndisReferenceMiniportByName.c)
 *     ndisMOpenAdapter @ 0x1C012C0CC (ndisMOpenAdapter.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisReferenceNextUnprocessedMiniport@@_Y2PAGENPNP@@APEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C013620C (-ndisReferenceNextUnprocessedMiniport@@_Y2PAGENPNP@@APEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVE.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C0137ED0 (NdisMCmRegisterAddressFamily.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ndisReferenceMiniport(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 v3; // bp
  int v4; // edx
  KIRQL v5; // r14
  struct _NDIS_REFCOUNT_BLOCK *v6; // rcx
  int v7; // ecx

  v1 = a1 + 4432;
  v3 = 1;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4432));
  if ( *(_BYTE *)(v1 + 12) )
    goto LABEL_8;
  v6 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4888);
  if ( v6 )
    NdisReferenceWithTag(v6);
  v7 = *(_DWORD *)(v1 + 8);
  *(_DWORD *)(v1 + 8) = v7 + 1;
  if ( v7 == -1 )
  {
    *(_DWORD *)(v1 + 8) = -1;
LABEL_8:
    v3 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      20,
      12,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      a1,
      *(_DWORD *)(a1 + 4440));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v1, v5);
  return v3;
}
