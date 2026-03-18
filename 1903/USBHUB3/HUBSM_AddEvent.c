/*
 * XREFs of HUBSM_AddEvent @ 0x1C000A734
 * Callers:
 *     HUBHTX_HubControlTransferComplete @ 0x1C0002CF0 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_GetHubDescriptorUsingControlTransfer @ 0x1C0002FA8 (HUBHTX_GetHubDescriptorUsingControlTransfer.c)
 *     HUBHTX_GetHubStatusUsingControlTransfer @ 0x1C0003240 (HUBHTX_GetHubStatusUsingControlTransfer.c)
 *     HUBHTX_SendInterruptTransfer @ 0x1C0003364 (HUBHTX_SendInterruptTransfer.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x1C0003670 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x1C0005BB0 (HUBHTX_GetRequestedPortStatusUsingControlTransfer.c)
 *     HUBPARENT_SetHubConfigurationComplete @ 0x1C0006AD0 (HUBPARENT_SetHubConfigurationComplete.c)
 *     HUBPARENT_SetHubConfiguration @ 0x1C0006C58 (HUBPARENT_SetHubConfiguration.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x1C0007180 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBPARENT_ResetInterruptPipe @ 0x1C0007300 (HUBPARENT_ResetInterruptPipe.c)
 *     HUBPARENT_ResetHubComplete @ 0x1C00074C0 (HUBPARENT_ResetHubComplete.c)
 *     HUBPARENT_ResetHub @ 0x1C00075F0 (HUBPARENT_ResetHub.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x1C0007860 (HUBPARENT_GetInfoFromParentUsingParentIoctlComplete.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1C0007A1C (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 *     HUBHSM_QueueingPortStatusChangeEvents @ 0x1C00084A0 (HUBHSM_QueueingPortStatusChangeEvents.c)
 *     HUBHSM_SendingAckForHubChange @ 0x1C0008690 (HUBHSM_SendingAckForHubChange.c)
 *     HUBHSM_WaitingForPortsToReleaseReferenceOnSuspend @ 0x1C0008B90 (HUBHSM_WaitingForPortsToReleaseReferenceOnSuspend.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength @ 0x1C0008C90 (HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength @ 0x1C0008DD0 (HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength.c)
 *     HUBHSM_GettingHubStatus @ 0x1C0008F30 (HUBHSM_GettingHubStatus.c)
 *     HUBHSM_SettingHubDepth @ 0x1C00093C0 (HUBHSM_SettingHubDepth.c)
 *     HUBSM_AddHsmEvent @ 0x1C0009798 (HUBSM_AddHsmEvent.c)
 *     HUBSM_AddPsm20Event @ 0x1C00097C0 (HUBSM_AddPsm20Event.c)
 *     HUBSM_AddDsmEvent @ 0x1C00097E0 (HUBSM_AddDsmEvent.c)
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000B820 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_EvtDeviceD0Exit @ 0x1C000BBF0 (HUBFDO_EvtDeviceD0Exit.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x1C000BFA0 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBFDO_EvtIoInternalDeviceControlFromPDO @ 0x1C000C4E0 (HUBFDO_EvtIoInternalDeviceControlFromPDO.c)
 *     HUBMUX_QueuePowerUpEventToPSMs @ 0x1C000EB54 (HUBMUX_QueuePowerUpEventToPSMs.c)
 *     HUBMUX_QueueStopToAllPSMs @ 0x1C000EC28 (HUBMUX_QueueStopToAllPSMs.c)
 *     HUBMUX_AcquirePortPowerReference @ 0x1C000ECC4 (HUBMUX_AcquirePortPowerReference.c)
 *     HUBMUX_ReleasePortPowerReference @ 0x1C000ED10 (HUBMUX_ReleasePortPowerReference.c)
 *     HUBMUX_ReleaseResetReference @ 0x1C000EDAC (HUBMUX_ReleaseResetReference.c)
 *     HUBMUX_ReEnableInterruptTransfer @ 0x1C000EED8 (HUBMUX_ReEnableInterruptTransfer.c)
 *     HUBMUX_ReleaseInterruptReference @ 0x1C000EF74 (HUBMUX_ReleaseInterruptReference.c)
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C000F178 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 *     HUBMUX_QueuePowerDownEventToDSMs @ 0x1C000F1F8 (HUBMUX_QueuePowerDownEventToDSMs.c)
 *     HUBMUX_QueueStopAfterSuspendToAllDSMs @ 0x1C000F42C (HUBMUX_QueueStopAfterSuspendToAllDSMs.c)
 *     HUBMUX_QueuePowerUpEventToDSMs @ 0x1C000F698 (HUBMUX_QueuePowerUpEventToDSMs.c)
 *     HUBMUX_UnregisterWithHSM @ 0x1C000F8B8 (HUBMUX_UnregisterWithHSM.c)
 *     HUBMUX_AcquireDevicePowerReference @ 0x1C000FA24 (HUBMUX_AcquireDevicePowerReference.c)
 *     HUBMUX_ReleaseDevicePowerReference @ 0x1C000FAB0 (HUBMUX_ReleaseDevicePowerReference.c)
 *     HUBMUX_AckStopAfterSuspend @ 0x1C000FB3C (HUBMUX_AckStopAfterSuspend.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C0013D40 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C0016040 (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess @ 0x1C00163BC (HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0016580 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C0017830 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0017A20 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C0017E20 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_PowerSettingCallback @ 0x1C0018980 (HUBPDO_PowerSettingCallback.c)
 *     HUBPDO_NoPingResponse @ 0x1C00199F0 (HUBPDO_NoPingResponse.c)
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x1C001C7A0 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x1C001C940 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_SendingGetDeviceDescriptorRequestForExemptSecureBioDevice @ 0x1C001DBE0 (HUBDSM_SendingGetDeviceDescriptorRequestForExemptSecureBioDevice.c)
 *     HUBDSM_GettingLanguageIdStringDescriptor @ 0x1C001DD70 (HUBDSM_GettingLanguageIdStringDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdDescriptor @ 0x1C001E080 (HUBDSM_GettingMSOSContainerIdDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdHeaderDescriptor @ 0x1C001E120 (HUBDSM_GettingMSOSContainerIdHeaderDescriptor.c)
 *     HUBDSM_GettingMSOSDescriptor @ 0x1C001E1C0 (HUBDSM_GettingMSOSDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptor @ 0x1C001E260 (HUBDSM_GettingMSOSExtendedDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptorHeader @ 0x1C001E360 (HUBDSM_GettingMSOSExtendedDescriptorHeader.c)
 *     HUBDSM_GetMsOs20DescriptorSet @ 0x1C001EF10 (HUBDSM_GetMsOs20DescriptorSet.c)
 *     HUBDSM_GettingAlternateModeStringDescriptor @ 0x1C001F090 (HUBDSM_GettingAlternateModeStringDescriptor.c)
 *     HUBDSM_GettingBillboardStringDescriptor @ 0x1C001F150 (HUBDSM_GettingBillboardStringDescriptor.c)
 *     HUBDSM_SendingDisallowFirmwareUpdateCommand @ 0x1C001F230 (HUBDSM_SendingDisallowFirmwareUpdateCommand.c)
 *     HUBDSM_SendingFirmwareImageHashQuery @ 0x1C001F300 (HUBDSM_SendingFirmwareImageHashQuery.c)
 *     HUBDSM_SendingUsbFeaturesVendorCmd @ 0x1C001F3D0 (HUBDSM_SendingUsbFeaturesVendorCmd.c)
 *     HUBDSM_GettingDeviceQualifierDescriptor @ 0x1C001F990 (HUBDSM_GettingDeviceQualifierDescriptor.c)
 *     HUBDSM_ConfiguringDevice @ 0x1C0020320 (HUBDSM_ConfiguringDevice.c)
 *     HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration @ 0x1C0020420 (HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration.c)
 *     HUBDSM_ArmingDeviceForWake @ 0x1C00209B0 (HUBDSM_ArmingDeviceForWake.c)
 *     HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure @ 0x1C0020BD0 (HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptor @ 0x1C0021050 (HUBDSM_GettingMSOSExtendedPropertyDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader @ 0x1C00210F0 (HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader.c)
 *     HUBDSM_EnablingLTM @ 0x1C0021410 (HUBDSM_EnablingLTM.c)
 *     HUBDSM_SetttingIsochDelay @ 0x1C0021500 (HUBDSM_SetttingIsochDelay.c)
 *     HUBDSM_DisablingU1 @ 0x1C0021880 (HUBDSM_DisablingU1.c)
 *     HUBDSM_DisablingU2 @ 0x1C00219A0 (HUBDSM_DisablingU2.c)
 *     HUBDSM_EnablingU1 @ 0x1C0021A70 (HUBDSM_EnablingU1.c)
 *     HUBDSM_EnablingU2 @ 0x1C0021B40 (HUBDSM_EnablingU2.c)
 *     HUBDSM_GettingRemoteWakeCapability @ 0x1C0021DC0 (HUBDSM_GettingRemoteWakeCapability.c)
 *     HUBUCX_EvtResetActionCompletion @ 0x1C0021FC0 (HUBUCX_EvtResetActionCompletion.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C0022060 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C002292C (HUBUCX_SubmitUcxIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C0022E24 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C0023634 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctlComplete @ 0x1C0023DB0 (HUBUCX_GetRootHubInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C0023E94 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete @ 0x1C00240C0 (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1C0024164 (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete @ 0x1C0024570 (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl @ 0x1C0024614 (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x1C0024A40 (HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctlComplete @ 0x1C0024D20 (HUBUCX_UpdateHubInformationUsingUCXIoctlComplete.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x1C0024E14 (HUBUCX_UpdateHubInformationUsingUCXIoctl.c)
 *     HUBUCX_ClientRequestCompleteFromUCX @ 0x1C00256F0 (HUBUCX_ClientRequestCompleteFromUCX.c)
 *     HUBUCX_ForwardRequestToUCX @ 0x1C0025738 (HUBUCX_ForwardRequestToUCX.c)
 *     HUBDTX_ControlTransferComplete @ 0x1C0025CF0 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x1C0026C2C (HUBDTX_DisarmDeviceForWakeUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer @ 0x1C0026DA8 (HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer @ 0x1C0026E68 (HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer.c)
 *     HUBDTX_GetDeviceDescriptorUsingControlTransfer @ 0x1C0026F6C (HUBDTX_GetDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer @ 0x1C0026FF8 (HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x1C0027084 (HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorUsingControlTransfer @ 0x1C0027168 (HUBDTX_GetBOSDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x1C0027930 (HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer.c)
 *     HUBDTX_GetProductIdStringDescriptorUsingControlTransfer @ 0x1C0027A34 (HUBDTX_GetProductIdStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer @ 0x1C0027B10 (HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x1C0027BAC (HUBDTX_SetDeviceInterfaceUsingControlTransfer.c)
 *     HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x1C0027CC0 (HUBDTX_SetDeviceNullConfigurationUsingControlTransfer.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C002896C (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_SetSelUsingControlTransfer @ 0x1C002951C (HUBDTX_SetSelUsingControlTransfer.c)
 *     HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x1C002979C (HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer.c)
 *     HUBDTX_GetDeviceDescriptorComplete @ 0x1C0029880 (HUBDTX_GetDeviceDescriptorComplete.c)
 *     HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x1C00299B4 (HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb.c)
 *     HUBMISC_HubEventTimer @ 0x1C002A8A0 (HUBMISC_HubEventTimer.c)
 *     HUBMISC_DsmEventTimer @ 0x1C002A8C0 (HUBMISC_DsmEventTimer.c)
 *     HUBMISC_AttachDevice @ 0x1C002CE5C (HUBMISC_AttachDevice.c)
 *     HUBMISC_DetachDevice @ 0x1C002CED8 (HUBMISC_DetachDevice.c)
 *     HUBMISC_ReAttachDevice @ 0x1C002CF30 (HUBMISC_ReAttachDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C0009F14 (HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     HUBSM_RunStateMachine @ 0x1C000AB88 (HUBSM_RunStateMachine.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBSM_AddEvent(__int64 a1, int a2)
{
  KSPIN_LOCK *v2; // r15
  KIRQL v5; // al
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int8 v8; // cl
  char v9; // r10
  char v10; // al
  unsigned __int8 i; // dl
  int v12; // r9d
  __int64 v13; // rax
  char v14; // dl
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  KIRQL v19; // [rsp+58h] [rbp+10h] BYREF

  v2 = (KSPIN_LOCK *)(a1 + 840);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
  v6 = *(unsigned __int8 *)(a1 + 833);
  LOBYTE(v7) = v5;
  v19 = v5;
  *(_DWORD *)(a1 + 4 * v6 + 768) = a2;
  *(_BYTE *)(a1 + 833) = (*(_BYTE *)(a1 + 833) + 1) & 0xF;
  if ( a2 == 3039 || a2 == 3043 || a2 == 4055 || a2 == 4059 )
  {
    v8 = *(_BYTE *)(a1 + 948);
    v9 = 0;
    v10 = *(_BYTE *)(a1 + 949);
    for ( i = v8; i != v10; i = (i + 1) & 0xF )
    {
      v12 = *(_DWORD *)(a1 + 4LL * i + 884);
      if ( v12 == a2 )
      {
        v9 = 1;
      }
      else
      {
        v13 = v8;
        v8 = (v8 + 1) & 0xF;
        *(_DWORD *)(a1 + 4 * v13 + 884) = v12;
      }
      v10 = *(_BYTE *)(a1 + 949);
    }
    v14 = v8;
    if ( v8 != v10 )
    {
      do
      {
        v15 = v14 & 0xF;
        v14 = (v14 + 1) & 0xF;
        *(_DWORD *)(a1 + 4 * v15 + 884) = 1000;
      }
      while ( v14 != *(_BYTE *)(a1 + 949) );
    }
    *(_BYTE *)(a1 + 949) = v8;
    if ( v9 )
    {
      KeReleaseSpinLock(v2, v7);
      LOBYTE(v7) = KeAcquireSpinLockRaiseToDpc(v2);
      v19 = v7;
    }
  }
  if ( *(_BYTE *)(a1 + 1048) )
  {
    if ( a2 == 1002 )
    {
      *(_BYTE *)(a1 + 1048) = 0;
      v16 = (unsigned int)HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(a1);
LABEL_20:
      HUBSM_RunStateMachine(a1, v16, &v19, 0LL);
      LOBYTE(v7) = v19;
      goto LABEL_21;
    }
    *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 949) + 884) = a2;
    *(_BYTE *)(a1 + 949) = (*(_BYTE *)(a1 + 949) + 1) & 0xF;
  }
  else
  {
    *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 949) + 884) = a2;
    *(_BYTE *)(a1 + 949) = (*(_BYTE *)(a1 + 949) + 1) & 0xF;
    if ( !*(_BYTE *)(a1 + 848) )
    {
      v17 = *(_QWORD *)(a1 + 960);
      *(_BYTE *)(a1 + 848) = 1;
      v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              v17,
              v7);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v18,
        "State Machine Tag",
        1154LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      v16 = 1000LL;
      goto LABEL_20;
    }
  }
LABEL_21:
  KeReleaseSpinLock(v2, v7);
}
