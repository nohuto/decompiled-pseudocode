/*
 * XREFs of HUBFDO_CreateDeviceInterfaceForBillboard @ 0x1C000CB3C
 * Callers:
 *     HUBPDO_PublishBillboardDetails @ 0x1C006F108 (HUBPDO_PublishBillboardDetails.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C002CBAC (HUBMISC_GetDeviceInterfacePath.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBFDO_CreateDeviceInterfaceForBillboard(
        __int64 a1,
        unsigned __int16 a2,
        _QWORD *a3,
        _BYTE *a4,
        int a5,
        __int64 a6)
{
  ULONG v7; // ebx
  NTSTATUS DeviceInterfacePath; // eax
  unsigned int v11; // ebx
  unsigned __int16 v12; // r9
  __int64 v14; // [rsp+28h] [rbp-C0h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-98h] BYREF
  WCHAR SourceString[32]; // [rsp+60h] [rbp-88h] BYREF

  v7 = a2;
  memset(SourceString, 0, sizeof(SourceString));
  *a3 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  DestinationString.MaximumLength = 64;
  DeviceInterfacePath = RtlIntegerToUnicodeString(v7, 0xAu, &DestinationString);
  v11 = DeviceInterfacePath;
  if ( DeviceInterfacePath < 0 )
  {
    v12 = 62;
LABEL_9:
    LODWORD(v14) = DeviceInterfacePath;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      v12,
      (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids,
      v14);
    return v11;
  }
  DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, GUID *, struct _UNICODE_STRING *))(WdfFunctions_01015 + 616))(
                          WdfDriverGlobals,
                          *(_QWORD *)(a1 + 16),
                          &GUID_DEVINTERFACE_USB_BILLBOARD,
                          &DestinationString);
  v11 = DeviceInterfacePath;
  if ( DeviceInterfacePath < 0 )
  {
    v12 = 63;
    goto LABEL_9;
  }
  *a4 = 1;
  DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                          (unsigned int)&GUID_DEVINTERFACE_USB_BILLBOARD,
                          *(_QWORD *)(a1 + 16),
                          (_DWORD)a3,
                          (unsigned int)&DestinationString,
                          *(_QWORD *)(a1 + 2520));
  v11 = DeviceInterfacePath;
  if ( DeviceInterfacePath < 0 )
  {
    v12 = 64;
    goto LABEL_9;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _BYTE *))(WdfFunctions_01015 + 2472))(WdfDriverGlobals, *a3, v16);
  DeviceInterfacePath = IoSetDeviceInterfacePropertyData(v16, &DEVPKEY_Device_UsbBillboardInfo, 0LL, 0LL, 4099, a5, a6);
  v11 = DeviceInterfacePath;
  if ( DeviceInterfacePath < 0 )
  {
    v12 = 65;
    goto LABEL_9;
  }
  return v11;
}
