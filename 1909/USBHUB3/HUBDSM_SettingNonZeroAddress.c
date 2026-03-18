/*
 * XREFs of HUBDSM_SettingNonZeroAddress @ 0x1C001EC00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C002292C (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBDSM_SettingNonZeroAddress(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  int v3; // eax
  int v5; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD **)(a1 + 960);
  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   v1[54],
                   0LL);
  memset(v2, 0, 0x20uLL);
  *(_DWORD *)v2 = 32;
  v2[1] = *(_QWORD *)(*v1 + 248LL);
  v2[2] = v1[3];
  v3 = HUBUCX_SubmitUcxIoctl(v1, 4788255LL);
  if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1[1] + 1432LL),
      2u,
      5u,
      0x1Eu,
      (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
      v5);
  }
  return 1000LL;
}
