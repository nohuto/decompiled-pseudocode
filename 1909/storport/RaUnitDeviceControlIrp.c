/*
 * XREFs of RaUnitDeviceControlIrp @ 0x1C0007654
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C00075B0 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaUnitStoragePowerIdle @ 0x1C00019D4 (RaUnitStoragePowerIdle.c)
 *     RaUnitStoragePowerActive @ 0x1C0001A60 (RaUnitStoragePowerActive.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0005DB8 (RaUnitScsiMiniportIoctl.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00079F0 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0007A30 (RaUnitAcquireRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     RaUnitAtaPassThroughIoctl @ 0x1C000F6CC (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001105C (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017634 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0018860 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C0020700 (RaUnitTelemetryIdIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1C002274C (RaUnitStreamsIoctl.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     McTemplateK0pddd @ 0x1C0033234 (McTemplateK0pddd.c)
 *     WPP_SF_qqD @ 0x1C0038F00 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C0038F60 (WPP_SF_qqDD.c)
 *     RaUnitAttributeManagement @ 0x1C0045088 (RaUnitAttributeManagement.c)
 *     RaUnitGetQOSIoctl @ 0x1C00459D0 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C0045AE0 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C0045B54 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C0045BC8 (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C0045C70 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0045E78 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0046378 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1C0046560 (RaUnitSmartDataIoctl.c)
 *     RaUnitStorageSetPropertyIoctl @ 0x1C0047A4C (RaUnitStorageSetPropertyIoctl.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C006B568 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006C7E4 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C006CB14 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C006EDD0 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C007507C (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C00751C8 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0075298 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C007539C (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C0075544 (RaUnitStorageGetIdlePowerUpReason.c)
 */

