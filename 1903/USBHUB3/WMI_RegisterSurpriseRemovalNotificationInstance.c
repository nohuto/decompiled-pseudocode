/*
 * XREFs of WMI_RegisterSurpriseRemovalNotificationInstance @ 0x1C0081A30
 * Callers:
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C00196C0 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall WMI_RegisterSurpriseRemovalNotificationInstance(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  int v6; // [rsp+28h] [rbp-21h]
  _QWORD v7[8]; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v8[5]; // [rsp+70h] [rbp+27h] BYREF

  memset(v8, 0, sizeof(v8));
  memset(v7, 0, sizeof(v7));
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0064040);
  LODWORD(v8[0]) = 40;
  HIDWORD(v8[2]) = 1;
  *(_OWORD *)&v8[3] = 0LL;
  v3 = v2;
  *(GUID *)((char *)v8 + 4) = GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION;
  memset(v7, 0, sizeof(v7));
  v7[2] = v8;
  LODWORD(v7[0]) = 64;
  BYTE1(v7[3]) = 1;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C0064130);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 2984))(
             WdfDriverGlobals,
             a1,
             v7,
             0LL,
             v4 + 80);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
             2u,
             5u,
             0x12u,
             (__int64)&WPP_1362546fee9e322e2fa74dbd802c5a46_Traceguids,
             v6);
  }
  return result;
}
