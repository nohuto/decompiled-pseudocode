/*
 * XREFs of HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice @ 0x1C002CFB0
 * Callers:
 *     HUBMISC_IsBootDeviceReady @ 0x1C002CDF4 (HUBMISC_IsBootDeviceReady.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // eax
  _QWORD v6[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v7[7]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v8; // [rsp+90h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  result = *(unsigned int *)(v2 + 1336);
  if ( (result & 0x10) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1336), 0xFFFFFFEF);
    memset(v7, 0, sizeof(v7));
    v4 = *(_QWORD *)(a1 + 16);
    LODWORD(v7[0]) = 56;
    v7[3] = 0x100000001LL;
    v7[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v4);
    v6[2] = 1LL;
    v6[1] = HUBREG_EvtWorkItemPerformPostSurpriseRemovalRecoveryActions;
    v6[0] = 24LL;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032))(
           WdfDriverGlobals,
           v6,
           v7,
           &v8);
    if ( v5 >= 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v8);
    else
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
               2u,
               2u,
               0x6Fu,
               (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
               v5);
  }
  return result;
}
