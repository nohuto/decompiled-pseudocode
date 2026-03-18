/*
 * XREFs of WMI_FireNotification @ 0x1C007A08C
 * Callers:
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C00136AC (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0016400 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtOutOfBandwidthTimer @ 0x1C00181E0 (HUBPDO_EvtOutOfBandwidthTimer.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006E360 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C006F900 (HUBPDO_CreatePdoInternal.c)
 *     HUBMISC_GenerateUserNotificationForPersistentOverCurrent @ 0x1C007290C (HUBMISC_GenerateUserNotificationForPersistentOverCurrent.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x1C002CCF8 (HUBMISC_StripSymbolicNamePrefix.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WMI_FireNotification(__int64 a1, unsigned __int16 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // [rsp+28h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v12[6]; // [rsp+38h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 2536);
  v11 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3016))(WdfDriverGlobals, v4);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2968))(
          WdfDriverGlobals,
          v7,
          1LL) )
    return WPP_RECORDER_SF_(
             *(_QWORD *)(a1 + 2520),
             2u,
             3u,
             0x13u,
             (__int64)&WPP_1362546fee9e322e2fa74dbd802c5a46_Traceguids);
  HUBMISC_StripSymbolicNamePrefix((unsigned __int16 *)(a1 + 2544), &v11);
  v12[5] = v11 + 6;
  v9 = *(_QWORD *)(a1 + 2536);
  v12[1] = a2;
  v12[0] = a3;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _DWORD *))(WdfFunctions_01015 + 3024))(
             WdfDriverGlobals,
             v9,
             24LL,
             v12);
  if ( (int)result < 0 )
  {
    v10 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1 + 2520),
             2u,
             3u,
             0x14u,
             (__int64)&WPP_1362546fee9e322e2fa74dbd802c5a46_Traceguids,
             v10);
  }
  return result;
}
