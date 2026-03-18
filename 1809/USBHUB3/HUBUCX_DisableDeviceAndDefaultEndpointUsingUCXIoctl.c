/*
 * XREFs of HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C00210E4
 * Callers:
 *     HUBDSM_DisablingDeviceInControllerOnStopSuspendOnRenumWithAddress0Ownership @ 0x1C001A940 (HUBDSM_DisablingDeviceInControllerOnStopSuspendOnRenumWithAddress0Ownership.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0011A7C (WPP_RECORDER_SF_q.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00209F4 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl(__int64 a1)
{
  _DWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+28h] [rbp-10h]

  v2 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   *(_QWORD *)(a1 + 432),
                   0LL);
  memset(v2, 0, 0x28uLL);
  *v2 = 40;
  *((_QWORD *)v2 + 1) = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
  *((_QWORD *)v2 + 2) = *(_QWORD *)(a1 + 24);
  *((_QWORD *)v2 + 3) = *(_QWORD *)(a1 + 88);
  if ( (*(_DWORD *)(a1 + 1644) & 0x4000000) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 && *(_DWORD *)(v3 + 4) == 1 )
    {
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x1Bu,
        (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
        v4);
      v2[8] = 2;
    }
    else
    {
      v2[8] = 0;
    }
  }
  result = HUBUCX_SubmitUcxIoctl(a1, 0x49102Bu);
  if ( (int)result < 0 )
  {
    LODWORD(v6) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             2u,
             5u,
             0x1Cu,
             (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
             v6);
  }
  return result;
}
