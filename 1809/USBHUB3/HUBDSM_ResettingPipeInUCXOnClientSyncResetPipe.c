/*
 * XREFs of HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x1C001B080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C000AA00 (WPP_RECORDER_SF_Ld.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00209F4 (HUBUCX_SubmitUcxIoctl.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  _DWORD *v3; // rdi
  _QWORD *v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  int v8; // [rsp+28h] [rbp-50h]
  int v9; // [rsp+30h] [rbp-48h]
  _WORD v10[20]; // [rsp+40h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  memset(v10, 0, sizeof(v10));
  v2 = *(_QWORD *)(v1 + 456);
  v10[0] = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _WORD *))(WdfFunctions_01015 + 2128))(WdfDriverGlobals, v2, v10);
  v3 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v1 + 432),
                   0LL);
  memset(v3, 0, 0x28uLL);
  v4 = *(_QWORD **)(v1 + 1656);
  if ( v4 )
  {
    *v3 = 40;
    *((_QWORD *)v3 + 1) = *(_QWORD *)(*(_QWORD *)v1 + 248LL);
    *((_QWORD *)v3 + 2) = *(_QWORD *)(v1 + 24);
    *((_QWORD *)v3 + 3) = *v4;
    v3[8] = 1;
    v5 = HUBUCX_SubmitUcxIoctl(v1, 4788287LL);
    if ( v5 < 0 )
    {
      v9 = v5;
      v8 = 4788287;
      WPP_RECORDER_SF_Ld(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        v6,
        5u,
        0x3Au,
        (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
        v8,
        v9);
    }
  }
  else
  {
    *(_DWORD *)(v1 + 1564) = -2147482112;
    *(_DWORD *)(v1 + 1560) = -1073741811;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x39u,
      (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids);
    HUBSM_AddEvent(v1 + 504, 4020);
  }
  return 1000LL;
}
