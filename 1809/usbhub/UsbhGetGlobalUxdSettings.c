/*
 * XREFs of UsbhGetGlobalUxdSettings @ 0x1C0022120
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C002139C (UsbhUpdateUxdSettings.c)
 *     UsbhRegPnpStart @ 0x1C00214F0 (UsbhRegPnpStart.c)
 *     UsbhDeleteUxdSettings @ 0x1C005BCDC (UsbhDeleteUxdSettings.c)
 *     UsbhUxdShutdown @ 0x1C005C844 (UsbhUxdShutdown.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0049AD4 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1C0051CF0 (WPP_RECORDER_SF_SD.c)
 */

__int64 __fastcall UsbhGetGlobalUxdSettings(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  __int64 (__fastcall *SystemRoutineAddress)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64)); // rax
  unsigned int v4; // eax
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  unsigned int v8; // esi
  _QWORD *v9; // rbx
  int v11; // [rsp+20h] [rbp-E0h]
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall *v14)(int, int, int, int, __int64, __int64); // [rsp+60h] [rbp-A0h] BYREF
  int v15; // [rsp+68h] [rbp-98h]
  const wchar_t *v16; // [rsp+70h] [rbp-90h]
  _QWORD *v17; // [rsp+78h] [rbp-88h] BYREF
  int v18; // [rsp+80h] [rbp-80h]
  _QWORD *v19; // [rsp+88h] [rbp-78h]
  int v20; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v21)(int, int, int, int, __int64, __int64); // [rsp+98h] [rbp-68h]
  int v22; // [rsp+A0h] [rbp-60h]
  const wchar_t *v23; // [rsp+A8h] [rbp-58h]
  char *v24; // [rsp+B0h] [rbp-50h]
  int v25; // [rsp+B8h] [rbp-48h]
  char *v26; // [rsp+C0h] [rbp-40h]
  int v27; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v28)(int, int, int, int, __int64, __int64); // [rsp+D0h] [rbp-30h]
  int v29; // [rsp+D8h] [rbp-28h]
  const wchar_t *v30; // [rsp+E0h] [rbp-20h]
  _QWORD *v31; // [rsp+E8h] [rbp-18h]
  int v32; // [rsp+F0h] [rbp-10h]
  _QWORD *v33; // [rsp+F8h] [rbp-8h]
  int v34; // [rsp+100h] [rbp+0h]
  __int64 (__fastcall *v35)(int, int, int, int, __int64, __int64); // [rsp+108h] [rbp+8h]
  int v36; // [rsp+110h] [rbp+10h]
  const wchar_t *v37; // [rsp+118h] [rbp+18h]
  char *v38; // [rsp+120h] [rbp+20h]
  int v39; // [rsp+128h] [rbp+28h]
  int *v40; // [rsp+130h] [rbp+30h]
  int v41; // [rsp+138h] [rbp+38h]
  __int64 v42; // [rsp+140h] [rbp+40h]
  int v43; // [rsp+148h] [rbp+48h]
  __int128 v44; // [rsp+150h] [rbp+50h]
  int v45; // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  int v47; // [rsp+170h] [rbp+70h]

  v17 = a2;
  v12 = 0;
  *a2 = 0LL;
  a2[1] = 0LL;
  v14 = UsbhQueryGlobalHubValue;
  v16 = L"UxdGlobalDeleteOnShutdown";
  v2 = 280;
  v15 = 0;
  v23 = L"UxdGlobalDeleteOnReload";
  v24 = (char *)a2 + 4;
  v26 = (char *)a2 + 4;
  v30 = L"UxdGlobalDeleteOnDisconnect";
  v31 = a2 + 1;
  v33 = a2 + 1;
  v37 = L"UxdGlobalEnable";
  v38 = (char *)a2 + 12;
  v40 = &v12;
  v18 = 4;
  v19 = a2;
  v20 = 4;
  v21 = UsbhQueryGlobalHubValue;
  v22 = 0;
  v25 = 4;
  v27 = 4;
  v28 = UsbhQueryGlobalHubValue;
  v29 = 0;
  v32 = 4;
  v34 = 4;
  v35 = UsbhQueryGlobalHubValue;
  v36 = 0;
  v39 = 4;
  v41 = 4;
  v42 = 0LL;
  v43 = 0;
  v44 = 0LL;
  v45 = 0;
  v46 = 0LL;
  v47 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      61,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids);
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64)))MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64)))RtlQueryRegistryValues;
  v11 = 0;
  v4 = SystemRoutineAddress(1LL, L"usbhub\\uxd_control\\policy", &v14);
  v8 = v4;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      62,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
      v4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      v6,
      63,
      (__int64)&WPP_7b579768642e3c85c7e1c1dccc25cdce_Traceguids,
      (__int64)L"usbhub\\uxd_control\\policy");
  v9 = &v17;
  do
  {
    if ( !*(v9 - 3) )
      break;
    if ( *((_DWORD *)v9 + 2) == 4 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_SD(WPP_GLOBAL_Control->DeviceExtension, *(_DWORD *)*v9, v6, v7, v11, *(v9 - 1), *(_DWORD *)*v9);
    v9 += 7;
    v2 -= 56;
  }
  while ( v2 >= 0x38 );
  return v8;
}
