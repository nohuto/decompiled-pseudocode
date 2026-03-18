/*
 * XREFs of UsbhGetPortData @ 0x1C001C8F0
 * Callers:
 *     UsbhLatchPdo @ 0x1C0001C9C (UsbhLatchPdo.c)
 *     UsbhPCE_Suspend @ 0x1C00021C4 (UsbhPCE_Suspend.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0008C2C (UsbhSyncResetDeviceInternal.c)
 *     UsbhPCE_QueueDriverReset @ 0x1C0009078 (UsbhPCE_QueueDriverReset.c)
 *     UsbhFinishStart @ 0x1C001D540 (UsbhFinishStart.c)
 *     UsbhGetExtendedHubInformation @ 0x1C0020500 (UsbhGetExtendedHubInformation.c)
 *     UsbhSetPortData @ 0x1C0026514 (UsbhSetPortData.c)
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C0029B80 (UsbhPdoPnp_DeviceEnumerated.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C002A43C (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C002B450 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x1C002B4E0 (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003FF70 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C0040DA4 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhDisablePortIndicators @ 0x1C00420A8 (UsbhDisablePortIndicators.c)
 *     UsbhPindicatorWorker @ 0x1C0042360 (UsbhPindicatorWorker.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C00429F0 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C0042A90 (UsbhDeviceOvercurrentPopup.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C0042B60 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhOvercurrentResetWorker @ 0x1C0042BF0 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C0042E50 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C0042FD0 (UsbhQueueOvercurrentReset.c)
 *     UsbhFdoRecordFailure @ 0x1C0043580 (UsbhFdoRecordFailure.c)
 *     UsbhPCE_BusDisconnect @ 0x1C0045D44 (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_Disable @ 0x1C0045FCC (UsbhPCE_Disable.c)
 *     UsbhPCE_Enable @ 0x1C004611C (UsbhPCE_Enable.c)
 *     UsbhPCE_HW_Stop @ 0x1C00461F4 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChange @ 0x1C00462DC (UsbhPCE_QueueChange.c)
 *     UsbhPCE_QueueChangeObject @ 0x1C00463E8 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_Resume @ 0x1C0046500 (UsbhPCE_Resume.c)
 *     UsbhPCE_ResumeDone @ 0x1C00465D8 (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C00466B0 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C0046850 (UsbhPCE_SoftDisconnect.c)
 *     UsbhQueuePauseChange @ 0x1C0046A40 (UsbhQueuePauseChange.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0046B5C (UsbhQueueSoftConnectChange.c)
 *     UsbhCycleDevicePort @ 0x1C004851C (UsbhCycleDevicePort.c)
 *     UsbhDeregisterPdo @ 0x1C0048838 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0049E24 (UsbhSoftDisconnectPdo.c)
 *     UsbhSyncResumePort @ 0x1C004A0F4 (UsbhSyncResumePort.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C004A640 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C004A7CC (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C004A97C (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C004AE88 (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C004B0E4 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoSetD0Warm @ 0x1C004BCBC (UsbhFdoSetD0Warm.c)
 *     UsbhResetNotifyCompletion @ 0x1C004CC9C (UsbhResetNotifyCompletion.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C004ECCC (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004F404 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C004F744 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0050028 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhDriverNotFoundWorker @ 0x1C0051440 (UsbhDriverNotFoundWorker.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C00520BC (UsbhResetNotifyDownstreamHub.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C005476C (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C0054A08 (UsbhGetHubNodeInfo.c)
 *     UsbhWmiDoNothing @ 0x1C0055490 (UsbhWmiDoNothing.c)
 *     UsbhWmiEnumerationFailure @ 0x1C0055500 (UsbhWmiEnumerationFailure.c)
 *     UsbhWmiInsufficentBandwidth @ 0x1C0055580 (UsbhWmiInsufficentBandwidth.c)
 *     UsbhWmiInsufficentPower @ 0x1C0055600 (UsbhWmiInsufficentPower.c)
 *     UsbhNotEnoughBandwidth_Popup @ 0x1C0056470 (UsbhNotEnoughBandwidth_Popup.c)
 *     UsbhNotEnoughPowerPopup @ 0x1C0056500 (UsbhNotEnoughPowerPopup.c)
 *     UsbhResetPortData @ 0x1C005C5C4 (UsbhResetPortData.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhGetPortData(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // rdx

  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v3 = *(_QWORD *)(a1 + 64);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v3 + 880)) & *(_DWORD *)(v3 + 884));
        *(_DWORD *)v4 = 1413771367;
        *(_QWORD *)(v4 + 16) = a2;
        *(_QWORD *)(v4 + 8) = 0LL;
        *(_QWORD *)(v4 + 24) = 0LL;
      }
    }
  }
  if ( !a2 )
    return 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( a2 > *(unsigned __int8 *)(v5 + 2938) )
    return 0LL;
  v6 = *(_QWORD *)(v5 + 3056);
  if ( !v6 )
    return 0LL;
  v7 = a2;
  v8 = v6 + 2928LL * a2 - 2928;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v9 = *(_QWORD *)(v5 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
    *(_DWORD *)v9 = 1044672615;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = v7;
    *(_QWORD *)(v9 + 24) = v8;
  }
  return v8;
}
