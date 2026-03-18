/*
 * XREFs of WMI_RegisterHub @ 0x1C00816E4
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0070DB0 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall WMI_RegisterHub(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // eax
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp-31h]
  _QWORD v7[8]; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v8[10]; // [rsp+78h] [rbp+17h] BYREF

  memset(v8, 0, sizeof(v8));
  memset(v7, 0, sizeof(v7));
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00640E0);
  v8[0] = 40;
  memset(&v8[5], 0, 20);
  v3 = v2;
  *(GUID *)&v8[1] = GUID_USB_WMI_STD_DATA;
  memset(v7, 0, sizeof(v7));
  LODWORD(v7[0]) = 64;
  v7[2] = v8;
  BYTE1(v7[3]) = 1;
  v7[7] = WMI_ExecuteMethodUsbWmiStdData;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 2984))(
         WdfDriverGlobals,
         a1,
         v7,
         0LL,
         v3 + 2536);
  if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 2520),
      2u,
      3u,
      0xFu,
      (__int64)&WPP_1362546fee9e322e2fa74dbd802c5a46_Traceguids,
      v4);
  v8[0] = 40;
  memset(&v8[5], 0, 20);
  *(GUID *)&v8[1] = GUID_USB_WMI_NODE_INFO;
  memset(v7, 0, sizeof(v7));
  v7[2] = v8;
  LODWORD(v7[0]) = 64;
  v7[4] = WMI_QueryInstanceHubNodeInfo;
  BYTE1(v7[3]) = 1;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 2984))(
             WdfDriverGlobals,
             a1,
             v7,
             0LL,
             0LL);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v6) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(v3 + 2520),
             2u,
             3u,
             0x10u,
             (__int64)&WPP_1362546fee9e322e2fa74dbd802c5a46_Traceguids,
             v6);
  }
  return result;
}
