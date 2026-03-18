/*
 * XREFs of HUBFDO_CleanupDeviceInterfaceForBillboard @ 0x1C000DBC8
 * Callers:
 *     HUBPDO_BillboardCleanup @ 0x1C007591C (HUBPDO_BillboardCleanup.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBFDO_CleanupDeviceInterfaceForBillboard(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  NTSTATUS v8; // ebx
  unsigned __int16 v9; // r9
  char v11; // [rsp+20h] [rbp-59h]
  __int64 v12; // [rsp+28h] [rbp-51h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-29h] BYREF
  WCHAR SourceString[32]; // [rsp+60h] [rbp-19h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v14[0] = 0LL;
  v14[1] = 0LL;
  memset(SourceString, 0, sizeof(SourceString));
  if ( !a4 )
  {
    v8 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 4u, 3u, 0x45u, (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids);
    goto LABEL_12;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  DestinationString.MaximumLength = 64;
  v8 = RtlIntegerToUnicodeString(a2, 0xAu, &DestinationString);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v9 = 70;
    goto LABEL_11;
  }
  v11 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, GUID *, struct _UNICODE_STRING *, char))(WdfFunctions_01015 + 624))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 16),
    &GUID_DEVINTERFACE_USB_BILLBOARD,
    &DestinationString,
    v11);
  if ( !a3 )
    return (unsigned int)v8;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2472))(
    WdfDriverGlobals,
    a3,
    v14);
  v8 = IoSetDeviceInterfacePropertyData(v14, &DEVPKEY_Device_UsbBillboardInfo, 0LL, 0LL, 4099, 0, 0LL);
  if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 71;
LABEL_11:
    LODWORD(v12) = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      v9,
      (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids,
      v12);
  }
LABEL_12:
  if ( a3 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a3);
  return (unsigned int)v8;
}
