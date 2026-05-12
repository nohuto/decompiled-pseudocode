/*
 * XREFs of RaUnitDeviceControlIrp @ 0x1C0008FE4
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C0008F40 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001008 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0007610 (RaUnitScsiMiniportIoctl.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0009540 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0009580 (RaUnitAcquireRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00149DC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0015ACC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1C00216B4 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0021834 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C00236F4 (RaUnitTelemetryIdIoctl.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     McTemplateK0pddd @ 0x1C00365C4 (McTemplateK0pddd.c)
 *     WPP_SF_qqD @ 0x1C003BC48 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C003BCA8 (WPP_SF_qqDD.c)
 *     RaUnitAttributeManagement @ 0x1C00467D0 (RaUnitAttributeManagement.c)
 *     RaUnitGetQOSIoctl @ 0x1C0047198 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C00472AC (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C0047320 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C0047394 (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C004743C (RaUnitProtocolCommandIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0047670 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0047BBC (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1C0047E5C (RaUnitSmartDataIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C0048A14 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C0048AA0 (RaUnitStoragePowerIdle.c)
 *     RaUnitStorageDumpNotification @ 0x1C006A008 (RaUnitStorageDumpNotification.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C006A61C (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006AF84 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C006B2B0 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C006E138 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C006F48C (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C0074CD8 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0074DA8 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C0074E54 (RaUnitStorageFreeDumpInfoIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0075098 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C00753EC (RaUnitStorageGetIdlePowerUpReason.c)
 */

