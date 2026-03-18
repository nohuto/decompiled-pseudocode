/*
 * XREFs of WMI_FireNotification @ 0x1C0081BA0
 * Callers:
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C001497C (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0017A20 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtOutOfBandwidthTimer @ 0x1C0019980 (HUBPDO_EvtOutOfBandwidthTimer.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C0074BD0 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C0076434 (HUBPDO_CreatePdoInternal.c)
 *     HUBMISC_GenerateUserNotificationForPersistentOverCurrent @ 0x1C0079834 (HUBMISC_GenerateUserNotificationForPersistentOverCurrent.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x1C002F4C4 (HUBMISC_StripSymbolicNamePrefix.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall WMI_FireNotification(__int64 a1, unsigned __int16 a2, int a3)
{
  __int64 v5; // rdx
  __int64 v7; // rax
  _UNKNOWN **result; // rax
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+48h] [rbp-30h]

  v12 = 0LL;
  v5 = *(_QWORD *)(a1 + 2536);
  v13[0] = 0LL;
  v13[1] = 0LL;
  v14 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3016))(WdfDriverGlobals, v5);
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2968))(
         WdfDriverGlobals,
         v7,
         1LL) )
  {
    HUBMISC_StripSymbolicNamePrefix((unsigned __int16 *)(a1 + 2544), &v12);
    HIDWORD(v14) = v12 + 6;
    v9 = *(_QWORD *)(a1 + 2536);
    HIDWORD(v13[0]) = a2;
    LODWORD(v13[0]) = a3;
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD *))(WdfFunctions_01015 + 3024))(
                            WdfDriverGlobals,
                            v9,
                            24LL,
                            v13);
    v10 = (int)result;
    if ( (int)result < 0 )
    {
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = v10;
        return (_UNKNOWN **)WPP_RECORDER_SF_d(
                              *(_QWORD *)(a1 + 2520),
                              2u,
                              3u,
                              0x14u,
                              (__int64)&WPP_1362546fee9e322e2fa74dbd802c5a46_Traceguids,
                              v11);
      }
    }
  }
  else
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            *(_QWORD *)(a1 + 2520),
                            2u,
                            3u,
                            0x13u,
                            (__int64)&WPP_1362546fee9e322e2fa74dbd802c5a46_Traceguids);
  }
  return result;
}
