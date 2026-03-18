/*
 * XREFs of HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C0023E94
 * Callers:
 *     HUBHSM_GettingRootHubInfo @ 0x1C0009350 (HUBHSM_GettingRootHubInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

void __fastcall HUBUCX_GetRootHubInfoUsingUCXIoctl(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  unsigned __int16 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v7[7]; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v8[9]; // [rsp+78h] [rbp+7h] BYREF

  memset(v7, 0, sizeof(v7));
  memset(v8, 0, sizeof(v8));
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  memset(v7, 0, sizeof(v7));
  v7[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v7[0]) = 56;
  v7[3] = 0x100000001LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         v7,
         v2,
         &v6);
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_8;
    v4 = 41;
    goto LABEL_7;
  }
  v5 = v6;
  *(_DWORD *)(a1 + 104) = 24;
  v8[1] = a1 + 104;
  LOBYTE(v8[0]) = 15;
  LODWORD(v8[3]) = 4788235;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(WdfDriverGlobals, v5, v8);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v6,
    HUBUCX_GetRootHubInfoUsingUCXIoctlComplete,
    a1);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          v6,
          v2,
          0LL) )
  {
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v6);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 42;
LABEL_7:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        v4,
        (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
        v3);
    }
  }
LABEL_8:
  if ( v3 < 0 )
  {
    if ( v6 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    HUBSM_AddEvent(a1 + 1264, 2038);
  }
}
