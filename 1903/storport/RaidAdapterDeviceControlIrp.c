/*
 * XREFs of RaidAdapterDeviceControlIrp @ 0x1C0006D64
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C0007560 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000610C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007118 (RaidAcquireAdapterRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     RaForwardIrp @ 0x1C00122C4 (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     McTemplateK0pddd @ 0x1C0031E44 (McTemplateK0pddd.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C00329BC (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0032A4C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0033B58 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0033C50 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0033E08 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C003408C (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C00341C0 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C00344AC (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterResetBus @ 0x1C0034ACC (RaidAdapterResetBus.c)
 *     RaidAdapterRpmbRequest @ 0x1C0034EA8 (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetAddressIoctl @ 0x1C0035190 (RaidAdapterScsiGetAddressIoctl.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C00351E8 (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0035260 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C0035FF8 (RaidAdapterSetBootLunIoctl.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0036138 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidAdapterStorageSetPropertyIoctl @ 0x1C00361E8 (RaidAdapterStorageSetPropertyIoctl.c)
 *     WPP_SF_qqDD @ 0x1C0037B70 (WPP_SF_qqDD.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C006A274 (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C007224C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterPassThrough @ 0x1C0072F94 (RaidAdapterPassThrough.c)
 */

__int64 __fastcall RaidAdapterDeviceControlIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // r8
  unsigned int v7; // ebp
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int InquiryDataIoctl; // eax
  unsigned int v11; // edi
  struct _DEVICE_OBJECT *v13; // rcx
  _QWORD v14[2]; // [rsp+40h] [rbp-38h] BYREF

  v14[0] = 0LL;
  v14[1] = 0LL;
  v5 = RaidAcquireAdapterRemoveLock();
  v7 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, v14);
    if ( v7 == 315396 || (v8 = v7 - 315412, (unsigned int)v8 <= 0x34) && (v9 = 0x11000011000001LL, _bittest64(&v9, v8)) )
    {
      if ( (byte_1C0061743 & 1) != 0 )
        McTemplateK0pddd(
          *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
          (unsigned int)&EventPassThrough,
          (unsigned int)v14,
          a2,
          **(_BYTE **)(a2 + 184),
          *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
          v7);
    }
    else if ( (byte_1C0061742 & 4) != 0 )
    {
      McTemplateK0pddd(
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        (unsigned int)&EventIOCTL,
        (unsigned int)v14,
        a2,
        **(_BYTE **)(a2 + 184),
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
        v7);
    }
  }
  if ( v5 < 0 )
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    return RaidCompleteRequestEx((PIRP)a2);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids,
      a1,
      a2,
      HIWORD(v7),
      (v7 >> 2) & 0xFFF);
  }
  if ( v7 > 0x2D1C94 )
  {
    if ( v7 <= 0x2DD3C0 )
    {
      switch ( v7 )
      {
        case 0x2DD3C0u:
          InquiryDataIoctl = RaAdapterProtocolCommandIoctl(a1, a2);
          break;
        case 0x2D1C98u:
          InquiryDataIoctl = RaidAdapterRpmbRequest(a1, a2);
          break;
        case 0x2D1CA0u:
          InquiryDataIoctl = RaidAdapterDiagnosticIoctl(a1, a2);
          break;
        case 0x2D5000u:
          if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) )
          {
            LOBYTE(v4) = **(_BYTE **)(a2 + 24);
            RaidAdapterResetBus(a1, v4);
          }
          goto LABEL_27;
        case 0x2D5014u:
          InquiryDataIoctl = RaidAdapterStorageBreakReservationIoctl(a1, a2);
          break;
        case 0x2D940Cu:
          InquiryDataIoctl = RaidAdapterStorageSetPropertyIoctl(a1, a2);
          break;
        case 0x2DD200u:
          InquiryDataIoctl = RaAdapterSetTemperatureThresholdIoctl(a1, a2);
          break;
        default:
          goto LABEL_27;
      }
    }
    else
    {
      switch ( v7 )
      {
        case 0x2DD684u:
          InquiryDataIoctl = RaidAdapterSetBootLunIoctl(a1, a2);
          break;
        case 0x2DDC04u:
          InquiryDataIoctl = RaidAdapterHwFirmwareDownloadIoctl(a1, a2);
          break;
        case 0x2DDC08u:
          InquiryDataIoctl = RaidAdapterHwFirmwareActivateIoctl(a1, a2);
          break;
        case 0x32C000u:
        case 0x32C038u:
          InquiryDataIoctl = RaForwardIrp(*(_QWORD *)(a1 + 24), a2);
          goto LABEL_18;
        default:
          goto LABEL_27;
      }
    }
    goto LABEL_18;
  }
  if ( v7 == 2956436 )
  {
    InquiryDataIoctl = RaidAdapterPowerCapIoctl(a1, a2);
    goto LABEL_18;
  }
  if ( v7 <= 0x4D014 )
  {
    switch ( v7 )
    {
      case 0x4D014u:
        goto LABEL_51;
      case 0x4100Cu:
        InquiryDataIoctl = RaidAdapterScsiGetInquiryDataIoctl(a1, a2);
        goto LABEL_18;
      case 0x41010u:
        InquiryDataIoctl = RaidAdapterScsiGetCapabilitiesIoctl(a1, a2);
        goto LABEL_18;
      case 0x41018u:
        InquiryDataIoctl = RaidAdapterScsiGetAddressIoctl(a1, a2);
        goto LABEL_18;
      case 0x4101Cu:
        v13 = *(struct _DEVICE_OBJECT **)(a1 + 32);
        *(_BYTE *)(a1 + 106) = 1;
        IoInvalidateDeviceRelations(v13, BusRelations);
        goto LABEL_27;
    }
    if ( v7 != 315396 )
    {
      if ( v7 == 315400 )
      {
        InquiryDataIoctl = RaidAdapterScsiMiniportIoctlWithAddress(a1, (IRP *)a2, 0, 0, 0, 2);
        goto LABEL_18;
      }
      goto LABEL_27;
    }
LABEL_52:
    v6 = 0LL;
    goto LABEL_53;
  }
  switch ( v7 )
  {
    case 0x4D038u:
      return RaidAdapterMiniportProcessServiceRequest(a1, a2);
    case 0x4D044u:
      goto LABEL_52;
    case 0x4D048u:
LABEL_51:
      LOBYTE(v6) = 1;
LABEL_53:
      InquiryDataIoctl = RaidAdapterPassThrough(a1, a2, v6);
      goto LABEL_18;
    case 0x2D1400u:
      InquiryDataIoctl = RaidAdapterStorageQueryPropertyIoctl(a1, a2);
      goto LABEL_18;
  }
  if ( v7 != 2954880 )
  {
    if ( v7 == 2956288 )
    {
      InquiryDataIoctl = RaidAdapterHwFirmwareGetInfoIoctl(a1, a2);
      goto LABEL_18;
    }
LABEL_27:
    InquiryDataIoctl = RaidCompleteRequestEx((PIRP)a2);
    goto LABEL_18;
  }
  InquiryDataIoctl = RaidAdapterQueryBootLunsIoctl(a1, a2);
LABEL_18:
  v11 = InquiryDataIoctl;
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 256));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids,
      a1,
      a2,
      v7,
      v11);
  }
  return v11;
}
