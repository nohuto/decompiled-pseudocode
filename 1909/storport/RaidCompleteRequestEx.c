/*
 * XREFs of RaidCompleteRequestEx @ 0x1C000A880
 * Callers:
 *     RaUnitStoragePowerIdle @ 0x1C00019D4 (RaUnitStoragePowerIdle.c)
 *     RaUnitStoragePowerActive @ 0x1C0001A60 (RaUnitStoragePowerActive.c)
 *     RaUnitStartIo @ 0x1C00035A0 (RaUnitStartIo.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0005DB8 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000615C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitPnpIrp @ 0x1C0006B30 (RaUnitPnpIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C0006DB4 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0007654 (RaUnitDeviceControlIrp.c)
 *     RaUnitScsiIrp @ 0x1C0007D80 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C0008210 (RaidStartIoPacket.c)
 *     RaidUnitCompleteRequest @ 0x1C0009590 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000B754 (RaUnitAsyncError.c)
 *     RaidHandleCreateCloseIrp @ 0x1C000F6A0 (RaidHandleCreateCloseIrp.c)
 *     RaUnitPowerIrp @ 0x1C0010428 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C001050C (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C00105C4 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00109C8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001105C (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidUnitProcessBusyRequest @ 0x1C00116D8 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0011FF0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C00120A0 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0012150 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterPnpIrp @ 0x1C00126FC (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001293C (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0015F78 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0016284 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0016E98 (RaidAdapterPowerIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017634 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C0018268 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0018860 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C001C234 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C001F238 (RaidAdapterCheckWaitTimeout.c)
 *     RaidCompleteWmiIrp @ 0x1C001FA64 (RaidCompleteWmiIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C001FCB4 (RaidAdapterQueryInterfaceIrp.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C001FDCC (RaUnitQueryInterfaceIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C0020700 (RaUnitTelemetryIdIoctl.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C0021A74 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0021B10 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitClaimDeviceSrb @ 0x1C0022608 (RaUnitClaimDeviceSrb.c)
 *     RaUnitStreamsIoctl @ 0x1C002274C (RaUnitStreamsIoctl.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C0033DAC (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0033E3C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0034F48 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0035040 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C00351F8 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C003547C (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C00355B0 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C003589C (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterRpmbRequest @ 0x1C0036298 (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetAddressIoctl @ 0x1C0036580 (RaidAdapterScsiGetAddressIoctl.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C00365D8 (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0036650 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C00373F0 (RaidAdapterSetBootLunIoctl.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0037530 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidAdapterStorageSetPropertyIoctl @ 0x1C00375E0 (RaidAdapterStorageSetPropertyIoctl.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0038C10 (StorASyncScsiPassThroughCompletion.c)
 *     StorExtCompleteServiceIrp @ 0x1C003C0B0 (StorExtCompleteServiceIrp.c)
 *     StorpCompleteServiceIrp @ 0x1C003DB84 (StorpCompleteServiceIrp.c)
 *     RaidCancelIrp @ 0x1C00443A4 (RaidCancelIrp.c)
 *     RaUnitAttributeManagement @ 0x1C0045088 (RaUnitAttributeManagement.c)
 *     RaUnitDisableDeviceIrp @ 0x1C00457F8 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C004585C (RaUnitFlushQueueSrb.c)
 *     RaUnitGetQOSIoctl @ 0x1C00459D0 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C0045AE0 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C0045B54 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C0045BC8 (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C0045C70 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitReleaseDeviceSrb @ 0x1C0045D3C (RaUnitReleaseDeviceSrb.c)
 *     RaUnitSetQOSIoctl @ 0x1C0045E78 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0046378 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1C0046560 (RaUnitSmartDataIoctl.c)
 *     RaUnitStartResetIo @ 0x1C0046E0C (RaUnitStartResetIo.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1C00472E0 (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C0047444 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C0047594 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0047754 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1C00478F4 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageSetPropertyIoctl @ 0x1C0047A4C (RaUnitStorageSetPropertyIoctl.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0048580 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0048C00 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C0048F50 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0049C88 (RaidUnitSubmitResetRequest.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C006B0DC (RaUnitQueryDeviceRelationsIrp.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C006B17C (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C006B294 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C006B568 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C006C1DC (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C006C240 (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006C7E4 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C006CB14 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitStartDeviceIrp @ 0x1C006CC50 (RaUnitStartDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006D74C (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitQueryIdIrp @ 0x1C006E9D0 (RaUnitQueryIdIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C006EAE0 (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C006F4C4 (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaWmiDispatchIrp @ 0x1C006F784 (RaWmiDispatchIrp.c)
 *     RaUnitIgnorePnpIrp @ 0x1C006FF8C (RaUnitIgnorePnpIrp.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0070284 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C007035C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C0070530 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 *     RaUnitSucceedPnpIrp @ 0x1C0070A78 (RaUnitSucceedPnpIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0073120 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterPassThrough @ 0x1C0073E68 (RaidAdapterPassThrough.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00742D0 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterScsiIrp @ 0x1C0074394 (RaidAdapterScsiIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C0074FC8 (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitQueryRemoveDeviceIrp @ 0x1C0074FF8 (RaUnitQueryRemoveDeviceIrp.c)
 *     RaUnitQueryStopDeviceIrp @ 0x1C0075044 (RaUnitQueryStopDeviceIrp.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C007507C (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStopDeviceIrp @ 0x1C007519C (RaUnitStopDeviceIrp.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C00751C8 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0075298 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C007539C (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C0075544 (RaUnitStorageGetIdlePowerUpReason.c)
 *     RaUnitUnknownSrb @ 0x1C00755BC (RaUnitUnknownSrb.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001F958 (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     McTemplateK0pd @ 0x1C00331C4 (McTemplateK0pd.c)
 *     McTemplateK0pduuuuup @ 0x1C003335C (McTemplateK0pduuuuup.c)
 *     McTemplateK0pqd @ 0x1C0033434 (McTemplateK0pqd.c)
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
    if ( (byte_1C0062742 & 1) != 0 )
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
          if ( (byte_1C0062742 & 1) != 0 )
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
    if ( (byte_1C0062742 & 0x10) != 0 )
      McTemplateK0pd(CurrentStackLocation, &EventNonReadWriteRequestComplete, v40, Irp, Irp->IoStatus.Status);
  }
  else if ( MajorFunction == 27 )
  {
    if ( CurrentStackLocation->MinorFunction != 7 || CurrentStackLocation->Parameters.Read.Length )
    {
      if ( (byte_1C0062742 & 0x20) != 0 )
        McTemplateK0pd(CurrentStackLocation, &EventPnpRequestComplete, v40, Irp, Irp->IoStatus.Status);
    }
    else if ( (byte_1C0062742 & 0x40) != 0 )
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
