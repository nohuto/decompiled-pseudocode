/*
 * XREFs of RaidCompleteRequestEx @ 0x1C000A830
 * Callers:
 *     RaUnitStoragePowerIdle @ 0x1C00017B8 (RaUnitStoragePowerIdle.c)
 *     RaUnitStoragePowerActive @ 0x1C0001844 (RaUnitStoragePowerActive.c)
 *     RaUnitStartIo @ 0x1C00035B0 (RaUnitStartIo.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0005D68 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000610C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitPnpIrp @ 0x1C0006AE0 (RaUnitPnpIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C0006D64 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0007604 (RaUnitDeviceControlIrp.c)
 *     RaUnitScsiIrp @ 0x1C0007D30 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C00081C0 (RaidStartIoPacket.c)
 *     RaidUnitCompleteRequest @ 0x1C0009540 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000B704 (RaUnitAsyncError.c)
 *     RaidHandleCreateCloseIrp @ 0x1C000F970 (RaidHandleCreateCloseIrp.c)
 *     RaUnitPowerIrp @ 0x1C0010288 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C001036C (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C0010424 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0010828 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0010EBC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0011538 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0011E50 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0011F00 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0011FB0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C00121C0 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C0012660 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00128A0 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0015F54 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0016380 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterPowerIrp @ 0x1C0016F48 (RaidAdapterPowerIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017624 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C00186D0 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0019D3C (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C001E3E8 (RaidAdapterCheckWaitTimeout.c)
 *     RaidCompleteWmiIrp @ 0x1C001EC14 (RaidCompleteWmiIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C001F2D4 (RaidAdapterQueryInterfaceIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C001F3EC (RaUnitQueryInterfaceIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C001FD4C (RaUnitTelemetryIdIoctl.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00218DC (RaUnitRemoveDeviceIrp.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0021978 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitClaimDeviceSrb @ 0x1C00220F4 (RaUnitClaimDeviceSrb.c)
 *     RaUnitStreamsIoctl @ 0x1C002261C (RaUnitStreamsIoctl.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C00329BC (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0032A4C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0033B58 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0033C50 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0033E08 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C003408C (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C00341C0 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C00344AC (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterRpmbRequest @ 0x1C0034EA8 (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetAddressIoctl @ 0x1C0035190 (RaidAdapterScsiGetAddressIoctl.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C00351E8 (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0035260 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C0035FF8 (RaidAdapterSetBootLunIoctl.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0036138 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidAdapterStorageSetPropertyIoctl @ 0x1C00361E8 (RaidAdapterStorageSetPropertyIoctl.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0037820 (StorASyncScsiPassThroughCompletion.c)
 *     StorExtCompleteServiceIrp @ 0x1C003ACC0 (StorExtCompleteServiceIrp.c)
 *     StorpCompleteServiceIrp @ 0x1C003C794 (StorpCompleteServiceIrp.c)
 *     RaidCancelIrp @ 0x1C0042FB4 (RaidCancelIrp.c)
 *     RaUnitAttributeManagement @ 0x1C0043C98 (RaUnitAttributeManagement.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0044408 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C004446C (RaUnitFlushQueueSrb.c)
 *     RaUnitGetQOSIoctl @ 0x1C00445E0 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C00446F0 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C0044764 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C00447D8 (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C0044880 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C004494C (RaUnitReleaseDeviceSrb.c)
 *     RaUnitSetQOSIoctl @ 0x1C0044A88 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0044F88 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1C0045170 (RaUnitSmartDataIoctl.c)
 *     RaUnitStartResetIo @ 0x1C0045A1C (RaUnitStartResetIo.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1C0045EF0 (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C0046054 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C00461A4 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0046364 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1C0046504 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageSetPropertyIoctl @ 0x1C004665C (RaUnitStorageSetPropertyIoctl.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00470E0 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0047760 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C0047DE0 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0048B18 (RaidUnitSubmitResetRequest.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C006A1D4 (RaUnitQueryDeviceRelationsIrp.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C006A274 (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C006A38C (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C006A660 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C006B2DC (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C006B340 (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006B8E4 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C006BC14 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitQueryIdIrp @ 0x1C006C338 (RaUnitQueryIdIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C006C448 (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C006C970 (RaUnitStartDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006D154 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C006E264 (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaWmiDispatchIrp @ 0x1C006E524 (RaWmiDispatchIrp.c)
 *     RaUnitIgnorePnpIrp @ 0x1C006EE80 (RaUnitIgnorePnpIrp.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C006F178 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C006F31C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C006F4F0 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 *     RaUnitSucceedPnpIrp @ 0x1C006FBEC (RaUnitSucceedPnpIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C007224C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterPassThrough @ 0x1C0072F94 (RaidAdapterPassThrough.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00733FC (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterScsiIrp @ 0x1C00734C0 (RaidAdapterScsiIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C00740F8 (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitQueryRemoveDeviceIrp @ 0x1C0074128 (RaUnitQueryRemoveDeviceIrp.c)
 *     RaUnitQueryStopDeviceIrp @ 0x1C0074174 (RaUnitQueryStopDeviceIrp.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C00741AC (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStopDeviceIrp @ 0x1C00742CC (RaUnitStopDeviceIrp.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C00742F8 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C00743C8 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C00744CC (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C0074674 (RaUnitStorageGetIdlePowerUpReason.c)
 *     RaUnitUnknownSrb @ 0x1C00746EC (RaUnitUnknownSrb.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001EB08 (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     McTemplateK0pd @ 0x1C0031DD4 (McTemplateK0pd.c)
 *     McTemplateK0pduuuuup @ 0x1C0031F6C (McTemplateK0pduuuuup.c)
 *     McTemplateK0pqd @ 0x1C0032044 (McTemplateK0pqd.c)
 */

