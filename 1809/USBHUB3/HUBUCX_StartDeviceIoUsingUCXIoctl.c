/*
 * XREFs of HUBUCX_StartDeviceIoUsingUCXIoctl @ 0x1C002340C
 * Callers:
 *     HUBDSM_StartingDeviceIoOnDeviceResumeOnHwWake @ 0x1C001B5F0 (HUBDSM_StartingDeviceIoOnDeviceResumeOnHwWake.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00209F4 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_StartDeviceIoUsingUCXIoctl(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-10h]

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   a1[54],
                   0LL);
  *v2 = 0LL;
  v2[1] = 0LL;
  v2[2] = 0LL;
  *(_DWORD *)v2 = 24;
  v2[1] = *(_QWORD *)(*a1 + 248LL);
  v2[2] = a1[3];
  result = HUBUCX_SubmitUcxIoctl((__int64)a1, 0x491033u);
  if ( (int)result < 0 )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 1432LL),
             2u,
             5u,
             0x46u,
             (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
             v4);
  }
  return result;
}