__int64 __fastcall RaUnitDeviceControlIrp(__int64 a1, PIRP Irp, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int LowPart; // ebp
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int QOSIoctl; // eax
  unsigned int v11; // edi
  _IO_STACK_LOCATION *v13; // rax
  __int64 v14; // rcx
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
    v7 = LowPart - 315412;
    if ( (unsigned int)v7 <= 0x34 && (v8 = 0x11000011000001LL, _bittest64(&v8, v7)) || LowPart == 315396 )
    {
      if ( (byte_1C0062743 & 1) != 0 )
        McTemplateK0pddd(
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          (unsigned int)&EventPassThrough,
          (unsigned int)v15,
          (_DWORD)Irp,
          Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          LowPart);
    }
    else if ( (byte_1C0062742 & 4) != 0 )
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
      &WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
      a1,
      Irp,
      LowPart);
  }
  if ( LowPart > 0x2D1C94 )
  {
    if ( LowPart <= 0x2D9404 )
    {
      switch ( LowPart )
      {
        case 0x2D9404u:
          QOSIoctl = RaUnitStorageDataSetManagementIoctl(a1, Irp);
          break;
        case 0x2D1CA0u:
          QOSIoctl = RaUnitStorageDiagnosticIoctl(a1, Irp);
          break;
        case 0x2D1CC8u:
          QOSIoctl = RaUnitSmartDataIoctl(a1, Irp);
          break;
        case 0x2D280Cu:
          QOSIoctl = RaUnitTelemetryIdIoctl(a1, Irp);
          break;
        case 0x2D2810u:
          QOSIoctl = RaUnitGetQOSIoctl(a1, Irp);
          break;
        case 0x2D2828u:
        case 0x2D282Cu:
        case 0x2D2830u:
          QOSIoctl = RaUnitStreamsIoctl(a1, Irp);
          break;
        case 0x2D5014u:
          QOSIoctl = RaUnitStorageBreakReservationIoctl(a1, Irp);
          break;
        default:
          goto LABEL_27;
      }
      goto LABEL_16;
    }
    switch ( LowPart )
    {
      case 0x2D940Cu:
        QOSIoctl = RaUnitStorageSetPropertyIoctl(a1, Irp);
        goto LABEL_16;
      case 0x2DD200u:
        QOSIoctl = RaUnitSetTemperatureThresholdIoctl(a1, Irp);
        goto LABEL_16;
      case 0x2DD3C0u:
        QOSIoctl = RaUnitProtocolCommandIoctl(a1, Irp);
        goto LABEL_16;
    }
    if ( LowPart != 3004036 )
    {
      switch ( LowPart )
      {
        case 0x2DDC04u:
          QOSIoctl = RaUnitHwFirmwareDownloadIoctl(a1, Irp);
          break;
        case 0x2DDC08u:
          QOSIoctl = RaUnitHwFirmwareActivateIoctl(a1, Irp);
          break;
        case 0x2DDC9Cu:
          QOSIoctl = RaUnitAttributeManagement(a1, Irp);
          break;
        case 0x2DE814u:
          QOSIoctl = RaUnitSetQOSIoctl(a1, Irp);
          break;
        default:
          goto LABEL_27;
      }
      goto LABEL_16;
    }
LABEL_94:
    v14 = *(_QWORD *)(a1 + 24);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    QOSIoctl = IofCallDriver(*(PDEVICE_OBJECT *)(v14 + 8), Irp);
    goto LABEL_16;
  }
  if ( LowPart == 2956436 )
  {
    QOSIoctl = RaUnitPowerCapIoctl(a1, Irp);
    goto LABEL_16;
  }
  if ( LowPart <= 0x4D048 )
  {
    if ( LowPart != 315464 )
    {
      switch ( LowPart )
      {
        case 0x41018u:
          QOSIoctl = RaUnitScsiGetAddressIoctl(a1, Irp);
          goto LABEL_16;
        case 0x41020u:
          QOSIoctl = RaUnitScsiGetDumpPointersIoctl(a1, Irp);
          goto LABEL_16;
        case 0x41024u:
          QOSIoctl = RaUnitScsiFreeDumpPointersIoctl(a1, Irp);
          goto LABEL_16;
      }
      if ( LowPart != 315396 )
      {
        if ( LowPart == 315400 )
        {
          QOSIoctl = RaUnitScsiMiniportIoctl(a1, Irp);
          goto LABEL_16;
        }
        if ( LowPart != 315412 )
        {
          if ( LowPart == 315436 )
          {
            v9 = 0LL;
            goto LABEL_66;
          }
          if ( LowPart == 315440 )
          {
            LOBYTE(v9) = 1;
LABEL_66:
            QOSIoctl = RaUnitAtaPassThroughIoctl(a1, Irp, v9);
            goto LABEL_16;
          }
          if ( LowPart != 315460 )
            goto LABEL_27;
        }
      }
    }
    QOSIoctl = RaUnitScsiPassThroughIoctl(a1, Irp);
    goto LABEL_16;
  }
  switch ( LowPart )
  {
    case 0x2D1400u:
      QOSIoctl = RaUnitStorageQueryPropertyIoctl(a1, Irp);
      break;
    case 0x2D164Bu:
      QOSIoctl = RaUnitStorageGetDumpInfoIoctl(a1, Irp);
      break;
    case 0x2D1680u:
      goto LABEL_94;
    case 0x2D1C00u:
      QOSIoctl = RaUnitHwFirmwareGetInfoIoctl(a1, Irp);
      break;
    case 0x2D1C80u:
      v13 = Irp->Tail.Overlay.CurrentStackLocation;
      Irp->IoStatus.Information = 0LL;
      if ( v13->Parameters.Create.Options >= 0x10 )
        RaUnitRegisterForIdleDetection((PVOID)a1);
      goto LABEL_27;
    case 0x2D1C84u:
      QOSIoctl = RaUnitStorageGetIdlePowerUpReason(a1, Irp);
      break;
    case 0x2D1C88u:
      QOSIoctl = RaUnitStoragePowerActive(a1, Irp);
      break;
    case 0x2D1C8Cu:
      QOSIoctl = RaUnitStoragePowerIdle(a1, Irp);
      break;
    default:
LABEL_27:
      QOSIoctl = RaidCompleteRequestEx(Irp);
      break;
  }
LABEL_16:
  v11 = QOSIoctl;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      29LL,
      &WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
      a1,
      Irp,
      LowPart,
      QOSIoctl);
  }
  RaUnitReleaseRemoveLock(a1);
  return v11;
}
