/*
 * XREFs of UsbhConfigureUsbHub @ 0x1C001D5E4
 * Callers:
 *     UsbhInitialize @ 0x1C001E1B0 (UsbhInitialize.c)
 *     UsbhReinitialize @ 0x1C003F688 (UsbhReinitialize.c)
 * Callees:
 *     UsbhSyncSendInternalIoctl @ 0x1C000E810 (UsbhSyncSendInternalIoctl.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C001D850 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C001D990 (UsbhCreateConfigurationRequestEx.c)
 *     UsbhGetMaxPowerPerPort @ 0x1C001DA90 (UsbhGetMaxPowerPerPort.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C001DE58 (UsbhGetHubConfigurationDescriptor.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhConfigureUsbHub(__int64 a1)
{
  int HubConfigurationDescriptor; // eax
  unsigned int v3; // ebp
  unsigned int v4; // r9d

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
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
