/*
 * XREFs of HUBDSM_AbortingDeviceIoInSuspendingBeforeArmingForWakeFailure @ 0x1C001EB50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00209F4 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_AbortingDeviceIoInSuspendingBeforeArmingForWakeFailure(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rax
  int v3; // eax
  int v5; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD **)(a1 + 960);
  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   v1[54],
                   0LL);
  *v2 = 0LL;
  v2[1] = 0LL;
  v2[2] = 0LL;
  *(_DWORD *)v2 = 24;
  v2[1] = *(_QWORD *)(*v1 + 248LL);
  v2[2] = v1[3];
  v3 = HUBUCX_SubmitUcxIoctl(v1, 4788311LL);
  if ( v3 < 0 )
  {
    v5 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1[1] + 1432LL),
      2u,
      5u,
      0x42u,
      (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
      v5);
  }
  return 1000LL;
}