__int64 __fastcall RaidCompleteRequestEx(PIRP Irp, CCHAR a2, unsigned int a3)
{
  bool v3; // zf
  int v7; // edx
  int v8; // r10d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // al
  _DWORD *Information; // rbp
  char v13; // bp
  unsigned __int8 v14; // r13
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  char Flags; // r11
  char LowPart_high; // r12
  char SecurityQos; // r15
  unsigned __int8 v19; // al
  char *SrbScsiData; // rax
  char v21; // r9
  _ACCESS_STATE *AccessState; // rdx
  unsigned __int8 v23; // r8
  unsigned int v24; // ecx
  char v25; // r14
  char v26; // r9
  unsigned __int8 *v27; // rcx
  unsigned __int8 *p_SecurityEvaluated; // rax
  unsigned int v29; // ecx
  __int64 v30; // rax
  bool v31; // cc
  char *v32; // r8
  char v33; // al
  int v34; // ecx
  char v35; // [rsp+60h] [rbp-68h] BYREF
  char v36[3]; // [rsp+61h] [rbp-67h] BYREF
  int v37; // [rsp+64h] [rbp-64h]
  unsigned int FullCreateOptions; // [rsp+68h] [rbp-60h]
  _ACCESS_STATE *v39; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v40[2]; // [rsp+78h] [rbp-50h] BYREF

  v3 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  Irp->IoStatus.Status = a3;
  if ( v3 )
    goto LABEL_4;
  v40[0] = 0LL;
  v40[1] = 0LL;
  IoGetActivityIdIrp(Irp, v40);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction == 15 )
  {
    if ( (byte_1C0061742 & 1) != 0 )
    {
      v13 = 0;
      LOBYTE(v8) = 0;
      v14 = 0;
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      Flags = 0;
      LowPart_high = 0;
      SecurityQos = 0;
      v39 = 0LL;
      v35 = 0;
      v19 = BYTE2(SecurityContext->SecurityQos);
      v36[0] = 0;
      v37 = v8;
      if ( v19 == 40 )
      {
        FullCreateOptions = SecurityContext->FullCreateOptions;
        SrbScsiData = (char *)GetSrbScsiData(
                                (_DWORD)SecurityContext,
                                0,
                                0,
                                (unsigned int)&v35,
                                (__int64)&v39,
                                (__int64)v36);
        v21 = v35;
        Flags = 0;
        AccessState = v39;
        v23 = v36[0];
        LOBYTE(v8) = v37;
        v24 = FullCreateOptions;
        if ( SrbScsiData )
          SecurityQos = *SrbScsiData;
      }
      else
      {
        v21 = BYTE4(SecurityContext->SecurityQos);
        SecurityQos = (char)SecurityContext[3].SecurityQos;
        AccessState = SecurityContext[1].AccessState;
        v23 = BYTE3(SecurityContext->AccessState);
        v35 = v21;
        v24 = v19;
      }
      if ( !v24 && ((SecurityQos - 8) & 0x5D) == 0 )
      {
        v25 = BYTE3(SecurityContext->SecurityQos);
        if ( v25 == 1 || !AccessState || !v23 )
        {
LABEL_41:
          if ( (byte_1C0061742 & 1) != 0 )
          {
            if ( (_BYTE)v8 )
            {
              v13 = LowPart_high;
              v33 = Flags;
              v34 = v14;
            }
            else
            {
              v33 = 0;
              v34 = 0;
            }
            McTemplateK0pduuuuup(
              v34,
              (_DWORD)AccessState,
              (unsigned int)v40,
              (_DWORD)Irp,
              Irp->IoStatus.Status,
              v25,
              v21,
              v34,
              v33,
              v13,
              (char)Irp);
          }
          goto LABEL_4;
        }
        v26 = 0;
        v27 = (unsigned __int8 *)AccessState + v23;
        p_SecurityEvaluated = &AccessState->SecurityEvaluated;
        if ( (unsigned __int8)((AccessState->OperationID.LowPart & 0x7F) - 114) <= 1u )
        {
          if ( p_SecurityEvaluated > v27 )
            goto LABEL_39;
          Flags = BYTE2(AccessState->OperationID.LowPart);
          v14 = BYTE1(AccessState->OperationID.LowPart) & 0xF;
          LowPart_high = HIBYTE(AccessState->OperationID.LowPart);
        }
        else
        {
          if ( p_SecurityEvaluated > v27 )
            goto LABEL_39;
          v29 = HIBYTE(AccessState->OperationID.HighPart) + 8;
          v30 = v23;
          v14 = BYTE2(AccessState->OperationID.LowPart) & 0xF;
          v31 = v29 <= v23;
          v32 = (char *)&AccessState->Flags + 1;
          if ( v31 )
            v30 = v29;
          if ( v32 > (char *)AccessState + v30 )
            Flags = 0;
          else
            Flags = AccessState->Flags;
          if ( (char *)&AccessState->Flags + 2 > (char *)AccessState + (unsigned int)v30 )
            LowPart_high = 0;
          else
            LowPart_high = *v32;
        }
        v26 = 1;
LABEL_39:
        v3 = v26 == 0;
        v21 = v35;
        if ( !v3 )
          LOBYTE(v8) = 1;
        goto LABEL_41;
      }
    }
  }
  else if ( MajorFunction == 14 )
  {
    if ( (byte_1C0061742 & 0x10) != 0 )
      McTemplateK0pd(CurrentStackLocation, &EventNonReadWriteRequestComplete, v40, Irp, Irp->IoStatus.Status);
  }
  else if ( MajorFunction == 27 )
  {
    if ( CurrentStackLocation->MinorFunction != 7 || CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_1C0061742 & 0x20) != 0 )
        McTemplateK0pd(CurrentStackLocation, &EventPnpRequestComplete, v40, Irp, Irp->IoStatus.Status);
    }
    else if ( (byte_1C0061742 & 0x40) != 0 )
    {
      Information = (_DWORD *)Irp->IoStatus.Information;
      if ( Information )
        LODWORD(Information) = *Information;
      McTemplateK0pqd(
        (_DWORD)CurrentStackLocation,
        v7,
        (unsigned int)v40,
        (_DWORD)Irp,
        (char)Information,
        Irp->IoStatus.Status);
    }
  }
LABEL_4:
  IofCompleteRequest(Irp, a2);
  return a3;
}
