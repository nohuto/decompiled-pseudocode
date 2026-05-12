/*
 * XREFs of RaUnitDeviceControlIrp @ 0x1C0007604
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C0007560 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaUnitStoragePowerIdle @ 0x1C00017B8 (RaUnitStoragePowerIdle.c)
 *     RaUnitStoragePowerActive @ 0x1C0001844 (RaUnitStoragePowerActive.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0005D68 (RaUnitScsiMiniportIoctl.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00079A0 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C00079E0 (RaUnitAcquireRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     RaUnitAtaPassThroughIoctl @ 0x1C000F99C (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0010EBC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017624 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C00186D0 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C001FD4C (RaUnitTelemetryIdIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1C002261C (RaUnitStreamsIoctl.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     McTemplateK0pddd @ 0x1C0031E44 (McTemplateK0pddd.c)
 *     WPP_SF_qqD @ 0x1C0037B10 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C0037B70 (WPP_SF_qqDD.c)
 *     RaUnitAttributeManagement @ 0x1C0043C98 (RaUnitAttributeManagement.c)
 *     RaUnitGetQOSIoctl @ 0x1C00445E0 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C00446F0 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C0044764 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C00447D8 (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C0044880 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0044A88 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0044F88 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1C0045170 (RaUnitSmartDataIoctl.c)
 *     RaUnitStorageSetPropertyIoctl @ 0x1C004665C (RaUnitStorageSetPropertyIoctl.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C006A660 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006B8E4 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C006BC14 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C006C1B4 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C00741AC (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C00742F8 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C00743C8 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C00744CC (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C0074674 (RaUnitStorageGetIdlePowerUpReason.c)
 */

__int64 __fastcall RaUnitDeviceControlIrp(_BYTE *Context, PIRP Irp, __int64 a3)
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
        LOBYTE(Irp->AssociatedIrp.MasterIrp->Type) = (Context[160] & 4) == 0;
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
      if ( (byte_1C0061743 & 1) != 0 )
        McTemplateK0pddd(
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          (unsigned int)&EventPassThrough,
          (unsigned int)v15,
          (_DWORD)Irp,
          Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          LowPart);
    }
    else if ( (byte_1C0061742 & 4) != 0 )
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
  if ( (int)RaUnitAcquireRemoveLock(Context, Irp, a3) < 0 )
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
      &WPP_a32982da72aa344f3768c69018313f42_Traceguids,
      Context,
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
          QOSIoctl = RaUnitStorageDataSetManagementIoctl(Context, Irp);
          break;
        case 0x2D1CA0u:
          QOSIoctl = RaUnitStorageDiagnosticIoctl(Context, Irp);
          break;
        case 0x2D1CC8u:
          QOSIoctl = RaUnitSmartDataIoctl(Context, Irp);
          break;
        case 0x2D280Cu:
          QOSIoctl = RaUnitTelemetryIdIoctl(Context, Irp);
          break;
        case 0x2D2810u:
          QOSIoctl = RaUnitGetQOSIoctl(Context, Irp);
          break;
        case 0x2D2828u:
        case 0x2D282Cu:
        case 0x2D2830u:
          QOSIoctl = RaUnitStreamsIoctl(Context, Irp);
          break;
        case 0x2D5014u:
          QOSIoctl = RaUnitStorageBreakReservationIoctl(Context, Irp);
          break;
        default:
          goto LABEL_27;
      }
      goto LABEL_16;
    }
    switch ( LowPart )
    {
      case 0x2D940Cu:
        QOSIoctl = RaUnitStorageSetPropertyIoctl(Context, Irp);
        goto LABEL_16;
      case 0x2DD200u:
        QOSIoctl = RaUnitSetTemperatureThresholdIoctl(Context, Irp);
        goto LABEL_16;
      case 0x2DD3C0u:
        QOSIoctl = RaUnitProtocolCommandIoctl(Context, Irp);
        goto LABEL_16;
    }
    if ( LowPart != 3004036 )
    {
      switch ( LowPart )
      {
        case 0x2DDC04u:
          QOSIoctl = RaUnitHwFirmwareDownloadIoctl(Context, Irp);
          break;
        case 0x2DDC08u:
          QOSIoctl = RaUnitHwFirmwareActivateIoctl(Context, Irp);
          break;
        case 0x2DDC9Cu:
          QOSIoctl = RaUnitAttributeManagement(Context, Irp);
          break;
        case 0x2DE814u:
          QOSIoctl = RaUnitSetQOSIoctl(Context, Irp);
          break;
        default:
          goto LABEL_27;
      }
      goto LABEL_16;
    }
LABEL_94:
    v14 = *((_QWORD *)Context + 3);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    QOSIoctl = IofCallDriver(*(PDEVICE_OBJECT *)(v14 + 8), Irp);
    goto LABEL_16;
  }
  if ( LowPart == 2956436 )
  {
    QOSIoctl = RaUnitPowerCapIoctl(Context, Irp);
    goto LABEL_16;
  }
  if ( LowPart <= 0x4D048 )
  {
    if ( LowPart != 315464 )
    {
      switch ( LowPart )
      {
        case 0x41018u:
          QOSIoctl = RaUnitScsiGetAddressIoctl(Context, Irp);
          goto LABEL_16;
        case 0x41020u:
          QOSIoctl = RaUnitScsiGetDumpPointersIoctl(Context, Irp);
          goto LABEL_16;
        case 0x41024u:
          QOSIoctl = RaUnitScsiFreeDumpPointersIoctl(Context, Irp);
          goto LABEL_16;
      }
      if ( LowPart != 315396 )
      {
        if ( LowPart == 315400 )
        {
          QOSIoctl = RaUnitScsiMiniportIoctl((__int64)Context, Irp);
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
            QOSIoctl = RaUnitAtaPassThroughIoctl(Context, Irp, v9);
            goto LABEL_16;
          }
          if ( LowPart != 315460 )
            goto LABEL_27;
        }
      }
    }
    QOSIoctl = RaUnitScsiPassThroughIoctl(Context, Irp);
    goto LABEL_16;
  }
  switch ( LowPart )
  {
    case 0x2D1400u:
      QOSIoctl = RaUnitStorageQueryPropertyIoctl(Context, Irp);
      break;
    case 0x2D164Bu:
      QOSIoctl = RaUnitStorageGetDumpInfoIoctl(Context, Irp);
      break;
    case 0x2D1680u:
      goto LABEL_94;
    case 0x2D1C00u:
      QOSIoctl = RaUnitHwFirmwareGetInfoIoctl(Context, Irp);
      break;
    case 0x2D1C80u:
      v13 = Irp->Tail.Overlay.CurrentStackLocation;
      Irp->IoStatus.Information = 0LL;
      if ( v13->Parameters.Create.Options >= 0x10 )
        RaUnitRegisterForIdleDetection(Context);
      goto LABEL_27;
    case 0x2D1C84u:
      QOSIoctl = RaUnitStorageGetIdlePowerUpReason(Context, Irp);
      break;
    case 0x2D1C88u:
      QOSIoctl = RaUnitStoragePowerActive((__int64)Context, Irp);
      break;
    case 0x2D1C8Cu:
      QOSIoctl = RaUnitStoragePowerIdle((__int64)Context, Irp);
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
      &WPP_a32982da72aa344f3768c69018313f42_Traceguids,
      Context,
      Irp,
      LowPart,
      QOSIoctl);
  }
  RaUnitReleaseRemoveLock(Context);
  return v11;
}
