/*
 * XREFs of HUBUCX_StartDeviceIoUsingUCXIoctl @ 0x1C0025638
 * Callers:
 *     HUBDSM_StartingDeviceIoOnDeviceResumeOnHwWake @ 0x1C001CEF0 (HUBDSM_StartingDeviceIoOnDeviceResumeOnHwWake.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C002292C (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_StartDeviceIoUsingUCXIoctl(__int64 *a1)
{
  _QWORD *v2; // rax
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-10h]

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   a1[54],
                   0LL);
  *v2 = 0LL;
  v2[1] = 0LL;
  v2[2] = 0LL;
  *(_DWORD *)v2 = 24;
  v2[1] = *(_QWORD *)(*a1 + 248);
  v2[2] = a1[3];
  result = HUBUCX_SubmitUcxIoctl(a1, 0x491033u);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 1432),
             2u,
             5u,
             0x46u,
             (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
             v4);
  }
  return result;
}
