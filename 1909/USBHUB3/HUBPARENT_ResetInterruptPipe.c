/*
 * XREFs of HUBPARENT_ResetInterruptPipe @ 0x1C0007300
 * Callers:
 *     HUBHSM_ResettingInterruptPipeOnFailure @ 0x1C0008670 (HUBHSM_ResettingInterruptPipeOnFailure.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBPARENT_ResetInterruptPipe(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 result; // rax
  _QWORD v6[9]; // [rsp+30h] [rbp-58h] BYREF

  memset(v6, 0, sizeof(v6));
  memset(a1 + 103, 0, 0x28uLL);
  a1[104] = a1[31];
  *((_DWORD *)a1 + 206) = 1966120;
  a1[106] = a1[138];
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(WdfDriverGlobals, a1[2]);
  v3 = a1[100];
  v4 = v2;
  memset(v6, 0, sizeof(v6));
  LOBYTE(v6[0]) = 15;
  LODWORD(v6[3]) = 2228227;
  v6[1] = a1 + 103;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(WdfDriverGlobals, v3, v6);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), _QWORD *))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v3,
    HUBPARENT_ResetInterruptPipeComplete,
    a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             v3,
             v4,
             0LL);
  if ( !(_BYTE)result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a1[315], 2u, 3u, 0x11u, (__int64)&WPP_6f1c5846342730c10a7f2a15ffc55722_Traceguids);
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v3);
    if ( (int)result < 0 )
      return HUBSM_AddEvent(a1 + 158, 2012LL);
  }
  return result;
}
