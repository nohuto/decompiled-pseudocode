/*
 * XREFs of UsbhRegisterPowerCallback @ 0x1C001E654
 * Callers:
 *     UsbhInitialize @ 0x1C001E1B0 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall UsbhRegisterPowerCallback(PDEVICE_OBJECT DeviceObject)
{
  PVOID *v2; // rbx
  NTSTATUS result; // eax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      21,
      (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids);
  v2 = (PVOID *)FdoExt((__int64)DeviceObject);
  result = PoRegisterPowerSettingCallback(
             DeviceObject,
             &GUID_USB_SETTING_SELECTIVE_SUSPEND,
             UsbhPowerCallback,
             v2,
             v2 + 656);
  if ( result >= 0 )
    *((_DWORD *)v2 + 1310) = 1;
  return result;
}