__int64 __fastcall RaUnitDeviceControlIrp(__int64 a1, PIRP Irp, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int LowPart; // ebp
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int QOSIoctl; // eax
  char v11; // r8
  _IO_STACK_LOCATION *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edi
  _QWORD v15[2]; // [rsp+40h] [rbp-38h] BYREF

  v15[0] = 0LL;
  v15[1] = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart == 2955532 )
  {
    if ( !Irp->RequestorMode )
    {
      if ( CurrentStackLocation->Parameters.Read.Length )
      {
        LOBYTE(Irp->AssociatedIrp.MasterIrp->Type) = (*(_BYTE *)(a1 + 448) & 4) == 0;
        Irp->IoStatus.Information = 1LL;
      }
      else
      {
        Irp->IoStatus.Information = 0LL;
      }
    }
    return RaidCompleteRequestEx(Irp);
  }
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, v15);
    if ( LowPart == 315396
      || (v8 = LowPart - 315412, (unsigned int)v8 <= 0x34) && (v9 = 0x11000011000001LL, _bittest64(&v9, v8)) )
    {
      if ( (byte_1C00617E3 & 1) != 0 )
        McTemplateK0pddd(
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          (unsigned int)&EventPassThrough,
          (unsigned int)v15,
          (_DWORD)Irp,
          Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          LowPart);
    }
    else if ( (byte_1C00617E2 & 2) != 0 )
    {
      McTemplateK0pddd(
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        (unsigned int)&EventIOCTL,
        (unsigned int)v15,
        (_DWORD)Irp,
        Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        LowPart);
    }
  }
  LOBYTE(a3) = 1;
  if ( (int)RaUnitAcquireRemoveLock(a1, Irp, a3) < 0 )
  {
    Irp->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(Irp);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      28LL,
      &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
      a1,
      Irp,
      LowPart);
  }
  if ( LowPart > 0x2D1C8C )
  {
    if ( LowPart > 0x2D5644 )
    {
      switch ( LowPart )
      {
        case 0x2D9404u:
          QOSIoctl = RaUnitStorageDataSetManagementIoctl(a1, Irp);
          goto LABEL_96;
        case 0x2DD200u:
          QOSIoctl = RaUnitSetTemperatureThresholdIoctl(a1, Irp);
          goto LABEL_96;
        case 0x2DD3C0u:
          QOSIoctl = RaUnitProtocolCommandIoctl(a1, Irp);
          goto LABEL_96;
        case 0x2DD684u:
LABEL_92:
          v13 = *(_QWORD *)(a1 + 24);
          ++Irp->CurrentLocation;
          ++Irp->Tail.Overlay.CurrentStackLocation;
          QOSIoctl = IofCallDriver(*(PDEVICE_OBJECT *)(v13 + 8), Irp);
          goto LABEL_96;
        case 0x2DDC04u:
          QOSIoctl = RaUnitHwFirmwareDownloadIoctl(a1, Irp);
          goto LABEL_96;
        case 0x2DDC08u:
          QOSIoctl = RaUnitHwFirmwareActivateIoctl(a1, Irp);
          goto LABEL_96;
        case 0x2DDC9Cu:
          QOSIoctl = RaUnitAttributeManagement(a1, Irp);
          goto LABEL_96;
        case 0x2DE814u:
          QOSIoctl = RaUnitSetQOSIoctl(a1, Irp);
          goto LABEL_96;
      }
    }
    else
    {
      switch ( LowPart )
      {
        case 0x2D5644u:
          QOSIoctl = RaUnitStorageDumpNotification(a1, Irp);
          goto LABEL_96;
        case 0x2D1C94u:
          QOSIoctl = RaUnitPowerCapIoctl(a1, Irp);
          goto LABEL_96;
        case 0x2D1CA0u:
          QOSIoctl = RaUnitStorageDiagnosticIoctl(a1, Irp);
          goto LABEL_96;
        case 0x2D1CC8u:
          QOSIoctl = RaUnitSmartDataIoctl(a1, Irp);
          goto LABEL_96;
        case 0x2D280Cu:
          QOSIoctl = RaUnitTelemetryIdIoctl(a1, Irp);
          goto LABEL_96;
        case 0x2D2810u:
          QOSIoctl = RaUnitGetQOSIoctl(a1, Irp);
          goto LABEL_96;
        case 0x2D2828u:
        case 0x2D282Cu:
        case 0x2D2830u:
          QOSIoctl = RaUnitStreamsIoctl(a1, Irp);
          goto LABEL_96;
        case 0x2D5014u:
          QOSIoctl = RaUnitStorageBreakReservationIoctl(a1, Irp);
          goto LABEL_96;
      }
    }
LABEL_54:
    QOSIoctl = RaidCompleteRequestEx(Irp);
    goto LABEL_96;
  }
  if ( LowPart == 2956428 )
  {
    QOSIoctl = RaUnitStoragePowerIdle(a1, Irp);
    goto LABEL_96;
  }
  if ( LowPart <= 0x4D048 )
  {
    switch ( LowPart )
    {
      case 0x4D048u:
        goto LABEL_34;
      case 0x41018u:
        QOSIoctl = RaUnitScsiGetAddressIoctl(a1, Irp);
        goto LABEL_96;
      case 0x41020u:
        QOSIoctl = RaUnitScsiGetDumpPointersIoctl(a1, Irp);
        goto LABEL_96;
      case 0x41024u:
        QOSIoctl = RaUnitScsiFreeDumpPointersIoctl(a1, Irp);
        goto LABEL_96;
      case 0x4D004u:
        goto LABEL_34;
      case 0x4D008u:
        QOSIoctl = RaUnitScsiMiniportIoctl(a1, Irp);
        goto LABEL_96;
      case 0x4D014u:
LABEL_34:
        QOSIoctl = RaUnitScsiPassThroughIoctl(a1, Irp);
        goto LABEL_96;
      case 0x4D02Cu:
        v11 = 0;
        break;
      case 0x4D030u:
        v11 = 1;
        break;
      case 0x4D044u:
        goto LABEL_34;
      default:
        goto LABEL_54;
    }
    QOSIoctl = RaUnitAtaPassThroughIoctl(a1, Irp, v11);
    goto LABEL_96;
  }
  switch ( LowPart )
  {
    case 0x2D1400u:
      QOSIoctl = RaUnitStorageQueryPropertyIoctl(a1, Irp);
      goto LABEL_96;
    case 0x2D164Bu:
      QOSIoctl = RaUnitStorageGetDumpInfoIoctl(a1, Irp);
      goto LABEL_96;
    case 0x2D164Fu:
      QOSIoctl = RaUnitStorageFreeDumpInfoIoctl(a1, Irp);
      goto LABEL_96;
    case 0x2D1680u:
      goto LABEL_92;
  }
  if ( LowPart != 2956288 )
  {
    switch ( LowPart )
    {
      case 0x2D1C80u:
        v12 = Irp->Tail.Overlay.CurrentStackLocation;
        Irp->IoStatus.Information = 0LL;
        if ( v12->Parameters.Create.Options >= 0x10 )
          RaUnitRegisterForIdleDetection((PVOID)a1);
        break;
      case 0x2D1C84u:
        QOSIoctl = RaUnitStorageGetIdlePowerUpReason(a1, Irp);
        goto LABEL_96;
      case 0x2D1C88u:
        QOSIoctl = RaUnitStoragePowerActive(a1, Irp);
        goto LABEL_96;
    }
    goto LABEL_54;
  }
  QOSIoctl = RaUnitHwFirmwareGetInfoIoctl(a1, Irp);
LABEL_96:
  v14 = QOSIoctl;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      29LL,
      &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
      a1,
      Irp,
      LowPart,
      QOSIoctl);
  }
  RaUnitReleaseRemoveLock(a1);
  return v14;
}
