/*
 * XREFs of HUBPARENT_ResetHub @ 0x1C00075F0
 * Callers:
 *     HUBHSM_ResettingHubOnResume @ 0x1C0008650 (HUBHSM_ResettingHubOnResume.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p @ 0x1C0006A6C (McTemplateK0p.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

_UNKNOWN **__fastcall HUBPARENT_ResetHub(__int64 a1)
{
  __int64 v2; // rsi
  struct _MCGEN_TRACE_CONTEXT *v3; // rcx
  __int64 v4; // rdx
  int v5; // edi
  _UNKNOWN **result; // rax
  unsigned __int16 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v10[7]; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v11[9]; // [rsp+78h] [rbp+7h] BYREF

  memset(v11, 0, sizeof(v11));
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  memset(v10, 0, sizeof(v10));
  v3 = *(struct _MCGEN_TRACE_CONTEXT **)(a1 + 16);
  LODWORD(v10[0]) = 56;
  v10[3] = 0x100000001LL;
  v10[4] = v3;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x20) != 0 )
    McTemplateK0p(v3, &USBHUB3_ETW_EVENT_HUB_RESET_REQUEST_START, 0LL, *(_QWORD *)(a1 + 248));
  v4 = *(_QWORD *)(a1 + 2656);
  if ( v4 )
    *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 v4,
                 off_1C00640B8)
             + 24) = 1;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         v10,
         v2,
         &v9);
  if ( v5 < 0 )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v7 = 19;
    goto LABEL_11;
  }
  v8 = v9;
  v11[1] = a1 + 2408;
  *(_DWORD *)(a1 + 2408) = 0;
  LOBYTE(v11[0]) = 15;
  LODWORD(v11[3]) = 2232243;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v8,
    v11);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64), _QWORD))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v9,
    HUBPARENT_ResetHubComplete,
    0LL);
  result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015
                                                                                                 + 2024))(
                          WdfDriverGlobals,
                          v9,
                          v2,
                          0LL);
  if ( !(_BYTE)result )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v9);
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 20;
LABEL_11:
      result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                              *(_QWORD *)(a1 + 2520),
                              2u,
                              3u,
                              v7,
                              (__int64)&WPP_6f1c5846342730c10a7f2a15ffc55722_Traceguids,
                              v5);
    }
  }
LABEL_12:
  if ( v5 < 0 )
  {
    if ( v9 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    return (_UNKNOWN **)HUBSM_AddEvent(a1 + 1264, 2070LL);
  }
  return result;
}
