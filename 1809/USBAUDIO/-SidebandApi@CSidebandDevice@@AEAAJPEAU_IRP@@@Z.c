/*
 * XREFs of ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B27C
 * Callers:
 *     ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x1C000B7C4 (-IoQueueThread@CSidebandDevice@@AEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BD60 (-GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BEC8 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C218 (-GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C31C (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C61C (-GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C708 (-GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C80C (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CB0C (-GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CBF8 (-GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CCFC (-GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CDE8 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D0DC (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D240 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D458 (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D6A4 (-StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D868 (-GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D9C4 (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DC5C (-SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DE8C (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E108 (-GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E264 (-SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall CSidebandDevice::SidebandApi(CSidebandDevice *this, struct _IRP *a2)
{
  unsigned int v3; // edi
  DWORD LowPart; // ecx
  DWORD v6; // ecx
  DWORD v7; // ecx
  DWORD v8; // ecx
  DWORD v9; // ecx
  int SupportedFormats; // eax
  __int64 v11; // rdx
  DWORD v12; // ecx
  DWORD v13; // ecx
  DWORD v14; // ecx
  DWORD v15; // ecx
  DWORD v16; // ecx
  DWORD v17; // ecx
  DWORD v18; // ecx
  DWORD v19; // ecx
  DWORD v20; // ecx
  DWORD v21; // ecx

  v3 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x8Au,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart > 0x220033 )
  {
    if ( LowPart > 0x22004B )
    {
      v19 = LowPart - 2228303;
      if ( !v19 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)a2,
          9u,
          0x9Cu,
          (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
        SupportedFormats = CSidebandDevice::GetSupportedFormats(this, a2);
        goto LABEL_49;
      }
      v20 = v19 - 4;
      if ( !v20 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)a2,
          9u,
          0x9Du,
          (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
        SupportedFormats = CSidebandDevice::GetSiop(this, a2);
        goto LABEL_49;
      }
      v21 = v20 - 12;
      if ( !v21 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)a2,
          9u,
          0x9Eu,
          (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
        SupportedFormats = CSidebandDevice::SetSiop(this, a2);
        goto LABEL_49;
      }
      if ( v21 == 4 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)a2,
          9u,
          0x9Fu,
          (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
        SupportedFormats = CSidebandDevice::SetSidebandClaimed(this, a2);
        goto LABEL_49;
      }
    }
    else
    {
      if ( LowPart == 2228299 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)a2,
          9u,
          0x9Bu,
          (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
        SupportedFormats = CSidebandDevice::GetStreamStatusUpdate(this, a2);
        goto LABEL_49;
      }
      v15 = LowPart - 2228279;
      if ( !v15 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)a2,
          9u,
          0x96u,
          (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
        SupportedFormats = CSidebandDevice::SetSidetone(this, a2);
        goto LABEL_49;
      }
      v16 = v15 - 4;
      if ( !v16 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)a2,
          9u,
          0x97u,
          (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
        SupportedFormats = CSidebandDevice::StreamOpen(this, a2);
        goto LABEL_49;
      }
      v17 = v16 - 4;
      if ( !v17 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)a2,
          9u,
          0x98u,
          (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
        SupportedFormats = CSidebandDevice::StreamClose(this, a2);
        goto LABEL_49;
      }
      v18 = v17 - 4;
      if ( !v18 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)a2,
          9u,
          0x99u,
          (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
        SupportedFormats = CSidebandDevice::StreamStart(this, a2);
        goto LABEL_49;
      }
      if ( v18 == 4 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)a2,
          9u,
          0x9Au,
          (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
        SupportedFormats = CSidebandDevice::StreamSuspend(this, a2);
        goto LABEL_49;
      }
    }
    goto LABEL_44;
  }
  if ( LowPart == 2228275 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x95u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
    SupportedFormats = CSidebandDevice::GetSidetoneStatusUpdate(this, a2);
    goto LABEL_49;
  }
  if ( LowPart > 0x22001F )
  {
    v12 = LowPart - 2228259;
    if ( !v12 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        9u,
        0x91u,
        (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
      SupportedFormats = CSidebandDevice::GetMutePropertyValues(this, a2);
      goto LABEL_49;
    }
    v13 = v12 - 4;
    if ( !v13 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        9u,
        0x92u,
        (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
      SupportedFormats = CSidebandDevice::SetMute(this, a2);
      goto LABEL_49;
    }
    v14 = v13 - 4;
    if ( !v14 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        9u,
        0x93u,
        (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
      SupportedFormats = CSidebandDevice::GetMuteStatusUpdate(this, a2);
      goto LABEL_49;
    }
    if ( v14 == 4 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        9u,
        0x94u,
        (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
      SupportedFormats = CSidebandDevice::GetSidetoneVolumePropertyValues(this, a2);
      goto LABEL_49;
    }
    goto LABEL_44;
  }
  if ( LowPart == 2228255 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x90u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
    SupportedFormats = CSidebandDevice::GetVolumeStatusUpdate(this, a2);
    goto LABEL_49;
  }
  v6 = LowPart - 2228231;
  if ( !v6 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x8Bu,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
    SupportedFormats = CSidebandDevice::GetDeviceDescriptor(this, a2);
    goto LABEL_49;
  }
  v7 = v6 - 4;
  if ( !v7 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x8Cu,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
    SupportedFormats = CSidebandDevice::GetErrorStatusUpdate(this, a2);
    goto LABEL_49;
  }
  v8 = v7 - 4;
  if ( !v8 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x8Du,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
    SupportedFormats = CSidebandDevice::GetEndpointDescriptor(this, a2);
    goto LABEL_49;
  }
  v9 = v8 - 8;
  if ( !v9 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x8Eu,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
    SupportedFormats = CSidebandDevice::GetVolumePropertyValues(this, a2);
    goto LABEL_49;
  }
  if ( v9 != 4 )
  {
LABEL_44:
    a2->IoStatus.Status = -1073741437;
    a2->IoStatus.Information = 0LL;
    IofCompleteRequest(a2, 0);
    goto LABEL_50;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)a2,
    9u,
    0x8Fu,
    (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  SupportedFormats = CSidebandDevice::SetVolume(this, a2);
LABEL_49:
  v3 = SupportedFormats;
LABEL_50:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      9u,
      0xA0u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  return v3;
}
