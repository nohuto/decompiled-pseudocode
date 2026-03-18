/*
 * XREFs of UsbhPowerCallback @ 0x1C001E6E0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSshEnableDisable @ 0x1C001E7A8 (UsbhSshEnableDisable.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhPowerCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, _QWORD *Context)
{
  unsigned int v8; // ebx
  __int64 v9; // r14

  v8 = -1073741811;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      23,
      (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids);
  v9 = Context[150];
  if ( RtlCompareMemory(SettingGuid, &GUID_USB_SETTING_SELECTIVE_SUSPEND, 0x10uLL) == 16 && ValueLength == 4 && Value )
  {
    v8 = 0;
    *((_DWORD *)Context + 1309) = 2 - (*Value != 0);
    UsbhSshEnableDisable(v9);
  }
  return v8;
}
