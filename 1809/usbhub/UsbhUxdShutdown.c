/*
 * XREFs of UsbhUxdShutdown @ 0x1C005C844
 * Callers:
 *     UsbhDeviceShutdown @ 0x1C004F620 (UsbhDeviceShutdown.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C0022120 (UsbhGetGlobalUxdSettings.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C005BDE4 (UsbhDeleteUxdSubKeys.c)
 *     UsbhOpenUxdPortHandle @ 0x1C005C41C (UsbhOpenUxdPortHandle.c)
 */

__int64 __fastcall UsbhUxdShutdown(__int64 a1)
{
  _DWORD *v2; // rdi
  PDEVICE_OBJECT v3; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  v2 = FdoExt(a1);
  v3 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x23u,
      (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids);
  UsbhGetGlobalUxdSettings((__int64)v3, (_QWORD *)v2 + 647);
  RtlInitUnicodeString(
    &DestinationString,
    L"\\registry\\machine\\system\\currentcontrolset\\services\\usbhub\\uxd_control\\devices\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    UsbhDeleteUxdSubKeys(a1, (WCHAR *)KeyHandle);
    ZwClose(KeyHandle);
  }
  KeyHandle = 0LL;
  if ( (int)UsbhOpenUxdPortHandle(a1, &KeyHandle) >= 0 )
  {
    UsbhDeleteUxdSubKeys(a1, (WCHAR *)KeyHandle);
    ZwClose(KeyHandle);
  }
  return 0LL;
}
