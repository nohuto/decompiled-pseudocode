/*
 * XREFs of HUBFDO_GetDeviceCapabilities @ 0x1C000B5A4
 * Callers:
 *     HUBFDO_EvtDeviceAdd @ 0x1C00702C0 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBFDO_GetDeviceCapabilities(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v6; // r14
  int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp-49h] BYREF
  __int64 v10; // [rsp+38h] [rbp-41h] BYREF
  __int128 v11; // [rsp+40h] [rbp-39h]
  _QWORD v12[9]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v13; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+A0h] [rbp+27h]

  v13 = 0LL;
  v14 = 0LL;
  v10 = 0LL;
  v11 = 0uLL;
  memset(v12, 0, sizeof(v12));
  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, a1);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         0LL,
         v6,
         &v9);
  if ( v7 >= 0 )
  {
    v11 = 0xC00000BBuLL;
    v10 = 24LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992))(
      WdfDriverGlobals,
      v9,
      &v10);
    memset(a2, 0, 0x40uLL);
    *a2 = 65600;
    a2[2] = -1;
    a2[3] = -1;
    memset(v12, 0, sizeof(v12));
    LOWORD(v12[0]) = 2331;
    v12[1] = a2;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
      WdfDriverGlobals,
      v9,
      v12);
    v14 = 0LL;
    v13 = 0x200000010LL;
    if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64 *))(WdfFunctions_01015 + 2024))(
            WdfDriverGlobals,
            v9,
            v6,
            &v13)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(a3, 2u, 5u, 0xAu, (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids);
    }
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v9);
  }
  if ( v9 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return (unsigned int)v7;
}
