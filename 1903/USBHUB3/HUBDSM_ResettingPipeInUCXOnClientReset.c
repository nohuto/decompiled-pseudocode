/*
 * XREFs of HUBDSM_ResettingPipeInUCXOnClientReset @ 0x1C001C7A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C002292C (HUBUCX_SubmitUcxIoctl.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBDSM_ResettingPipeInUCXOnClientReset(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rdx
  int v5; // edx
  _WORD v7[20]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  memset(v7, 0, sizeof(v7));
  v2 = *(_QWORD *)(v1 + 456);
  v7[0] = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _WORD *))(WdfFunctions_01015 + 2128))(WdfDriverGlobals, v2, v7);
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v1 + 432),
                   0LL);
  memset(v3, 0, 0x28uLL);
  v4 = *(_QWORD **)(v1 + 1656);
  if ( v4 )
  {
    *(_DWORD *)v3 = 40;
    v3[1] = *(_QWORD *)(*(_QWORD *)v1 + 248LL);
    v3[2] = *(_QWORD *)(v1 + 24);
    v3[3] = *v4;
    v5 = HUBUCX_SubmitUcxIoctl(v1, 4788287LL);
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x3Cu,
        (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
        v5);
  }
  else
  {
    *(_DWORD *)(v1 + 1564) = -2147482112;
    *(_DWORD *)(v1 + 1560) = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x3Bu,
        (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids);
    HUBSM_AddEvent(v1 + 504, 4020);
  }
  return 1000LL;
}
