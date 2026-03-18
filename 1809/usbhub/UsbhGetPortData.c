/*
 * XREFs of UsbhGetPortData @ 0x1C001BE00
 * Callers:
 *     UsbhLatchPdo @ 0x1C0001BDC (UsbhLatchPdo.c)
 *     UsbhPCE_Suspend @ 0x1C00020C8 (UsbhPCE_Suspend.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C000873C (UsbhSyncResetDeviceInternal.c)
 *     UsbhPCE_QueueDriverReset @ 0x1C0008B58 (UsbhPCE_QueueDriverReset.c)
 *     UsbhFinishStart @ 0x1C001CBF0 (UsbhFinishStart.c)
 *     UsbhGetExtendedHubInformation @ 0x1C001F810 (UsbhGetExtendedHubInformation.c)
 *     UsbhSetPortData @ 0x1C00255E0 (UsbhSetPortData.c)
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C0028BD0 (UsbhPdoPnp_DeviceEnumerated.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0029650 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C002A220 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x1C002A2B0 (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003E9A0 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C003F764 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhDisablePortIndicators @ 0x1C0040A80 (UsbhDisablePortIndicators.c)
 *     UsbhPindicatorWorker @ 0x1C0040D20 (UsbhPindicatorWorker.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C00413C0 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C0041460 (UsbhDeviceOvercurrentPopup.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C0041530 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhOvercurrentResetWorker @ 0x1C00415C0 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C0041820 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C0041990 (UsbhQueueOvercurrentReset.c)
 *     UsbhFdoRecordFailure @ 0x1C0041F30 (UsbhFdoRecordFailure.c)
 *     UsbhPCE_BusDisconnect @ 0x1C004462C (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_Disable @ 0x1C0044894 (UsbhPCE_Disable.c)
 *     UsbhPCE_Enable @ 0x1C00449DC (UsbhPCE_Enable.c)
 *     UsbhPCE_HW_Stop @ 0x1C0044AB0 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChange @ 0x1C0044B90 (UsbhPCE_QueueChange.c)
 *     UsbhPCE_QueueChangeObject @ 0x1C0044C78 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_Resume @ 0x1C0044D6C (UsbhPCE_Resume.c)
 *     UsbhPCE_ResumeDone @ 0x1C0044E40 (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C0044F14 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C00450AC (UsbhPCE_SoftDisconnect.c)
 *     UsbhQueuePauseChange @ 0x1C004527C (UsbhQueuePauseChange.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0045370 (UsbhQueueSoftConnectChange.c)
 *     UsbhCycleDevicePort @ 0x1C0046C84 (UsbhCycleDevicePort.c)
 *     UsbhDeregisterPdo @ 0x1C0046F90 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C00484C0 (UsbhSoftDisconnectPdo.c)
 *     UsbhSyncResumePort @ 0x1C0048790 (UsbhSyncResumePort.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C0048C88 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C0048E14 (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C0048FC4 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C00494D0 (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C004972C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoSetD0Warm @ 0x1C004A2EC (UsbhFdoSetD0Warm.c)
 *     UsbhResetNotifyCompletion @ 0x1C004B31C (UsbhResetNotifyCompletion.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C004D1BC (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004D894 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C004DBAC (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C004E424 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhDriverNotFoundWorker @ 0x1C004F710 (UsbhDriverNotFoundWorker.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C005034C (UsbhResetNotifyDownstreamHub.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C005269C (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C0052938 (UsbhGetHubNodeInfo.c)
 *     UsbhWmiDoNothing @ 0x1C00533A0 (UsbhWmiDoNothing.c)
 *     UsbhWmiEnumerationFailure @ 0x1C0053410 (UsbhWmiEnumerationFailure.c)
 *     UsbhWmiInsufficentBandwidth @ 0x1C0053490 (UsbhWmiInsufficentBandwidth.c)
 *     UsbhWmiInsufficentPower @ 0x1C0053510 (UsbhWmiInsufficentPower.c)
 *     UsbhNotEnoughBandwidth_Popup @ 0x1C0054280 (UsbhNotEnoughBandwidth_Popup.c)
 *     UsbhNotEnoughPowerPopup @ 0x1C0054310 (UsbhNotEnoughPowerPopup.c)
 *     UsbhResetPortData @ 0x1C005A1EC (UsbhResetPortData.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
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
