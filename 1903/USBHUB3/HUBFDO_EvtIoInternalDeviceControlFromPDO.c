/*
 * XREFs of HUBFDO_EvtIoInternalDeviceControlFromPDO @ 0x1C000C4E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

void __fastcall HUBFDO_EvtIoInternalDeviceControlFromPDO(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // rax
  __int64 *v8; // rbx
  _QWORD v10[5]; // [rsp+30h] [rbp-38h] BYREF

  memset(v10, 0, sizeof(v10));
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    v7,
                    off_1C00640E0);
  if ( a5 == 2228243 )
  {
    LOWORD(v10[0]) = 40;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
      WdfDriverGlobals,
      a2,
      v10);
    v8[323] = *(_QWORD *)(*(_QWORD *)(v10[2] + 24LL) + 8LL);
    v8[316] = a2;
    HUBSM_AddEvent((__int64)(v8 + 158), 2039);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(v8[315], 2u, 3u, 0x20u, (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids, a5);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
      WdfDriverGlobals,
      a2,
      3221225473LL);
  }
}
