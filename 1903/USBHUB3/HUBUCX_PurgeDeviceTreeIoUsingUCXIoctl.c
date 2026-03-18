/*
 * XREFs of HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl @ 0x1C0025578
 * Callers:
 *     HUBDSM_PurgingDeviceTreeIoOnReEnumerationInUnConfigured @ 0x1C0020220 (HUBDSM_PurgingDeviceTreeIoOnReEnumerationInUnConfigured.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C002292C (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl(__int64 *a1)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-10h]

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   a1[54],
                   0LL);
  memset(v2, 0, 0x20uLL);
  *(_DWORD *)v2 = 32;
  v2[1] = *(_QWORD *)(*a1 + 248);
  v2[2] = a1[3];
  result = HUBUCX_SubmitUcxIoctl(a1, 0x491053u);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 1432),
             2u,
             5u,
             0x45u,
             (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
             v4);
  }
  return result;
}
