/*
 * XREFs of HUBFDO_CleanupDeviceInterfaceForBillboard @ 0x1C000CCF0
 * Callers:
 *     HUBPDO_BillboardCleanup @ 0x1C006EF5C (HUBPDO_BillboardCleanup.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBFDO_CleanupDeviceInterfaceForBillboard(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  unsigned int v8; // ebx
  NTSTATUS v9; // eax
  unsigned __int16 v10; // r9
  char v12; // [rsp+20h] [rbp-B8h]
  __int64 v13; // [rsp+28h] [rbp-B0h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v15[16]; // [rsp+50h] [rbp-88h] BYREF
  WCHAR SourceString[32]; // [rsp+60h] [rbp-78h] BYREF

  memset(SourceString, 0, sizeof(SourceString));
  if ( !a4 )
  {
    v8 = 0;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 4u, 3u, 0x42u, (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids);
    goto LABEL_9;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  DestinationString.MaximumLength = 64;
  v9 = RtlIntegerToUnicodeString(a2, 0xAu, &DestinationString);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = 67;
LABEL_8:
    LODWORD(v13) = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      v10,
      (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids,
      v13);
    goto LABEL_9;
  }
  v12 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, GUID *, struct _UNICODE_STRING *, char))(WdfFunctions_01015 + 624))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 16),
    &GUID_DEVINTERFACE_USB_BILLBOARD,
    &DestinationString,
    v12);
  if ( !a3 )
    return v8;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _BYTE *))(WdfFunctions_01015 + 2472))(WdfDriverGlobals, a3, v15);
  v9 = IoSetDeviceInterfacePropertyData(v15, &DEVPKEY_Device_UsbBillboardInfo, 0LL, 0LL, 4099, 0, 0LL);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = 68;
    goto LABEL_8;
  }
LABEL_9:
  if ( a3 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a3);
  return v8;
}
