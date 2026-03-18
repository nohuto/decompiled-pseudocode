/*
 * XREFs of UsbhValidateDeviceDescriptor @ 0x1C0026154
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 *     UsbhGetUsbDeviceFlags @ 0x1C0025DB8 (UsbhGetUsbDeviceFlags.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0025F5C (UsbhGetHubDeviceInformation.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0048CD0 (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetDeviceDescriptor @ 0x1C005B364 (UsbhGetDeviceDescriptor.c)
 * Callees:
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 */

char __fastcall UsbhValidateDeviceDescriptor(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _BYTE *a5)
{
  PDEVICE_OBJECT v7; // rcx
  int v8; // r9d
  unsigned __int16 v9; // cx

  if ( *(_BYTE *)a2 < 0x12u )
  {
    if ( a4 )
      *a4 = -1072693247;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v8 = 14;
LABEL_15:
    WPP_RECORDER_SF_(v7->DeviceExtension, 0, 1, v8, (__int64)&WPP_65ba9c319ebf3ca6864be494501f8c6f_Traceguids);
    return 0;
  }
  if ( *(_BYTE *)(a2 + 1) != 1 )
  {
    if ( a4 )
      *a4 = -1072693246;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v8 = 15;
    goto LABEL_15;
  }
  if ( *(_BYTE *)(a2 + 4) != 17 || *(_BYTE *)(a2 + 5) || *(_BYTE *)(a2 + 6) )
    return 1;
  v9 = *(_WORD *)(a2 + 2);
  if ( (unsigned __int16)(v9 - 513) <= 0xFEu )
  {
    if ( a5 )
      *a5 = 1;
    return 1;
  }
  Log(a1, 256, 1447314481, v9, 0LL);
  return 0;
}
