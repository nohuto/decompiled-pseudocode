/*
 * XREFs of HUBHSM_ResettingInterruptPipeOnFailure @ 0x1C0007D50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBHSM_ResettingInterruptPipeOnFailure(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rdi
  _QWORD v6[9]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(_QWORD **)(a1 + 960);
  memset(v1 + 103, 0, 0x28uLL);
  v1[104] = v1[31];
  *((_DWORD *)v1 + 206) = 1966120;
  v1[106] = v1[138];
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v1[2]);
  v3 = v1[100];
  v4 = v2;
  memset(v6, 0, sizeof(v6));
  LOBYTE(v6[0]) = 15;
  LODWORD(v6[3]) = 2228227;
  v6[1] = v1 + 103;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(WdfDriverGlobals, v3, v6);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), _QWORD *))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v3,
    HUBPARENT_ResetInterruptPipeComplete,
    v1);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          v3,
          v4,
          0LL) )
  {
    WPP_RECORDER_SF_(v1[315], 2u, 3u, 0x11u, (__int64)&WPP_6f1c5846342730c10a7f2a15ffc55722_Traceguids);
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v3) < 0 )
      HUBSM_AddEvent(v1 + 158, 2012LL);
  }
  return 1000LL;
}
