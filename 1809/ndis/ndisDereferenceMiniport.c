/*
 * XREFs of ndisDereferenceMiniport @ 0x1C0009DEC
 * Callers:
 *     ndisInterruptDpc @ 0x1C0006B20 (ndisInterruptDpc.c)
 *     ndisCloseIrpHandler @ 0x1C0009CA0 (ndisCloseIrpHandler.c)
 *     ndisMWakeUpDpcX @ 0x1C000F720 (ndisMWakeUpDpcX.c)
 *     ndisCreateHandler @ 0x1C000F8B0 (ndisCreateHandler.c)
 *     ndisCompleteWaitWake @ 0x1C0011420 (ndisCompleteWaitWake.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0011FC0 (ndisQueuedMiniportDpcWorkItem.c)
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C0012CE4 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001C600 (ndisCancelMediaDisconnectTimer.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001F920 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C001F9B4 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     ndisDoOidRequests @ 0x1C0020D80 (ndisDoOidRequests.c)
 *     ndisQueueRequestWorkItem @ 0x1C0020FA4 (ndisQueueRequestWorkItem.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00224F0 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisAllocateIoWorkItem @ 0x1C0025450 (NdisAllocateIoWorkItem.c)
 *     ndisAllocateReceiveQueue @ 0x1C003AA90 (ndisAllocateReceiveQueue.c)
 *     ndisDereferenceReceiveFilter @ 0x1C003B1EC (ndisDereferenceReceiveFilter.c)
 *     ndisDereferenceReceiveQueue @ 0x1C003B3C8 (ndisDereferenceReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003CA90 (ndisSetReceiveFilter.c)
 *     NdisMAllocatePort @ 0x1C003D380 (NdisMAllocatePort.c)
 *     NdisMFreePort @ 0x1C003D6F0 (NdisMFreePort.c)
 *     ndisDoDirectOidRequest @ 0x1C0044A48 (ndisDoDirectOidRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0045B94 (ndisMOidRequestCompleteInternal.c)
 *     ndisProcessRequestAsync @ 0x1C0048150 (ndisProcessRequestAsync.c)
 *     ndisPMPDCTaskClient @ 0x1C004B190 (ndisPMPDCTaskClient.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C004BAB8 (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisDmaAddCpuNotify @ 0x1C004C37C (ndisDmaAddCpuNotify.c)
 *     ndisCsResiliencyCallback @ 0x1C004FE50 (ndisCsResiliencyCallback.c)
 *     ndisEnableWppTracingCallback @ 0x1C004FF5C (ndisEnableWppTracingCallback.c)
 *     ndisInvokeDeviceReset @ 0x1C00500CC (ndisInvokeDeviceReset.c)
 *     ndisPktMonRegisterComponentsCallback @ 0x1C0050680 (ndisPktMonRegisterComponentsCallback.c)
 *     ndisQueryDeviceReset @ 0x1C0050914 (ndisQueryDeviceReset.c)
 *     ndisWnfPdcCallback @ 0x1C0051300 (ndisWnfPdcCallback.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0052C10 (NdisClOpenAddressFamilyEx.c)
 *     NdisMCmRegisterAddressFamilyEx @ 0x1C0053690 (NdisMCmRegisterAddressFamilyEx.c)
 *     NdisEnumerateFilterModules @ 0x1C0059F60 (NdisEnumerateFilterModules.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005DD2C (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005EBE8 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisCleanupUserOpenContext @ 0x1C005F834 (ndisCleanupUserOpenContext.c)
 *     NdisFreeIoWorkItem @ 0x1C0060690 (NdisFreeIoWorkItem.c)
 *     NdisMResetMiniport @ 0x1C0061150 (NdisMResetMiniport.c)
 *     ndisQueuedResetMiniport @ 0x1C00642E0 (ndisQueuedResetMiniport.c)
 *     ndisMQueuedAllocateSharedHandler @ 0x1C0065680 (ndisMQueuedAllocateSharedHandler.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C0065C7C (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C0066130 (ndis5QueuedMiniportDpcWorkItem.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C0068AB0 (NdisMReenumerateFailedAdapter.c)
 *     ndisMediaDisconnectTimeout @ 0x1C0069A90 (ndisMediaDisconnectTimeout.c)
 *     ndisSignalD0CompleteWorkItem @ 0x1C0069DD0 (ndisSignalD0CompleteWorkItem.c)
 *     ndisNdkPcwAddCounter @ 0x1C006BC90 (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C006BE18 (ndisNdkPcwEnumerateInstances.c)
 *     ndisPeriodicReceivesWorker @ 0x1C006E750 (ndisPeriodicReceivesWorker.c)
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C006EC34 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C006ED8C (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisSriovInterfaceDereference @ 0x1C0071A40 (ndisSriovInterfaceDereference.c)
 *     NdisMIdleNotificationCompleteEx @ 0x1C0073C90 (NdisMIdleNotificationCompleteEx.c)
 *     ndisSSIdleTimerWorkItem @ 0x1C0075600 (ndisSSIdleTimerWorkItem.c)
 *     ndisSubmitIdleRequest @ 0x1C0076428 (ndisSubmitIdleRequest.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0077498 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00776E0 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00777D0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C007822C (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0079088 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C0079370 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 *     ndisWmiQueryAllData @ 0x1C00B4384 (ndisWmiQueryAllData.c)
 *     ndisWmiExecuteMethod @ 0x1C00B4A84 (ndisWmiExecuteMethod.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00B5580 (ndisWmiQuerySingleInstance.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00B8FF8 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ndisInitModeTimeoutWorkItem @ 0x1C00BE150 (ndisInitModeTimeoutWorkItem.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00BE278 (ndisCancelInitModeTimeoutTimer.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00BF3E8 (ndisIfQueryBindingMiniportIfIndex.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00BF6DC (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ndisPMAddRemoveAsync @ 0x1C00E7430 (ndisPMAddRemoveAsync.c)
 *     ndisPMRejectAsync @ 0x1C00E7520 (ndisPMRejectAsync.c)
 *     ndisPdcTaskClientDisableTimeoutWorkItem @ 0x1C00E7650 (ndisPdcTaskClientDisableTimeoutWorkItem.c)
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00E7CC0 (ndisQueuedUpdatePMCapabilities.c)
 *     ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00E9FD0 (-ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00EA23C (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ndisHandleBindNotification @ 0x1C00EA7D4 (ndisHandleBindNotification.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00EC300 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ndisMHaltMiniport @ 0x1C00EC4FC (ndisMHaltMiniport.c)
 *     ndisQueuedStatusUnbindAdapter @ 0x1C00EE430 (ndisQueuedStatusUnbindAdapter.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C00EF2A0 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     ?ndisMUpdateInterfaceWorker@@YAXPEAX@Z @ 0x1C00EF4C0 (-ndisMUpdateInterfaceWorker@@YAXPEAX@Z.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00F1380 (NdisIMDeInitializeDeviceInstance.c)
 *     NdisLWMStartNetworkInterface @ 0x1C00F1980 (NdisLWMStartNetworkInterface.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C00F1A90 (NdisLWMUninitializeNetworkInterface.c)
 *     ndisMQueuedFreeSharedHandler @ 0x1C00F2D80 (ndisMQueuedFreeSharedHandler.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00F4904 (ndisPnPIrpRemoveDevice.c)
 *     ndisPnPIrpStopDevice @ 0x1C00F4B78 (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00F4E5C (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisQueuedReenumerateFailedAdapter @ 0x1C00F5100 (ndisQueuedReenumerateFailedAdapter.c)
 *     ndisWdfPostReleaseHardware @ 0x1C00F51C8 (ndisWdfPostReleaseHardware.c)
 *     ndisMediaDisconnectWorker @ 0x1C00F5460 (ndisMediaDisconnectWorker.c)
 *     ndisPowerIrpWorker @ 0x1C00F5600 (ndisPowerIrpWorker.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00F59FC (ndisWmiChangeSingleInstance.c)
 *     ndisNblTrackerWatchdogWorkerRoutine @ 0x1C00F6CF0 (ndisNblTrackerWatchdogWorkerRoutine.c)
 *     ndisNdkPcwMiniportCleanup @ 0x1C00F7E38 (ndisNdkPcwMiniportCleanup.c)
 *     ndisNdkPcwRemoveCounter @ 0x1C00F7F30 (ndisNdkPcwRemoveCounter.c)
 *     ndisOidPrePDCloseProvider @ 0x1C0102150 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C01024A0 (ndisOidPrePDOpenProvider.c)
 *     ndisReferenceMiniportByName @ 0x1C010A008 (ndisReferenceMiniportByName.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C010B084 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C010C328 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x1C010D520 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C010D8F0 (ndisMOpenAdapter.c)
 *     ndisHandlePnPRequest @ 0x1C010ECF4 (ndisHandlePnPRequest.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C011525C (ndisHandleProtocolReconfigNotification.c)
 *     ndisUnprocessAllMiniports @ 0x1C0115824 (ndisUnprocessAllMiniports.c)
 *     ndisMFinishClose @ 0x1C01168D0 (ndisMFinishClose.c)
 *     NdisMCmRegisterAddressFamily @ 0x1C0116F00 (NdisMCmRegisterAddressFamily.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C011A9B4 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C011C030 (NdisCmOpenAddressFamilyComplete.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0071E98 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0072050 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDereferenceMiniport(__int64 a1, unsigned __int8 a2)
{
  KIRQL v4; // al
  ULONG_PTR v5; // r8
  KIRQL v6; // bp
  __int64 v7; // rcx
  unsigned __int8 v8; // r10
  unsigned __int8 v9; // dl
  int v10; // edi
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // rdi
  unsigned int v13; // edx
  int v14; // ecx
  char v15; // al
  struct _KEVENT *v16; // rcx

  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_q(25LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, a1);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4472));
  v5 = *(_QWORD *)(a1 + 4928);
  v6 = v4;
  if ( v5 )
  {
    if ( v5 - 2 <= 1 )
    {
      v5 = 0LL;
    }
    else if ( v5 == 1 )
    {
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    }
    if ( v5 )
    {
      if ( a2 == 0xFF )
      {
        if ( (*(_BYTE *)v5 & 2) == 0 )
          ndisBugCheckEx(0x1EuLL, 0LL, v5, 0xFFuLL);
        *(_BYTE *)v5 &= ~2u;
      }
      else
      {
        if ( a2 >= *(_BYTE *)(v5 + 2) )
          ndisBugCheckEx(0x1EuLL, 2uLL, v5, a2);
        if ( *(_BYTE *)(v5 + 1) )
        {
          if ( *(_BYTE *)(v5 + 1) == 1 )
          {
            v11 = a2;
            v12 = v5 + ((unsigned __int64)a2 << 6);
            v13 = *(_DWORD *)(v12 + 64);
            v14 = (unsigned __int16)v13 >> 1;
            if ( v13 >> 17 < 0x3FFE && v14 == (v13 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v12 + 8));
              *(_DWORD *)(v12 + 64) &= 0x10001u;
            }
            else
            {
              if ( v14 == 0 && (v13 & 1) == 0 )
                ndisBugCheckEx(0x1EuLL, 0LL, v5, v11);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v12 + 8), 0);
            }
          }
        }
        else
        {
          v7 = *(_QWORD *)(v5 + 8);
          if ( v7 && (v8 = *(_BYTE *)(v5 + 3), v9 = 0, v8) )
          {
            while ( 1 )
            {
              if ( *(_BYTE *)(v7 + 2LL * v9) == a2 )
              {
                v15 = *(_BYTE *)(v7 + 2LL * v9 + 1);
                if ( v15 )
                  break;
              }
              if ( ++v9 >= v8 )
                goto LABEL_14;
            }
            *(_BYTE *)(v7 + 2LL * v9 + 1) = v15 - 1;
          }
          else
          {
LABEL_14:
            if ( !_bittestandreset((signed __int32 *)(v5 + 16), a2) )
              ndisBugCheckEx(0x1EuLL, 0LL, v5, a2);
          }
        }
      }
    }
  }
  v10 = *(_DWORD *)(a1 + 4480) - 1;
  *(_DWORD *)(a1 + 4480) = v10;
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_qD(14LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a1, *(unsigned int *)(a1 + 4480));
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4472), v6);
  if ( !v10 )
  {
    v16 = *(struct _KEVENT **)(a1 + 1608);
    if ( v16 )
      KeSetEvent(v16, 0, 0);
  }
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_q(26LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, a1);
}
