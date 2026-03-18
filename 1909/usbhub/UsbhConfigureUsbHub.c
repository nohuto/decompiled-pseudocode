/*
 * XREFs of UsbhConfigureUsbHub @ 0x1C001E1BC
 * Callers:
 *     UsbhInitialize @ 0x1C001EBF0 (UsbhInitialize.c)
 *     UsbhReinitialize @ 0x1C0040CC8 (UsbhReinitialize.c)
 * Callees:
 *     UsbhSyncSendInternalIoctl @ 0x1C000ECA0 (UsbhSyncSendInternalIoctl.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C001E440 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C001E580 (UsbhCreateConfigurationRequestEx.c)
 *     UsbhGetMaxPowerPerPort @ 0x1C001E680 (UsbhGetMaxPowerPerPort.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C001EA88 (UsbhGetHubConfigurationDescriptor.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhConfigureUsbHub(__int64 a1)
{
  int HubConfigurationDescriptor; // eax
  unsigned int v3; // ebp
  unsigned int v4; // r9d

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids);
  HubConfigurationDescriptor = UsbhGetHubConfigurationDescriptor(a1);
  v3 = HubConfigurationDescriptor;
  if ( (HubConfigurationDescriptor & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, 8, 1667655729, HubConfigurationDescriptor, 0LL);
    return v3;
  }
  else
  {
    Log(a1, 8, 1667655730, -1073741670LL, 0LL);
    return v4;
  }
}
