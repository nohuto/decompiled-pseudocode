/*
 * XREFs of RaidCompleteRequestEx @ 0x1C000CF10
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0003014 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitStartIo @ 0x1C0003430 (RaUnitStartIo.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0007610 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007ACC (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitPnpIrp @ 0x1C00082C0 (RaUnitPnpIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0008FE4 (RaUnitDeviceControlIrp.c)
 *     RaUnitScsiIrp @ 0x1C00097A0 (RaUnitScsiIrp.c)
 *     RaidUnitCompleteRequest @ 0x1C000B940 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000D9D4 (RaUnitAsyncError.c)
 *     RaidHandleCreateCloseIrp @ 0x1C00107C4 (RaidHandleCreateCloseIrp.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001221C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitPowerIrp @ 0x1C00123F0 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C00124D4 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C001258C (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0012980 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C00139D0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0013A80 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0013B30 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterPowerIrp @ 0x1C0013F68 (RaidAdapterPowerIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00149DC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0015664 (RaidUnitProcessBusyRequest.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0015ACC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C001652C (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C0016E3C (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C0016FAC (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0017234 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C001B7F8 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C0020EF8 (RaidAdapterCheckWaitTimeout.c)
 *     RaUnitStreamsIoctl @ 0x1C00216B4 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0021834 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidCompleteWmiIrp @ 0x1C002242C (RaidCompleteWmiIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C002290C (RaidAdapterQueryInterfaceIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C0022A24 (RaUnitQueryInterfaceIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C00236F4 (RaUnitTelemetryIdIoctl.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00252E0 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C002537C (RaUnitDeleteDeviceIrp.c)
 *     RaUnitClaimDeviceSrb @ 0x1C00255A4 (RaUnitClaimDeviceSrb.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0025D70 (StorASyncScsiPassThroughCompletion.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C0036DEC (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0036E7C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0037F70 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0038068 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0038220 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C00384A4 (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C00385D8 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C00388CC (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterRpmbRequest @ 0x1C003928C (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetAddressIoctl @ 0x1C0039568 (RaidAdapterScsiGetAddressIoctl.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C00395C0 (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0039638 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C003A35C (RaidAdapterSetBootLunIoctl.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C003A4A0 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidCompleteRequest @ 0x1C003A710 (RaidCompleteRequest.c)
 *     StorExtCompleteServiceIrp @ 0x1C003E590 (StorExtCompleteServiceIrp.c)
 *     StorpCompleteServiceIrp @ 0x1C003FF44 (StorpCompleteServiceIrp.c)
 *     RaidCancelIrp @ 0x1C0045D1C (RaidCancelIrp.c)
 *     RaUnitAttributeManagement @ 0x1C00467D0 (RaUnitAttributeManagement.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0046F98 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C0047024 (RaUnitFlushQueueSrb.c)
 *     RaUnitGetQOSIoctl @ 0x1C0047198 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C00472AC (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C0047320 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C0047394 (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C004743C (RaUnitProtocolCommandIoctl.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C0047508 (RaUnitReleaseDeviceSrb.c)
 *     RaUnitSetQOSIoctl @ 0x1C0047670 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0047BBC (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1C0047E5C (RaUnitSmartDataIoctl.c)
 *     RaUnitStartResetIo @ 0x1C00486F4 (RaUnitStartResetIo.c)
 *     RaUnitStoragePowerActive @ 0x1C0048A14 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C0048AA0 (RaUnitStoragePowerIdle.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C0048B2C (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C0048C7C (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0048E44 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0049A50 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C004A230 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C004A570 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004B2D0 (RaidUnitSubmitResetRequest.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C006A084 (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C006A270 (RaUnitQueryDeviceRelationsIrp.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C006A310 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C006A61C (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C006A980 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C006A9D0 (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006AF84 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C006B2B0 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitStartDeviceIrp @ 0x1C006D6C8 (RaUnitStartDeviceIrp.c)
 *     RaUnitQueryIdIrp @ 0x1C006DE84 (RaUnitQueryIdIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C006DF9C (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006E2BC (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C006EEC4 (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaidAdapterPassThrough @ 0x1C006F078 (RaidAdapterPassThrough.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C006F48C (RaUnitScsiPassThroughIoctl.c)
 *     RaWmiDispatchIrp @ 0x1C006FC94 (RaWmiDispatchIrp.c)
 *     RaUnitIgnorePnpIrp @ 0x1C00706D4 (RaUnitIgnorePnpIrp.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0070970 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0070B50 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C0070D24 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 *     RaUnitSucceedPnpIrp @ 0x1C0070DB8 (RaUnitSucceedPnpIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0072E30 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0073F5C (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterScsiIrp @ 0x1C0074020 (RaidAdapterScsiIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C0074BF8 (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitQueryRemoveDeviceIrp @ 0x1C0074C28 (RaUnitQueryRemoveDeviceIrp.c)
 *     RaUnitQueryStopDeviceIrp @ 0x1C0074C74 (RaUnitQueryStopDeviceIrp.c)
 *     RaUnitStopDeviceIrp @ 0x1C0074CAC (RaUnitStopDeviceIrp.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C0074CD8 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0074DA8 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C0074E54 (RaUnitStorageFreeDumpInfoIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0075098 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C00753EC (RaUnitStorageGetIdlePowerUpReason.c)
 *     RaUnitUnknownSrb @ 0x1C0075454 (RaUnitUnknownSrb.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0021E90 (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     McTemplateK0pd @ 0x1C0036554 (McTemplateK0pd.c)
 *     McTemplateK0pduuuuup @ 0x1C00366EC (McTemplateK0pduuuuup.c)
 *     McTemplateK0pqd @ 0x1C00367C4 (McTemplateK0pqd.c)
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
    if ( byte_1C00617E1 < 0 )
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
          if ( byte_1C00617E1 < 0 )
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
    if ( (byte_1C00617E2 & 8) != 0 )
      McTemplateK0pd(CurrentStackLocation, &EventNonReadWriteRequestComplete, v40, Irp, Irp->IoStatus.Status);
  }
  else if ( MajorFunction == 27 )
  {
    if ( CurrentStackLocation->MinorFunction != 7 || CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_1C00617E2 & 0x20) != 0 )
        McTemplateK0pd(CurrentStackLocation, &EventPnpRequestComplete, v40, Irp, Irp->IoStatus.Status);
    }
    else if ( (byte_1C00617E2 & 0x40) != 0 )
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
