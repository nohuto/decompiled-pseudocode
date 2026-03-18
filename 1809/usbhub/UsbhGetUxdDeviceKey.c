/*
 * XREFs of UsbhGetUxdDeviceKey @ 0x1C005C0CC
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C002139C (UsbhUpdateUxdSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     UsbhBuildUxdDeviceKey @ 0x1C005B9E0 (UsbhBuildUxdDeviceKey.c)
 *     WPP_RECORDER_SF_SS @ 0x1C005C960 (WPP_RECORDER_SF_SS.c)
 */

__int64 __fastcall UsbhGetUxdDeviceKey(__int64 a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v5; // rcx
  int v6; // r8d
  __int64 (__fastcall *SystemRoutineAddress)(__int64, const WCHAR *, void **); // rax
  void *v9; // [rsp+40h] [rbp-69h] BYREF
  int v10; // [rsp+48h] [rbp-61h]
  __int128 *v11; // [rsp+50h] [rbp-59h]
  __int64 v12; // [rsp+58h] [rbp-51h]
  int v13; // [rsp+60h] [rbp-49h]
  __int64 v14; // [rsp+68h] [rbp-41h]
  int v15; // [rsp+70h] [rbp-39h]
  __int64 v16; // [rsp+78h] [rbp-31h]
  int v17; // [rsp+80h] [rbp-29h]
  __int64 v18; // [rsp+88h] [rbp-21h]
  __int64 v19; // [rsp+90h] [rbp-19h]
  int v20; // [rsp+98h] [rbp-11h]
  __int64 v21; // [rsp+A0h] [rbp-9h]
  int v22; // [rsp+A8h] [rbp-1h]
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp+7h] BYREF
  __int128 v24; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v25; // [rsp+D0h] [rbp+27h]
  wchar_t v26; // [rsp+D8h] [rbp+2Fh]

  v24 = *(_OWORD *)L"VVVVPPPPRRRR";
  v26 = aVvvvpppprrrr[12];
  v25 = *(_QWORD *)L"RRRR";
  v5 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x12u,
      (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids);
  UsbhBuildUxdDeviceKey((__int64)v5, a2, (wchar_t *)&v24);
  v10 = 4;
  v9 = &UsbhQueryUxdDevice;
  v11 = &v24;
  v12 = a3;
  v13 = 0;
  v14 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v21 = 0LL;
  v22 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_SS(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      v6,
      19,
      (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids,
      (__int64)L"usbhub\\uxd_control\\devices",
      (__int64)&v24);
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const WCHAR *, void **))MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const WCHAR *, void **))RtlQueryRegistryValues;
  return SystemRoutineAddress(1LL, L"usbhub\\uxd_control\\devices", &v9);
}
