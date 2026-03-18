/*
 * XREFs of UsbhRegisterPowerCallback @ 0x1C001F0B0
 * Callers:
 *     UsbhInitialize @ 0x1C001EBF0 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall UsbhRegisterPowerCallback(PDEVICE_OBJECT DeviceObject)
{
  PVOID *v2; // rbx
  NTSTATUS result; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
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
