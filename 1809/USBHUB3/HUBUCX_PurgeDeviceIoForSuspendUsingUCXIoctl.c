/*
 * XREFs of HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl @ 0x1C00232A8
 * Callers:
 *     HUBDSM_PurgingDeviceIoOnHubSuspendWhileWaitingForD0EntryOnHwWake @ 0x1C001AB90 (HUBDSM_PurgingDeviceIoOnHubSuspendWhileWaitingForD0EntryOnHwWake.c)
 *     HUBDSM_PurgingDeviceIoOnPrepareForHibernate @ 0x1C001ABB0 (HUBDSM_PurgingDeviceIoOnPrepareForHibernate.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00209F4 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl(_QWORD *a1)
{
  _DWORD *v2; // rbx
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-10h]

  v2 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   a1[54],
                   0LL);
  memset(v2, 0, 0x20uLL);
  *v2 = 32;
  *((_QWORD *)v2 + 1) = *(_QWORD *)(*a1 + 248LL);
  *((_QWORD *)v2 + 2) = a1[3];
  *((_BYTE *)v2 + 24) = 1;
  result = HUBUCX_SubmitUcxIoctl((__int64)a1, 0x49102Fu);
  if ( (int)result < 0 )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 1432LL),
             2u,
             5u,
             0x44u,
             (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
             v4);
  }
  return result;
}
