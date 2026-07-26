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
 *     ndisRequestWaitWake @ 0x1C0032E7C (ndisRequestWaitWake.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0037D8C (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisAllocateIoWorkItem @ 0x1C003E1A0 (NdisAllocateIoWorkItem.c)
 *     ndisReferenceMiniportByHandle @ 0x1C003F98C (ndisReferenceMiniportByHandle.c)
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C005E5D4 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisSetReceiveFilter @ 0x1C0060FB8 (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C0061A70 (NdisMAllocatePort.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C006FAF0 (ndisQueueRequestOnTopAsync.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C006FC44 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisCreatePMAddRemoveWorkItem @ 0x1C0072C94 (ndisCreatePMAddRemoveWorkItem.c)
 *     ndisCreatePMPdcTaskClientWorkItem @ 0x1C0072E5C (ndisCreatePMPdcTaskClientWorkItem.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C0077338 (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisDmaAddCpuNotify @ 0x1C0079150 (ndisDmaAddCpuNotify.c)
 *     ?ndisCsResiliencyCallback@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C007C000 (-ndisCsResiliencyCallback@@YAJPEBU_GUID@@PEAXK1@Z.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C007C2D8 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisMapOpenByName@@YAPEAU_NDIS_OPEN_BLOCK@@PEBU_UNICODE_STRING@@PEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_MP_REFTAG@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C007C8A8 (-ndisMapOpenByName@@YAPEAU_NDIS_OPEN_BLOCK@@PEBU_UNICODE_STRING@@PEAU_NDIS_PROTOCOL_BLOCK@@W4_ND.c)
 *     ?ndisPktMonRegisterComponentsCallback@@YAXXZ @ 0x1C007CBC0 (-ndisPktMonRegisterComponentsCallback@@YAXXZ.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1C007CE10 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@.c)
 *     ?ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C007D030 (-ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisWnfPdcCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C007D2A0 (-ndisWnfPdcCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@.c)
 *     ndisEnableWppTracingCallback @ 0x1C007E5EC (ndisEnableWppTracingCallback.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C0086430 (NdisMCmRegisterAddressFamilyEx.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C00922F0 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     NdisMResetMiniport @ 0x1C00989D0 (NdisMResetMiniport.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C009D500 (NdisIMDeInitializeDeviceInstance.c)
 *     NdisLWMStartNetworkInterface @ 0x1C009DC20 (NdisLWMStartNetworkInterface.c)
 *     NdisMAllocateSharedMemoryAsync @ 0x1C009DF40 (NdisMAllocateSharedMemoryAsync.c)
 *     NdisWdfMiniportTryReference @ 0x1C009F030 (NdisWdfMiniportTryReference.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C00A4670 (NdisMReenumerateFailedAdapter.c)
 *     ndisPnPIrpStopDevice @ 0x1C00A4F8C (ndisPnPIrpStopDevice.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C00A6F54 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00AABA0 (-ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ndisNdkPcwAddCounter @ 0x1C00AB920 (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C00ABAA8 (ndisNdkPcwEnumerateInstances.c)
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00AF584 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00AF6DC (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisSSIdleTimerDpc @ 0x1C00B9040 (ndisSSIdleTimerDpc.c)
 *     ndisSubmitIdleRequest @ 0x1C00BA044 (ndisSubmitIdleRequest.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C00BB16C (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00BCCE4 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00BD178 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
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
