/*
 * XREFs of RaidAdapterDeviceControlIrp @ 0x1C0003014
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C0008F40 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C00062A4 (RaidAcquireAdapterRemoveLock.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007ACC (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaForwardIrp @ 0x1C00171EC (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     McTemplateK0pddd @ 0x1C00365C4 (McTemplateK0pddd.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C0036DEC (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0036E7C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0037F70 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0038068 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0038220 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C00384A4 (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C00385D8 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C00388CC (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterResetBus @ 0x1C0038ED4 (RaidAdapterResetBus.c)
 *     RaidAdapterRpmbRequest @ 0x1C003928C (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetAddressIoctl @ 0x1C0039568 (RaidAdapterScsiGetAddressIoctl.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C00395C0 (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0039638 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C003A35C (RaidAdapterSetBootLunIoctl.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C003A4A0 (RaidAdapterStorageBreakReservationIoctl.c)
 *     WPP_SF_qqDD @ 0x1C003BCA8 (WPP_SF_qqDD.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C006A084 (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaidAdapterPassThrough @ 0x1C006F078 (RaidAdapterPassThrough.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0072E30 (RaidAdapterDiagnosticIoctl.c)
 */

__int64 __fastcall RaidAdapterDeviceControlIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // r8
  unsigned int v7; // ebp
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int InquiryDataIoctl; // eax
  unsigned int v11; // edi
  struct _DEVICE_OBJECT *v13; // rcx
  _QWORD v14[2]; // [rsp+40h] [rbp-38h] BYREF

  v14[0] = 0LL;
  v14[1] = 0LL;
  v5 = RaidAcquireAdapterRemoveLock(a1);
  v7 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, v14);
    v8 = v7 - 315412;
    if ( (unsigned int)v8 <= 0x34 && (v9 = 0x11000011000001LL, _bittest64(&v9, v8)) || v7 == 315396 )
    {
      if ( (byte_1C00617E3 & 1) != 0 )
        McTemplateK0pddd(
          *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
          (unsigned int)&EventPassThrough,
          (unsigned int)v14,
          a2,
          **(_BYTE **)(a2 + 184),
          *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
          v7);
    }
    else if ( (byte_1C00617E2 & 2) != 0 )
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
      &WPP_2427d071e20036a288b852fd33055616_Traceguids,
      a1,
      a2,
      HIWORD(v7),
      (v7 >> 2) & 0xFFF);
  }
  if ( v7 > 0x2D1C00 )
  {
    if ( v7 <= 0x2DD200 )
    {
      switch ( v7 )
      {
        case 0x2DD200u:
          InquiryDataIoctl = RaAdapterSetTemperatureThresholdIoctl(a1, a2);
          break;
        case 0x2D1C94u:
          InquiryDataIoctl = RaidAdapterPowerCapIoctl(a1, a2);
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
        default:
LABEL_27:
          InquiryDataIoctl = RaidCompleteRequestEx((PIRP)a2);
          break;
      }
    }
    else
    {
      switch ( v7 )
      {
        case 0x2DD3C0u:
          InquiryDataIoctl = RaAdapterProtocolCommandIoctl(a1, a2);
          break;
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
          InquiryDataIoctl = RaForwardIrp(*(_QWORD *)(a1 + 24), a2);
          break;
        default:
          goto LABEL_27;
      }
    }
  }
  else
  {
    if ( v7 != 2956288 )
    {
      if ( v7 <= 0x4D014 )
      {
        switch ( v7 )
        {
          case 0x4D014u:
LABEL_30:
            LOBYTE(v6) = 1;
LABEL_31:
            InquiryDataIoctl = RaidAdapterPassThrough(a1, a2, v6);
            goto LABEL_18;
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
            InquiryDataIoctl = RaidAdapterScsiMiniportIoctlWithAddress(a1, a2, 0LL, 0LL, 0, 2);
            goto LABEL_18;
          }
          goto LABEL_27;
        }
      }
      else
      {
        if ( v7 == 315448 )
          return RaidAdapterMiniportProcessServiceRequest(a1, a2);
        if ( v7 != 315460 )
        {
          if ( v7 != 315464 )
          {
            if ( v7 == 2954240 )
            {
              InquiryDataIoctl = RaidAdapterStorageQueryPropertyIoctl(a1, a2);
              goto LABEL_18;
            }
            if ( v7 == 2954880 )
            {
              InquiryDataIoctl = RaidAdapterQueryBootLunsIoctl(a1, a2);
              goto LABEL_18;
            }
            goto LABEL_27;
          }
          goto LABEL_30;
        }
      }
      v6 = 0LL;
      goto LABEL_31;
    }
    InquiryDataIoctl = RaidAdapterHwFirmwareGetInfoIoctl(a1, a2);
  }
LABEL_18:
  v11 = InquiryDataIoctl;
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 272));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_2427d071e20036a288b852fd33055616_Traceguids,
      a1,
      a2,
      v7,
      v11);
  }
  return v11;
}
