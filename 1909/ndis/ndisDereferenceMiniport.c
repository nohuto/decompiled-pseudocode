/*
 * XREFs of ndisDereferenceMiniport @ 0x1C000286C
 * Callers:
 *     ndisCloseIrpHandler @ 0x1C0001070 (ndisCloseIrpHandler.c)
 *     ?ndisInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C000F160 (-ndisInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ndisCreateHandler @ 0x1C000FBB0 (ndisCreateHandler.c)
 *     ndisMWakeUpDpcX @ 0x1C0010F50 (ndisMWakeUpDpcX.c)
 *     ndisCompleteWaitWake @ 0x1C0013B78 (ndisCompleteWaitWake.c)
 *     ndisDoOidRequests @ 0x1C0016AC0 (ndisDoOidRequests.c)
 *     ?ndisDispatchRequest@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0019840 (-ndisDispatchRequest@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019B0C (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     ndisQueueRequestWorkItem @ 0x1C001A984 (ndisQueueRequestWorkItem.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001CA48 (ndisCancelMediaDisconnectTimer.c)
 *     ndisDoDirectOidRequest @ 0x1C001DB3C (ndisDoDirectOidRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C001DCEC (ndisMOidRequestCompleteInternal.c)
 *     ndisWmiExecuteMethod @ 0x1C001DEEC (ndisWmiExecuteMethod.c)
 *     ?ndisQueuedMiniportDpcWorkItem@@YAXPEAX@Z @ 0x1C001EC30 (-ndisQueuedMiniportDpcWorkItem@@YAXPEAX@Z.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C001F590 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0037D8C (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisAllocateIoWorkItem @ 0x1C003E1A0 (NdisAllocateIoWorkItem.c)
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C005E5D4 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z @ 0x1C005EC40 (-ndisDereferenceReceiveFilter@@YAKPEAU_NDIS_RECEIVE_FILTER_BLOCK@@@Z.c)
 *     ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C005EE0C (-ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 *     ndisSetReceiveFilter @ 0x1C0060FB8 (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C0061A70 (NdisMAllocatePort.c)
 *     NdisMFreePort @ 0x1C0061E30 (NdisMFreePort.c)
 *     ndisProcessRequestAsync @ 0x1C006F270 (ndisProcessRequestAsync.c)
 *     ndisPMAddRemoveAsync @ 0x1C0074F60 (ndisPMAddRemoveAsync.c)
 *     ndisPMPDCTaskClient @ 0x1C0075080 (ndisPMPDCTaskClient.c)
 *     ndisPMRejectAsync @ 0x1C00751B0 (ndisPMRejectAsync.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C0077338 (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisDmaAddCpuNotify @ 0x1C0079150 (ndisDmaAddCpuNotify.c)
 *     ?ndisCsResiliencyCallback@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C007C000 (-ndisCsResiliencyCallback@@YAJPEBU_GUID@@PEAXK1@Z.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C007C2D8 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisPktMonRegisterComponentsCallback@@YAXXZ @ 0x1C007CBC0 (-ndisPktMonRegisterComponentsCallback@@YAXXZ.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1C007CE10 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@.c)
 *     ?ndisWnfPdcCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C007D2A0 (-ndisWnfPdcCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@.c)
 *     ndisEnableWppTracingCallback @ 0x1C007E5EC (ndisEnableWppTracingCallback.c)
 *     ndisMHaltMiniport @ 0x1C0082038 (ndisMHaltMiniport.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0082B90 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C0083D90 (NdisCmOpenAddressFamilyComplete.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C0086430 (NdisMCmRegisterAddressFamilyEx.c)
 *     NdisEnumerateFilterModules @ 0x1C008CEE0 (NdisEnumerateFilterModules.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C00922F0 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093C18 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisQueuedStatusUnbindAdapter @ 0x1C00944E0 (ndisQueuedStatusUnbindAdapter.c)
 *     ndisCleanupUserOpenContext @ 0x1C0094C0C (ndisCleanupUserOpenContext.c)
 *     ?ndisQueuedResetMiniport@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0097D10 (-ndisQueuedResetMiniport@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     NdisFreeIoWorkItem @ 0x1C0097FB0 (NdisFreeIoWorkItem.c)
 *     NdisMResetMiniport @ 0x1C00989D0 (NdisMResetMiniport.c)
 *     ?ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z @ 0x1C009CE90 (-ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z.c)
 *     ?ndisMQueuedFreeSharedHandler@@YAXPEAX@Z @ 0x1C009CFF0 (-ndisMQueuedFreeSharedHandler@@YAXPEAX@Z.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C009D500 (NdisIMDeInitializeDeviceInstance.c)
 *     NdisLWMStartNetworkInterface @ 0x1C009DC20 (NdisLWMStartNetworkInterface.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C009DD90 (NdisLWMUninitializeNetworkInterface.c)
 *     NdisWdfMiniportDereference @ 0x1C009EF70 (NdisWdfMiniportDereference.c)
 *     ?ndis5QueuedMiniportDpcWorkItem@@YAXPEAX@Z @ 0x1C00A04D0 (-ndis5QueuedMiniportDpcWorkItem@@YAXPEAX@Z.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C00A0B8C (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C00A4670 (NdisMReenumerateFailedAdapter.c)
 *     ndisPnPIrpStopDevice @ 0x1C00A4F8C (ndisPnPIrpStopDevice.c)
 *     ?ndisMediaDisconnectWorker@@YAXPEAX@Z @ 0x1C00A54D0 (-ndisMediaDisconnectWorker@@YAXPEAX@Z.c)
 *     ndisMediaDisconnectTimeout @ 0x1C00A6CE0 (ndisMediaDisconnectTimeout.c)
 *     ndisPowerIrpWorker @ 0x1C00A6E60 (ndisPowerIrpWorker.c)
 *     ndisSignalD0CompleteWorkItem @ 0x1C00A7090 (ndisSignalD0CompleteWorkItem.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00A851C (ndisWmiChangeSingleInstance.c)
 *     ndisWmiQueryAllData @ 0x1C00A8EDC (ndisWmiQueryAllData.c)
 *     ndisNdkPcwAddCounter @ 0x1C00AB920 (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C00ABAA8 (ndisNdkPcwEnumerateInstances.c)
 *     ndisPeriodicReceivesWorker @ 0x1C00AF090 (ndisPeriodicReceivesWorker.c)
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00AF584 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00AF6DC (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisSriovInterfaceDereference@@YAXPEAX@Z @ 0x1C00B10E0 (-ndisSriovInterfaceDereference@@YAXPEAX@Z.c)
 *     NdisMIdleNotificationCompleteEx @ 0x1C00B6E90 (NdisMIdleNotificationCompleteEx.c)
 *     ndisSSIdleTimerWorkItem @ 0x1C00B9120 (ndisSSIdleTimerWorkItem.c)
 *     ndisSubmitIdleRequest @ 0x1C00BA044 (ndisSubmitIdleRequest.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C00BB2E8 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00BB590 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00BB6A0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00BC184 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00BD178 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C00BD460 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00FF774 (ndisCancelInitModeTimeoutTimer.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00FFA44 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C0103950 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C0104FA8 (ndisIfQueryBindingMiniportIfIndex.c)
 *     ?ndisInitModeTimeoutWorkItem@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C010A190 (-ndisInitModeTimeoutWorkItem@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0115320 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ndisPdcTaskClientDisableTimeoutWorkItem @ 0x1C0115770 (ndisPdcTaskClientDisableTimeoutWorkItem.c)
 *     ?ndisHandleBindNotification@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C0115A34 (-ndisHandleBindNotification@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C0115B9C (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C0115E70 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C01169C0 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C01174F0 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     ?ndisMUpdateInterfaceWorker@@YAXPEAX@Z @ 0x1C0117780 (-ndisMUpdateInterfaceWorker@@YAXPEAX@Z.c)
 *     ?ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0118B70 (-ndisPnPIrpSurpriseRemovalInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisQueuedReenumerateFailedAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0118D40 (-ndisQueuedReenumerateFailedAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C0118F14 (ndisPnPIrpRemoveDevice.c)
 *     ndisWdfPostReleaseHardware @ 0x1C0119274 (ndisWdfPostReleaseHardware.c)
 *     ndisNblTrackerWatchdogWorkerRoutine @ 0x1C01197D0 (ndisNblTrackerWatchdogWorkerRoutine.c)
 *     ndisNdkPcwMiniportCleanup @ 0x1C011A070 (ndisNdkPcwMiniportCleanup.c)
 *     ndisNdkPcwRemoveCounter @ 0x1C011A114 (ndisNdkPcwRemoveCounter.c)
 *     ndisOidPrePDCloseProvider @ 0x1C0122490 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C0122830 (ndisOidPrePDOpenProvider.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     ndisReferenceMiniportByName @ 0x1C012B290 (ndisReferenceMiniportByName.c)
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 *     NdisOpenAdapterEx @ 0x1C012B900 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C012C0CC (ndisMOpenAdapter.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C012FE70 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C01300A0 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z @ 0x1C0135CB8 (-ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z.c)
 *     ?ndisUnprocessAllMiniports@@_Y2PAGENPNP@@AXPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C0136338 (-ndisUnprocessAllMiniports@@_Y2PAGENPNP@@AXPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ndisMFinishClose @ 0x1C0137820 (ndisMFinishClose.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C0137ED0 (NdisMCmRegisterAddressFamily.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013C1A0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C79C8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C7B48 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDereferenceMiniport(__int64 a1, unsigned __int8 a2)
{
  KIRQL v4; // al
  int v5; // edx
  ULONG_PTR v6; // r8
  KIRQL v7; // bp
  __int64 v8; // rcx
  unsigned __int8 v9; // r10
  unsigned __int8 v10; // dl
  int v11; // ebx
  char v12; // al
  ULONG_PTR v13; // r9
  ULONG_PTR v14; // rbx
  unsigned int v15; // edx
  int v16; // ecx
  struct _KEVENT *v17; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      20,
      25,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      a1);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4432));
  v6 = *(_QWORD *)(a1 + 4888);
  v7 = v4;
  if ( v6 )
  {
    if ( v6 - 2 <= 1 )
    {
      v6 = 0LL;
    }
    else if ( v6 == 1 )
    {
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    }
    if ( v6 )
    {
      if ( a2 == 0xFF )
      {
        if ( (*(_BYTE *)v6 & 2) == 0 )
          ndisBugCheckEx(0x1EuLL, 0LL, v6, 0xFFuLL);
        *(_BYTE *)v6 &= ~2u;
      }
      else
      {
        if ( a2 >= *(_BYTE *)(v6 + 2) )
          ndisBugCheckEx(0x1EuLL, 2uLL, v6, a2);
        if ( *(_BYTE *)(v6 + 1) )
        {
          if ( *(_BYTE *)(v6 + 1) == 1 )
          {
            v13 = a2;
            v14 = v6 + ((unsigned __int64)a2 << 6);
            v15 = *(_DWORD *)(v14 + 64);
            v16 = (unsigned __int16)v15 >> 1;
            if ( v15 >> 17 < 0x3FFE && v16 == (v15 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v14 + 8));
              *(_DWORD *)(v14 + 64) &= 0x10001u;
            }
            else
            {
              if ( v16 == 0 && (v15 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v6, v13);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v14 + 8), 0);
            }
          }
        }
        else
        {
          v8 = *(_QWORD *)(v6 + 8);
          if ( v8 && (v9 = *(_BYTE *)(v6 + 3), v10 = 0, v9) )
          {
            while ( 1 )
            {
              if ( *(_BYTE *)(v8 + 2LL * v10) == a2 )
              {
                v12 = *(_BYTE *)(v8 + 2LL * v10 + 1);
                if ( v12 )
                  break;
              }
              if ( ++v10 >= v9 )
                goto LABEL_14;
            }
            *(_BYTE *)(v8 + 2LL * v10 + 1) = v12 - 1;
          }
          else
          {
LABEL_14:
            if ( !_bittestandreset((signed __int32 *)(v6 + 16), a2) )
              ndisBugCheckEx(0x1EuLL, 0LL, v6, a2);
          }
        }
      }
    }
  }
  v11 = *(_DWORD *)(a1 + 4440) - 1;
  *(_DWORD *)(a1 + 4440) = v11;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      20,
      14,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      a1,
      *(_DWORD *)(a1 + 4440));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4432), v7);
  if ( !v11 )
  {
    v17 = *(struct _KEVENT **)(a1 + 1608);
    if ( v17 )
      KeSetEvent(v17, 0, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      20,
      26,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      a1);
}
